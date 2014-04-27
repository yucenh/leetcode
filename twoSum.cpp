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

public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int a[] = new int[2];
        for (int i = 0; i < numbers.length; i++){
        	for (int j = i+1; j < numbers.length; j++) {
				if (numbers[i] + numbers[j] == target){
					a[0] = i+1;
					a[1] = j+1;
				}
			}
        }
        return a;
    }
}

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> copy = numbers;
        sort(numbers.begin(), numbers.end());
        vector<int> ans;
        for(int i = 0; i < numbers.size(); i++){
            int l = i+1, r = numbers.size() - 1;
            int f = 1;
            int v = target - numbers[i];
            while(l <= r){
                int m = (l + r) / 2;
                if (numbers[m] < v){
                    l = m + 1;
                }
                else if (numbers[m] > v){
                    r = m - 1;
                }
                else {
                    f = 0;
                    break;
                }
            }
            if (f == 0){
                int p1, p2;
                for(int ii = 0; ii < copy.size(); ii++ ){
                    if (numbers[i] == copy[ii]){
                        p1 = ii;
                        ans.push_back(p1+1);
                        break;
                    }
                }
                for(int ii = 0; ii < copy.size(); ii++){
                    if (v == copy[ii] && ii != p1){
                        p2 = ii;
                        ans.push_back(p2+1);
                        break;
                    }
                }
                sort(ans.begin(),ans.end());
                return ans;
            }
        }
    }

};

int main(int argc, char *argv[]) {
	
	return 0;
}