#include <iostream>
#include <list>
#include <vector>
#include <stdio.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>anwser;
        int i,j,size=nums.size();
        for( i=0;i<size;i++){
            for( j=i+1;j<size;j++){
                if(nums[i]+nums[j]==target){
                    goto endloop;
                }
            }
        }
        endloop:
        anwser.push_back(i);
        anwser.push_back(j);
        return anwser;
    }
};


int main()
{
	vector<int> test;
	vector<int>::iterator it;
	test.push_back(2);
	test.push_back(7);
	test.push_back(11);
	test.push_back(15);
	Solution solution;
	vector<int> ret = solution.twoSum(test, 9);
	for (it = ret.begin(); it != ret.end(); it++)
	{
		cout << *it << ' ';
	}

	getchar();
}
