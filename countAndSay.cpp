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
    string gao(string s){
		string ret = "";
		char now = s[0];
		int cnt = 1, i = 0;
		for (i = 1; i < s.length(); i++) {
			if (s[i] == s[i-1]){
				cnt++;
			}
			else {
				ret = ret + ((char)(cnt+'0')) + now;
				now = s[i];
				cnt = 1;
			}
		}

		ret = ret + ((char)(cnt+'0')) + now;
		return ret;
    }

    string countAndSay(int n) {
        int i;
		if (n == 1) return "1";
		if (n == 2) return "11";
		if (n == 3) return "21";
        string ts, s = "21";
        ts = s;
        for(i = 4; i <= n; i++){
            ts = gao(s);
            s = ts;
        }
        return s;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}