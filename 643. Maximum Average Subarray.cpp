// 長さ n の整数配列 nums と整数 k が与えられます。
// 長さがちょうど k の 連続した部分配列（サブアレイ） の中で、
// 平均値が最大となるものを見つけ、その平均値を返してください。
#include <vector>
using namespace std;
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        // 1. 最初の k 個の合計を計算
        double sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }

        double maxSum = sum;

        // 2. スライドしながら合計を更新し、最大値を求める
        for (int i = k; i < nums.size(); i++)
        {
            sum += nums[i] - nums[i - k]; // 1つ前の値を引き、今の値を足す
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }

        // 3. 最大合計を k で割って平均を返す
        return maxSum / k;
    }
};
