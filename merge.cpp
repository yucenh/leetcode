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
    void merge(int A[], int m, int B[], int n) {
        int i, j;
        int copyA[m+1];
        for(i = 0; i < m; i++) copyA[i] = A[i];
        
        int idx = 0, pa = 0, pb = 0;
        for(i = 0; i < m+n && pa < m && pb < n; i++){
            if (copyA[pa] > B[pb]){
                A[idx++] = B[pb++];
            }
            else{
                A[idx++] = copyA[pa++];
            }
        }
        
        while(pa < m){
            A[idx++] = copyA[pa++];
        }
        while(pb < n){
            A[idx++] = B[pb++];
        }
    }	
};

int main(int argc, char *argv[]) {
	
	return 0;
}