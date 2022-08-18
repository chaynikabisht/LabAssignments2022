#include<iostream>
using namespace std;

class Node{
    public:
Node * next;
int data;
};


// print function to print the linked list

void PrintList(Node * n){
while(n!=NULL){
    cout<<n->data<<" "<<endl;
    n= n->next;
}
}

int main(){
Node * head= NULL;
Node * two = NULL;
Node * three = NULL;
Node * tail = NULL;

head= new Node();
two= new Node();
three= new Node();
tail= new Node();

head->data=378;
head->next=two;

two->data=28;
two->next=three;

three->data=202;
three->next=tail;

tail->data= 849;
tail->next=NULL;

PrintList(head);
return 0;
}
