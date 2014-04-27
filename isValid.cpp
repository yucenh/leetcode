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
    bool isValid(string s) {
        stack<char> stk;
        int i;
        for(i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{' )
                stk.push(s[i]);
            else{
				if (stk.empty()) {
					return false;
				}
                char top = stk.top();
                stk.pop();
				if (top == '(' ){
					if (s[i] != ')') 
						return false;
				}
				if (top == '[' ){
					if (s[i] != ']') 
						return false;
				}
				if (top == '{' ){
					if (s[i] != '}') 
						return false;
				}
            }
        }
        if (stk.empty()) return true;
        else return false;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}