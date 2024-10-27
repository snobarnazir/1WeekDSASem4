#include"1.h"
stack::stack(int size){
	arr=new int[size];
	maxsize=size;
	currentsize=0;
	
}
bool stackderived::IsEmpty(){
		if (currentsize==0){
			return true;
		}
		else{
			return false;
		}
		}
bool stackderived::IsFull(){
		
		if (currentsize>maxsize){
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
}