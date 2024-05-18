#pragma once
#include <cstddef>
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
    auto& get();

    template<std::size_t index>
    void changeAt(auto val);
    
private:
    Head head;
    Tuple<Args...> rest;

protected:
    // template<size_t index>
    // auto& getR();

};
template<>
class Tuple<>{};



}

#include "tuple.inl"