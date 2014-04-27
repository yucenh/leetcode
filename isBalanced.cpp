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
    bool IsAVL(TreeNode *root, int &height){
        if (root == NULL) {
            height = 0;
            return true;
        }
        int lefth, righth;
        bool leftresult =  IsAVL(root->left, lefth);
        bool rightresult = IsAVL(root->right, righth);
        if (abs(lefth - righth) <= 1 && leftresult && rightresult){
            height = max(lefth,righth) + 1;
            return true;
        }
        else{
            height = max(lefth,righth) + 1;
            return false;
        }
    }
    bool isBalanced(TreeNode *root) {
        int h;
        return IsAVL(root, h);
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}