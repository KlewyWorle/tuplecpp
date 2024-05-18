#pragma once
#include<iostream>



namespace klewy
{
template<typename ...Args>
class Tuple{};

template<typename Head, typename ...Args>
class Tuple<Head, Args...>
{
public:
    Tuple(Head h, Args... a);

    template<std::size_t index>
    auto get();

    
    Head head;
    Tuple<Args...> rest;


};
template<>
class Tuple<>{};



}

#include "tuple.inl"