public class Solution {
    public bool IsValid(string s) {
        Stack<char> stack = new Stack<char>();
        var map = new Dictionary<char, char> {
            { ')', '(' },
            { ']', '[' },
            { '}', '{' }
        };
        
        for(var i = 0; i < s.Length; i++) {
            if(!map.ContainsKey(s[i])) {
                stack.Push(s[i]);
            } else {
                if(stack.Count == 0) {
                    return false;
                }

                char p = stack.Pop();
                if(p != map[s[i]]) {
                    return false;
                }
            }
        }
        return stack.Count == 0;
    }
}
