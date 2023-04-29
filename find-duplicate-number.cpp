#include <iostream>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] >= 2)
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}