#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> mapnums;
		for (int i = 0; i<nums.size(); i++)
		{
			map<int, int>::iterator iter = mapnums.find(target - nums[i]);
			if (iter != mapnums.end())
			{
				return vector<int>{iter->second, i};
			}
			mapnums.insert(pair<int, int>(nums[i], i));
		}
		return vector<int>{};

	}
};

void display(vector<int> nums) {
	for (int i = 0; i < nums.size(); ++i) {
		cout << nums[i] << endl;
	}

}


int main() {
	Solution slu;
	vector<int> nums = { 1, 2, 4, 6 };
	int target = 5;
	display(slu.twoSum(nums, target));
	system("pause");
}