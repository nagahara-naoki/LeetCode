// 入力として文字列 s が与えられます。この文字列に含まれる単語の順序を逆にしてください。

// 単語とは、空白以外の文字が連続して並んでいる部分を指します。
// 文字列 s の中では、単語同士は1つ以上のスペースで区切られています。

// 出力としては、単語を逆順に並べて、単語同士を1つのスペースで連結した文字列を返してください。

// なお、s には先頭や末尾にスペースが含まれている場合や、単語の間に複数のスペースが入っている場合があります。
// 返す文字列には、単語の間に1つのスペースのみを使い、余分なスペース（先頭・末尾や連続するスペース）は含めないようにしてください。

#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> r;
        int i = 0;

        while (i < s.size())
        {
            // 空白をスキップ
            while (i < s.size() && s[i] == ' ')
                i++;

            int start = i;

            // 単語を読み取る
            while (i < s.size() && s[i] != ' ')
                i++;

            if (start < i)
            { // 単語が存在する場合のみ
                string t = s.substr(start, i - start);
                r.push_back(t);
            }
        }

        // 単語を逆順で連結
        string result;
        for (int j = r.size() - 1; j >= 0; --j)
        {
            result += r[j];
            if (j != 0)
                result += ' ';
        }

        return result;
    }
};
