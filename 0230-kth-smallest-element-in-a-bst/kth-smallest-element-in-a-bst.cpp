class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            arr.push_back(curr->val);

            if(curr->left != nullptr)
                q.push(curr->left);

            if(curr->right != nullptr)
                q.push(curr->right);
        }

        sort(arr.begin(), arr.end());

        return arr[k-1];
    }
};