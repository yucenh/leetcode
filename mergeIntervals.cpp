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

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<int> nums;
    vector<Interval> res;
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        int i, j;
		nums.clear();
		res.clear();
		if (intervals.size() == 0) {
			res.push_back(newInterval);
			return res;
		}
		
		for (i = 0; i < intervals.size(); i++) {
			nums.push_back(intervals[i].start);			nums.push_back(intervals[i].end);
		}
		nums.push_back(newInterval.start);
		
		for (i = nums.size() - 2; i >= 0; i--){
			if (nums[i] > nums[i+1]) swap(nums[i],nums[i+1]);
			else break;
		}
		
		nums.push_back(newInterval.end);
		
		for (i = nums.size() - 2; i >= 0; i--){
			if (nums[i] > nums[i+1]) swap(nums[i],nums[i+1]);
			else break;
		}
		
		int newStartPos = -1, newEndPos = -1;
		for (i = 0; i < nums.size(); i++) {
			if (newInterval.start == nums[i] && newStartPos == -1) {
				newStartPos = i;
				break;
			}
		}
		i++;
		for (; i < nums.size(); i++) {
				if (newInterval.end == nums[i] && newEndPos == -1) {
				newEndPos = i;
				break;
			}
		}

//		for (i = 0; i < nums.size(); i++) {
//			cout << nums[i] << " " ;
//		}
//		cout << endl << newStartPos << " " << newEndPos << endl;
		// if newStartPos is odd, in other range, range from newStartPos-1 ...
		// if newStartPos is even, range from newStartPos
		// if newEndPos is even, range to newEndPos + 1
		// if newEndPos is odd, range to newEndPos
        Interval tmp;
		int f = 0;
		
		for (i = 0; i < nums.size() - 1 ;) {
//			cout << "i: " << i << endl; 
			if ( (i == newStartPos || i + 1 == newStartPos) && f == 0) {
//				cout << "in 1" << endl;
				if (newStartPos & 1) {
					tmp.start = nums[newStartPos - 1];
				}
				else {
					tmp.start = nums[newStartPos];
				}
				
				if (newEndPos & 1) {
					tmp.end = nums[newEndPos];
					i = newEndPos;
				}
				else {
					tmp.end = nums[newEndPos + 1];
					i = newEndPos + 1;
				}
				if (res.size() != 0) {
					if (res[res.size() - 1].end == tmp.start) {
						res[res.size() - 1].end = tmp.end;
					}
					else res.push_back(tmp);
				}
				else res.push_back(tmp);
				i++;
//				p(res);
			}
			else {
//				cout << "in 2" << endl;
				tmp.start = nums[i];
				tmp.end = nums[i+1];
				if (res.size() != 0) {
					if (res[res.size() - 1].end == tmp.start) {
						res[res.size() - 1].end = tmp.end;
					}
					else res.push_back(tmp);
				}
				else res.push_back(tmp);
				i += 2;
			}
		}
        return res;
    }
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> res;
        if (intervals.size() == 0) return res;
        res.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            res = insert(res, intervals[i]);
        }
        return res;
    }
};

int main(int argc, char *argv[]) {
	
	return 0;
}