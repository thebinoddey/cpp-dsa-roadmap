#include <iostream>
using namespace std;

//1. Create class to create Node
class CreateNode {
public:
    int data;
    CreateNode* next; //self referential structure

    CreateNode(int val){
        data = val;
        next = NULL;
    }
};

//=================================================
//2. Create Class to initialize LL
class List {
    CreateNode* head;
    CreateNode* tail;

public:
    List(){
        head = tail = NULL;
    }

    //Push Front or Insertion at head
    void PushFront(int val){
        CreateNode* newNode = new CreateNode(val); //step1 - dynamic creation
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode ->next = head; //(*newNode).next = head
            head = newNode;
        }
    }

    //Push Back or Insertion at tail
    void PushBack(int val){
        CreateNode* newNode = new CreateNode(val); 
        if(tail == NULL){
            head = tail = newNode;
        }
        else{
            tail ->next = newNode; 
            tail = newNode;
        }
    }

    //PopFront - delete first node
    void PopFront(){  
        CreateNode* temp = head;
        if(head == NULL){
            cout << "Nothing to Pop" ;
        }
        else{
            head = head ->next; //updated head
            temp ->next = NULL; //previous head(temp) is pointing to NULL
            delete temp; //delete previous head (temp)
        }
    }

    //PopBack - delete last node
    void PopFront(){  
        CreateNode* temp = head;
        if(head == NULL){
            cout << "Nothing to Pop" ;
        }
        else{
        while(temp ->next != NULL){
            temp = temp ->next; //updating temp
        }
        temp ->next = NULL; //deleting link to last node
        delete tail; //deleted last node
        tail = temp; //updated tail
        }
    }

    //Print a LL
    void Print(){
        CreateNode* temp = head;

        while(temp != NULL){
            cout << temp ->data << "-" ;
            temp = temp ->next;
        }
        cout << endl;
    }
    
};

int main() {
    List L1;
    L1.PushFront(1);
    L1. PushFront(3);
    L1.PushFront(5);
    L1.PushBack(6);
    L1.Print();
    L1.PopFront();
    L1.Print();
}



/* 
Problems with Arrays
- Fixed in Size
- size decided at run time

Linked List
- no fixed size
- grows and reduces in size wrt number of elements
- linking is used to link elements (using pointer)
- Nodes are created with data and pointer to the next node.
- An initial pointer (head) is created which points at first index and then node is created and first node's pointer points to second node.
- created in heap

NODE
- Data of any dtype
- Pointer of Node data type (pointer of its own type). Pointer points to next node

*/




