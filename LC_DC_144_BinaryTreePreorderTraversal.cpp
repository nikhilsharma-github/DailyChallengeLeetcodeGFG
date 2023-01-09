/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        stack<TreeNode*> st;  
        vector<int> pot;
        if(root==NULL)
        return pot;
        
        while(root!=NULL||st.size()!=0){
            if(root!=NULL){
                pot.push_back(root->val);
                if(root->right!=NULL){
                    st.push(root->right);
                }
                root=root->left;
            }
            else{
                // pot.push_back(st.top()->val);
                root=st.top();
                st.pop();
            }
        }

        return pot;

    }
};