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
    int removeDuplicates(int A[], int n) {
        if (n == 0) return 0;
        int cnt = 1, now = A[0];
        int i;
        for(i = 1; i < n; i++){
            if (now != A[i]){
                cnt++;
                now = A[i];
            }
        }
        int j = 1;
        now = A[0];
        i = 1;
        for (j = 1; j < n; j++){
            if (now != A[j]){

                A[i] = A[j];
                i++;
                now = A[j];
            }
        }
        return cnt;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}