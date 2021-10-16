#include "iostream"
using namespace std;

void print_hello(){

    char hello;
    std::cin >> hello;

    switch (hello) {
        case 'h' : case 'y' : std::cout << "Barev"; break;
        case 'r' : case 'u' : std::cout << "Privet"; break;
        case 'e' : case 'n' : std::cout << "Hello"; break;
        default : std::cout << "Hi";
    }

    /* if ( w == "hy"){
         std::cout << "Barev";
     } else if (w == "ru"){
         std::cout << "Privet";
     } else if (w == "en"){
         std::cout << "Hello";
     } else{
         std::cout << "Hi";
     }*/

}
int main(){

    print_hello();

    return 0;
}
