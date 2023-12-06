#include <stdlib.h>
#include <iostream>

struct TwoInts
{
    int a;
    int b;
};

struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // Creaza o instantiere a structurii si initializeaza campurile ei
    TwoInts i2 = { };
    i2.a = 5;
    i2.b = 7;

    // Afiseaza valorile campurilor structurii
    std::cout << i2.a << std::endl;
    std::cout << i2.b << std::endl;

    // Creaza o instantiere a structurii StructWithArray si initializeaza primul element
    StructWithArray s = { };
    s.arr[0] = 10;

    // Creaza inca o instantiere a structurii StructWithArray si initializeaza primul element
    StructWithArray s1 = { };
    s1.arr[0] = 15;

    // Creaza pointer SPointer care are adresa la structura s
    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;

    // Afiseaza valoarea primului element din array s prin pointer ( Va fi afisat 20)
    std::cout << s.arr[0] << std::endl;

    // Schimba valoarea primului element din array s ( va fi afisat 25)
    s.arr[0] = 25;
    std::cout << s.arr[0] << std::endl;

    // Schimba valoarea primului element array s prin sPointer ( va fi afisat 30)
    sPointer->arr[0] = 30;
    std::cout << s.arr[0] << std::endl;

    // Schimba adresa la care arata pointerul sPointer pe structura s1
    sPointer = &s1;

    // Schimba valoarea primului element din array s1 cu 35 prin sPointer 
    sPointer->arr[0] = 35;

    // Afiseaza valoarea primului element din array s ( va fi afisat 30)
    std::cout << s.arr[0] << std::endl;

    // Afiseaza valoarea primului element din array s1 (va fia afisat 35)
    std::cout << s1.arr[0] << std::endl;

    //Cream un array structArray de tip StructWithArray cu 2 elemente si le initializam
    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;
    structArray[1].someNumber = &structArray[0].arr[3];

    // Schimba adresa la care arata pointerul pe structura s
    sPointer = &s;

    // Creaza un pointer "pointer", care are adresa la al 4 element din array s
    int* pointer = &sPointer->arr[3];

    // Schimba valoarea elementului al 4-lea din array s in 72
    s.arr[3] = 72;

    // Afiseaza valoarea la carea arata pointer
    std::cout << *pointer;

    // Creaza structura memory si o incarca memoria ei cu 0
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));
    return 0;
}