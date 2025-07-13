#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if (st.size() == 0)
                {
                    return false;
                }
                char i = st.top();
                st.pop();
                if ((c == ')' and i == '(') or (c == ']' and i == '[') or (c == '}' and i == '{'))
                    continue;
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
