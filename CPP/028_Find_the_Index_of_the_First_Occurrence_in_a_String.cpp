class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.empty())
            return 0;
        if (needle.size() > haystack.size())
            return -1;

        for (int i = 0; i <= haystack.size() - needle.size(); i++)
        {
            int j = 0;
            while (j < needle.size() && haystack[i + j] == needle[j])
            {
                j++;
            }
            if (j == needle.size())
            {
                return i;
            }
        }

        return -1;
    }
};
