public class Solution {
    public int LengthOfLastWord(string s) {
        int c = 0;
        for(int i = s.Length - 1; i >= 0; i--) {
            if(s[i] == ' ' && c != 0) break;
            if(s[i] == ' ') continue;
            c++;
        }

        return c;
    }
}
