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
    int removeElement(int A[], int n, int elem) {
        int i, j, cnt = 0;
        vector<int> v;
        for(i = 0; i < n; i++){
            if (A[i] == elem){
                cnt++;
            }
            else{
                v.push_back(A[i]);
            }
        }
        for(i = 0; i < n - cnt; i++){
            A[i] = v[i];
        }
        return n - cnt;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}