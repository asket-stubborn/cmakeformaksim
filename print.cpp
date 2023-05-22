#include "inout.h"

void print(const std::vector<int> &vec){
    for (auto i: vec) {
        std::cout << i << ' '; // will print: "a b c"
    }

}
