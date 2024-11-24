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
	virtual void push(T value)=0;
	virtual T pop()=0;
	virtual bool isEmpty()=0;
	virtual T top()=0;
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
 	void push(T value);
	T pop();
    bool isEmpty();
    bool isFull();
    T top();
    bool display(string s);
		
};
template <class T>
myQueue<T>::myQueue(int size):Queue<T>(size){
}
template <class T>
T myQueue<T>::top(){
  
  return Queue<T>::arr[Queue<T>::currentsize];
		
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
void myQueue<T>::push(T value){
	if(isFull()){
		cout<<"Array is full"<<endl;
	}
	else{
	Queue<T>::arr[Queue<T>::currentsize]=value;
	Queue<T>::currentsize++;
	}
	
	
}
template <class T>
T myQueue<T>::pop(){
	if(isEmpty()){
		cout<<"Array is Empty"<<endl;
		return NULL;
	}
	else{
		T value=Queue<T>::arr[Queue<T>::currentsize];
        Queue<T>::currentsize--;
        return value;
	}
}
template <class T>
bool myQueue<T>::display(string s){
	
       int size=s.size();
       myQueue<char> obj(size); 
	   bool answer=false;
	   
	   for(int i=0;i<size;i++){
	   	if(s[i]=='['||s[i]=='('||s[i]=='{'){
	   		obj.push(s[i]);
		   }
		   
		   
		else if(!isEmpty()&&s[i]==')'){
		     if(obj.top()=='(')	{
		     	obj.pop();
		     
			 }
			 else{
			 	answer=false;
			 	break;	
			 }
		}
		else if(!isEmpty()&&s[i]=='}'){
		     if(obj.top()=='{')	{
		     	obj.pop();
		     
			 }
			 else{
			 	answer=false;
			 	break;	
			 }
		}
		else if(!isEmpty()&&s[i]==']'){
		     if(obj.top()=='[')	{
		     	obj.pop();
		     
			 }
			 else{
			 	answer=false;
			 	break;	
			 }
		}
	   }
	   if(!isEmpty()){
	   	answer=false; 
	   }
	return answer;
}










int main(){
	string s="[{()}]";
	myQueue<char> obj(s.length());
	
	if(obj.display(s)){
		cout<<"Equation is Valid "<<endl;
	}
    else{
    	cout<<"Equation is InValid "<<endl;
	}
	
	return 0;
}













