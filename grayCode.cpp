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

/*
0	  1		2	 3	  4    5	6	  7
0000 0001 0011 0010 0110 0111 0101 0100
8	  9		10	 11	  12   13	14	  15
1100 1101 1111 1110 1010 1011 1001 1000

觀察奇數項的變化時，我們發現無論它是第幾個Gray Code，永遠只改變最右邊的位元，如果是1就改為0，如果是0就改為1。

觀察偶數項的變化時，我們發現所改變的位元，是由右邊算來第一個1的左邊位元。

*/

class Solution {
public:
    vector<int> grayCode(int n) {
        n = 1 << n;
        int i;
        int num = 0;
        vector<int> v;
        v.push_back(num);
        for (i = 1; i < n; i++){
            if (i & 1) {
                if (num & 1) num = ((num >> 1) << 1);
                else num = ((num >> 1) << 1) + 1;
            }
            else{
                int j = 1;
                // find right most 1'
                while(1){
                    int t = num;
                    if ( ((t >> j) << j) == num) j++;
                    else break;
                }
                // test j pos 
                if ((1 << j) & num){
                    // num j+1 pos is 1'
                    num = num & (~(1 << j));
                }
                else {
                    num = num | (1 << j);
                }
            }
            v.push_back(num);
        }
        return v;
    }
};

int main(int argc, char *argv[]) {
	int n = 5;
	vector<int> v = grayCode(4);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}