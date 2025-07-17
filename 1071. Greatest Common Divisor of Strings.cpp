// 2つの文字列 s と t に対して、「t が s を割る（divide）」とは、
// **s = t + t + t + ... + t（t が1回以上連結されて s になる）**場合を指します。
// 2つの文字列 str1 と str2 が与えられたとき、
// str1 と str2 の両方を割ることができる、最も長い文字列 x を返してください。

// まずは、2つの文字列を数字にして最大公約数をだす

#include <string>
#include <numeric> // for std::gcd
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        // 繰り返し構造が違うなら空文字
        if (str1 + str2 != str2 + str1)
            return "";

        // 最大公約数を求める
        int gcd_len = gcd(str1.size(), str2.size());

        // その長さ分だけ取り出す
        return str1.substr(0, gcd_len);
    }

private:
    // ユークリッドの互除法
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
};
