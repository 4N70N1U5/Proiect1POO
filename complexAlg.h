#ifndef complexAlg_H
#define complexAlg_H

#include "complexTrig.h"
#include <iostream>

class ComplexTrig;

class ComplexAlg
{
private:
    long double re, im;
    ComplexTrig f_trig;
public:
    ComplexAlg();
    ComplexAlg(long double, long double);
    ComplexAlg(const ComplexAlg&);
    void setReal(long double);
    void setImag(long double);
    long double getReal();
    long double getImag();
    ComplexAlg operator+=(ComplexAlg);
    ComplexAlg operator-=(ComplexAlg);
    ComplexAlg operator*=(ComplexAlg);
    ComplexAlg operator/=(ComplexAlg);
    ComplexAlg operator+(ComplexAlg);
    ComplexAlg operator+(long double);
    ComplexAlg operator-(ComplexAlg);
    ComplexAlg operator-(long double);
    ComplexAlg operator*(ComplexAlg);
    ComplexAlg operator/(ComplexAlg);
    bool operator==(ComplexAlg);
    bool operator!=(ComplexAlg);
    friend std::istream& operator>>(std::istream&, ComplexAlg&);
    friend std::ostream& operator<<(std::ostream&, const ComplexAlg&);
    long double modul();
    ComplexAlg conjugat();
    ComplexTrig conversieFormaTrig();
};

std::istream& operator>>(std::istream&, ComplexAlg&);
std::ostream& operator<<(std::ostream&, const ComplexAlg&);

#endif
