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
    vector<int> plusOne(vector<int> &digits) {
        int i, flag = 1;
        for (i = digits.size() - 1; i >= 0; i--){
			if (i == digits.size()-1 || flag != 0) 
	            digits[i] = flag + digits[i];
			
            flag = digits[i]/10;
            digits[i] = digits[i]%10;
        }
        
        if (flag != 0) {
            digits.push_back(flag);
            for(i = 0; i < digits.size()-1; i++){
                digits[i+1] = digits[i];
            }
            digits[0] = flag;
        }
        return digits;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}