// Link: https://leetcode.com/problems/design-a-number-container-system/description/

class NumberContainers
{
public:
    std::unordered_map<int, int> indexToNumber;   // Stores index -> number mapping
    std::map<int, std::set<int>> numberToIndices; // Stores number -> sorted indices

    NumberContainers() {}

    void change(int index, int number)
    {
        // If index already has a number, remove it from the previous set
        if (indexToNumber.count(index))
        {
            int oldNumber = indexToNumber[index];
            numberToIndices[oldNumber].erase(index);
            if (numberToIndices[oldNumber].empty())
            {
                numberToIndices.erase(oldNumber);
            }
        }

        // Update the index to new number
        indexToNumber[index] = number;
        numberToIndices[number].insert(index);
    }

    int find(int number)
    {
        // If the number exists in the map and has indices, return the smallest index
        if (numberToIndices.count(number) && !numberToIndices[number].empty())
        {
            return *numberToIndices[number].begin();
        }
        return -1; // Number not found
    }
};
