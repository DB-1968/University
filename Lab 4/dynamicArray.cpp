#include "dynamicArray.h"
#include <cassert>
#include <algorithm>

//functia care creaza array dinamic cu lungimea maximala cu variabila capacity
DynamicArray  createDynamicArrayWithCapacity(int capacity)
{
	DynamicArray arr;
	arr.buffer = new int[capacity];
	arr.length = 0;
	arr.capacity = capacity;
	return arr;
}

// functia care creaza array dinamic cu lungimea maximala default 7
DynamicArray createDynamicArray()
{
	return createDynamicArrayWithCapacity(7);
}

// functia care adauga un element la sfarsitul array-ului
void addElementToArray(DynamicArray& arr, int element)
{
	if (arr.length == arr.capacity) // verificam daca array-ul este plin
	{
		int newCapacity = arr.capacity <= 0 ? 1 : arr.capacity * 2;
		int* newBuffer = new int[newCapacity];
		std::copy(arr.buffer, arr.buffer + arr.length, newBuffer);
		delete[] arr.buffer;
		arr.buffer = newBuffer;
		arr.capacity = newCapacity;
	}

	arr.buffer[arr.length] = element;
	arr.length++;
}

int getElementAtIndex(const DynamicArray& arr, int index) {
	assert(index >= 0 && index < arr.length);
	return arr.buffer[index];
}

std::span<int> getCurrentSpan(const DynamicArray& arr) {
	return  std::span<int>(arr.buffer, arr.length);
}

void clearDynamicArray(DynamicArray& arr)
{
	delete[] arr.buffer;
	arr.buffer = nullptr;
	arr.length = 0;
	arr.capacity = 0;
}