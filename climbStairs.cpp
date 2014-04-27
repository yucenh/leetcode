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
    int climbStairs(int n) {
        int i;
        if (n == 0 || n == 1) return 1;
        int t, t1 = 1, t2 = 1;
        for (i = 1; i < n; i++){
            t = t1+t2;
            t1 = t2;
            t2 = t;
        }
        return t;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}