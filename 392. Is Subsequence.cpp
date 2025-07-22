// 2つの文字列 s と t が与えられます。
// **s が t の部分列（subsequence）である**なら true を、
// そうでないなら false を返してください。

#include <string>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int c = 0; // sの現在位置
        for (int i = 0; i < t.size() && c < s.size(); i++)
        {
            if (t[i] == s[c])
            {
                c++; // 次の文字へ
            }
        }
        return c == s.size();
    }
};
