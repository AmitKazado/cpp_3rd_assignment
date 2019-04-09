#include <iostream>
#include <string.h>
#include "PhysicalNumber.h"

using namespace ariel;

PhysicalNumber::PhysicalNumber(double data, Unit unit)
{
    this->data = data;
    this->unit = unit;
}

const PhysicalNumber PhysicalNumber::operator+() const
{
    return PhysicalNumber(data,unit);
}

const PhysicalNumber PhysicalNumber::operator+(const PhysicalNumber& other) const
{
    return PhysicalNumber(data, unit);
}

PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& other)
{
    return *this;
}

const PhysicalNumber PhysicalNumber::operator-() const
{
    return PhysicalNumber(data, unit);
}

const PhysicalNumber PhysicalNumber::operator-(const PhysicalNumber& other) const
{
    return PhysicalNumber(data, unit);
}

PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber& other)
{
    return *this;
}

const PhysicalNumber PhysicalNumber::operator++(int)
{
    return *this;
}

PhysicalNumber& PhysicalNumber::operator++()
{
    return *this;
}

const PhysicalNumber PhysicalNumber::operator--(int)
{
    return *this;
}

PhysicalNumber& PhysicalNumber::operator--()
{
    return *this;
}

bool operator>(const PhysicalNumber& pNum1,const PhysicalNumber& pNum2)
{
    return true;
}

bool PhysicalNumber::operator<(const PhysicalNumber& pNum1, const PhysicalNumber& pNum2)
{
    return true;
}

bool PhysicalNumber::operator==(const PhysicalNumber& pNum1, const PhysicalNumber& pNum2)
{
    return true;
}

bool ariel::operator!=(const PhysicalNumber& pNum1, const PhysicalNumber& pNum2)
{
    return true;
}

bool PhysicalNumber::operator>=(const PhysicalNumber& pNum1, const PhysicalNumber& pNum2)
{
    return true;
}

bool PhysicalNumber::operator<=(const PhysicalNumber& pNum1, const PhysicalNumber& pNum2)
{
    return true;
}

std::ostream& operator<<(std::ostream& os, const PhysicalNumber&)
{
    return os;
}

std::istream& operator>>(std::istream& is, PhysicalNumber&)
{
    return is;
}