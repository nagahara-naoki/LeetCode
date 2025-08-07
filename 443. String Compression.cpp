// 文字の配列 chars が与えられます。以下のアルゴリズムに従って、この配列を圧縮してください。
// ｘ
// 空の文字列 s から開始します。
// chars 内の連続する同じ文字のグループごとに、以下を行います：
// グループの長さが1であれば、その文字を s に追加します。
// グループの長さが1より大きければ、その文字の後に**グループの長さ（数字）**を s に追加します。
// ただし、この s を別に返してはいけません。圧縮後の内容を chars の先頭から順に上書きする形で保存してください。
// また、グループの長さが10以上の場合、その数字は複数の文字に分けて格納する必要があります（たとえば、12なら '1' と '2' に分ける）。
// 配列を変更し終えたら、**新しい配列の長さ（圧縮後の chars の有効な長さ）**を返してください。
// 制約：
// 定数の追加メモリしか使ってはいけません。（つまり、O(1) の空間しか使えません）

#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        int write = 0;
        int read = 0;

        while (read < n)
        {
            int current = chars[read];
            int count = 0;
            while (read < n && chars[read] == current)
            {
                read++;
                count++;
            }

            chars[read] = count;

            std::cout << read;
            std::cout << count;
        }
        return 0;
    }
};
