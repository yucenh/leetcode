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
    bool isPalindrome(string s) {
        string st;
        int i;
        for(i = 0; i < s.size(); i++)
            if( (s[i] >= 'A'&& s[i] <= 'Z') ||(s[i] >= 'a'&& s[i] <= 'z') || (s[i] >='0'&&s[i]<='9'))
                st += tolower(s[i]);
        
        for(i = 0; i < st.size()/2; i++){
            if (st[i] != st[st.size()-i-1])
                return false;
        }
        return true;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}