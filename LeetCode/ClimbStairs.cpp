#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int climbStairs(int n) 
    {
        if(n == 0)
        {
            return 0;
        }
        else if(n == 1)
        {
            return 1;
        }
        else if(n == 2)
        {
            return 2;
        }
        int* stair_buffer = new int[n+1];
        stair_buffer[0] = 0;
        stair_buffer[1] = 1;
        stair_buffer[2] = 2;
        for(int i=3; i<=n; i++)
        {
            stair_buffer[i] = stair_buffer[i-1] + stair_buffer[i-2];
        }
        int res = stair_buffer[n];
        delete[] stair_buffer;
        return res;
    }
};

int main()
{
    Solution s;
    int n = 6;
    cout << s.climbStairs(n) << endl;

    return 0;
}
