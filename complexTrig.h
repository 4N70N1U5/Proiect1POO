#ifndef complexTrig_H
#define complexTrig_H

#include "complexAlg.h"
#include <iostream>

class ComplexAlg;

class ComplexTrig
{
private:
    long double mdl, arg;
    ComplexAlg f_alg;
public:
    ComplexTrig();
    ComplexTrig(long double, long double);
    ComplexTrig(const ComplexTrig&);
    void setModul(long double);
    void setArg(long double);
    long double getModul();
    long double getArg();
    ComplexTrig operator*=(ComplexTrig);
    ComplexTrig operator/=(ComplexTrig);
    ComplexTrig operator*(ComplexTrig);
    ComplexTrig operator/(ComplexTrig);
    bool operator==(ComplexTrig);
    bool operator!=(ComplexTrig);
    friend std::istream& operator>>(std::istream&, ComplexTrig&);
    friend std::ostream& operator<<(std::ostream&, const ComplexTrig&);
    ComplexAlg conversieFormaAlg();
};

std::istream& operator>>(std::istream&, ComplexTrig&);
std::ostream& operator<<(std::ostream&, const ComplexTrig&);

#endif
