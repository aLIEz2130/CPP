#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int mid = 0;
		int head = 0;
		int last = nums.size() - 1;
		while (head<last)
		{
			mid = (last - head) / 2 + head;
			if (target>nums[mid])
			{
				head = mid + 1;
			}
			else if (target<nums[mid])
			{
				last = mid - 1;
			}
			else return mid;
		}
		if (target <= nums[head])//����λ���ڿ�ͷ�����
			return head;
		return head + 1;//����λ���ڽ�β�����
	}
};
