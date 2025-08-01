// 文字列 s が与えられたとき、母音だけを反転させた新しい文字列を返しなさい。
// 母音とは 'a', 'e', 'i', 'o', 'u' のことで、小文字・大文字の両方が含まれます。
// また、同じ母音が複数回出現する可能性があります。

#include <string>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        int l = 0;            // 左
        int r = s.size() - 1; // 右

        while (l < r)
        {

            // 左から母音が見つかるまで
            while (l < r && !m(s[l]))
            {
                l++;
            }
            // 右から母音が見つかるまで
            while (l < r && !m(s[r]))
            {
                r--;
            }

            char c = s[l]; // 左の母音を保持

            // ここで左右入れ替え
            s[l] = s[r];
            s[r] = c;

            l++;
            r--;
        }
        return s;
    }

    bool m(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
