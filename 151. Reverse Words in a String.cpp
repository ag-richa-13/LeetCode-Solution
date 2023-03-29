// 151. Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
    istringstream str(s);
    string ans,rev;
    vector<string>temp;
    while (str >> ans)
    {
       temp.push_back(ans);
    }
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        rev+=temp[i]+" ";
    }
    rev.pop_back();
    return rev;
    }
};

// Time Complexity = O(n);