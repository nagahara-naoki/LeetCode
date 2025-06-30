// 整数の配列 nums と整数 val が与えられます。
// 配列 nums の中から、値が val と等しい要素をすべて取り除いてください（その場で in-place に変更）。
// 要素の順序は変わってもかまいません。
// その後、val と異なる要素の個数を k とし、以下を満たすようにしてください。
// 配列 nums の先頭 k 個の要素に val と異なる値だけが含まれていること
// それ以降の要素の値や配列のサイズは問わない
// 最後に k を返すこと

#include <vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
