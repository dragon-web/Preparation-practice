#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            queue<TreeNode*> Q;
            vector<vector<int>> res;
            Q.push(root);
            size_t levelSize = Q.size();
            while(!Q.empty())
            {
                vector<int> vec;
                for(size_t i = 0;i < levelSize;++i)
                {
                    TreeNode* p = Q.front();
                    vec.push_back(p->val);
                    if(p->left)
                    {
                        Q.push(p->left);
                    }
                    if(p->right)
                    {
                        Q.push(p->right);
                    }
                    Q.pop();
                }
                res.push_back(vec);
            }
            return res;
        }

};
