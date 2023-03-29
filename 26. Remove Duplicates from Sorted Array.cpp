// 26. Remove Duplicates from Sorted Array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 0; i < n; i++){
            if(nums[j] != nums[i]){
                nums[++j] = nums[i];
            }
        }
        return j+1;
    }
};

int main(){
    Solution soln;
    vector<int> nums = {1, 1, 3, 3, 7, 7, 8, 8, 9, 9, 10, 10};

    cout<<"After removing duplicates: "<<soln.removeDuplicates(nums);

    return 0;
}