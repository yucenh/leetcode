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
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode *> q;
        vector<TreeLinkNode *> v;
        if (root) q.push(root);
        int i;
        while(!q.empty()){
            v.clear();
            while(!q.empty()){
                TreeLinkNode *top = q.front();
                q.pop();
                if (top->left)  v.push_back(top->left);
                if (top->right) v.push_back(top->right);
            }
            if (v.size() <= 1) break;
            for(i = 0; i < v.size() - 1; i++){
                v[i]->next = v[i+1];
            }
            for(i = 0; i < v.size(); i++){
                q.push(v[i]);
            }
        }
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}