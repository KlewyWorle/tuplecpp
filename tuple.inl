#include "tuple.hpp"

namespace klewy
{
    template<typename Head, typename ...Args>
    Tuple<Head, Args...>::Tuple(Head h, Args... r) : head(h), rest(r...){};

    
}