#ifndef complexAlg_H
#define complexAlg_H

#include "complexTrig.h"
#include <iostream>

class ComplexTrig;

class ComplexAlg
{
private:
    long double re, im;
public:
    ComplexAlg();
    ComplexAlg(long double, long double);
    ComplexAlg(const ComplexAlg&);
    
    void setReal(long double);
    void setImag(long double);

    long double getReal();
    long double getImag();
    
    ComplexAlg operator+=(ComplexAlg);
    ComplexAlg operator+=(long double);

    ComplexAlg operator-=(ComplexAlg);
    ComplexAlg operator-=(long double);

    ComplexAlg operator*=(ComplexAlg);
    ComplexAlg operator*=(long double);

    ComplexAlg operator/=(ComplexAlg);
    ComplexAlg operator/=(long double);

    ComplexAlg operator+(ComplexAlg);
    ComplexAlg operator+(long double);
    friend ComplexAlg operator+(long double, ComplexAlg);

    ComplexAlg operator-(ComplexAlg);
    ComplexAlg operator-(long double);
    friend ComplexAlg operator-(long double, ComplexAlg);

    ComplexAlg operator*(ComplexAlg);
    ComplexAlg operator*(long double);
    friend ComplexAlg operator*(long double, ComplexAlg);

    ComplexAlg operator/(ComplexAlg);
    ComplexAlg operator/(long double);

    bool operator==(ComplexAlg);
    bool operator!=(ComplexAlg);

    friend std::istream& operator>>(std::istream&, ComplexAlg&);
    friend std::ostream& operator<<(std::ostream&, const ComplexAlg&);

    long double modul();
    ComplexAlg conjugat();
    ComplexTrig conversieFormaTrig();
};

ComplexAlg operator+(long double, ComplexAlg);
ComplexAlg operator-(long double, ComplexAlg);
ComplexAlg operator*(long double, ComplexAlg);
ComplexAlg operator/(long double, ComplexAlg);

std::istream& operator>>(std::istream&, ComplexAlg&);
std::ostream& operator<<(std::ostream&, const ComplexAlg&);

#endif
