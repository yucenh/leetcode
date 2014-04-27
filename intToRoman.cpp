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
    string intToRoman(int num) {
        string str;  
        string symbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  
        int value[]=    {1000,900,500,400, 100, 90,  50, 40,  10, 9,   5,  4,   1}; 
        for(int i=0;num!=0;++i)
        {
            while(num>=value[i])
            {
                num-=value[i];
                str+=symbol[i];
            }
        }
        return str;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}