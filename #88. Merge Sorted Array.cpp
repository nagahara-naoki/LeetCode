// ソート済みの配列 nums1 と nums2 がある
// nums1 のサイズは m + n で、
// 最初の m 個が本物のデータ
// あとの n 個は空きスペース（0で埋まっている）
// nums2 は n 個のデータがある

// やること
// nums1 と nums2 を一つにまとめて昇順に並べる

// 並べた結果は、nums1 の中に直接入れる（新しい配列を作らない）

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // nums2 にだけ残っている場合を埋める
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
