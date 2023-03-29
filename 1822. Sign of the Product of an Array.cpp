// 1822. Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int> &nums)
    {
        int neg = 0;
   int i;
   for (i = 0; i < nums.size(); i++)
   {
      if(nums[i] < 0)
      {
          neg++;
      }
       if(nums[i] == 0)
           return 0;
    }
        if(neg % 2 == 0) return 1;
        else return -1;
    }
};