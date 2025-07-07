// あなたは階段を上っています。階段の頂上にたどり着くには n 段 上る必要があります。

// 1回の行動で、1段 または 2段 登ることができます。
// このとき、異なる登り方は何通りあるでしょうか？

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;
        
        int a = 1, b = 1;  // a = ways(n-2), b = ways(n-1)
        for (int i = 2; i <= n; i++) {
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b;  // 最終的に b が ways(n)
    }

};
