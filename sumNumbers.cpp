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
    int res;
    int toInt(string s){
        int res = 0;
        for (int i = 0; i < s.size(); i++){
            res = res * 10 + s[i] - '0';
        }
        return res;
    }
    void dfs(TreeNode *root, string sum){
        if (root->left == NULL && root->right == NULL){
            res += toInt(sum + (char)(root->val+'0'));
            return;
        }
        else{
            if (root->left != NULL){
                dfs(root->left, sum + (char)(root->val + '0'));
            }
            if (root->right != NULL){
                dfs(root->right, sum + (char)(root->val + '0'));
            }
        }
    }
    int sumNumbers(TreeNode *root) {
        res = 0;
        if (root == NULL) return 0;
        dfs(root, "");
        return res;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}