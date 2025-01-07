class Solution
{
public:
    int findMin(vector<int> &nums)
    {

        // O(n log n)
        //  sort(nums.begin(),nums.end());
        //  return nums[0];

        // O(log n)
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while (start < end)
        {
            mid = start + (end - start) / 2;

            if (nums[mid] < nums[end])
            {
                end = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        return nums[start];
    }
};