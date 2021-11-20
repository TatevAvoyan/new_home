#include "iostream"

int init_params();

int test(std::string type, int num1, int num2);

int main() {

    int i = init_params();
    std::cout << i;

    return 0;
}

int init_params() {

    int num1 = 0;
    int num2 = 0;
    std::string type;

    std::cout << "Input num 1: ";
    std::cin >> num1;
    std::cout << "Input num 2: ";
    std::cin >> num2;
    std::cout << "Input type: ";
    std::cin >> type;


    return test(type, num1, num2);
}
int test(std::string type, int num1, int num2) {
    if (type == "*") {
        std::cout << num1 * num2 << "\n";
    }
    else if (type == "+") {
        std::cout << num1 + num2 << "\n";
    }
    else if (type == "-") {
        std::cout << num1 - num2 << "\n";
    }
    else if (type == "/") {
        std::cout << num1 / num2 << "\n";
    }
    else {
        std::cout << "Something wrong, pls try again." << "\n";
    }

    std::string yes;
    std::cout << "Do you want try again? y/n" << "\n";
    std::cin >> yes;

    if(yes == "y"){
        return init_params();
    } else if (yes == "n"){
        std::cout << "Thank you!\n";
    } else {
        std::cout << "Something wrong, pls try again. \n";
        return init_params();
    }

    return 0;
}