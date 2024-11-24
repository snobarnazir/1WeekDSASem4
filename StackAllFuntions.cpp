#include <iostream>
#include <string>
using namespace std;
template <class T>
class stack{
	protected:
		int maxsize;
		int currentsize;
		T *arr;
public:
	stack(int size);
	~stack();
	virtual void push(T value)=0;
	virtual T pop()=0;
	virtual bool isEmpty()=0;
	virtual bool isFull()=0;
	
};
template <class T>
 stack<T>::stack(int size){
 	maxsize=size;
 	currentsize=0;
 	arr=new T[maxsize];
 }
 template <class T>
stack<T>::~stack(){
 	delete[] arr;
 	arr=nullptr;
 }


template <class T>
class mystack:public stack<T>{
	public:
		
	mystack(int size);
 	void push(T value);
	T pop();
    bool isEmpty();
    bool isFull();
    void display();
		
};
template <class T>
mystack<T>::mystack(int size):stack<T>(size){
}
template <class T>
bool mystack<T>::isFull(){
	if(stack<T>::currentsize>=stack<T>::maxsize){
		return true;
	}
	else{
		return false;
	}
	
	
}
template <class T>
bool mystack<T>::isEmpty(){
   if(stack<T>::currentsize==0){
   	return true;
   }
   	else{
		return false;
	}
	
	
}

template <class T>
void mystack<T>::push(T value){
	if(isFull()){
		cout<<"Array is full"<<endl;
	}
	else{
	stack<T>::arr[stack<T>::currentsize]=value;
	stack<T>::currentsize++;
	}
	
	
}
template <class T>
T mystack<T>::pop(){
	if(isEmpty()){
		cout<<"Array is Empty"<<endl;
		return NULL;
	}
	else{
		
	T value=	stack<T>::arr[stack<T>::currentsize];
     stack<T>::currentsize--;
     return value;
	}
    
	
	
}
template <class T>
void mystack<T>::display(){
	cout<<"currentsize "<<stack<T>::currentsize<<endl;
	cout<<"maxsize "<<stack<T>::maxsize<<endl;
    for(int i=0;i<stack<T>::currentsize;i++){
    	cout<<i<<". "<<stack<T>::arr[i]<<endl;
	}
	
	
}










int main(){
	
	mystack<int> obj(5);
	obj.push(15);
	obj.push(-3);

	cout << "Display: " << endl;
	obj.display();


	mystack<char> obj2(10);
	obj2.push('A');
	obj2.push('z');
	obj2.push('@');

	cout << "Display: " << endl;
	obj2.display();


	mystack<string> s(7);
	s.push("data");
	s.push("Structures");
	s.push("lecture");
	s.push("D6");

	cout << "Display: " << endl;
	s.display();
	
	return 0;
}













