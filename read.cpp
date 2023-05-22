#include "inout.h"


void read(std::vector<int> &vec){
    size_t max;
    std::cin >> max;

    for(size_t i=0;i<max;i++){
        int temp;
        std::cin >> temp;

        vec.push_back(temp);
    }
}
