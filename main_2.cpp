//
// Created by misha on 11.02.2022.
//
#include <iostream>
#include <vector>
#include <array>
#include <deque>

using namespace std;

struct fraction{
private:
    int numerator;
    unsigned denominator;
public:
    fraction(int numerator, unsigned denominator):
    numerator(numerator), denominator(denominator){};
};

/*
int main(){
    std::deque<fraction> deque;
    deque.emplace_front(1, 24);
    std::cout << deque.size() << endl;
    std::vector<int> numbers;
    std::array<int, 5> numbers_1 = {};
    numbers_1[3] = 42;


    for (auto i=0; i<30; i++){
        numbers.push_back(i);
        std::cout << "size is " << numbers.size() << " capacity is " << numbers.capacity() << endl;
    }



    auto a = 0;
    for (auto i=0; i<10000; i++){
        a += 10;
    }

}
*/