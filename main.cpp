#include <iostream>
#include "macierz.h"

int main() {
    Macierz m1;
    Macierz m2;

    
    m1.set(0, 0, 2.5);
    m1.set(0, 1, 2);
    m1.set(1, 0, 6);
    m1.set(1, 1, 4);

    m2.set(0, 0, 5);
    m2.set(0, 1, 2);
    m2.set(1, 0, 7.5);
    m2.set(1, 1, 1);

   
    std::cout << "Macierz m1:" << std::endl;
    std::cout << m1;

    std::cout << "Macierz m2:" << std::endl;
    std::cout << m2;

    if (m1 == m2) {
        cout << "Macierze sa identyczne\n";
    }
    else
    {
        cout << "Macierze nie sa identyczne\n";
    }

    Macierz d = m1 + m2;
    std::cout << "Dodawanie macierzy m1 i m2" << std::endl;
    std::cout << d;


    Macierz m = m1 * m2;
    std::cout << "Mnozenie macierzy m1 i m2:" << std::endl;
    std::cout << m;

    m *= 3; 
    std::cout << "Mnozenie macierzy przez 3" << std::endl;
    std::cout << m;

    m1.transpozycja(); 
    std::cout << "Macierz m1, ale transponowana:" << std::endl;
    std::cout << m1;

    m2.transpozycja();

    return 0;
}
