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
    int sqrt(long long x) {
        long long l = 0, r = 1<<16, m, tm;
        while( l < r ){
            m = (l + r) / 2;
			if (tm == m)  break;
            tm = m;
			if (x > m*m)  l = m;
            else if (x < m*m)  r = m;
            else break;
        }
        return m;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}