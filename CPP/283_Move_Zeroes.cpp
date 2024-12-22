class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int nonZeros = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[nonZeros] = nums[i];
                nonZeros++;
            }
        }
        for (int j = nonZeros; j < nums.size(); j++)
        {
            nums[j] = 0;
        }
    }
};