#include "iostream"
using namespace std;

class Test{
    int num1;
public:
    Test(int n1){
        this->num1 = n1;
    }
    Test operator + (const Test){
        this->num1--;
    }
};


int main(){

    Test test(5);
    test.operator+(test);


    return 0;
}
