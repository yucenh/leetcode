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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> > res;
		queue<TreeNode *> q;
		queue<TreeNode *> q2;
		if (root != NULL) q.push(root);
		while (!q.empty() || !q2.empty()) {
			vector<int> v;
			if (!q.empty()) {
				while (!q.empty()) {
					TreeNode *top = q.front();
					v.push_back(top->val);
					if (top->left)	q2.push(top->left);
					if (top->right)  q2.push(top->right);
					q.pop();
				}
			}
			else {
				while (!q2.empty()) {
					TreeNode *top = q2.front();
					v.push_back(top->val);
					if (top->left) 	 q.push(top->left);
					if (top->right)	 q.push(top->right);
					q2.pop();
				}
			}
			res.push_back(v);
		}
		int i,j;
		for (i = 0; i < res.size(); i++) {
			if (i % 2 == 1)
			for (j = 0; j < res[i].size()/2; j++) {
				swap(res[i][j],res[i][res[i].size()-j-1]);
			}
		}
        return res;
    }
};

int main(int argc, char *argv[]) {
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->right->right = new TreeNode(5);
	vector<vector<int> > v = zigzagLevelOrder(root);
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << "   " ; 
		}
		cout << endl;
	}
	return 0;
}