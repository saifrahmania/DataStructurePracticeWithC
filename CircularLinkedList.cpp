#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next =head;
    head = n;
}

void deleteAthead(node* &head){
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }

    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
    
}

void deletion(node* &head, int pos){

    if(pos==1){
        deleteAthead(head);
    }
    node* temp = head;
    int count = 1;
    while(count!= pos-1){
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;


}

void evenAfterOdd(node* &head){
    node* odd = head;
    node*even = head->next;
    node* evenStart = even;
    while(odd->next!=NULL&&even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even =even->next;

    }

    odd->next = evenStart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}


void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
    }while(temp!=head);
    cout<<endl;
}
void insertAtTail(node* &head, int val){

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;

}

int main(){
    node* head  = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,0);
    display(head);
}