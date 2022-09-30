// vector-test.cc
#include <iostream>
#include <ostream>

#include "config.h"
#include "vector.hh"

Vector::Vector()
{
    for (size_t i = 0; i < NDIM; ++i)
    {
        data[i] = 0;
        std::cout << data[i] << "\n";
    }
}


Vector::Vector(std::initializer_list<value> values)
{
    std::initializer_list<value>::iterator it;
    size_t i = 0;
    for ( it=values.begin(); it!=values.end(); ++it)
    {
        data[i++] = *it;
        std::cout << data[i-1] << "\n";
    }
}

Vector::Vector(value *array)
{
}

Vector& Vector::operator+(const Vector& rhs)
{
    auto v = Vector{rhs};
    return v += *this;
}

Vector& Vector::operator*(const value& rhs)
{

}
value Vector::operator*(const Vector& rhs)
{

}

value& Vector::operator[](size_t rhs)
{
}


Vector& Vector::operator+=(const Vector& rhs)
{
    for (size_t i = 0; i < NDIM; ++i)
    {
        this->data[i] += rhs.data[i];
    }
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs)
{

}

Vector& Vector::operator*=(const value& rhs)
{

}


Vector& Vector::operator+=(const value& rhs)
{
}




std::ostream& operator<<(std::ostream& out, const Vector& rhs)
{
    size_t i = 0;
    out << "{";
    value* data = Vector{rhs}.getData();
    for (i; i < NDIM -1; ++i)
    {
        out << data[i] << ",";
    }
    out << data[i] << "}";
    return out;
}

value *Vector::getData()
{
    return data;
}