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
    int jump(int A[], int n) {
        int maxreach = 0, step = 0, tmp = 0, i = 0;
        while(i < n){
            if (tmp >= n - 1) return step;
            while(i <= tmp){
                maxreach = max(maxreach, i + A[i]);
                i++;
            }
            step++;
            tmp = maxreach;
        }
        return 0;
    }
};  

int main(int argc, char *argv[]) {
	
	return 0;
}