#include <iostream>

int main() {

    int x = 97;

    x+=10;
    std::cout<<(char)x;
    x-=10;
    std::cout<<(char)x;
    x+=3;
    std::cout<<(char)x;
    x-=3;
    std::cout<<(char)x;
    x+=2;
    std::cout<<(char)x;
    x+=5;
    std::cout<<(char)x;
    

    return 0;
}