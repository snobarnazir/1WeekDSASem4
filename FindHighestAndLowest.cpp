#include<iostream>
using namespace std;
template <class T>
void sort(T arr[],int size){
	
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				T temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	
	int size=5;

	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,size);
	cout<<"Highest :"<<arr[size-1]<<endl;
	cout<<"Lowest  :"<<arr[0]<<endl;
	
	return 0;
}