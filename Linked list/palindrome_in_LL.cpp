//WAP to check whether is palindrome or not

#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node * next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertnodes(node * &head)
{
    int n;
    cout<<"Do you want to continue:";
    cin>>n;
    while(n==1)
    {
        int data;
        cout<<"\nEnter the data:";
        cin>>data;
        node * node1=new node(data);
        if(head==NULL){
            head=node1;
        }
        else{
            node * temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=node1;
        }
        cout<<"Do you want to continue:";
        cin>>n;
    }
}

bool check(vector<int>arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}


//This aproach will take O(n) TC and O(n) SC
// A better approach is possible with O(1) SC

bool palindrome(node * & head)
{
    
    vector <int> arr;
    node * temp=head;

    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }

    return check(arr);
}

void print(node * head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node * head=NULL;
    insertnodes(head);
    print(head);
    if(head==NULL || head->next==NULL)
    {
        return 1;
    }
    bool storeans=palindrome(head);
    cout<<"\nThe linked list is palindrome or not : "<<storeans<<endl;
}