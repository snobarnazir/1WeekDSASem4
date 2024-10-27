/*#include <iostream>
using namespace std;
class stack{
	protected:
		int currentsize=0;
		int maxsize;
		int *arr;
	public:
		stack(){}
		stack(int size);
		~stack();
		virtual void push(int value)=0;
		virtual void display()=0;
		virtual void pop()=0;
		virtual bool IsEmpty()=0;
		virtual bool IsFull()=0;
		

};
stack::stack(int size){
	arr=new int[size];
	maxsize=size;
	currentsize=0;
	
}
stack::~stack(){
        	delete arr;
		}
class stackderived:public stack{
	public:
		stackderived(){}
		stackderived(int size):stack(size){};
		void push(int value);
		void pop();
		bool IsEmpty();
		bool IsFull();
		void display();
	
};
bool stackderived::IsFull(){
		
		if (currentsize>maxsize){
			return true;
		}
		else{
			return false;
		}
	}
bool stackderived::IsEmpty(){
		if (currentsize==0){
			return true;
		}
		else{
			return false;
		}
		}
void stackderived::push(int value){
	arr[currentsize]=value;
	currentsize++;
}

void stackderived::pop(){
	arr[currentsize]=0;
	currentsize--;
}
void stackderived::display(){
	cout<<"Current size :"<<currentsize<<endl;
	cout<<"Total size :"<<maxsize<<endl;
	if(IsEmpty()||IsFull()){
		cout<<"The Array is Empty/overfilled "<<endl;
	}
	else{
		for(int i=0;i<maxsize;i++){
		cout<<arr[i]<<endl;
	}
		
	}


}





int main(){
	
	stackderived obj(5);

	obj.push(67);
	obj.push(78);
	obj.push(5);
	obj.push(10);
	obj.push(5);
	obj.push(67);
	obj.pop();
	obj.display();
	return 0;
}*/
#include <iostream>
using namespace std;
template <class T>
class stack{
	protected:
		int currentsize=0;
		int maxsize;
		T *arr;
	public:
		stack(){}
		stack(int size);
		~stack();
		virtual void push(T value)=0;
		virtual void display()=0;
		virtual void pop()=0;
		virtual bool IsEmpty()=0;
		virtual bool IsFull()=0;
		

};


template <class T>
stack<T>::stack(int size){
	arr=new T[size];
	maxsize=size;
	currentsize=0;
	
}

template <class T>
stack<T>::~stack(){
        	delete arr;
		}
template <class T>
class stackderived<T>:public stack<T>{
	public:
		stackderived(){}
		stackderived(int size):stack<T>(size){};
		void push(T value);
		void pop();
		bool IsEmpty();
		bool IsFull();
		void display();
	
};


template <class T>
bool stackderived<T>::IsFull(){
		
		if (currentsize>maxsize){
			return true;
		}
		else{
			return false;
		}
	}
	
	
template <class T>
bool stackderived<T>::IsEmpty(){
		if (currentsize==0){
			return true;
		}
		else{
			return false;
		}
		}
		
		
template <class T>
void stackderived<T>::push(T value){
	arr[currentsize]=value;
	currentsize++;
}


template <class T>
void stackderived<T>::pop(){
	arr[currentsize]=0;
	currentsize--;
}


template <class T>
void stackderived<T>::display(){
	cout<<"Current size :"<<currentsize<<endl;
	cout<<"Total size :"<<maxsize<<endl;
	if(IsEmpty()||IsFull()){
		cout<<"The Array is Empty/overfilled "<<endl;
	}
	else{
		for(int i=0;i<maxsize;i++){
		cout<<arr[i]<<endl;
	}
		
	}


}
int main(){
	
	stackderived<int> obj(5);

	obj.push(67);
	obj.push(78);
	obj.push(5);
	obj.push(10);
	obj.push(5);
	obj.push(67);
	obj.pop();
	obj.display();
	return 0;
}
























