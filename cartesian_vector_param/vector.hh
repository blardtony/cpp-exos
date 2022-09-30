#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<value>);
    // possibly more

// Public Member functions here
    Vector& operator+(const Vector& rhs);

    Vector& operator*(const value& rhs);

    value operator*(const Vector& rhs);

    value& operator[](size_t rhs);

    Vector& operator+=(const Vector& rhs);

    Vector& operator-=(const Vector& rhs);
    
    Vector& operator*=(const value& rhs);

    Vector& operator+=(const value& rhs);

    // More to go
private:
// Private Member functions here

// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
std::ostream& operator<<(std::ostream& out, const Vector& rhs);