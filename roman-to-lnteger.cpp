// たとえば、2はローマ数字で II と書きます。これは I + I（1 + 1）です。
// 12は XII（10 + 1 + 1）、27は XXVII（10 + 10 + 5 + 1 + 1）です。
// 基本的にローマ数字は、大きい数から小さい数の順で左から右へ書かれます。
// ただし、特定の数は「減算のルール」を使って表現されます。
// たとえば、4は IIII ではなく、IV と書かれます。これは、1（I）が5（V）の前に来ることで「5 - 1 = 4」となるからです。
// 同様に、9は IX（10 - 1）と書かれます。
// 以下の6パターンで「減算ルール」が使われます：
// I は V（5）や X（10）の前に置くことで、4や9を表す。
// X は L（50）や C（100）の前に置くことで、40や90を表す。
// C は D（500）や M（1000）の前に置くことで、400や900を表す。
// ローマ数字が1つ与えられるので、それを整数に変換してください。

// 小さい数が大きい数の前に来るときは減算

#include <string>
#include <map>
#include <iostream>

class Solution {
public:
    int romanToInt(std::string s) {
   std::map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    int prev = 0;

    for (int i = s.length() - 1; i >= 0; --i) {
        int curr = roman[s[i]];
        if (curr < prev) {
            result -= curr;
        } else {
            result += curr;
        }
        prev = curr;
    }

    return result;
    }
};
