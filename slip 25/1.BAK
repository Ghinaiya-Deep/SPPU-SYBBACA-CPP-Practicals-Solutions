#include <iostream.h>
#include<stdlib.h>
#include<conio.h>



// Inline function to calculate the mean
inline float calculateMean(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

// Inline function to calculate the median
inline float calculateMedian(int a, int b, int c) {
    int arr[3] = {a, b, c};

    return arr[1];
}

// Inline function to calculate the mode
inline int calculateMode(int a, int b, int c) {
    if (a == b && b == c)
        return a;
    else if (a == b || b == c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3;
    clrscr();

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    float mean = calculateMean(num1, num2, num3);
    float median = calculateMedian(num1, num2, num3);
    int mode = calculateMode(num1, num2, num3);

    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;
    getch();
    return 0;
}