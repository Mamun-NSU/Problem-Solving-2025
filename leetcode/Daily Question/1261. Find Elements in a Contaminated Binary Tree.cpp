// Link: https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description/

class FindElements {
    public:
        map<int,bool>m;
        FindElements(TreeNode* root) {
            queue<TreeNode*>q;
            
            m[0]=true;
            root->val=0;
            q.push(root);
            while(!q.empty()){
                auto front =q.front();
                m[front->val]=true;
                q.pop();
                if(front->left!=NULL){front->left->val=2*front->val+1;q.push(front->left);}
                if(front->right!=NULL){front->right->val=2*front->val+2;q.push(front->right);}
    
            }
            
        }
        
        bool find(int target) {
            if(m[target]) return true;
            return false;
            
        }
    };
    
     