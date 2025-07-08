//  連結リストの先頭ノード head が与えられたとき、
// その連結リストに**サイクル（cycle）**が含まれているかどうかを判定してください。
// 連結リストにおいて、ノードを next ポインタに従ってたどっていったときに、
// どこかで以前に訪れたノードに戻ってくることができる場合、
// その連結リストはサイクルを持っているとみなします。

// 問題の内部的には、pos という変数によって
// どのノードに tail->next がつながっているかが示されています（テスト用）。
// ただし、pos は入力として渡されません。
#include <unordered_set>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        std::unordered_set<ListNode *> setNode; // 過去のNODEを記憶用に、都度判定して入っているかを見る
        ListNode *current = head;

        while (current != nullptr)
        {
            if (setNode.count(current) > 0)
            { // すでにとをったNODEだとtrueで終わり。
                return true;
            }

            setNode.insert(current);
            current = current->next;
        }
        return false;
    }
};
