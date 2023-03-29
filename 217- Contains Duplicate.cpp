// 217. Contains Duplicate

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n = nums.size();
        
       sort(nums.begin(), nums.end());
       for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
    }
};

int main(){
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};

    Solution soln;

    if(soln.containsDuplicate(nums)){
        cout<<"Yes, It contain duplucate.";
    }
    else{
        cout<<"No, It does not contain duplicate.";
    }

    return 0;
}