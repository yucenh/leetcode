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

class Solution {
public:
    int longest(string s) {
        int i, j, k;
        int max = 0, cnt = 0;
        stack<char> stk;
        if (s[0] == '(') stk.push(s[0]);
        for(i = 1; i < s.size(); i++){
			if (s[i] == ')'){
				if (stk.empty()) {
					cnt = 0;
					continue;
				}
			    else {
				   	cnt += 2;
					stk.pop();
				}
			}
			else {
				stk.push(s[i]);
			}
			if (stk.empty()) {
				if (cnt > max) max = cnt;	
			}
		}
        return max;
    }

    string rev(string s){
	    int i;
		string ret = "";
		for (i = s.size()-1; i >= 0; i--) {
			if (s[i] == '(') {
				ret = ret + ')';
			}
			else ret = ret +'(';
		}
		return ret;
	}
	int longestValidParentheses(string s){
	    int left = longest(s);
	    int right = longest(rev(s));
	    return left > right ? left : right;
	}
};

int main(int argc, char *argv[]) {
	
	return 0;
}