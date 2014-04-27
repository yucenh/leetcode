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
    int atoi(const char *str) {
        long long ret = 0;
        int flag = 0;
        while(*str == ' ') str++;
        
        if(*str == '-')  flag = 1, str++;
        else if(*str == '+') str++;

        while(*str != '\0'){
            if(*str >= '0' && *str <= '9'){
                ret = ret*10 + *str - '0';
                str++;
            }
            else break;
        }
        if(flag == 1) ret = -ret;
        if(ret <= -2147483648) ret = -2147483648;
        if(ret >= 2147483647) ret = 2147483647;
        return ret;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}