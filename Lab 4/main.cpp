#include "dynamicArray.h"
#include <algorithm>
#include <cassert>


void test1()
{
    DynamicArray arr = createDynamicArrayWithCapacity(10);
    assert(arr.capacity == 10);
}

void test2()
{
    //Cream un array dinamic cu capacitate implicită(4) și adăugăm un element
    DynamicArray arr = createDynamicArray();
    assert(arr.length == 0); // array - ul este gol
    addElementToArray(arr, 5); // adăugăm un element 
    assert(arr.length == 1); // Verificăm că lungimea array-ului a crescut cu 1
}

void test3()
{
    // Cream un array dinamic cu capacitate inițială 1 și adăugăm elemente
    DynamicArray arr = createDynamicArrayWithCapacity(1);
    addElementToArray(arr, 5);
    assert(arr.capacity == 1);
    addElementToArray(arr, 10);
    assert(arr.capacity == 2);
    addElementToArray(arr, 20);
    assert(arr.capacity == 4);
}

void test4()
{
    DynamicArray arr = createDynamicArray();
    addElementToArray(arr, 5);
    int el = getElementAtIndex(arr, 0);
    assert(el == 5); //// Verificăm că elementul obținut este egal cu 5
}

void test5()
{
    DynamicArray arr{};
    addElementToArray(arr, 5);
    addElementToArray(arr, 6);
    addElementToArray(arr, 7);

    std::span<int> span = getCurrentSpan(arr);

    assert(span.size() == 3);
    assert(span[0] == 5);
    assert(span[1] == 6);
    assert(span[2] == 7);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();

    std::cout << "Toate testele au trecut" << std::endl;

    return 0;
}