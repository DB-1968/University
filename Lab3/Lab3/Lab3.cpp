/*#include <iostream>

int hello(int a)
{

};


int main()
{
   int result = hello(43);
   std::cout << "Result: " << result << std::endl;
}


 // Compilatorul nu stie cum arata corpul functiei hello, din cauza aceasta apare eroare, fiindca functia hello doar a fost declarata 
*/

#include <iostream>

int hello(int a) {
    return a * 2;
}

int main() {
    int result = hello(43);
    std::cout << "Result: " << result << std::endl;

}