public class Solution {
    public int RomanToInt(string s) {
        Dictionary<char,int> d = new Dictionary<char, int>() {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int r = 0;
        int prev = 0;

        for(int i = s.Length - 1; i >= 0; i--) {
            int c = d[s[i]]; // 辞書からバリューを取る
            // 現在の値が基準値より小さい場合は引き算、それ以外は足し算
            if(c < prev) {
                r -= c;
            } else {
                r += c;
                prev = c;
            }
        }

        return r;
    }
}
