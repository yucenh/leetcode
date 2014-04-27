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
    int reverse(int x) {
        int f = 0;
        if (x < 0) f = 1 , x = -x;
        int ret = 0;
        while(x){
            ret = ret * 10 + x%10;
            x/=10;
        }
        if (f) ret = -ret;
        return ret;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}