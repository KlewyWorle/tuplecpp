#include <iostream>
#include "tuple.hpp"








int main()
{

    klewy::Tuple<std::string, const char*, int> f("arr", "tuple", 199);
    std::cout << f.get<2>() << std::endl;
    f.heh();

    return 0;
}