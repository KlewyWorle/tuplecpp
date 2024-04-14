#include "tuple.hpp"
#include <cstddef>




namespace klewy
{
    template<typename Head, typename ...Args>
    Tuple<Head, Args...>::Tuple(Head h, Args... a) : head(h), rest(a...)
    {

    }
    template<typename Head, typename ...Args>
    template<std::size_t index>
    auto Tuple<Head, Args...>::get()
    {
        if constexpr (index == 0)
        {
            return head;
        }
        else
        {
            return rest.template get<index - 1>();
        }
    }


    template<typename Head, typename ...Args>
    void Tuple<Head, Args...>::heh()
    {
        printf("heh\n");
    }



}