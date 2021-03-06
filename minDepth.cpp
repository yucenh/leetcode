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
    int mindep = 1<<30;
    void dfs(TreeNode *root, int d){
        if (root->left == NULL && root->right == NULL){
            if (d+1 < mindep) mindep = d+1;
            return;
        }
        else{
            if (root->left != NULL) dfs(root->left, d+1);
            if (root->right != NULL) dfs(root->right, d+1);
        }
    }
    int minDepth(TreeNode *root) {
        mindep = 1<<30;
        if(root == NULL) return 0;
        dfs(root, 0);
        return mindep;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}