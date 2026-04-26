#include <iostream>

int main () {

    int estudiantes = 31;

    // estudiantes = estudiantes + 2;
    // estudiantes+=2;
    // estudiantes++;

    // RESTA
    // estudiantes = estudiantes-1;
    // estudiantes-=1;
    // estudiantes--;

    // mult
    // estudiantes=estudiantes*2;
    // estudiantes*=3;

    // division
    // estudiantes=estudiantes/4;
    // estudiantes/=3;

    // modulo
    int resto = estudiantes % 2;
    if (resto==0) {
        std::cout<<"El numero es par"<<std::endl;
    }
    else {
        std::cout<<"El numero es impar"<<std::endl;
    }

    std::cout<<estudiantes<<std::endl;

    return 0;
}