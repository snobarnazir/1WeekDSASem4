#include <iostream>
#include <string>
using namespace std;


template <class T>
class Abstractstack{
protected:
	T *arr;
	int maxsize;
	int currentsize;
public:
	Abstractstack(int size);
	~Abstractstack();
	virtual void push(T value) = 0;
	virtual bool isFull() = 0;
	virtual T pop() = 0;
	virtual T top() = 0;
	virtual bool IsEmpty() = 0;
	virtual T removevalue() = 0;
};


template <class T>
Abstractstack<T>::Abstractstack(int size){
	currentsize = 0;
	maxsize = size;
	arr = new T[maxsize];
}
template <class T>
Abstractstack<T>::~Abstractstack(){
	delete[]arr;
	arr = nullptr;
}


template <class T>
class mystack :public Abstractstack<T>{
public:
	mystack(int size);
	void push(T value);
	bool isFull();
	bool IsEmpty();
	T pop() = 0;
	T top() = 0;
	void display();

};


template <class T>
bool mystack<T>::isFull(){

	return Abstractstack<T>::currentsize == Abstractstack<T>::maxsize;
}
template <class T>
bool mystack<T>::IsEmpty(){
	if (Abstractstack<T>:: == 0){
		return true;
	}
	else{
		return false;
	}
}

template <class T>
void mystack<T>::push(T value){
	if (isFull()){
		cout << "The Abstractstack is full " << endl;
	}
	else{
		Abstractstack<T>::arr[Abstractstack<T>::currentsize] = value;
		Abstractstack<T>::currentsize++;
	}

}
template <class T>
T mystack<T>::top{
	return Abstractstack<T>::arr[0] ;

}template <class T>
T mystack<T>::pop{
	return Abstractstack<T>::arr[0];
	Abstractstack<T>::currentsize--;

}
template <class T>
T mystack<T>::removevalue(){
	Abstractstack<T>::currentsize--;
	return Abstractstack<T>::arr[Abstractstack<T>::currentsize];
}

template <class T>
void mystack<T>::display(){
	cout << "The maxsize " << Abstractstack<T>::maxsize << endl;
	cout << "The currentsize " << Abstractstack<T>::currentsize << endl;
	for (int i = Abstractstack<T>::currentsize; i>0; i--){
		cout << i << ". " << Abstractstack<T>::arr[i] << endl;
	}
}






void	 BracketMatchingFunction(string brac1,string brac2){
	if (brac1 == "("&&brac2 == ")"){
		cout << "Your entered brackects are correct " << endl;
	}
	 else if(brac1 == "("&&brac2 == ")"){
		cout << "Your entered brackects are correct " << endl;
	}
	 else if (brac1 == "("&&brac2 == ")"){
		cout << "Your entered brackects are correct " << endl;
	}
	 else{
		 cout << "Your entered brackects are not correct " << endl;
	 }

}

int main(){
	string brc1;
	string brc2;
	cout << "Options to enter brackets :" << endl;
	cout << "1.()" << endl;
	cout << "2.{}" << endl;
	cout << "3.[]" << endl;

	cout << "Enter the first bracket :" << endl;
	cin >> brc1;
	cout << "Enter the second bracket :" << endl;
	cin >> brc2;
	BracketMatchingFunction(brc1, brc2);



	mystack<int> obj(5);
	obj.push(15);
	obj.push(-3);

	cout << "Display : " << endl;
	obj.display();

	mystack<char> obj2(3);
	obj2.push('A');
	obj2.push('z');
	obj2.push('@');
	obj2.push('@');
	cout << "Display: " << endl;
	obj2.display();

	mystack<string> obj3(7);
	obj3.push("data");
	obj3.push("Structures");
	obj3.push("lecture");
	obj3.push("D6");
	cout << "Display: " << endl;
	obj3.display();


	

	return 0;
	system("pause"); 
}