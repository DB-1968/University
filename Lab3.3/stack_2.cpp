#include <stdlib.h>
#include <iostream>

int* stackMemory1() // funcție ce returnează un pointer la o valoare întreagă
{
    int a = 1; // Declararea și inițializarea variabilei a cu valoarea 1
    return &a; // Returnarea pointerului către variabila a
}

int* stackMemory2() // funcție ce returnează un pointer la o valoare întreagă
{
    int b = 2; // Declararea și inițializarea variabilei b cu valoarea 2

    return &b; // Returnarea pointerului către variabila b
}

int main()
{
    int* b = stackMemory1(); // Apelul funcției stackMemory1 și salvarea pointerului returnat în b
    int a1 = *b; // 1,


    int* c = stackMemory2(); // Apelul funcției stackMemory2 și salvarea pointerului returnat în c

    int a2 = *c; // 2,


    int a3 = *b; // 2


    std::cout << a1 << std::endl; // Afișăm valoarea a1, adică afișează 1
    std::cout << a2 << std::endl; // Afișăm valoarea a2, adică afișează 2
    std::cout << a3 << std::endl; // Afișăm valoarea a3, adică afișează 2
    std::cout << ((std::byte*)b - (std::byte*)c) << std::endl; // Afișăm diferența dintre pointerii b și c în octeți

    return 0;
}
```