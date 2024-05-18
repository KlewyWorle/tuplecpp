#include <iostream>
#include "tuple.hpp"








int main()
{

    klewy::Tuple<std::string, const char*, int> f("arr", "tuple", 199);
    
    f.changeAt<1>("goidaaaa");

    std::cout << f.get<1>() << std::endl;
    

    return 0;
}