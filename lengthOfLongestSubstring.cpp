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
    int lengthOfLongestSubstring(string s) {
        int i, j, k, h[300] = {0}, max = 0;
        for(i = 0; i < s.size(); i++){
            for (j = i; j < s.size(); j++){
                if (h[s[j]]) {
                    memset(h,0,sizeof h);
                    break;
                }
                else h[s[j]] = 1;
            }
			if (max < j - i) {
				max = j - i;
			}
        }
        return max;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}