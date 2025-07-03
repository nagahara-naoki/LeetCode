// Length of Last Word

// 文字と空白（スペース）からなる文字列 s が与えられます。
// 文字列中の最後の単語の長さを返してください。

// ※「単語」とは、空白以外の文字が連続した部分文字列のことを指します。

#include <string>
using namespace std;

class Solution {
public:
        int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        // ここで末尾の空文字がなくなるところまでindexを探す。
        while(i >= 0 && s[i] == ' ') {
            i--;
        };

        int len = 0;

        // 後ろの空白がない箇所から次の空白の位置、またははじめまで長さを足していく
        while(i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};
