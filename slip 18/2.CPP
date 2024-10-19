/* create a c++ class myarr with data member int *arr,int size. write necessary
function to accept and display array elements. overload  following operators :
example=(unary),
a2=a+n add constants n to all array elements. */






#include <iostream.h>
#include<conio.h>
class MyArray {
private:
    int *arr;
    int size;

public:
    // Constructor
    MyArray(int s) : size(s) {
        arr = new int[size];
    }

    // Destructor
    ~MyArray() {
        delete[] arr;
    }

    // Function to accept array elements
    void acceptElements() {
int i;
        cout << "Enter " << size << " elements:\n";
        for ( i = 0; i < size; ++i) {
        cin >> arr[i];
        }
    }

    // Function to display array elements
    void displayElements() {  
int i;
        cout << "Array elements are:\n";
        for ( i = 0; i < size; ++i) {
        cout << arr[i] << " ";
        }
        cout << std::endl;
    }

    // Overloading unary operator to reverse array elements
    MyArray operator-() {
int i;        
MyArray temp(size);
        for ( i = 0; i < size; ++i) {
            temp.arr[i] = arr[size - 1 - i];
        }
        return temp;
    }

    // Overloading unary operator to add a constant to all array elements
    MyArray operator+(int n) { 
	int i;
        MyArray temp(size);
        for (i = 0; i < size; ++i) {
            temp.arr[i] = arr[i] + n;
        }
        return temp;
    }
};

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    MyArray arr(size);
    arr.acceptElements();

    // Display original array
    cout << "Original ";
    arr.displayElements();

    // Reverse array elements
    MyArray reversedArr = -arr;
    cout << "Reversed ";
    reversedArr.displayElements();

    // Add constant to array elements
    int constant;
    cout << "Enter constant to add to array elements: ";
    cin >> constant;
    MyArray modifiedArr = arr + constant;
    cout << "Modified ";
    modifiedArr.displayElements();
    getch();	
    return 0;
}
