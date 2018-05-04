#include <iostream>
#include <list>
#include <vector>
#include <stdio.h>
using namespace std;

class CFather
{
public:
	void show(int a)
	{
		cout << "father inta " << endl;
	}

	void show(int a, int b)
	{
		cout << "father int a, int b" << endl;
	}


};

class CSon : public CFather
{
public:
	void show2(int a,int b, int c)
	{
		cout << "CSon int a" << endl;
	}
};

class CFathertest
{
public:
	virtual void testvirtual() = 0;
};

class Csontest : public CFathertest
{
public:
	void testvirtual()
	{
		cout << "virtaul test!" << endl;
	}
};

class Csonson : public Csontest
{

};

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int>::iterator it;
		vector<int>::iterator it2;
		bool flag = false;
		int n = 0;
		int m = 0;
		for (it = nums.begin(); it != nums.end();)
		{
			flag = false;
			for (it2 = nums.begin(); it2 != nums.end();)
			{
				if (*it2 == *it && flag == false)
				{
					it2++;
					m++;
					flag = true;
					continue;
				}
				if (target == (*it + *it2))
				{
					vector<int> ret;
					//cout << n << m << endl;
					ret.push_back(n);
					ret.push_back(m);
					return  ret;
				}
				it2++;
				m++;
			}
			it++;
			n++;
			m = 0;
		}
		vector <int> ret(-1);
		return ret;
	}
};


int main()
{
	vector<int> test;
	vector<int>::iterator it;
	//for (int i = 0;  i < 10;i++)
	//{
	//	test.push_back(i);
	//}
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
