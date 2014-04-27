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
    int ABS(int a){
        return a > 0 ? a : -a; 
    }
    int threeSumClosest(vector<int> &num, int target) {
        int i, cloest = 0, MIN = 1<<30;
        sort(num.begin(),num.end());
        
        for(i = 0; i < num.size(); i++){
			int l = i + 1, r = num.size() - 1, t;
			while (l < r) {
			    t = num[i]+num[l]+num[r];
			    if (ABS(t-target) < MIN) {
			        MIN = ABS(t-target);
			        cloest = t;
			    }

				if (target < t) {
					r--;
				}
				else if (target > t) {
					l++;
				}
				else {
				    cloest = t;
				    return t;
				}
			}
        }
        return cloest;
    }

};

int main(int argc, char *argv[]) {
	
	return 0;
}