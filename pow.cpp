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
    double pow(double x, long long n) {
        if (n < 0) return 1 / pow(x, -n);
        else if (n == 0) return 1;
        else if (n == 1) return x;
        else {
            double tmp = pow(x, n/2);
            if (n % 2 == 0) return tmp * tmp;
            else return tmp * tmp * x;
        }
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}