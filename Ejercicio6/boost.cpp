#include "boost.h"
#include <iostream>
#include <boost/lexical_cast.hpp> //Librería a instalar en linux

void boost_lexical_cast() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}