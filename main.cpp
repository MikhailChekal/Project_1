#include <iostream>
#include <chrono>
#include <cmath>

using namespace std::chrono;

template <class T>
class Timer {

private:
    steady_clock::time_point start = steady_clock::now();
    int dur = 0;
public:
    Timer() {};
    ~Timer() {
        pause();
        //dur += int(duration_cast<T>(steady_clock::now() - start).count());
        //std::cout << dur << std::endl;
    }
    void pause(){ // pause и cont всегда должны идти вместе
        dur += int(duration_cast<T>(steady_clock::now() - start).count());
        std::cout << dur << std::endl;
    };
    void cont(){
        start = steady_clock::now();

    };
};

int main() {
    double result = 0.;
    {
        Timer<std::chrono::milliseconds> t;
        for(auto i = 0u; i < 10000000u; i++) {
            result += std::sin(i) + std::cos(i);
        }
        t.pause();
        for(auto i = 0u; i < 1000000u; i++) {
            result += std::sin(i) + std::cos(i);
        }
        t.cont();
        for(auto i = 0u; i < 10000000u; i++) {
            result += std::sin(i) + std::cos(i);
        }
    }
    std::cout << "Result is " << result;
    return 0;
}