#include "iostream"
using namespace std;

void print_triangle(int rows){
    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; space++)
            cout << "  ";

        for(int j = i; j <= 2*i-1; j++)
            cout << "* ";

        for(int j = 0; j < i-1; j++)
            cout << "* ";
        cout << endl;
    }
}
int main(){

    print_triangle(5);

    return 0;
}
