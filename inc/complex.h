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
    //����������� �� �������������� � ������ �����
    complex(double a, double b) : m_a(a), m_b(b) {};

    //����������� �� ��������������� �����
    complex(double a) : m_a(a), m_b(0) {};

    //����������� �����������
    complex(const complex& copy) : complex(copy.m_a, copy.m_b) {};

    //��������� ����������
    ~complex() = default;

    //�������� ������������ ������������
    complex& operator = (const complex& copy);

    //�������� +=
    complex& operator += (const complex& copy);

    //�������� *=
    complex& operator *= (const complex& other);

    //���������� ���������
    complex& operator++ ()
    {
        ++m_a;
        return *this;
    };

    //����������� ���������
    complex operator++ (int)
    {
        complex temp = *this;
        ++m_a;
        return temp;
    }
};