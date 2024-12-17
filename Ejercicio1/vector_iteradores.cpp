#include "vector_iteradores.h"

#include <iostream>
#include <vector>

void vector_iteradores() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }

}