//Zara Amer
//CSCI 135
//5/4/23
//Lab 13

#include <iostream>
#include <string>
#include "funcs.h"

//Task A: Write a function std::string printRange(int left, int right) that 
//prints all numbers in range left ≤ x ≤ right, separated by spaces. (Don’t use loops, global or static variables.)

std::string printRange(int left, int right)
{
  if (left == right)
  {
    return std::to_string(left);
  }
  else
  {
    return std::to_string(left) + " " + printRange(left + 1, right);
  }
}