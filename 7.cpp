class Solution {
public:
	int reverse(int x) {
		if (x == INT_MIN)
			return 0;
		long int answer = 0;

		if (x >= 0)
		{
			while (x>0)
			{
				answer = answer * 10 + x % 10;
				x = x / 10;
			}

		}
		else

		{
			x = -x;

			while (x >0)
			{
				answer = answer * 10 + x % 10;
				x = x / 10;
			}
			answer = -answer;
		}
		if ((answer>INT_MAX) || (answer<INT_MIN))
			answer = 0;
		return answer;
	}
};