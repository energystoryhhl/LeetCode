#include <iostream>
#include <string>
using namespace std;

class Solution 
{
public:
	int lengthOfLongestSubstring(string s) 
	{
		string tmp;
		int max = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (tmp.find(s[i]) != 4294967295)
				tmp.clear();
			tmp.push_back(s[i]);
			if(tmp.size() > max)
				max = tmp.size();
		}
		return max;
	}
};

int main()
{
	Solution sol;
	cout << sol.lengthOfLongestSubstring("abcabcbb") << endl;

	while (1);
	return 0;
}