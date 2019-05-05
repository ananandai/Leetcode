#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		map<char, int> mapRoman;
		mapRoman['I'] = 1;
		mapRoman['V'] = 5;
		mapRoman['X'] = 10;
		mapRoman['L'] = 50;
		mapRoman['C'] = 100;
		mapRoman['D'] = 500;
		mapRoman['M'] = 1000;


		int result = 0;
		for (int i = 0; i<s.size(); ) {
			if (s[i] == 'I') {
				if ((s[i + 1] == 'X') || (s[i + 1] == 'V'))
				{
					result = result + mapRoman[s[i + 1]] - mapRoman[s[i]];
					i = i + 2;
				}
				else
				{
					result = result + mapRoman[s[i]];
					i = i + 1;
				}
			}
			else if (s[i] == 'X') {
				if ((s[i + 1] == 'L') || (s[i + 1] == 'C'))
				{
					result = result + mapRoman[s[i + 1]] - mapRoman[s[i]];
					i = i + 2;
				}
				else
				{
					result = result + mapRoman[s[i]];
					i = i + 1;
				}
			}
			else if (s[i] == 'C') {
				if ((s[i + 1] == 'D') || (s[i + 1] == 'M'))
				{
					result = result + mapRoman[s[i + 1]] - mapRoman[s[i]];
					i = i + 2;
				}
				else
				{
					result = result + mapRoman[s[i]];
					i = i + 1;
				}
			}
			else
			{
				result = result + mapRoman[s[i]];
				i = i + 1;
			}
		}
		return result;
	}
};
