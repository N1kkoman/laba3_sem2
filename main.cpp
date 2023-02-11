#include <iostream>
#include <complex.h>

int main() {
    complex z1(2, 4);
    std::cout << z1 << std::endl;
    z1 = z1 + complex(10,5);
    std::cout << z1 << std::endl;

    complex z0(0);
    std::cout << z0 << "\n\n";

    z1 += 8;
    std::cout << z1 << "\n\n";

    z1 *= 5;
    std::cout << z1 << "\n\n";

    //Разница префиксного и постфиксного инкремента
    complex z2 = ++z1;
    std::cout << z1 << std::endl;
    std::cout << z2 << "\n\n";

    //Сначала z2 присваивается старое значение z1, потом z1 увеличивается на 1
    z2 = z1++;
    std::cout << z1 << std::endl;
    std::cout << z2 << "\n\n";

    complex z3 = z1 * 6;
    std::cout << z3 << "\n\n";

    z1 *= z2;
    std::cout << z1 << "\n\n";

    complex test;
    std::cout << "Enter a complex number: (real and imaginary parts separated by a space)" << std::endl;
    std::cin >> test;
    std::cout << test << "\n\n";

    return 0;
}