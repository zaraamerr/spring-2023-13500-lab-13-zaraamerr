//Zara Amer
//CSCI 135
//5/4/23
//Lab 13

#include <iostream>
#include <string>
#include "funcs.h"

//Task A: Write a function std::string printRange(int left, int right) that 
//prints all numbers in range left ≤ x ≤ right, separated by spaces. (Don’t use loops, global or static variables.)
//When left > right, the range is empty and the program should not print any numbers.

std::string printRange(int left, int right)
{
  if (left > right) //if true
  {
    return ""; //return empty str; NO PRINTING NUMS
  }
  else if (left == right) //if true
  {
    return std::to_string(left); //means there is only ONE num in the range & returns a str containing that num
  }
  else
  {
    return std::to_string(left) + " " + printRange(left + 1, right); //recursive call that returns all nums within the range
                                                                    //convert to str & concatenate w space char and then calls
                                                                    //itself again with the next num in the range. continues until
                                                                    //left == right.
  }
}

//Task B: Write a function int sumRange (int left, int right) that 
//computes the sum of all numbers in range left ≤ x ≤ right. (Don’t use loops, global or static variables.)
//What makes it different from the previous example, this function has to return the answer:
//if the range is empty, the sum is zero.
//Otherwise sum(left, right) = left + sum(left + 1, right).

int sumRange(int left, int right)
{
  if (left > right) //if true
  {
    return 0; //return 0 bc the sum of an empty range is 0
  }
  else if (left == right) //if true
  {
    return left; //means there's only ONE num in the range & returns that num bc the sum of a range w/ only one num is the num itself
  }
  else
  {
    return left + sumRange(left + 1, right); //recursive call that computes the sum of all the nums in the range
                                            //adds the left num to the sum of the rest of the nums in the range
                                            //continues until left == right
  }
}

//Task C: Write a function int sumArray(int *arr, int size) which receives an array (as a pointer to its first element) 
//and the size of the array, and should return the sum of its elements. The function itself should not do any new dynamic
//memory allocations. There are several approaches to this task.

int sumArray(int *arr, int size)
{
    return arr[0] + sumArray(arr + 1, size - 1); //recursive call that computes & returns the sum of all the elements in the array
                                                //adds the first element to the sum of the rest of the elements
                                                //continues until size == 0
}

//Task D: Write a new function bool isAlphanumeric (string s) which returns true if all chars
//in the str are letters and digits, otherwise returns false. The logic is similar to the sumRange function:
//if the str is empty, return true.
//Otherwise, check the first character, and check that the rest of the string is alphanumeric. 
//You may use the string function substr(pos, len), which extracts a substring. It takes two parameters, 
//the starting position and the length of the substring.

bool isAlphanumeric(std::string s)
{
  if (s.length() == 0) //if true
  {
    return true; //returns true bc an empty str is alphanumeric
  }
  else
  {
    if (isalnum(s[0])) //if true
    {
      return isAlphanumeric(s.substr(1, s.length() - 1)); //recursive call that checks if the rest of the str is alphanumeric
                                                          //continues until s.length() == 0
    }
    else
    {
      return false; //returns false bc the str is not alphanumeric
    }
  }
}

//Task E: Write a function bool nestedParens(string s) which returns true if the string is a sequence of nested parentheses:
//Strings "", "()", "(())", "((()))" … are all correct sequences and should return true. Any other symbols or mismatching parenthesis
//should make the function return false.

bool nestedParens(std::string s)
{
  if (s.length() == 0) //if true
  {
    return true; //returns true bc an empty str is a sequence of nested parens
  }
  else
  {
    if (s[0] == '(' && s[s.length() - 1] == ')') //if true
    {
      return nestedParens(s.substr(1, s.length() - 2)); //recursive call that checks if the rest of the str is a sequence of nested parens
                                                        //continues until s.length() == 0
    }
    else
    {
      return false; //returns false bc the str is not a sequence of nested parens
    }
  }
}