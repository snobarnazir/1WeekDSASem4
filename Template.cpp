 #include <iostream>
using namespace std;
template <class T>
class Number {
   private:
    T num;
  public:
    Number(T n);  
    T getNum();
   
};
template <class T>
T Number<T>::getNum() {
    return num;
}
template <class T>
Number<T>::Number(T n) {
	num=n;
}


int main() {

    Number<int> numberInt(7);
    Number<double> numberDouble(7.7);

    cout << "Int Number = " << numberInt.getNum() << endl;
    cout << "Double Number = " << numberDouble.getNum() << endl;

    return 0;
}