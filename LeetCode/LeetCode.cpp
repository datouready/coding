#ifndef __HEAD_H__
#define __HEAD_H__
#endif // !__HEAD_H__
#include"head.h"
using namespace std;




int main()
{
	Solution test;
	vector<int> a = {1,2,3,3,2,1,4,5,67,8,9,0};
	vector<int> b = {1,3,5,7,8,9,0};
	vector<int>ret = test.intersection(a,b);
	for (vector<int>::iterator it = ret.begin(); it != ret.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "hello ai" << endl;
	return 0;
}