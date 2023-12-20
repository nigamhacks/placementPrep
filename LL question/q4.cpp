//leaf similar check leetcode


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
    void preorder(TreeNode *root, vector<int> &leafNodes){

    if(root==NULL){
        return;
    }
    //it pushes the value to the vector when it finds the leafnode 
    if(root && root->left==NULL && root->right==NULL){
        leafNodes.push_back(root->val);

    }
   
    
    preorder(root->left,leafNodes);
    preorder(root->right,leafNodes);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafNode1, leafNode2;
        preorder(root1,leafNode1);
        preorder(root2,leafNode2);

        if(leafNode1==leafNode2){
            return true;
        }
        return false;
    }
};