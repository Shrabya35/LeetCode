class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> intersect;
        for (int x : nums1)
        {
            for (int y : nums2)
            {
                if (y == x && find(intersect.begin(), intersect.end(), y) == intersect.end())
                {
                    intersect.push_back(y);
                }
            }
        }
        return intersect;
    }
};