// 2つの文字列 word1 と word2 が与えられます。
// word1 から始めて、文字を交互に追加することで文字列をマージしてください。
// どちらかの文字列がもう一方より長い場合は、余った文字をマージ後の文字列の末尾に追加してください。
// マージされた文字列を返してください。
// 長い方回す！！！！
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int s = word1.size() > word2.size() ? word1.size() : word2.size();
        string r;
        for (int i = 0; i < s; i++)
        {
            if (i < word1.size())
                r += word1[i];
            if (i < word2.size())
                r += word2[i];
        }
        std::cout << s;
        return r;
    }
};
