#include <stdio.h>
#include <iostream>

class A
{
private:
    int value;
public:
    A(int n) {value = n;}
    A(A other) {value = other.value;}

    void print() {std::cout <<val<<std::endl;}
};

int _tmain()
{

    A a=10;
    A b=10;
    b.print();

    return 0;

}
