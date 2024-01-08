#define NULL nullptr 
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
typedef struct DNode {
    int data;
    struct DNode *prior, *next;
} DNode, *DLinkedList;
class Solution {
public:
    bool deleteFirstX(DLinkedList L, int x) {
    if (L == NULL || L->next == L) { // 空链表或仅含一个节点的情况
        return false;
    }
    
    DNode *p = L->next; // 从第一个节点开始
    while (p != L && p->data != x) { // 遍历链表，直到找到值为x的节点或回到头节点
        p = p->next;
    }
    
    if (p == L) { // 如果回到头节点，说明没有找到值为x的节点
        return false;
    }
    
    // 找到值为x的节点，进行删除操作
    p->prior->next = p->next;
    p->next->prior = p->prior;
    delete p; 
    return true;
}
};
