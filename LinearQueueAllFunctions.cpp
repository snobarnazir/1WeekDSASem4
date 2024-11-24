#include <iostream>
#include <string>
using namespace std;
template <class T>
class Queue{
	protected:
		int maxsize;
		int currentsize;
		T *arr;
public:
	Queue(int size);
	~Queue();
	virtual void nqueue(T value)=0;
	virtual T dqueue()=0;
	virtual bool isEmpty()=0;
	virtual bool isFull()=0;
	
};
template <class T>
 Queue<T>::Queue(int size){
 	maxsize=size;
 	currentsize=0;
 	arr=new T[maxsize];
 }
 template <class T>
Queue<T>::~Queue(){
 	delete[] arr;
 	arr=nullptr;
 }


template <class T>
class myQueue:public Queue<T>{
	public:
		
	myQueue(int size);
 	void nqueue(T value);
	T dqueue();
    bool isEmpty();
    bool isFull();
    void display();
		
};
template <class T>
myQueue<T>::myQueue(int size):Queue<T>(size){
}
template <class T>
bool myQueue<T>::isFull(){
	if(Queue<T>::currentsize>=Queue<T>::maxsize){
		return true;
	}
	else{
		return false;
	}
	
	
}
template <class T>
bool myQueue<T>::isEmpty(){
   if(Queue<T>::currentsize==0){
   	return true;
   }
   	else{
		return false;
	}
	
	
}

template <class T>
void myQueue<T>::nqueue(T value){
	if(isFull()){
		cout<<"Array is full"<<endl;
	}
	else{
	Queue<T>::arr[Queue<T>::currentsize]=value;
	Queue<T>::currentsize++;
	}
	
	
}
template <class T>
T myQueue<T>::dqueue(){
	if(isEmpty()){
		cout<<"Array is Empty"<<endl;
		return NULL;
	}
	else{
		
	T value=	Queue<T>::arr[0];
     Queue<T>::currentsize--;
     for(int i=0;i<Queue<T>::currentsize;i++){
     	 Queue<T>::arr[0]= Queue<T>::arr[i+1];
	 }
     return value;
	}
    
	
	
}
template <class T>
void myQueue<T>::display(){
	cout<<"currentsize "<<Queue<T>::currentsize<<endl;
	cout<<"maxsize "<<Queue<T>::maxsize<<endl;
    for(int i=0;i<Queue<T>::currentsize;i++){
    	cout<<i<<". "<<Queue<T>::arr[i]<<endl;
	}
	
	
}










int main(){
	
	myQueue<int> obj(5);
	obj.nqueue(15);
	obj.nqueue(-3);
	obj.nqueue(4);
	cout<<"The value that has been removed :"<<obj.dqueue()<<endl;

	cout << "Display: " << endl;
	obj.display();


/*	myQueue<char> obj2(10);
	obj2.nqueue('A');
	obj2.nqueue('z');
	obj2.nqueue('@');

	cout << "Display: " << endl;
	obj2.display();


	myQueue<string> s(7);
	s.nqueue("data");
	s.nqueue("Structures");
	s.nqueue("lecture");
	s.nqueue("D6");

	cout << "Display: " << endl;
	s.display();*/
	
	return 0;
}













