#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::string name1 = std::tmpnam(nullptr);
    std::cout << "temporary file name: " << name1 << '\n';

    char name2[L_tmpnam];

    if (std::tmpnam(name2)) {
        std::cout << "temporary file name: " << name2 << '\n';
    }

    _getch();
    return 0;
}