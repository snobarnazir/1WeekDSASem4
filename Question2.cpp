#include <iostream>
using namespace std;
template <typename T>
class List{
	protected:
		int currentsize=0;
		int maxsize;
		T *arr;
	public:
		List() {};
		List(int size);
		~List();
		List(List &ob);
		virtual void AddValue(int value)=0;
	    virtual void RemoveElement() = 0;
		virtual bool IsFull()=0;
		virtual bool IsEmpty()=0;
		virtual bool insertAt(int index, int value) = 0;
		virtual int last() = 0;
		virtual	bool search(int) = 0;

		virtual void display() = 0;
		
		


};
List::List(int size){
	arr=new T[size];
	maxsize=size;
	currentsize=0;

}
List::~List(){
			delete arr;
		}
List::List(List &ob) {
	arr = ob.arr;
	maxsize = ob.maxsize;
	currentsize = ob.currentsize;
}
template <typename T>
class MyList:public List{
	public:
		MyList(){}
		MyList(int size):List(size){};
		void AddValue(int value) ;
	    void RemoveElement() ;
		bool IsFull();
		bool IsEmpty();
		bool insertAt(int index, int value) ;
	    int last() ;
		bool search(int) ;
	    void display() ;
		

};


void MyList::AddValue(int value){
	arr[currentsize]=value;
	currentsize++;
}


void MyList::RemoveElement(){
	arr[currentsize]=0;
	currentsize--;
}
bool MyList::IsFull() {

	if (currentsize > maxsize) {
		return true;
	}
	else {
		return false;
	}
}
bool MyList::IsEmpty() {
	if (currentsize == 0) {
		return true;
	}
	else {
		return false;
	}
}
bool  MyList::insertAt(int index, int value) {
	if (maxsize > index) {
		arr[index] = value;
		
		return true;
	}
	else {
		cout << "The index is greater than size of array." << endl;
		return false;
	}
	
	

}
int MyList::last() {
	int lastvalue = arr[currentsize-1];
	return lastvalue;

}

void MyList::display(){
	cout<<"Current size :"<<currentsize<<endl;
	cout<<"Total size :"<<maxsize<<endl;
	

	if (IsEmpty() || IsFull()) {
		cout << "The Array is Empty/overfilled " << endl;
	}
	else {
		for (int i = 0; i <currentsize; i++) {
			cout << arr[i] << endl;
		}

	}


}
bool MyList::search(int valuetofind) {
	
	for (int i = 0; i < currentsize; i++) {
		if (arr[i] = valuetofind) {
			return true;
		}
		
	}
	for (int i = 0; i < currentsize; i++) {
		if (arr[i] != valuetofind) {
			return false;
		}

	}
	 

	

}





int main(){

	MyList obj(5);
	obj.AddValue(1);
	obj.AddValue(2);
	obj.AddValue(3);
	obj.AddValue(3);
	obj.AddValue(3);
	obj.insertAt(4, 67);
	obj.display();
	
	cout << "Last value  " << obj.last() << endl;
	obj.search(14) ;

	
   
	
	return 0;
	system("pause");
}