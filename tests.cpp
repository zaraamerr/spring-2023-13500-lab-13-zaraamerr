#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A: printRange"){
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(1, 1) == "1");
    CHECK(printRange(0, -1) == ""); 
}

TEST_CASE("Task B: sumRange"){
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(1, 1) == 1);
    CHECK(sumRange(0, -1) == 0); 
}

TEST_CASE("Task C: sumArray"){
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

    CHECK(sumArray(arr, size) == 43);
    CHECK(sumArray(arr, 5) == 34);

    delete[] arr; // deallocate it
}

TEST_CASE("Task D: isAlphanumeric"){
    CHECK(isAlphanumeric("") == 1);
    CHECK(isAlphanumeric("ABC") == 1);
    CHECK(isAlphanumeric("Abc123") == 1);
    CHECK(isAlphanumeric("-9-1-7-") == 0);
}

TEST_CASE("Task E: nestedParens"){
    CHECK(nestedParens("((()))") == 1);
    CHECK(nestedParens("()") == 1);
    CHECK(nestedParens("") == 1);
    CHECK(nestedParens("(((") == 0);
    CHECK(nestedParens("(()") == 0);
    CHECK(nestedParens(")(") == 0);
    CHECK(nestedParens("a(b)c") == 0);
}