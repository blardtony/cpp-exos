// vector-test.cc
#include <iostream>
#include <ostream>

#include "config.h"
#include "vector.hh"

Vector::Vector() {

}


Vector::Vector(std::initializer_list<int> list)
{

}


Vector& Vector::operator+=(const Vector& rhs)
{
    value x = this->list[0] + rhs.list[0];
    value y = this->list[1] + rhs.list[1];
    
    auto vec = Vector{x, y};

    return vec;
}

Vector& Vector::operator+=(value rhs)
{
    auto vec = Vector{};
    return vec;
}

Vector& Vector::operator-=(const Vector& rhs)
{
    auto vec = Vector{};
    return vec;
}


std::ostream& operator<<(std::ostream& out, const Vector& rhs)
{
    return out;
}


Vector& Vector::operator*=(const Vector& rhs)
{

}
Vector& Vector::operator*=(const value& rhs)
{

}

Vector& Vector::operator+(const Vector& rhs)
{

}
Vector& Vector::operator*(value rhs)
{

}
Vector& Vector::operator*(Vector& rhs)
{

}

value& Vector::operator[](size_t rhs)
{

}