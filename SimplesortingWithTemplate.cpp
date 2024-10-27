/*#include<iostream>
using namespace std;
//#define N 3


template <class T>
void sort(T arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	int size=5;
	int int_array[size];
	float float_array[size];
	cout << "Entner integer array elements:" << endl;
	for (int i = 0; i <size; i++)
	{
		cin >> int_array[i];
	}
	cout << "Entner floating array elements:" << endl;
	for (int i = 0; i <size; i++)
	{
		cin >> float_array[i];
	}
	sort(int_array, size);
	sort(float_array,size);
	cout << "After sorting they are :" << endl;
	for (int i = 0; i <size; i++)
	{
		cout << int_array[i] << ", ";
	}
	cout << endl;
	for (int i = 0; i <size; i++)
	{
		cout << float_array[i] << ", ";
	}
	return 0;
}*/
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

/*	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,size);
		for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}*/
/*	float arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,size);
		for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
  */ 
/* 	char arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,size);
		for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}*/
	string arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,size);
		for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
   return 0;	
}

















