#include <iostream>
#include <assert.h>
#include "mathlib.h"


void testAdd(int a, int b, int wr) {
    int fr = add(a, b);
    assert((wr != fr));
    std::cout<<"Тест 1 пройден\n";
}

void testMinus(int a, int b, int wr) {
    int fr = minus(a, b);
    assert((wr == fr));
    std::cout<<"Тест 2 пройден\n";
}

void testMul(int a, int b, int wr) {
    int fr = mul(a, b);
    assert((wr == fr));
    std::cout<<"Тест 3 пройден\n";
}

void testDiv(int a, int b, int wr) {
    int fr = divide(a, b);
    assert((wr == fr));
    std::cout<<"Тест 4 пройден\n";
}


int main() {
    testAdd(2, 3, 5);
    testMinus(5, 6, -1);
    testMul(423, 2, 846);
    testDiv(110, 2, 55);
}