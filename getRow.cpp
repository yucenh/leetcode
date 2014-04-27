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
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        v.push_back(1);
        rowIndex++;
        if (rowIndex == 1) return v;
        v.push_back(1);
        if (rowIndex == 2) return v;
        vector<int> v2;
        int i, j ;
        for(i = 0; i < rowIndex-2; i++){
            v = v2;
            v2.clear();
            v2.push_back(1);
            for(j = 0; j < i+1; j++){
                v2.push_back(v[j]+v[j+1]);  
            }
            v2.push_back(1);
        }
        return v2;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}