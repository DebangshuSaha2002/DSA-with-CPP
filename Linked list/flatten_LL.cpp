//Flatten a linked list
//https://www.naukri.com/code360/problems/flatten-a-linked-list_1112655?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=SUBMISSION



// /*
//  * Definition for linked list.
//  * class Node {
//  *  public:
//  *		int data;
//  *		Node *next;
//  * 		Node *child;
//  *		Node() : data(0), next(nullptr), child(nullptr){};
//  *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
//  *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
//  * };
//  */

// Node * mergeLL(Node * &head1, Node * &head2){
// 	Node * temp = new Node(-1);
// 	Node * res = temp;
// 	while(head1!=NULL && head2!=NULL){
// 		if(head1->data<head2->data){
// 			res->child=head1;
// 			res=head1;
// 			head1=head1->child;
// 		}
// 		else{
// 			res->child=head2;
// 			res=head2;
// 			head2=head2->child;
// 		}
// 		res->next=NULL;
// 	}
// 	if(head1!=NULL){
// 		res->child=head1;
// 	}else{
// 		res->child=head2;
// 	}

// 	if(temp->child!=NULL){
// 		temp->child->next=NULL;
// 	}
// 	return temp->child;
// }

// Node* flattenLinkedList(Node* head) 
// {
// 	if(head==NULL || head->next==NULL){
// 		return head;
// 	}

// 	Node * mergedHead=flattenLinkedList(head->next);
// 	head=mergeLL(head,mergedHead);
// 	return head;
// }
