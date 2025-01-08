class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> output;
        int n = nums.size();
        if (n == 0)
            return output;
        if (n == 1)
            return nums;
        if (n == 2)
        {
            if (nums[0] == nums[1])
                return {nums[0]};
            return nums;
        }
        sort(nums.begin(), nums.end());
        int count = 1;
        for (int i = 1; i < n; ++i)
        {
            if (nums[i] == nums[i - 1])
            {
                count++;
            }
            else
            {
                if (count > n / 3)
                {
                    output.push_back(nums[i - 1]);
                }
                count = 1;
            }
        }
        if (count > n / 3)
        {
            output.push_back(nums[n - 1]);
        }
        return output;
    }
};
