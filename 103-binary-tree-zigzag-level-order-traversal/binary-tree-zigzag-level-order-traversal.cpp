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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        int lvl = 0;

        while(!q.empty()){
            int lvlSize = q.size();
            vector<int> tmp;

            while(lvlSize--){
                TreeNode* t = q.front();
                q.pop();
                tmp.push_back(t->val);

                if(t->left != NULL){
                    q.push(t->left);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
            }
            if(lvl%2 == 0){
                res.push_back(tmp);
            }else{
                reverse(tmp.begin(),tmp.end());
                res.push_back(tmp);
            }
            lvl++;
        }
        return res;
    }
};