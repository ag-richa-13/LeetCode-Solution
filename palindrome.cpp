class Solution {
public:
    bool isPalindrome(int x) {
        
        
        int min = INT_MIN;
        int max = INT_MAX;
        int rem, temp;
        long rev = 0;
        temp = x;
        if(x==0)
        {
          return true;   
        }
           
        while(x > 0)
        {
            rem = x % 10;
            if(rev*10 >max || rev*10 < min)
            {
                return 0;
            }
            rev = rem + (rev * 10);
            x = x/10;
        }
         if(rev>max || rev<min)
         {
              return false;
         }
        if(temp == rev)
        {
            return true;
        }
        return false;
    }
};