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
	int toInt(string s){
		int rt;
		char p[100];
		strcpy(p,s.c_str());		
		sscanf(p,"%d",&rt);
		return rt;
	}
	int i;
	int notation(vector<string> &s){
		if (s[i].size() == 1) {
			if (s[i][0] == '+')  {
				i--;
				int a = notation(s);
				int b = notation(s);
				return a + b;
			}
			else if (s[i][0] == '-')	{
				i--;
				int a = notation(s);
				int b = notation(s);
				return b - a;
			}
			else if (s[i][0] == '*')	{
				i--;
				int a = notation(s);
				int b = notation(s);
				return a * b;
			}
			else if (s[i][0] == '/')	{
				i--;
				int a = notation(s);
				int b = notation(s);
				return b / a;
			}
			else return toInt(s[i--]);
		}
		return toInt(s[i--]);
	}

    int evalRPN(vector<string> &tokens) {
		i = tokens.size()-1;
		return notation(tokens);
    }
};

int main(int argc, char *argv[]) {
	vector<string> v;
	v.push_back("4");	v.push_back("13");	v.push_back("5");
	v.push_back("/");	v.push_back("+");
	cout << evalRPN(v) ;	
	return 0;
}