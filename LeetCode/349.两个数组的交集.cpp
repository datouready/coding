//给定两个数组 nums1 和 nums2 ，返回 它们的交集 。
//输出结果中的每个元素一定是 唯一 的。
//我们可以 不考虑输出结果的顺序 。
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ret;
		std::vector<int>::iterator it1;
		vector<int>::iterator it2;
		for (it1 = nums1.begin(); it1 != nums1.end(); it1++)
		{
			for (it2 = nums2.begin(); it2 != nums2.end(); it2++)
			{
				if (*it1 == *it2)
				{
					vector<int>::iterator it3;
					for (it3 = ret.begin(); it3 != ret.end(); it3++)
					{
						if (*it1 == *it3)
						{
							break;
						}
					}
					if (it3 == ret.end())
					{
						ret.push_back(*it1);
					}
				}
			}
		}
		return ret;
	}
};
