class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        int reversed = 0, remainder, original = x;

        while (x != 0)
        {
            remainder = x % 10;

            if (reversed > (INT_MAX / 10) || (reversed == INT_MAX / 10 && remainder > 7))
            {
                return false;
            }

            reversed = reversed * 10 + remainder;
            x /= 10;
        }

        return reversed == original;
    }
};