// 整数 x が与えられたとき、x が回文であれば真を、そうでなければ偽を返す。

#include <string>   // 文字列を扱うためのライブラリ
#include <iostream> // 標準入出力を使うためのライブラリ"

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x - x != 0)
            return false;

        std::string s = std::to_string(x);
        std::string m = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            m += s[i];
        }

        if (m == s)
        {
            return true;
        }
        return false;
    }
};
