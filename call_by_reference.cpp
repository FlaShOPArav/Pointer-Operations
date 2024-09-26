//Arav Upadhyay
//23070123026
//AIM - do swapping using pass by reference.

#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    swap(a, b);
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    
    return 0;
}

/*
OUTPUT
The value of a is: 10
The value of b is: 5
*/
