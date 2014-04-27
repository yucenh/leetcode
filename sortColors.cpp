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
    void sortColors(int A[], int n) {
        int a[3] = {0}, i, j;
        for (i = 0; i < n; i++){
            a[A[i]]++;
        }
        int k = 0;
        for(j = 0; j < 3; j++){
            for(i = 0; i < a[j]; i++){
                A[k++] = j;
            }
        }
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}