#include "complexAlg.h"
#include "complexTrig.h"
#include <iostream>
#include <cmath>

int main()
{
    ComplexAlg A, B(5, 6), C, D;

    std::cout << "Introduceti partile reala si imaginara pentru numarul complex A in forma algebrica: ";
    std::cin >> A; // Se citesc pe rand partea reala si partea imaginara.

    std::cout << '\n';

    std::cout << "Numarul complex A: " << A << '\n';
    std::cout << "Numarul complex B: " << B << '\n';

    std::cout << '\n';

    if (A == B)
        std::cout << "Numerele A si B sunt egale\n";
    else if (A != B)
        std::cout << "Numerele A si B nu sunt egale\n"; 
    // Demonstratie a functionalitatii operatorilor == si != pentru forma algebrica.

    std::cout << '\n';

    std::cout << "Partea reala a numarului complex A: " << A.getReal() << '\n';
    std::cout << "Partea imaginara a numarului complex B: " << B.getImag() << '\n';
    // Demonstratie a functionalitatii get-erilor. Set-erii sunt folositi in metodele de conversie.

    std::cout << '\n';

    std::cout << "Modulul numarului complex A este " << A.modul() << '\n';
    std::cout << "Conjugatul numarului complex B este " << B.conjugat() << '\n';

    std::cout << '\n';

    std::cout << "A + B = " << A + B << '\n';
    std::cout << "A - 5 = " << A - 5 << '\n';
    std::cout << "A * B = " << A * B << '\n';
    std::cout << "A / B = " << A / B << '\n';

    std::cout << '\n';

    C = A;
    std::cout << "C = A = " << C << '\n';
    // Demonstratie a functionalitatii a constructorului de copiere pentru forma algebrica.

    std::cout << '\n';

    A += B;
    C *= 9;

    std::cout << "A dupa ce i s-a adunat B: " << A << '\n';
    std::cout << "C dupa ce a fost inmultit cu 9: " << C << '\n';

    std::cout << '\n';

    ComplexTrig E, F(5, 5), G;

    std::cout << "Introduceti modulul si argumentul pentru numarul complex E in forma trigonometrica: ";
    std::cin >> E; // Se citesc pe rand modulul si argumentul.

    std::cout << '\n';

    G = A.conversieFormaTrig();
    D = E.conversieFormaAlg();

    std::cout << "Numarul complex D: " << D << '\n';
    std::cout << "Numarul complex E: " << E << '\n';
    std::cout << "Numarul complex F: " << F << '\n';
    std::cout << "Numarul complex G: " << G << '\n';
    // Demonstratie a functionalitatii metodelor de conversie si a constructorului de copiere pentru forma trigonometrica.

    std::cout << '\n';

    if (E == F)
        std::cout << "Numerele E si F sunt egale\n";
    else if (E != F)
        std::cout << "Numerele E si F nu sunt egale\n";
    // Demonstratie a functionalitatii operatorilor == si != pentru forma trigonometrica.

    std::cout << '\n';

    std::cout << "E * F = " << E * F << '\n';
    std::cout << "G / 2 = " << G / 2 << '\n';

    E *= 4;
    F /= G;

    std::cout << '\n';

    std::cout << "Numarul E dupa ce a fost inmultit cu 4: " << E << '\n';
    std::cout << "Numarul F dupa ce a fost impartit la G: " << F << '\n';
    return 0;
}
