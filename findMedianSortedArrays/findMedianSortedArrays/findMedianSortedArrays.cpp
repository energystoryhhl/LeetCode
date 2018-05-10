#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> sum;
		double ret = 0;
		//vector<int>::iterator it;
		sum.insert(sum.end(), nums1.begin(), nums1.end());
		sum.insert(sum.end(), nums2.begin(), nums2.end());
		sort(sum.begin(), sum.end());
		cout << sum.size();
		if( (sum.size() % 2) == 0)
		{
			ret = (sum[(sum.size() / 2) -1] + sum[sum.size() / 2]) / 2.0 ;
		}
		else
		{
			ret = (double)sum[sum.size() / 2 ];
		}
		return ret;
	}
};

int main()
{
	vector<int> nums1;
	nums1.push_back(1);
	nums1.push_back(3);
	vector<int> nums2;
	nums2.push_back(2);
	//nums2.push_back(4);
	Solution sol;
	cout<<sol.findMedianSortedArrays(nums1, nums2);

	while (1);
	
	return 0;
}
