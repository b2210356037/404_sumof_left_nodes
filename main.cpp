#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")


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

    int func(TreeNode* root, bool isLeft){
        if(root == nullptr) return 0;
        if(root->left == nullptr && root->right == nullptr)  return isLeft ? root->val : 0;
        return func(root->left, true) + func(root->right, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        return func(root, 0);
    }
};

int main() {
    Solution s;

    return 0;
}
