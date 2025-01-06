int trap(int *height, int heightSize)
{
    int water = 0;
    int left[heightSize], right[heightSize];
    if (heightSize == 0)
        return 0;
    left[0] = height[0];
    for (int i = 1; i < heightSize; i++)
    {
        left[i] = fmax(left[i - 1], height[i]);
    }
    right[heightSize - 1] = height[heightSize - 1];
    for (int i = heightSize - 2; i >= 0; i--)
    {
        right[i] = fmax(right[i + 1], height[i]);
    }
    for (int i = 0; i < heightSize; i++)
    {
        water += fmin(left[i], right[i]) - height[i];
    }
    return water;
}