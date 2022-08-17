#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int buffer = 0;
        for(int nums_stp : nums)
        {
            buffer ^= nums_stp;
        }

        return buffer;
    }   
};

int main()
{
    vector<int> target = {4, 2, 1, 4, 2};
    Solution s;
    cout << s.singleNumber(target) << endl;
    return 0;
}