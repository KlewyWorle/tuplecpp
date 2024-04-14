#include <iostream>
#include "tuple.hpp"








int main()
{

    klewy::Tuple<std::string, const char*, int> f("arr", "tuple", 199);

    std::cout << f.rest.head << std::endl;

    return 0;
}