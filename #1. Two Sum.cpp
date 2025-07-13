// 必要なライブラリをインクルード（取り込む）
#include <iostream> // 標準入出力（coutなど）を使うためのライブラリ
#include <vector>   // ベクター（可変長配列）を使うためのライブラリ

// 名前空間 std を使う宣言（毎回 std:: を書かなくてよくなる）
using namespace std;

// Two Sum を解くためのクラス Solution を定義
class Solution
{
public:
    // twoSumという名前の関数を定義
    // 引数：整数のベクター nums（参照渡し）、整数 target
    // 戻り値：2つのインデックスを格納した整数のベクター
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // 最初のループ：nums 配列の要素を順番に i として走査
        for (int i = 0; i < nums.size(); i++)
        {
            // 2番目のループ：i より後ろの要素を j として走査（重複や同じ要素を使わないように）
            for (int j = i + 1; j < nums.size(); j++)
            {
                // nums[i] と nums[j] の和が target と一致するかを確認
                if (nums[i] + nums[j] == target)
                {
                    // 一致したら、2つのインデックス i, j をベクターとして返す
                    return {i, j};
                }
            }
        }
        // 条件を満たす組み合わせが見つからなかった場合、空のベクターを返す
        return {};
    }
};

// プログラムの実行開始点
int main()
{
    // Solution クラスのインスタンス（オブジェクト）を作成
    Solution sol;

    // テストデータとして nums 配列を定義（ベクター）：2, 7, 11, 15
    vector<int> nums = {2, 7, 11, 15};

    // 目標となる合計値を target として指定（今回は 9）
    int target = 9;

    // twoSum 関数を呼び出して結果を result に格納
    vector<int> result = sol.twoSum(nums, target);

    // 結果が空でなければ（解が見つかった場合）
    if (!result.empty())
    {
        // 見つかった2つのインデックスを出力
        cout << "Index1: " << result[0] << ", Index2: " << result[1] << endl;
    }
    else
    {
        // 解がなかった場合のメッセージを出力
        cout << "No solution found." << endl;
    }

    // プログラム正常終了を示す return
    return 0;
}
