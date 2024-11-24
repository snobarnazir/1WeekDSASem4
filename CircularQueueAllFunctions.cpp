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
	private:
		int front;
		int rare;
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
	    front=0;
	    rare=0;
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
	Queue<T>::arr[rare%Queue<T>::maxsize]=value;
	Queue<T>::currentsize++;
	rare++;
	}
	
	
}
template <class T>
T myQueue<T>::dqueue(){
	if(isEmpty()){
		cout<<"Array is Empty"<<endl;
		return NULL;
	}
	else{
		
	T value=Queue<T>::arr[front%Queue<T>::maxsize];
     Queue<T>::currentsize--;
    front++;
     return value;
	}
    
	
	
}
template <class T>
void myQueue<T>::display(){
	cout<<"currentsize "<<Queue<T>::currentsize<<endl;
	cout<<"maxsize "<<Queue<T>::maxsize<<endl;
	cout<<"front "<<front<<endl;
	cout<<"rare "<<rare<<endl;
	
    for(int i=front;i<rare;i++){
    	cout<<i%Queue<T>::maxsize<<". "<<Queue<T>::arr[i%Queue<T>::maxsize]<<endl;
	}
	
	
}

int main(){
	
	myQueue<int> obj(5);
	obj.nqueue(15);
	obj.nqueue(-3);
	obj.nqueue(4);
	cout << "Display: " << endl;
	obj.display();
	cout<<"The value that has been removed :"<<obj.dqueue()<<endl;
    obj.nqueue(4);
    obj.nqueue(5);
    obj.nqueue(3);
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













