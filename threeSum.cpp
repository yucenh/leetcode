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
    vector< vector<int> > ans;

    vector<vector<int> > threeSum(vector<int> &num) {
        ans.clear();
		if (num.size() < 3)  return ans;
        int i, j, k;
        sort(num.begin(),num.end());
        for(i = 0; i < num.size(); i++){
			if (i > 0 && num[i] == num[i-1]) continue;
			int l = i + 1, r = num.size() - 1;
			
			while (l < r) {
			    if (l > i+1 && num[l] == num[l-1]) {
			        l++;
			        continue;
			    }
			    if (r < num.size()-1 && num[r] == num[r+1]){
			        r--;
			        continue;
			    }
				if (-(num[i]+num[l]) < num[r]) {
					r--;
				}
				else if (-(num[i]+num[l]) > num[r]) {
					l++;
				}
				else {
					vector<int> v;
					v.push_back(num[i]);
					v.push_back(num[l]);
					v.push_back(num[r]);
			
					ans.push_back(v);
					
					l++;
					r--;
				}
			}
        }
        return ans;
    }

};

int main(int argc, char *argv[]) {
	
	return 0;
}