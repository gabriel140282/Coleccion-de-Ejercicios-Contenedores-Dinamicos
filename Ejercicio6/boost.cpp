#include "boost.h"
#include <iostream>
#include "../boost_1_87_0/boost/lexical_cast.hpp"
#include "../boost_1_87_0/boost/lexical_cast/bad_lexical_cast.hpp"

void boost_lexical_cast() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}