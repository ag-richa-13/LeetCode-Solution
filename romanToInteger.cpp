class Solution {
public:
int value(char st) {
        if(st == 'I')
        {
            return 1;
        }
        if (st == 'V')
        {
            return 5;
        }
        if (st == 'X')
        {
            return 10;
        }
        if (st == 'L')
        {
            return 50;
        }if (st == 'C')
        {
            return 100;
        }if (st == 'D')
        {
            return 500;
        }if (st == 'M')
        {
            return 1000;
        }
    return -1;
}
    int romanToInt(string s) {
        int n = s.size();

        int res = 0;
        
        for(int i = 0; i < n; i++)
        {
            int s1 = value(s[i]);
            if(i + 1 < n){
                int s2 = value(s[i+1]);
              if(s1 == s2 || s1 > s2)
            {
                res = res + s1;  
            }
              else
            {
                res = res + s2 - s1;
                i++;
            }
            }
            else {
                res = res + s1;
            }
            
        }
        return res;
    }
};