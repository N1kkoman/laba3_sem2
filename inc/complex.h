#pragma once
#include <iostream>

class complex {
private:
    double m_a;
    double m_b;

    friend complex operator + (const complex& left, const complex& right);
    friend complex operator * (const complex& left, const complex& right);
    friend std::ostream& operator << (std::ostream& output, const complex& number);
    friend std::istream& operator >> (std::istream& in, complex& number);
public:
    //Конструктор от действительной и мнимой части
    complex(double a, double b) : m_a(a), m_b(b) {};

    //Конструктор от действительного числа
    complex(double a) : m_a(a), m_b(0) {};

    //Конструктор копирования
    complex(const complex& copy) : complex(copy.m_a, copy.m_b) {};

    //Дефолтный деструктор
    ~complex() = default;

    //Оператор присваивания копированием
    complex& operator = (const complex& copy);

    //Оператор +=
    complex& operator += (const complex& copy);

    //Оператор *=
    complex& operator *= (const complex& other);

    //Префиксный инкремент
    complex& operator++ ()
    {
        ++m_a;
        return *this;
    };

    //Постфиксный инкремент
    complex operator++ (int)
    {
        complex temp = *this;
        ++m_a;
        return temp;
    }
};