// # 66PlusOne
// 整数の配列 digits が与えられます。この配列は 1つの非常に大きな整数を桁ごとに表しています。
// digits[i] はその整数の i 番目の桁（左から i 番目） を表します。
// 配列は 上位の桁から下位の桁へ（つまり、左から右へ）並んでいます。
// 与えられる整数には 先頭に 0 は含まれません。

// 🎯 やること
// この整数に 1 を加算し、結果を同じ形式の桁配列として返してください。

#include <vector>


class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();

        // 後ろから走査
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;  // 繰り上がりなしで完了
            }
            // 9 → 0 にして繰り上げ
            digits[i] = 0;
        }

        // すべて繰り上がった（例：999 → 1000）
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
