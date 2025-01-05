#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////1.reverse the integervalue
/*void reverse(int n){
	if (n<10){
		cout<<n;
	}
	else{
		cout<<n%10;
		reverse(n/10);
	}
}*/
//random
///////////////////////////////////////////////////////////////////////////////////fibonacci number
/*
int fib(int n)
{
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    if (n > 2)
        return fib(n - 1) + fib(n - 2);
}
///////////////////////////////////////////////////////////////////////////////2.number of digits in integer value
int ND(int n)
{
    if (n > 0)
        return ND(n / 10) + 1;

    if (n == 0)
        return 0;
}

////////////////////////////////////////////////////////////////////////////////3.sum of integer value
int SoD(int n)
{
    if (n > 0)
        return SoD(n / 10) + (n%10);

    if (n == 0)
        return 0;
}
int function(int n){
	if (n==1){
		return 1;
	}
	else if(n%3==0){
	return function(n-1)+function(n/3);
	}
	else {
	return function(n-2)+n;
	}
}
//4.printnatural number
void printNaturalNumbers(int n) {
 
    if (n < 1) {
        return;
    }
    
    printNaturalNumbers(n - 1);
   
    cout << n << " ";
}
/////////////////////////////////////////////////////////////////////////array number summ
#include <iostream> // Including the Input/Output Stream Library

// Recursive function to calculate the sum of array elements
int arraySum(int arr[], int size) {
  // Base case: if the array is empty, return 0
  if (size == 0)
    return 0;

  // Recursive case: return the sum of the last element and the sum of the rest of the array
  return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initializing an array of integers
  int size = sizeof(nums) / sizeof(nums[0]); // Determining the size of the array

  std::cout << "Array elements: " << std::endl;
  // Loop through the array elements and display them
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  // Calculate the sum of the array elements using recursion
  int sum = arraySum(nums, size); // Calling the recursive function to get the sum

  std::cout << "\nSum of array elements using recursion: " << sum << std::endl; // Display the sum

  return 0; // Returning 0 to indicate successful execution of the program
}
/////////////////////////////////////////////////////////////////////////////////factorial of numbers

// Recursive function to calculate the factorial
int factorial(int n) {
  // Factorial of 0 or 1 is 1
  if (n == 0 || n == 1)
    return 1;

  // Recursive case: factorial of n is n multiplied by factorial of (n-1)
  return n * factorial(n - 1);
}

int main() {
  int num;
  std::cout << "Input a number: "; // Prompting the user to input a number
  std::cin >> num; // Reading the input number from the user

  // Calculate the factorial using recursion
  int fact = factorial(num); // Calling the recursive function to calculate factorial

  std::cout << "Factorial of " << num << " is: " << fact << std::endl; // Displaying the factorial

  return 0; // Returning 0 to indicate successful execution of the program
}
//////////////////////////////////////////////////////////////////////////////////////////////// sum of number 
// Recursive function to calculate the sum of digits
#include <iostream> // Including the Input/Output Stream Library

int sumOfDigits(int number) {
  // If the number is a single digit, return the number itself
  if (number >= 0 && number <= 9)
    return number;

  // Recursive case: Calculate the sum of the last digit and the sum of the rest of the digits
  return (number % 10) + sumOfDigits(number / 10);
}

int main() {
  int n;
  std::cout << "Input a number: "; // Prompting the user to input a number
  std::cin >> n; // Reading the input number from the user

  // Calculate the sum of digits using recursion
  int sum_digits = sumOfDigits(n); // Calling the recursive function to compute the sum of digits

  std::cout << "Sum of digits of " << n << " is: " << sum_digits << std::endl; // Displaying the sum of digits

  return 0; // Returning 0 to indicate successful execution of the program
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Recursive function to find the maximum  and minimum elements in an array
#include <iostream> // Including the Input/Output Stream Library

// Recursive function to find the maximum element in the array
int findMax(int nums[], int start, int end) {
  // Base case: when there is only one element, it is the maximum
  if (start == end)
    return nums[start];

  // Recursive case: divide the array in half and find the maximum in each half,
  // then return the maximum of the two halves
  int mid = (start + end) / 2;
  int max1 = findMax(nums, start, mid);
  int max2 = findMax(nums, mid + 1, end);

  return (max1 > max2) ? max1 : max2;
}

// Recursive function to find the minimum element in an array
int findMin(int nums[], int start, int end) {
  // Base case: when there is only one element, it is the minimum
  if (start == end)
    return nums[start];

  // Recursive case: Divide the array in half and find the minimum in each half,
  // then return the minimum of the two halves
  int mid = (start + end) / 2;
  int min1 = findMin(nums, start, mid);
  int min2 = findMin(nums, mid + 1, end);

  return (min1 < min2) ? min1 : min2;
}

int main() {
  int nums[] = { 9, 2, 4, 0, 2, 2, 3, 4, 5, 7 }; // Initializing an array with elements
  int size = sizeof(nums) / sizeof(nums[0]); // Calculating the size of the array

  std::cout << "Array elements: " << std::endl;
  // Loop through the array elements and display them
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  // Find the maximum and minimum elements in the array using recursion
  int max = findMax(nums, 0, size - 1);
  int min = findMin(nums, 0, size - 1);

  std::cout << "\nMaximum element: " << max << std::endl; // Display the maximum element
  std::cout << "Minimum element: " << min << std::endl; // Display the minimum element

  return 0; // Returning 0 to indicate successful execution of the program
}
///////////////////////////////////////////////////////////////////////reverse string
#include <iostream>
#include <string>

using namespace std;

// Recursive function to reverse a string
void reverseString(string &str, int start, int end) {
    // Base case: when start index is greater than or equal to end index
    if (start >= end)
        return;

    // Manually reverse the characters at start and end indices
    char temp = str[start]; // Store the character at start
    str[start] = str[end];  // Assign the character at end to start
    str[end] = temp;        // Assign the stored character to end

    // Recursive case: move towards the middle of the string
    reverseString(str, start + 1, end - 1);
}

int main() {
    string text; // Variable to store user input
    cout << "Input a string: ";
    getline(cin, text); // Taking input from the user

    // Call the recursive function to reverse the string
    reverseString(text, 0, text.length() - 1);

    cout << "Reversed String: " << text << endl; // Output the reversed string
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
// Recursive function to calculate the power of a number
#include <iostream> // Including the Input/Output Stream Library

// Recursive function to calculate the power of a number
int power(int b, int e) {
  // Base case: Any number raised to the power of 0 is 1
  if (e == 0)
    return 1;

  // Recursive case: Calculate the power using recursion
  // by multiplying the base with the power of (exponent - 1)
  return b * power(b, e - 1);
}

int main() {
  int b, e; // Declaring variables for base and exponent

  std::cout << "Input the base number: ";
  std::cin >> b; // Taking input for the base number

  std::cout << "Input the exponent: ";
  std::cin >> e; // Taking input for the exponent

  // Calculate the power using recursion
  int result = power(b, e); // Storing the result of the power calculation

  // Display the result
  std::cout << b << " raised to the power of " << e << " is: " << result << std::endl;

  return 0; // Returning 0 to indicate successful execution of the program
}
///////////////////////////////////////////////////////////////////////////////reverse string and palindrome
#include <iostream>
#include <string>

using namespace std;

// Recursive function to reverse a string
void reverseString(string &str, int start, int end) {
    // Base case: when start index is greater than or equal to end index
    if (start >= end)
        return;

    // Manually swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive case: move towards the middle of the string
    reverseString(str, start + 1, end - 1);
}

// Function to check if a string is a palindrome
bool isPalindrome(const string &str) {
    int n = str.length();
    
    // Check characters from both ends towards the center
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) {
            return false; // Not a palindrome
        }
    }
    return true; // Is a palindrome
}

int main() {
    string text; // Variable to store user input
    cout << "Input a string: ";
    getline(cin, text); // Taking input from the user

    // Check if the original string is a palindrome
    if (isPalindrome(text)) {
        cout << "\"" << text << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << text << "\" is not a palindrome." << endl;
    }

    // Call the recursive function to reverse the string
    reverseString(text, 0, text.length() - 1);

    cout << "Reversed String: " << text << endl; // Output the reversed string
    return 0;
}/////////////////////////////////////////////////linkedlist reverse
#include <iostream>

using namespace std;

// Definition of a Node in the linked list
class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

// Function to reverse the linked list recursively
Node* reverseList(Node* head) {
    // Base case: if head is null or only one node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    // Reverse the rest of the linked list
    Node* newHead = reverseList(head->next);
    
    // Make the current head the last node
    head->next->next = head;
    head->next = nullptr; // Set next of current head to null
    
    return newHead; // Return new head of the reversed list
}

// Function to check if the linked list is a palindrome
bool isPalindrome(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    // Find the middle of the linked list
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        Node* nextSlow = slow->next; // Store next node
        slow->next = prev; // Reverse the first half
        prev = slow; // Move prev forward
        slow = nextSlow; // Move slow forward
    }

    // If the length is odd, skip the middle element
    if (fast != nullptr) {
        slow = slow->next;
    }

    // Compare reversed first half and second half
    while (prev != nullptr && slow != nullptr) {
        if (prev->data != slow->data) {
            return false; // Not a palindrome
        }
        prev = prev->next;
        slow = slow->next;
    }

    return true; // Is a palindrome
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 2 -> 1 -> nullptr
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);

    cout << "Original Linked List: ";
    printList(head);

    // Check if it is a palindrome
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    // Reverse the linked list
    head = reverseList(head);
    
    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}///////////////////////////////////////////////////////////////////////////////////////////////////////
// Recursive function to find the greatest common divisor (GCD) of two numbers
#include <iostream>

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int x, int y) {
  // Base case: if either number is 0, return the other number as the GCD
  if (x == 0)
    return y;
  if (y == 0)
    return x;

  // Recursively find the GCD by calling the function with (y, x % y)
  return gcd(y, x % y);
}

int main() {
  int n1, n2;
  std::cout << "Input the first number: ";
  std::cin >> n1;
  std::cout << "Input the second number: ";
  std::cin >> n2;

  // Calculate the GCD using recursion
  int result = gcd(n1, n2);

  std::cout << "The GCD of " << n1 << " and " << n2 << " is: " << result << std::endl;

  return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Recursive function to count the number of occurrences of a specific element in an array
#include <iostream>

// Function to count occurrences of a specific element in an array
int countOccurrences(int nums[], int size, int element) {
  // Base case: if the array is empty, return 0
  if (size == 0)
    return 0;

  // Recursive case: if the first element matches the target element,
  // increment the count and recursively search in the rest of the array
  if (nums[0] == element)
    return 1 + countOccurrences(nums + 1, size - 1, element);
  else
    return countOccurrences(nums + 1, size - 1, element);
}

int main() {
  int nums[] = {3, 4, 5, 7, 3, 9, 5, 3, 5, 9, 3, 4, 3, 5};
  int size = sizeof(nums) / sizeof(nums[0]);
  std::cout << "Array elements: " << std::endl;
  // loop through the array elements
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  int element;
  std::cout << "\nCount the number of occurrences of a specific element in the said array:";
  std::cout << "\nInput an element: ";
  std::cin >> element;

  // Count the occurrences of the element using recursion
  int count = countOccurrences(nums, size, element);

  std::cout << "Number of occurrences of " << element << ": " << count << std::endl;

  return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
// Recursive function to calculate the product of two numbers without using the multiplication operator
#include <iostream>

// Recursive function to multiply two numbers without using the multiplication operator
int multiply(int x, int y) {
  // Base case: if either number is 0, the product is 0
  if (x == 0 || y == 0)
    return 0;

  // Recursive case: recursively add x to the product of (x, y - 1)
  // when y is positive, or recursively add (-x) to the product of (x, y + 1)
  // when y is negative
  if (y > 0)
    return x + multiply(x, y - 1); // Positive y: add x to the product
  else
    return -x + multiply(x, y + 1); // Negative y: add (-x) to the product
}

int main() {
  int n1, n2;
  std::cout << "Input the first number: ";
  std::cin >> n1;
  std::cout << "Input the second number: ";
  std::cin >> n2;

  // Calculate the product using recursion
  int result = multiply(n1, n2);

  std::cout << "Product of " << n1 << " and " << n2 << ": " << result << std::endl;

  return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Recursive function to calculate the sum of even and odd numbers in a range
#include <iostream>

// Recursive function to calculate the sum of even and odd numbers within a given range
void calculate_even_odd_Sum(int start, int end, int & evenSum, int & oddSum) {
  // Base case: If start becomes greater than end, stop the recursion
  if (start > end)
    return;

  // Recursive case: add the current number to the appropriate sum
  if (start % 2 == 0)
    evenSum += start; // Add the current number to the even sum
  else
    oddSum += start; // Add the current number to the odd sum

  // Recursively call the function with the next number in the range
  calculate_even_odd_Sum(start + 1, end, evenSum, oddSum);
}

int main() {
  int start, end;
  std::cout << "Input the starting number: ";
  std::cin >> start;
  std::cout << "Input the ending number: ";
  std::cin >> end;

  int even_Sum = 0;
  int odd_Sum = 0;

  // Calculate the sum of even and odd numbers using recursion
  calculate_even_odd_Sum(start, end, even_Sum, odd_Sum);

  std::cout << "Sum of even numbers: " << even_Sum << std::endl;
  std::cout << "Sum of odd numbers: " << odd_Sum << std::endl;

  return 0;
}
////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// Recursive function to check if a number is prime
bool isPrime(int number, int divisor = 2) {
    // Base cases
    if (number <= 2) return (number == 2);
    if (number % divisor == 0) return false;
    if (divisor * divisor > number) return true;

    // Recursive case: check divisibility with the next divisor
    return isPrime(number, divisor + 1);
}

// Recursive function to find the sum of all prime numbers in a range
int sumOfPrimes(int start, int end) {
    // Base case: if start exceeds end, stop recursion
    if (start > end) return 0;

    // Check if the current number is prime
    int sum = isPrime(start) ? start : 0;

    // Recursively call the function with the next number in the range
    return sum + sumOfPrimes(start + 1, end);
}

int main() {
    int start, end;

    cout << "Input the starting number: ";
    cin >> start;
    cout << "Input the ending number: ";
    cin >> end;

    // Calculate the sum of prime numbers using recursion
    int sum = sumOfPrimes(start, end);

    cout << "Sum of prime numbers in the range [" << start << ", " << end << "]: " << sum << endl;

    return 0;
}
*/

int main(){
	int n=6;
	cout<<function(n);
	//cout<<1%10;
	return 0;
}