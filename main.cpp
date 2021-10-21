#include "iostream"
#include "string"


void replace_dummy(){

    std::cout << "Enter the text.\n";
    std::string text;
    std::getline(std::cin, text);
    auto word = text.find("dummy");

    std::cout << word << "\n";

    if (std::string::npos == word ) {
        std::cout << "not found\n";
    } else {
        text.replace(word + 4, 1, "i");
    }

    std::cout << text << std::endl;
}

void replace_is(){

    std::cout << "Enter the text.\n";
    std::string text;
    std::getline(std::cin, text);
    auto word = text.find("is");

    std::cout << word << "\n";

    if (std::string::npos == word ) {
        std::cout << "not found\n";
    } else {
        text.replace(word, 2, "are");
    }

    std::cout << text << std::endl;
}

int main() {

    replace_dummy();
    replace_is();


    return 0;
}