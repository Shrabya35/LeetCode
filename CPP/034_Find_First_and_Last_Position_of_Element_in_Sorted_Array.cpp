class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> output = {-1, -1};
        bool started = false;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target && !started)
            {
                output[0] = i;
                started = true;
            }
            if (started && nums[i] != target)
            {
                output[1] = i - 1;
                break;
            }
        }
        if (started && output[1] == -1)
        {
            output[1] = nums.size() - 1;
        }
        return output;
    }
};