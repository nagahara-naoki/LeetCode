// // 整数配列 height（長さ n）が与えられています。
// // ここで、n 本の垂直な線が引かれており、i 番目の線の両端の座標は (i, 0) と (i, height[i]) です。
// // x 軸と 2 本の線を使って容器を作ったとき、その容器が最も多くの水を蓄えられるように 2 本の線を選んでください。
// // 容器が蓄えられる最大の水の量を返してください。
// // なお、容器を斜めにすることはできません。

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int result = 0;
//         vector<int> n = height;
//         for(int i = 0; i < n.size(); i++) {
//             for(int j = n.size() -1; j > i; j--) {
//                 int r = (j - i) * std::min(n[i], n[j]);
//                 if(r > result) {
//                     result = r;
//                 }
//             }
//         }
//         return result;
//     }
// };

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int result = 0;

        while (left < right)
        {
            int s = right - left;
            int h = min(height[right], height[left]);
            result = max(result, s * h);

            if (height[right] < height[left])
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        return result;
    }
};
