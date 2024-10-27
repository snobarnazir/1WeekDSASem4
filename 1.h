#include <iostream>
using namespace std;
class stack{
	protected:
		int currentsize=0;
		int maxsize;
		int *arr;
	public:
		stack(){}
		stack(int size);
		virtual void push(int value)=0;
		virtual void display()=0;
		virtual void pop()=0;
		virtual bool IsEmpty()=0;
		virtual bool IsFull()=0;
		

};
class stackderived:public stack{
	public:
		stackderived(){}
		stackderived(int size):stack(size){};
		void push(int value);
		void pop();
		bool IsEmpty();
        bool IsFull();
		void display();
	
};