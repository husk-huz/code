#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution 
{
public:
    double myPow(double x, int n) 
    {
        double res = 0;
        if(n < 0)
        {
            n = -(n+1);
            x = 1/x;
            return x*positivePower(x, n);
        }
        
        res = positivePower(x, n);

        return res;
    }

    double positivePower(double x, int n)
    {
        if(n == 0)
        {
            return 1;
        }
        stack<int> power_stack;
        while(n)
        {
            if(n%2)
            {
                power_stack.push(1);
            }
            else 
            {
                power_stack.push(0);
            }
            n /= 2;
        }
        double res = 1;
        while(!power_stack.empty())
        {
            res *= res;
            if(power_stack.top())
            {
                res *= x;
            }
            power_stack.pop();
        }
        return res;
    }
};


int main()
{
    Solution s;
    // cout << s.positivePower(3, 5) << endl;
    cout << s.myPow(1.9, 31) << endl;

    return 0;
}