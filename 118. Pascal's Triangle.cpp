// 整数 numRows が与えられたとき、パスカルの三角形の最初の numRows を返してください。

// Step 1: 三角形の入れ物を作る
// 2次元配列 t を作って、各行を格納する。

// Step 2: 1行ずつ作成する（0行目からスタート）
// i 行目を作るときの長さは i + 1

// 各行の先頭と末尾は 1

// 真ん中は前の行を見て計算する

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> t; // ２次元配列を用意、最終これを返す

        for (int i = 0; i < numRows; ++i)
        {
            vector<int> row(i + 1, 1); // 配列を作成。長さはi+1, 中身は全て１を入れておく
            for (int j = 1; j < i; ++j)
            {
                /*
                i - 1 = １つ前の配列
                前の配列の左　＋　前の配列の右　 をrowに詰めていく
                 */
                row[j] = t[i - 1][j - 1] + t[i - 1][j];
            }
            t.push_back(row); // 成形したrowを詰める
        }

        // t の中見る
        for (int i = 0; i < t.size(); ++i)
        {
            for (int j = 0; j < t[i].size(); ++j)
            {
                cout << t[i][j] << " ";
            }
            cout << endl;
        }

        return t;
    }
};
/*
２次元配列
vector<T>
 */
