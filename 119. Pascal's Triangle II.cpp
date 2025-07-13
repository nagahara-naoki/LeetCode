// 整数 rowIndex が与えられたとき、パスカルの三角形の rowIndex 行目（0始まり）を返してください。
// パスカルの三角形では、各数字は直上の2つの数字の和になっています。以下のように構成されます：

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> t;
        for (int i = 0; i <= rowIndex; i++)
        {
            vector<int> r(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                std::cout << j;
                r[j] = t[i - 1][j] + t[i - 1][j - 1];
            }

            t.push_back(r);
        }
        return t[rowIndex];
    }
};

/*
パスカル三角形
２次元の動的配列を作成、その中に配列を詰めていく
詰める配列は、１つ前の配列の２つをたす。
 */
