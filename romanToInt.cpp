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
    int romanToInt(string s) {
        string symbol[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  
        int value[13]=    {1000,900,500,400, 100, 90,  50, 40,  10, 9,   5,  4,   1}; 
        int num = 0, len = s.size(), i;
        int j = 0, k;
        for (i = 0; i < len; i++){
            if (s[i] == symbol[j][0]){
                if (symbol[j].size() == 1){
                    num += value[j];
                }
                else{
                    if (i+1 < len){
                        if (s[i+1] == symbol[j][1]){
                            num += value[j];
                            i++;
                        }
                        else{
                            j++;
                        }
                    }
                }
            }
            else{
                j++;
            }
        }
        return num;
    }
};
int main(int argc, char *argv[]) {
	
	return 0;
}