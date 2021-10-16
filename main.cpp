#include "iostream"
using namespace std;

void print_triangle(int rows, string space){

    if (rows >= 1) {
       for(int i = 0; i < rows; i++){
           cout << " *";
       }
       cout << "\n";
       space += " ";
       cout << space;
       print_triangle(rows - 1, space);
    }
}

int main(){

    print_triangle(7, "");

    return 0;
}
