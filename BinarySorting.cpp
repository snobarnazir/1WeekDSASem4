#include <iostream>
#include <string>                                                                                                                                                                        
using namespace std;
bool is_search(int value){
	int arr[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int lower=0;
	int higher=15;
	int mid=0;
	
	while(lower<=higher){
		mid=(lower+higher)/2;
		
		if(arr[mid]==value){
			
			return true;
		}
		if(arr[mid]<value){
			lower=mid+1;
		}
		else if(arr[mid]>value){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
			higher=mid-1;
		}
	}
	return false;
}
int main(){
	if(is_search(4)){
	cout<<"value found "<<endl;	
	}
	else{
		cout<<"value not found "<<endl;		
	}
	return 0;
}