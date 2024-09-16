int singleNumber(int *nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }

    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        result ^= nums[i];
    }
    return result;
}
