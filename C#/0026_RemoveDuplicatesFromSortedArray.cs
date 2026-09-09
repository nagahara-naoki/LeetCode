public class Solution {
    public int RemoveDuplicates(int[] nums) {
        if(nums.Length == 0) return 0;

        int s = 0; // 比較１

        for(int i = 1; i < nums.Length; i++) { // 比較２から回す
            if(nums[s] != nums[i]) { // 2ポインター違うデータの時だけ、データを入れ替える
                s++;
                nums[s] = nums[i];
            }
        }

        return s + 1;
    }
}
