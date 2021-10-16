#include "iostream"
using namespace std;

class Test {
    int num;
public:
    Test(int n){
        this->num = n;
    }
    void operator ++(){
        num*=num;
    }
    void operator --(){
        ++num;
    }
    void print_num(){
        cout << "num = " << num << endl;
    }
};

int main()
{
    Test test(10);
    test.print_num();
    ++test;
    test.print_num();
    --test;
    test.print_num();

    return 0;
}
