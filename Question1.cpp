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
		virtual void AddValueFromStart(int value)=0;
		virtual void AddValueFromEnd(int value) = 0;
		virtual void RemoveElementFromStart()=0;
		virtual void RemoveElementFromEnd() = 0;
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

List(List& ob) {
	arr =ob.arr;
	maxsize = ob.maxsize;
	currentsize = ob.currentsize;
}
template <typename T>
class Listderived:public List<T>{
	public:
		Listderived(){}
		Listderived(int size):List(size){};
		void AddValueFromStart(int value) ;
	    void AddValueFromEnd(int value) ;
	    void RemoveElementFromStart() ;
	    void RemoveElementFromEnd() ;
	    void display();
		

};


void Listderived::AddValueFromStart(int value){
	arr[currentsize]=value;
	currentsize++;
}
void Listderived::AddValueFromEnd(int value) {
	arr[maxsize-1] = value;

}

void Listderived::RemoveElementFromEnd(){
	arr[currentsize]=0;
	currentsize--;
}
void Listderived::RemoveElementFromStart() {
	arr[0] = 0;
	
}
void Listderived::display(){
	cout<<"Current size :"<<currentsize<<endl;
	cout<<"Total size :"<<maxsize<<endl;
	

		for(int i=0;i<maxsize;i++){
		cout<<arr[i]<<endl;
	}


}





int main(){

	Listderived<int> obj(5);
	obj.AddValueFromStart(1);
	obj.AddValueFromStart(2);
	obj.AddValueFromStart(3);
	obj.AddValueFromStart(4);
	obj.AddValueFromEnd(5);
	obj.RemoveElementFromEnd();
	obj.RemoveElementFromStart();

    obj.display();
	
	return 0;
	system("pause");
}