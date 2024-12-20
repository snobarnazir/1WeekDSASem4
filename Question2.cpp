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
    virtual T top()=0;
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
	T top();
    bool isEmpty();
    bool isFull();
    string InfinixToPrefix(string array);
		
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
T mystack<T>::top(){
  
  return stack<T>::arr[stack<T>::currentsize];
		
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
		
	T value=stack<T>::arr[stack<T>::currentsize];
     stack<T>::currentsize--;
     return value;
	}
  	
}

template <class T>
string mystack<T>::InfinixToPrefix(string array){
  
	  
	string returnvalue;
	mystack<char> obj(array.length());
	
	for(int i=0;i<array.length();i++){
		
	
		if(isdigit(array[i])||array[i]==' '){
			returnvalue+=array[i];
		}
		
		else if(array[i]=='('||array[i]=='+'||array[i]=='-'||array[i]=='/'||array[i]=='*'){
		  obj.push(array[i]);
		  }
                        
		else if(array[i]==')'){
	         while(!obj.isEmpty()&&obj.top()!='('){
			returnvalue+=obj.top();  
			obj.pop();
			                      
			}	
		}
			
		
		
	  else if(!obj.isEmpty()){
			returnvalue+=obj.top();
			obj.pop();
		}	
}
	return returnvalue;
	  
}


int main(){
	
	 string  array="( ( ( 12 + 13 ) * ( 20 - 30 ) ) / ( 811 + 99 ) )";
	 mystack<string> obj(array.length());
     cout<<obj.InfinixToPrefix(array)<<endl;
   	return 0;
}













