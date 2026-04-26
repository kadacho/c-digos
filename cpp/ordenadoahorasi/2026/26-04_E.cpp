#include <iostream>

int main() {

    int PCorrectas = 8;
    int PTotales = 10;

    double puntaje = PCorrectas / (double)PTotales * 100;

    std::cout<<puntaje<<"%";

    return 0;
}