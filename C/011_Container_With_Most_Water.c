int maxArea(int *height, int heightSize)
{
    int left = 0;
    int right = heightSize - 1;
    int maxArea = 0;
    while (left < right)
    {
        int currentArea = fmin(height[left], height[right]) * (right - left);
        maxArea = fmax(maxArea, currentArea);
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxArea;
}
