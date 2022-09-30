// vector-test.cc
#include <iostream>
#include <ostream>

#include "config.h"
#include "vector.hh"

Vector::Vector()
{
    
}


Vector::Vector(std::initializer_list<value> values)
{
    std::cout << values.size() << "\n";
    std::cout << *values.begin() << "\n";
    std::cout << *((values.end())-1) << "\n";
}

Vector& Vector::operator+(const Vector& rhs)
{

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

}






