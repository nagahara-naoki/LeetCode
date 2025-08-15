#include <string>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string r;
        int c;
        while (c > 0)
        {
            c--; // 1引いて0基準にする
            int remain = c % 26;
            char c = 'A' + remain;
            r = c + r; // 文字を先頭に追加
            c /= 26;
        }
        return r;
    }
};
