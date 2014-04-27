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
    string convert(string s, int nRows) {
        if (nRows == 1 || nRows == 0 || nRows >= s.size()) return s;
        int MAX[10000] = {0};
        const int x = nRows + 10, y = s.size() * 3 / nRows;
		char **st;
		st = new char *[x];
		for (int i = 0; i < x; i++)
			st[i] = new char[y];
        int i = 0, j, k = 0;
		while (i < s.size())
		{
			for (j = 0; j < nRows && i < s.size(); j++)
			{
				st[j][MAX[j]++] = s[i++];
			}
			for (j = nRows - 2; j > 0 && i < s.size(); j--)
			{
				st[j][MAX[j]++] = s[i++];
			}
		}
		string ret = "";
		for (i = 0; i < nRows; i++)
			for (j = 0; j < MAX[i]; j++)
					ret += st[i][j];
		for (i = 0; i < x; i++)
			delete [] st[i];
		delete [] st;
		return ret;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}