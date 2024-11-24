#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
class linkedlist{
	protected:
		Node *head;
		Node *tail;
	public:
		linkedlist();
		virtual void InsertAtHead(int)=0;
		virtual int  DeleteFromHead()=0;
		virtual void InsertAtTail(int)=0;
		virtual int  DeleteFromTail()=0;
		virtual void display()=0;
};
linkedlist::linkedlist(){
	head=nullptr;
	tail=nullptr;
}
class mylinkedlist:public linkedlist{
	public:
		 void InsertAtTail(int);
		 void InsertAtHead(int);
		 int  DeleteFromHead();
		 int  DeleteFromTail();
		 void display();	
};
void mylinkedlist::InsertAtTail(int value){
	Node *nn=new Node;
	nn->data=value;
	nn->next=nullptr;
	if(head==nullptr&& tail==nullptr){
		head=nn;
		tail=nn;
	}
	else{
		tail->next=nn;
		tail=nn;
	}
}
void mylinkedlist::InsertAtHead(int value){
	Node *nn=new Node;
	nn->data=value;
	nn->next=nullptr;
	if(head==nullptr&& tail==nullptr){
		head=nn;
		tail=nn;
	}
	else{
		nn->next=head;
		head=nn;
	}
}
void mylinkedlist::display(){
	if(head!=nullptr&&tail!=nullptr){
	Node *nn=head;
	while(true){
		cout<<nn->data<<endl;
		nn=nn->next;
		if(nn==nullptr){
			break;
		}
	}	
	}
	else{
		cout<<"linkedlist is Empty "<<endl;
	}


}
int mylinkedlist::DeleteFromHead(){
	if(head==nullptr&&tail==nullptr){
		cout<<"LinkedList is Empty "<<endl;
		return NULL;
	}

	else if(head==tail){
		int returingvalue=head->data;
	    delete tail;
		head=nullptr;
		tail=nullptr;
		return returingvalue;
	}
		else {
		int returingvalue=head->data;
		Node *nn=head;
		head=head->next;
		delete nn;
		nn=nullptr;
		return returingvalue;
	}
}
int mylinkedlist::DeleteFromTail(){
	if(head==nullptr&&tail==nullptr){
		cout<<"LinkedList is Empty "<<endl;
		return NULL;
	}

	else if(head==tail){
		int returingvalue=head->data;
	    delete tail;
		head=nullptr;
		tail=nullptr;
		return returingvalue;
	}
	else{
		int returingvalue=tail->data;
		Node *nn=head;
	while(true){
		if(nn->next==tail){
			break;
		}
		else{
			nn=nn->next;
		}
	}
		delete tail;
		tail=nn;
		nn->next=nullptr;
		return returingvalue;
	}
		

}
int main(){
	mylinkedlist obj;
	obj.InsertAtTail(15);
	obj.InsertAtTail(-3);
	obj.InsertAtHead(15);
	obj.InsertAtHead(-3);
	obj.display();
	cout<<"After Deleting from Head "<<endl;
	cout<<"The deleted value= "<<obj.DeleteFromHead()<<endl;
	obj.display();
	cout<<"After Deleting from Tail "<<endl;
	cout<<"The deleted value= "<<obj.DeleteFromTail()<<endl;
	obj.display();
  return 0;	
}

