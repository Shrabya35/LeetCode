#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int reverse = 0;
        // x = 321
        while (x != 0)
        {
            reverse *= 10;
            reverse += x % 10;
            x /= 10;
        }
        return reverse;
    }
};
int main()
{
    Solution s;
    int x, result;
    cout << "enter a number";
    cin >> x;
    result = s.reverse(x);
    cout << "reverse of " << x << " is :" << result;
    return 0;
}