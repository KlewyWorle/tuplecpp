#pragma once

#include<iostream>

namespace klewy
{
template<typename ...Args>
class Tuple{
    Tuple()
    {
        
    }
};

template<typename Head, typename ...Args>
class Tuple<Head, Args...>
{
public:
    Tuple(Head h, Args... r);
    Head head;
    Tuple<Args...> rest;
};
template<>
class Tuple<>{};
}


#include "tuple.inl"


