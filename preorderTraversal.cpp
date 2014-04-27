#include <iostream>
#include <stack>
#include <queue>
#include <bitset>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <functional>
#include <utility>
#include <sstream>
#include <iomanip>
#include <ctime>

using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode *root, vector<int> &ans){
        if (root != NULL){
            ans.push_back(root->val);
            preorder(root->left, ans);
            preorder(root->right, ans);
        }
        return;
    }
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}