//
// Created by misha on 11.02.2022.
//
#include <iostream>
#include <list>
#include <iterator>
//using namespace std;

int main(){
    std::list<int> numbers{1, 2, 4, 7};
    std::list<int> other_numbers{25, -1, 5};

    numbers.splice(numbers.begin(), other_numbers);
    numbers.sort();
    numbers.merge(other_numbers);


    std::copy(numbers.begin(), numbers.end(),
              std::ostream_iterator<int>(std::cout, " "));
    for (auto item: other_numbers){
        std::cout << item << " ";
    }
    return 0;
}

