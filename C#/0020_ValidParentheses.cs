public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        int m = strs.Min(s => s.Length); // 最小文字数
        for(int i = 0; i < m; i++) {
            for(int j = 1; j < strs.Length; j++) {
                if(strs[j][i] != strs[0][i]) {
                    return strs[0].Substring(0,i);
                }
            }
        }
        return strs[0].Substring(0, m);
    }
}
