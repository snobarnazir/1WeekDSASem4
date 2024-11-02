#include <iostream>
#include <string>
using namespace std;
template <class T>
class Array{
protected:
		T *arr;
		int maxsize;
	    int currentsize;
public:
		Array(int size);
		~Array();
		virtual void addvalue(T value)=0;
		virtual bool isFull()=0;
		virtual T removevalue()=0;
};
template <class T>
Array<T>::Array(int size){
	currentsize=0;
	maxsize=size;
	arr=new T[maxsize];
}
template <class T>
Array<T>::~Array(){
	delete []arr;
	arr=nullptr;
}


template <class T>
class myArray:public Array<T>{
	public:
		myArray(int size);
		void addvalue(T value);
		bool isFull();
		T removevalue();
		void display();
	
};


template <class T>
bool myArray<T>::isFull(){
	
	return Array<T>::currentsize==Array<T>::maxsize;
}


template <class T>
void myArray<T>::addvalue(T value){
	if(isFull()){
		cout<<"The array is full "<<endl;
	}
	else{
	Array<T>::arr[Array<T>::currentsize]=value;
	Array<T>::currentsize++;
	}

}

template <class T>
T myArray<T>::removevalue(){
	Array<T>::currentsize--;
	return Array<T>::arr[Array<T>::currentsize];
}

template <class T>
void myArray<T>::display(){
	cout<<"The maxsize "<<Array<T>::maxsize<<endl;
	cout<<"The currentsize "<<Array<T>::currentsize<<endl;
	for(int i=0;i<Array<T>::currentsize;i++){
		cout<<i<<". "<<Array<T>::arr[i]<<endl;
	}
}














