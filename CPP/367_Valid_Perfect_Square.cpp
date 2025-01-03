class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num < 2)
            return true;

        int left = 2, right = num / 2;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long midSquared = mid * mid;
            if (midSquared == num)
            {
                return true;
            }
            else if (midSquared < num)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return false;
    }
};
