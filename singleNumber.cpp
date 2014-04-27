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
    int singleNumber(int A[], int n) {
        for(int i = 1; i < n; i++){
            A[0] ^= A[i];
        }   
        return A[0];
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}