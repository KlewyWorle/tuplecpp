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
    auto& Tuple<Head, Args...>::get()
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

    // template<typename Head, typename ...Args>
    // template<size_t index>
    // auto& Tuple<Head, Args...>::getR()
    // {
    //     if constexpr (index == 0)
    //     {
    //         return head;
    //     }
    //     else
    //     {
    //         return rest.template getR<index - 1>();
    //     }
        
    // }

    template<typename Head, typename ...Args>
    template<std::size_t index>
    void Tuple<Head, Args...>::changeAt(auto val)
    {
        get<index>() = val;
    }


    



}