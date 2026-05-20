#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size_of_DLL(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void LL_same_or_not(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool flag = true;
    int size1 = size_of_DLL(head1);
    int size2 = size_of_DLL(head2);
    if (size1 != size2)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->val != temp2->val)
            {
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
void InsertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void printing_DLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "<->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        InsertAtTail(head1, tail1, val);
    }
    // printing_DLL(head1);

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        InsertAtTail(head2, tail2, val);
    }
    // printing_DLL(head2);
    LL_same_or_not(head1, head2);
    return 0;
}
