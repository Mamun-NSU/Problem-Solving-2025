// Link: https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/description/

using namespace std;

class Solution
{
public:
    long long countOfSubstrings(string word, int k)
    {
        int isVowel[128] = {};   // Marks vowels
        int vowelFreq[128] = {}; // Tracks vowel occurrences in window

        // Mark vowels
        isVowel['a'] = isVowel['e'] = isVowel['i'] = isVowel['o'] = isVowel['u'] = 1;

        long long countValidSubstrings = 0;
        int consonantCount = 0, distinctVowelCount = 0;
        int prefixCount = 0, left = 0;

        for (int right = 0; right < word.length(); right++)
        {
            char rightChar = word[right];

            // Expand window
            if (isVowel[rightChar])
            {
                if (++vowelFreq[rightChar] == 1)
                    distinctVowelCount++;
            }
            else
            {
                consonantCount++;
            }

            // Shrink window if there are too many consonants
            while (consonantCount > k)
            {
                char leftChar = word[left++];
                if (isVowel[leftChar])
                {
                    if (--vowelFreq[leftChar] == 0)
                        distinctVowelCount--;
                }
                else
                {
                    consonantCount--;
                }
                prefixCount = 0; // Reset extra valid prefixes
            }

            // Move left to maximize valid substrings
            while (distinctVowelCount == 5 && consonantCount == k &&
                   left < right && isVowel[word[left]] && vowelFreq[word[left]] > 1)
            {
                prefixCount++;
                vowelFreq[word[left++]]--;
            }

            // If the current window is valid, add all possible substrings
            if (distinctVowelCount == 5 && consonantCount == k)
            {
                countValidSubstrings += (1 + prefixCount);
            }
        }

        return countValidSubstrings;
    }
};
