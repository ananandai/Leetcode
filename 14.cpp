#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string result = "";
		if (strs.size() == 0)
			return result;
		if (strs.size() == 1)
		{
			result = strs[0];
			return result;
		}
		int index = 0;
		int min_size = INT_MAX;
		for (int i = 0; i < strs.size() - 1; i++)
		{

			if (strs[i].size() == 0)
				return result;
			if (strs[i].size() <= min_size)
			{
				min_size = strs[i].size();
				index = i;
			}
		}
		int point = 0;
		bool pd = false;
		for (int j = 0; j < strs[index].size(); j++)
		{
			for (int l = 0; l < strs.size(); l++)
			{
				if (strs[l][j] != strs[index][j])
				{
					return strs[index].substr(0, j);
				}
			}
		}
		if (!pd)
		{
			point = strs[index].size();
		}
		result = strs[index].substr(0, point);
		return result;
	}
};