class Solution {
public:
    
      bool ispal(string &res){
        int s = 0, e = res.length()-1;
        while(s < e){
            if(res[s] != res[e]){
                return false;
            }
            s++; e--;
        }
        return true;
    }
    bool isPalindrome(string s) {
       string res;
        int len= 0;
        while(len < s.length()){
            if((s[len] >= 65 && s[len] <= 90) || (s[len] >= 48 && s[len] <= 57) || (s[len] >= 97 && s[len] <= 122)){
                res.push_back(s[len]);
            }
            len++;
        }
        transform(res.begin(), res.end(), res.begin(), ::toupper);
        if(ispal(res)){
            return true;
        }
        return false;
    }  
    
};