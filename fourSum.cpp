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
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        int i, j;
        sort(num.begin(),num.end());
        vector<vector<int> > res;
        for(i = 0; i < num.size(); i++){
            for(j = i+1; j < num.size() - 1; j++){
                int l = j + 1, r = num.size()-1;
                
                while(l < r){
                    int sum;
                    sum = num[i] + num[j] + num[l] + num[r];
                    if (sum > target){
                        r--;
                    }
                    else if (sum < target){
                        l++;
                    }
                    else{
                        vector<int> v;
                        v.push_back(num[i]);
                        v.push_back(num[j]);
                        v.push_back(num[l]);
                        v.push_back(num[r]);
                        res.push_back(v);
						break;
                    }
                }
            }
        }
        
        return res;
    }

};

int main(int argc, char *argv[]) {
	
	return 0;
}