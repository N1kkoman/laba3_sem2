#include <complex.h>
#include <iostream>

//Конструктор копирования
complex& complex::operator = (const complex& copy)
{
    if (this != &copy) {
        m_a = copy.m_a;
        m_b = copy.m_b;
    }
    return *this;
}

//Оператор +=
complex& complex::operator += (const complex& copy)
{
    m_a += copy.m_a;
    m_b += copy.m_b;
    return *this;
}

//Оператор +
complex operator + (const complex& left, const complex& right)
{
    complex temp(left.m_a + right.m_a, left.m_b + right.m_b);
    return temp;
}

//Оператор *=
complex& complex::operator *= (const complex& other)
{
    double temp_a = m_a * other.m_a - m_b * other.m_b;
    m_b = m_a * other.m_b + m_b * other.m_a;
    m_a = temp_a;
    return *this;
}

//Оператор *
complex operator * (const complex& left, const complex& right)
{
    double temp_a = left.m_a * right.m_a - left.m_b * right.m_b;
    double temp_b = left.m_a * right.m_b + left.m_b * right.m_a;
    complex temp(temp_a, temp_b);
    return temp;
}

//Оператор вывода
std::ostream& operator << (std::ostream& out, const complex& number)
{
    out << number.m_a << ' ' << '+' << ' ' << number.m_b << 'i';
    return out;
}

//Оператор ввода
std::istream& operator >> (std::istream& in, complex& number)
{
    in >> number.m_a >> number.m_b;
    return in;
}