#include "myArray.h"
int main(){
	myArray<int> obj(5);
	obj.addValue(15);
	obj.addValue(-3);
	
	cout<<"Display : "<<endl;
	obj.display();
	 
    myArray<char> obj2(3);
	obj2.addValue('A');
	obj2.addValue('z');
	obj2.addValue('@');
	obj2.addValue('@');
	cout << "Display: " << endl;
	obj2.display();
	
  myArray<string> obj3(7);
	obj3.addValue("data");
	obj3.addValue("Structures");
	obj3.addValue("lecture");
	obj3.addValue("D6");
    cout << "Display: " << endl;
	obj3.display();	


	
	
	
	
	
}