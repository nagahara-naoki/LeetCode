// あなたは RecentCounter クラスを実装する必要があります。このクラスは、ある一定期間内に発生したリクエストの数をカウントします。
// RecentCounter クラスを次のように実装してください：
// RecentCounter()
// カウンターを初期化します。最初は最近のリクエスト数が 0 です。
// int ping(int t)
// 新しいリクエストが 時刻 t（ミリ秒単位） に届いたことを追加します。
// そのうえで、直近3000ミリ秒（= 3秒）以内 に届いたリクエストの数を返します。
// 具体的には、[t - 3000, t]（両端を含む）という範囲に含まれるリクエスト数を返します。
// なお、ping に渡される t は、前回の ping の引数よりも常に大きくなることが保証されています（= 時刻は単調増加）。
#include <iostream>
#include <queue>

class RecentCounter
{
private:
    std::queue<int> q; // リクエストの時刻を記録するキュー

public:
    RecentCounter()
    {
        // コンストラクタ：何もしない（qは空）
    }

    int ping(int t)
    {
        // 今回のリクエスト t をキューに追加
        q.push(t);

        // q.front()（一番古いリクエスト）が t - 3000 より古いなら、削除
        while (!q.empty() && q.front() < t - 3000)
        {
            q.pop(); // 古いリクエストを削除
        }

        // 残っているキューのサイズが、[t-3000, t] にあるリクエスト数
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
