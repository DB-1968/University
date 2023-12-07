#pragma once
#include <span>
#include <iostream>

struct DynamicArray {
    int* buffer; //  указатель на буфер, который хранит элементы массива.
    int length; // текущее количество элементов в массиве.
    int capacity; // максимальная длина буфера
};

DynamicArray createDynamicArrayWithCapacity(int capacity); // Cream un array dinamic cu lungimea maximala setata cu variabila capacity


DynamicArray createDynamicArray(); // Cream un array dinamic cu lungimea maximala default 7

void addElementToArray(DynamicArray& arr, int element); //  adaugam un element la sfarsitul array-ului, daca el este plin, dublam lungimea lui


int getElementAtIndex(const DynamicArray& arr, int index); // intoarcem elementul dupa indexul dat din array


std::span<int> getCurrentSpan(const DynamicArray& arr);


void clearDynamicArray(DynamicArray& arr); // elibereaza memoria, alocata pentru buferul array-ului
