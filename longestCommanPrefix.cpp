#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        string ans = "";
        // for traversing the all character of first string
        for (int i = 0; i < strs[0].length(); i++)
        {
            char ch = strs[0][i];
            bool match = true;

            // for comparing with remaining string
            for (int j = 1; j < n; j++)
            {
                if (strs[j].size() < i || ch != strs[j][i])
                {
                    // not match
                    match = false;
                    break;
                }
            }
            if (match == false)
            {
                break;
            }
            else
            {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
int main()
{
    solution soln;
    vector<string> str = {"flow", "flower", "flowing", "floral"};

    cout << "Longest Comman Prefix: " << soln.longestCommonPrefix(str);
}