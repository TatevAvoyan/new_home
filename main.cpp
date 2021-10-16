#include "iostream"


//80-110 eranish tveri qarakusinery

void print_rec(int start, int end){
    if(start <= 99){
        start++;
        print_rec(start, end);
    }else{
        if(start < end){
            std::cout << start * start << "\n";
            start++;
            print_rec(start, end);
        }
    }
}



int main() {

    print_rec(80, 110);

    return 0;
}