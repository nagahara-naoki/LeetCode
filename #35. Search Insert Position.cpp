// Serach Insert Position

// 昇順にソートされた重複のない整数の配列と、ある ターゲット値 が与えられます。
// ターゲットが配列内に存在する場合は、その インデックスを返してください。
// 存在しない場合は、そのターゲットを昇順を保ったまま挿入するために適切なインデックスを返してください。
// ２分探索を使用

#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid; // 見つかった
            } else if (nums[mid] < target) {
                left = mid + 1; // 右側を探索
            } else {
                right = mid - 1; // 左側を探索
            }
        }

        // 見つからなかった場合、挿入すべき位置は left
        return left;
    }
};
