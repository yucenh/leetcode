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
    vector<vector<int> > generate(int rowIndex) {
		vector< vector<int> > V;
        vector<int> v;
        v.push_back(1);
        V.push_back(v);
		if (rowIndex == 1) {
			return V;
		}
		v.push_back(1);
        V.push_back(v);
		if (rowIndex == 2) {
			return V;
		}
        vector<int> v2 = v;
        int i, j ;        
        for(i = 0; i < rowIndex-2; i++){
            v = v2;
            v2.clear();
            v2.push_back(1);
            for(j = 0; j < i+1; j++){
                v2.push_back(v[j]+v[j+1]);  
            }
            v2.push_back(1);
		    V.push_back(v2);
        }
        return V;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}