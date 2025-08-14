
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(0) {}
};

//  単方向リンクリスト（singly linked list）の2つの先頭ノード headA と headB が与えられたとき、
//  2つのリストが交差（交わる）するノードを返してください。
// もし2つのリンクリストがまったく交差しない場合は、null を返してください。
// まずは２つのNODEの長さを揃える、その後、比較している句、比較はvalじゃなくｎodeを比較する注意！

#include <iostream>

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        int r;
        std::cout << lenA;
        std::cout << lenB;
        while (lenA < lenB)
        {
            headB = headB->next;
            lenB--;
        }
        while (lenB < lenA)
        {
            headA = headA->next;
            lenA--;
        }

        std::cout << lenA;
        std::cout << lenB;

        while (headA && headB)
        {
            if (headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }

    int getLength(ListNode *head)
    {
        int len = 0;
        while (head)
        {
            len++;
            head = head->next;
        }
        return len;
    }
};
