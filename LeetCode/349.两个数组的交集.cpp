//������������ nums1 �� nums2 ������ ���ǵĽ��� ��
//�������е�ÿ��Ԫ��һ���� Ψһ �ġ�
//���ǿ��� ��������������˳�� ��
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
