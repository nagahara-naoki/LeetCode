// ある文字列が「回文（palindrome）」であるとは、
// すべての大文字を小文字に変換し、英数字以外の文字をすべて取り除いたあとに、
// 前から読んでも後ろから読んでも同じになる場合を指します。

// ※「英数字（alphanumeric characters）」とは、アルファベットと数字を含みます。

// 文字列 s が与えられたとき、
// s が回文であれば true を、そうでなければ false を返してください。
// 英字または数字かどうか を判定（isalnum の代用）
// 大文字を小文字に変換（tolower の代用）
#include <string>
#include <cctype> // isalnum, isspace, tolower
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string e; // 成形した文字列を入れる
        string y; // 回文チェックよう、e,を判定させて入れる

        for (char c : s)
        {
            if (std::isalnum(c) && !std::isspace(c))
            {
                e += std::tolower(c);
            }
        }

        for (int i = e.size() - 1; i >= 0; i--)
        {
            y += e[i];
        }

        return e == y;
    }
};
