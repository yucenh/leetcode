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
    int lengthOfLastWord(const char *s) {
        int space = 0, len = strlen(s), i;
        while (s[len-1] == ' ') len--;
        for (i = 0; i < len; i++){
            if (s[i] == ' ' ) space++;
        }
        int cnt = 0, ans = 0;
        for (i = 0; i < len; i++){
            if (space == cnt){
                ans++;
            }
            if (s[i] == ' ') cnt++;
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}