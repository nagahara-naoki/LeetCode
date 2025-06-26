// 文字列の配列から最長の共通接頭辞文字列を見つける関数を書く。
// 共通の接頭辞がない場合は、空の文字列 "" を返す。

#include <vector>
#include <string>
#include <iostream>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        string r = "";
        int i = 0;

        while (true) {
            char c;

            // 最初の文字列から文字を取り出す
            if (i < strs[0].size()) {
                c = strs[0][i];
            } else {
                break;
            }

            // 他の文字列でも一致するかチェック
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return r;
                }
            }

            r += c;
            i++;
        }

        return r;
    }
};
