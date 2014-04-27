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
    int flag = 0;
    int s;
    void dfs(TreeNode *root, int sum){
        if (root->left == NULL && root->right == NULL ) {    
            if (root->val + sum == s) flag = 1;
            return;
        }
        else{
            if (root->left != NULL)
            dfs(root->left, sum + root->val);
            if (root->right != NULL)
            dfs(root->right, sum + root->val);
        }
        return;
    }
    bool hasPathSum(TreeNode *root, int sum) {
        flag = 0;
        s = sum;
        if (root == NULL) return false;
        dfs(root, 0);
        return flag;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}