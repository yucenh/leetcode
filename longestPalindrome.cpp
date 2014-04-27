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
    string longestPalindrome(string s) {
        int max = 1, i, j, l, r, lm = 0, rm = 0;
		char t[5];
		t[0] = s[0];
		t[1] = '\0';

        string mp = t;
		
        for(i = 1; i < s.size(); i++){
		// 	cout << i << ": "<< endl;
            l = i, r = i;
            while(1){
    	        if (l-1 >= 0 && r+1 < s.size()){
                    l--;
                    r++;
                }
				else break;
			//	cout << l << " " << r << endl;	
				if (s[l] != s[r]) {
					l++;
					r--;
					break;
				}
            }

			if (max < r - l + 1) {
				max = r - l + 1;
				lm = l;
				rm = r;
			}			

			l = i-1, r = i;
			if (s[l] == s[r]) {
				while (1) {
					if (l - 1 >= 0 && r + 1 < s.size()) {
						l--;
						r++;
					}
					else break;
					
			//		cout << l << " " << r << endl;	
					if (s[l] != s[r]) {
						l++;
						r--;
						break;
					}
				}
			//	cout << l << " --------- " << r << endl;
				
				if (max < r - l + 1) {
					max = r - l + 1;
					lm = l;
					rm = r;
				}				
			}

        }
		mp = "";
		for (i = lm; i <= rm; i++) {
			mp = mp + s[i];
		}
        return mp;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}