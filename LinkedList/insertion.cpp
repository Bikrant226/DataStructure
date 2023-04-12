#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
}*head,*ptr,*temp;

void insert_at_begin(int val){
    ptr=new node();
    ptr->data=val;
    
    if(head==NULL){
        ptr->next=NULL;
        head=ptr;
    }else{
        ptr->next=head;
        head=ptr;
    }
}

void insert_at_end(int val){
    ptr=new node();
    ptr->data=val;

    temp=head;

    //To check if linkedlist is empty or not;
    if(head==NULL){
        ptr->next=NULL;
        head=ptr;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
    }
    
}

void delete_at_begin(){
    temp=head;
    if(temp==NULL){
        cout<<"Underflow"<<"\n";
    }
 
    head->next=temp->next;
    free(temp);

}

void insert_at_pos(int pos,int val){
    ptr->data=val;
    temp=head;

   for(int i=0; i<pos-2; i++){
        temp=temp->next;
    }
    
    ptr->next=temp->next;
    temp->next=ptr;
   
}


void display(){
    temp=head;
    while(temp!=NULL){
        cout<<"-->"<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}

int main(){
    head=NULL;
    int value,n,pos;
    char ch='y';

    do{
        cout<<"Enter value to be inserted in linkedlist:\n";
        cin>>value;

        cout<<"Where do you want to insert this value:"<<"\n";
        cout<<"1. Press 1 to insert at beg:\n";
        cout<<"2. Press 2 to insert at end:\n";
        cout<<"3. Press 3 to insert after an element:\n";
        cin>>n;
        switch(n){
            case 1:
                insert_at_begin(value);
                cout<<"The linkedlist after insertion at beginning is:\n";
                display();
                break;
            case 2:
                insert_at_end(value);
                 cout<<"The linkedlist after insertion at end is:\n";
                display();
                break;
            // case 3:
            //     cout<<"Enter position where you want to enter the element:\n";
            //     cin>>pos;
            //     insert_at_pos(pos,value);
            //     cout<<"The linkedlist after insertion after position is:\n";
            //     display();
            //     break;
            default:
                cout<<"No choice entered!!";
            
        }
        

       
        cout<<"Want to insert more elements? Press Y for YES or N for NO.";
        cin>>ch;
    }while(ch=='y' || ch=='Y');


    do{
        
        cout<<"1. Press 1 to delete at beg:\n";
        cout<<"2. Press 2 to delete at end:\n";
        cout<<"3. Press 3 to delete after an element:\n";
        cin>>n;
        switch(n){
            case 1:
                delete_at_begin();
                cout<<"The linkedlist after deleteion at beginning is:\n";
                display();
                break;
            // case 2:
            //     delete_at_end();
            //      cout<<"The linkedlist after deleteion at end is:\n";
            //     display();
            //     break;
            // case 3:
            //     cout<<"Enter position where you want to enter the element:\n";
            //     cin>>pos;
            //     delete_at_pos(pos,value);
            //     cout<<"The linkedlist after deleteion after position is:\n";
            //     display();
            //     break;
            default:
                cout<<"No choice entered!!";
            
        }
        

       
        cout<<"Want to delete more elements? Press Y for YES or N for NO.";
        cin>>ch;
    }while(ch=='y' || ch=='Y');


        
    return 0;
}