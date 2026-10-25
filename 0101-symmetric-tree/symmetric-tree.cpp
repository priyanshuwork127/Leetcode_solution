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
bool image(TreeNode* rleft,TreeNode* rright){
    if(rleft==nullptr && rright==nullptr){
        return true;
    }
    if(rleft==nullptr || rright ==nullptr){
        return false;
    }
    if(rleft->val!=rright->val){
        return false;
    }
    return image(rleft->left,rright->right) && image(rleft->right,rright->left);
    
}
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        return image(root->left,root->right);
    }
};