// ソートされた連結リストの先頭ノード（head）が与えられます。
// すべての重複した要素を削除し、各要素が1回だけ現れるようにしてください。
// 結果として得られる連結リストもソートされた状態で返してください。


 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        while (current != nullptr && current->next != nullptr) {
                //同じデータだとスキップ。すでにソート済みだから。
            if (current->val == current->next->val) { 
                // 重複しているのでスキップ
                current->next = current->next->next;
            } else {
                // 値が違うので次のノードに進むために、次のポインターを持っているノードに移動。
                current = current->next;
            }
        }
        return head;
    }
};
