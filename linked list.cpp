#include <iostream>

//linked list
struct Node {
    int data;
    Node *next;
};

Node *head = nullptr;
Node *tail = nullptr;

 void addNode(int data)
 {
    Node *temp=new node();
    temp->data=data;
    temp->next=nullptr;
     
    if(head==nullptr)
    {
        head=temp;
        tail=temp;
        temp=nullptr;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }

 }

 void display()
 {
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
 }

int main()
{




    return 0;
}