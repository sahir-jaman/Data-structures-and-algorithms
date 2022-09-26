#include<bits/stdc++.h>
using namespace std;

// Recall :
/* 
    passing by reference = 'Etar mane holo-> function a jokhon value pass kora hobe 
    tokhon actual varibale & formal varibale er memory location same hote hobe';

    passing by value = 'Etar mane holo-> function a jokhon value pass kora hobe 
    tokhon actual varibale & fomral varibale er memory location same na holeo cholbe';
*/

// 1st technique;
/*
struct Node{
    int data;
    Node* next;
};
// int main er kaj ta show korar jonno user defined function->
void displaLinkedList(Node* &head){ // calling head as reference;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// without advance auto function technique;
// eta diye first a shikha suru koro. tarpor ei technique bujhe nije nije user defined function create koro;
// below part is not advance, eta onk boring technique. akta node er kaj korte amader 4 line code likhte hocche;
// so, ebar amra user defined function er maddhome below part tuku access korar program create korbo;
int main(){
    Node* n;
    Node* temp;
    Node* head;  // these 3 lines of code is important. Here we are creating same 3 address;

    // ei 4 ta line sobcheye important; 3 ta node: n,temp,head;
    n = new Node; // struct Node er akta object create korlam. first akta node create holo;
    n->data = 10;
    temp = n;
    head = n;  // head tar position a thakbe, temp pashapashi 2ta node er sathe connection korbe using temp->next. finally n node protibar new new Node create korbe;
    
    // 2nd Node;
    n = new Node;
    n->data = 20;
    temp->next = n;
    temp = temp->next;

    // 3rd Node;
    n = new Node;
    n->data = 30;
    temp->next = n;
    temp = temp->next;

    // 4th Node which is the last node of the linkedList;
    n = new Node;
    n->data = 40;
    temp->next = n;
    temp = temp->next;
    n->next = NULL;

    displaLinkedList(head);
}

*/

// 2nd technique;
/*
class Node{
    public:
    int data;
    Node* next; 
    
    // agei eta likbe na. ei part tuku insertAtTail create korar pashapashi nije nije korba;
    Node(int value){
        data = value;
        next = NULL;
    } 
};
void insertAtTail(Node* &head,int val){ //calling head as reference;
    //Node* n;
    //Node* temp;
    Node* n = new Node(val);
    if(head==NULL){
        //head->data = n->data;
        head = n;
        return;
    }
    // searching the last node;
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    //after finding the last node;
    temp->next = n;
    
}

// same as th 1st technique;
void displaLinkedList(Node* &head){ //calling head as reference; ekhane calling by value nileo cholbe;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    Node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    displaLinkedList(head);
}
*/
