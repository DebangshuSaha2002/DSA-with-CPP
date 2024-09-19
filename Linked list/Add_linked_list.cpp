// Add 2 numbers represented by Linked list
#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertatend(node *&head)
{
    int n;
    cout << "Do you want to continue?";
    cin >> n;
    int data;
    while (n == 1)
    {
        cout << "Enter the data:";
        cin >> data;
        node *node1 = new node(data);
        if (head == NULL)
        {
            head = node1;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = node1;
        }
        cout << "Do you want to continue?";
        cin >> n;
    }
}

node *reverse(node *&head)
{
    node *curr = head;
    node *prev = NULL;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

node *insert(node * &ans, int data)
{
    node * node1 = new node(data);
    if (ans == NULL)
    {
        ans = node1;
    }
    else
    {
        node * temp = ans;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node1;
    }
    return ans;
}

node *addlinkedlist(node * &head1, node * &head2)
{
    node * ans = NULL;
    int carry = 0;
    while (head1 != NULL || head2 != NULL || carry != 0)
    {
        int val1 = 0;
        if (head1 != NULL)
        {
            val1 = head1->data;
        }

        int val2 = 0;
        if (head2 != NULL)
        {
            val2 = head2->data;
        }

        int sum = carry + val1 + val2;
        carry = sum / 10;
        int digit = sum % 10;
        ans = insert(ans, digit);

        if (head1 != NULL)
        {
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            head2 = head2->next;
        }
    }
    return ans;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head1 = NULL;
    insertatend(head1);
    cout << "First linked list:\n";
    print(head1);
    node * h1 = reverse(head1);

    node *head2 = NULL;
    insertatend(head2);
    cout << "Second linked list:\n";
    print(head2);
    node * h2 = reverse(head2);

    // check the case for just head1==NULL or head2==NULL

    node * ans = addlinkedlist(h1, h2);
    ans=reverse(ans);
    cout << "Ans linked list:\n";
    print(ans);
    return 0;
}