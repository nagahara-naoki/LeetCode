// ソート済み（昇順）の整数配列 nums が与えられます。
// 配列をその場（in-place）で変更して、重複のない要素のみを残すようにしてください。
// 結果として、各ユニーク要素が1回ずつだけ現れ、かつ元の相対順序は保たれるようにします。

// 変更後、配列の先頭 k 要素にユニークな要素を順番通りに詰めてください。

// 残りの要素（nums[k] 以降）はどうでもいい（変えてもそのままでもOK）。

// 最後に、ユニーク要素の数 k を返すこと。

#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
