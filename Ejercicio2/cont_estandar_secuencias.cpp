#include "cont_estandar_secuencias.h"
#include <iostream>
#include <list>
#include <stack>

void cont_estandar_secuencias() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    while(!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
}