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
    int s;
    vector<vector<int> > res;
    void dfs(vector<int> v, TreeNode *root, int sum){
        if (root->left == NULL && root->right == NULL ) {    
            if (root->val + sum == s) {
                v.push_back(root->val);
                res.push_back(v);
            }
            return;
        }
        else{
            if (root->left != NULL) {
                vector<int> copy = v;
                copy.push_back(root->val);
                dfs(copy, root->left, sum + root->val);
            }
            if (root->right != NULL) {
                vector<int> copy = v;
                copy.push_back(root->val);
                dfs(copy, root->right, sum + root->val);
            }
        }
        return;
    }
    
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        s = sum;
        res.clear();
        if (root == NULL) return res;
        vector<int> v;
        dfs(v, root, 0);
        return res;        
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}