public class Solution {
    public bool IsPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        string s = x.ToString(); // 文字列化
        string j = new string(s.Reverse().ToArray()); // 逆にして文字列化

        return s == j; // 比較
    }
}
