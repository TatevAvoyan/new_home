#include "iostream"

int init_params(std::string *type, int *num1, int *num2) {

    std::cout << "Input num 1: ";
    std::cin >> *num1;
    std::cout << "Input num 2: ";
    std::cin >> *num2;
    std::cout << "Input type: ";
    std::cin >> *type;
}

void test (std::string *type, int *num1, int *num2) {

    if (*type == "*") {
        std::cout << *num1 * *num2 << "\n";
    }
    else if (*type == "+") {
        std::cout << *num1 + *num2 << "\n";
    }
    else if (*type == "-") {
        std::cout << *num1 - *num2 << "\n";
    }
    else if (*type == "/") {
        std::cout << *num1 / *num2 << "\n";
    }
    else {
        std::cout << "Something wrong, pls try again." << "\n";
    }
}

int main() {

    int n1;
    int n2;
    std::string t;

    init_params(&t, &n1, &n2);
    test(&t, &n1, &n2);


    return 0;
}

