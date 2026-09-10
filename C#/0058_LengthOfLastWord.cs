// 右端から見る。9じゃなければ +1 して終了。9なら0にして左へ進む。

public class Solution {
    public int[] PlusOne(int[] digits) {
        for(int i = digits.Length -1 ; i >= 0; i--) {
            if(digits[i] != 9 ) {
                digits[i] = digits[i] + 1;
                return digits;
            } else {
                digits[i] = 0;
            }
        }

        int[] r = new int[digits.Length + 1];
        r[0] = 1;
        return r;
    }
}
