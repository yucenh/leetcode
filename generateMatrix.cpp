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
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > ret;
        int i, j, a[505][505], flag = 0;
        int lx = 1, ly = 1, rx = n, ry = n;
        memset(a, 0, sizeof a);
        while(1){
            for(i = ly; i <= ry; i++){
                a[lx][i] = ++flag;
		//		cout << "a["<<lx<<"]["<<i<<"]="<<a[lx][i] << endl;
            }                
			lx++; 
			if (flag == n*n) break;
            for(i = lx; i <= rx; i++){
                a[i][ry] = ++flag;
            }                
			ry--;
			
			if (flag == n*n) break;
            for(i = ry; i >= ly; i--){
                a[rx][i] = ++flag;
            }
			rx--;
			            
			if (flag == n*n) break;
            for(i = rx; i >= lx; i--){
                a[i][ly] = ++flag;
            }                
			ly++;
			if (flag == n*n) break;
        }

        
        for(i = 1; i <= n; i++){
            vector<int> v;
            for(j = 1; j <= n; j++){
                v.push_back(a[i][j]);
            }
            ret.push_back(v);
        }
        return ret;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}