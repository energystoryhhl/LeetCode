#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> sum;
		//vector<int>::iterator it;
		sum.insert(sum.end(), nums1.begin(), nums1.end());
		sum.insert(sum.end(), nums2.begin(), nums2.end());
		cout << sum.size();
		return 0;
	}
};

int main()
{
	vector<int> nums1(1, 10);
	vector<int> nums2(1, 10);
	Solution sol;
	sol.findMedianSortedArrays(nums1, nums2);
	while (1);
	return 0;
}
