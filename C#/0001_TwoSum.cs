public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int,int> d = new Dictionary<int,int>();
        for(var i = 0; i < nums.Length; i++) {
            int c = target - nums[i];
            if(d.ContainsKey(c)) {
                return new int[] {d[c], i};
            } else {
                d.Add(nums[i],i);
            }
        }
        return new int[0]; // 空の配列を返す
    }
}
