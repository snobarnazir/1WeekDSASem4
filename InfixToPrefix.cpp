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
    void display(string arr,int size);
    int precedence(char ch);
    string InfinixToPrefix(char array[]);
		
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
		
	T value=	stack<T>::arr[stack<T>::currentsize];
     stack<T>::currentsize--;
     return value;
	}
  	
}
template <class T>
int mystack<T>::precedence(char ch){
	if(ch=='^'){
		return 3;
	}
	else if(ch=='/'||ch=='*'){
		return 2;
	}
	else if(ch=='+'||ch=='-'){
		return 1;
	}
	else{
		return -1;
	}
}
template <class T>
string mystack<T>::InfinixToPrefix(char array[]){
  
	 int j=0;   
	char returnvalue[sizeof(array)];
	mystack<char> obj(sizeof(array));
	
	for(int i=sizeof(array);i>=0;i++){
		
		if((array[i]>='a'&&array[i]<='z')||(array[i]>='A'&&array[i]<='Z')){
	 		returnvalue[++j]=array[i];
		}
		
		else if(array[i]==')'){
		  obj.push(array[i]);
		  }
		                          
		else if(array[i]=='('){
			while(!obj.isEmpty()&&obj.top()!=')'){
			returnvalue[++j]=obj.top();  
			obj.pop();	                      
			}
			if(!obj.isEmpty()){
				obj.pop();
			}
		}
	    else{
	    	while(!obj.isEmpty()&&precedence(obj.top())>=precedence(array[i])){
	    returnvalue[++j]=obj.top();
			obj.pop();
			}
			obj.push(array[i]);
		}
	}
		while(!obj.isEmpty()){
	    	returnvalue[++j]=obj.top();
			obj.pop();
			}
		string  returnvalue2;
		int l=0;
    	for(int i=sizeof(array);i>=0;i++){
		    returnvalue2[l++]=returnvalue[i];  
		}
    
	return returnvalue2;
	  
}


int main(){
	
	 char  array[]="(a-b/c)*(a/k-l)";
	 mystack<string> obj(sizeof(array));
    cout<<obj.InfinixToPrefix(array)<<endl;
    

   
	
	return 0;
}













