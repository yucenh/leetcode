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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > res;
        vector<int> v;
        queue<TreeNode* > q1, q2;
        if (root != NULL) q1.push(root);
        v.clear();
        while(!q1.empty() || !q2.empty()){
            while(!q1.empty()){
                TreeNode *top = q1.front();
                q1.pop();
                v.push_back(top->val);
                if (top->left != NULL) q2.push(top->left);
                if (top->right != NULL) q2.push(top->right);
            }
            if (v.size() != 0){
                res.push_back(v);
                v.clear();
            }
            while(!q2.empty()){
                TreeNode *top = q2.front();
                q2.pop();
                v.push_back(top->val);
                if (top->left != NULL) q1.push(top->left);
                if (top->right != NULL) q1.push(top->right);
            }
            if (v.size() != 0){
                res.push_back(v);
                v.clear();
            }
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}