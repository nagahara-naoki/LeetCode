struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//  単方向リンクリストの先頭ノード（head）が与えられたとき、
// そのリストを反転させ、反転後のリストを返してください。

#include <iostream>
using namespace std;

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *p = nullptr;
        ListNode *c = head;

        while (c != nullptr)
        {
            ListNode *next = c->next; // 次を保持
            c->next = p;              // 反転
            p = c;                    // prev更新
            c = next;                 // 次へ進む
        }

        return p;
    }
};
