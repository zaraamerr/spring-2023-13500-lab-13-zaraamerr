//Zara Amer
//CSCI 135
//5/4/23
//Lab 13

#include <iostream>
#include <string>
#include "funcs.h"

int main() {
    //test Task A
    std::cout << "printRange(-2, 10) = " << printRange(-2, 10) << std::endl; //(-2,-1,0,1,2,3,4,5,6,7,8,9,10)

    //test Task B
    std::cout << "sumRange(-2, 10) = " << sumRange(-2, 10) << std::endl; //52

    //test Task C
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std:: cout << "Sum is " << sum1 << std::endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

    delete[] arr; // deallocate it

    //test Task D
    std::cout << "isAlphanumeric(\"ABC\") = " << isAlphanumeric("ABC") << std::endl; //1
    std::cout << "isAlphanumeric(\"Abc123\") = " << isAlphanumeric("Abc123") << std::endl; //1
    std::cout << "isAlphanumeric(\"-9-1-7-\") = " << isAlphanumeric("-9-1-7-") << std::endl; //0

    //test Task E
    std::cout << nestedParens("((()))") << std::endl;      // true (1)
    std::cout << nestedParens("()") << std::endl;          // true (1)
    std::cout << nestedParens("") << std::endl;            // true (1)
    std::cout << nestedParens("(((") << std::endl;         // false (0)
    std::cout << nestedParens("(()") << std::endl;         // false (0)
    std::cout << nestedParens(")(") << std::endl;          // false (0)
    std::cout << nestedParens("a(b)c") << std::endl;       // false (0)

}