#include "complexAlg.h"
#include "complexTrig.h"
#include <iostream>
#include <cmath>

ComplexAlg::ComplexAlg()
{
    re = im = 0;
}

ComplexAlg::ComplexAlg(long double a, long double b)
{
    re = a;
    im = b;
}

ComplexAlg::ComplexAlg(const ComplexAlg& pz)
{
    re = pz.re;
    im = pz.im;
}
    
void ComplexAlg::setReal(long double a)
{
    re = a;
}

void ComplexAlg::setImag(long double b)
{
    im = b;
}

long double ComplexAlg::getReal()
{
    return re;
}

long double ComplexAlg::getImag()
{
    return im;
}

ComplexAlg ComplexAlg::operator+=(ComplexAlg z)
{
    re += z.re;
    im += z.im;
    return *this;
}

ComplexAlg ComplexAlg::operator+=(long double a)
{
    re += a;
    return *this;
}

ComplexAlg ComplexAlg::operator-=(ComplexAlg z)
{
    re -= z.re;
    im -= z.im;
    return *this;
}

ComplexAlg ComplexAlg::operator-=(long double a)
{
    re -= a;
    return *this;
}

ComplexAlg ComplexAlg::operator*=(ComplexAlg z)
{
    re = re * z.re - im * z.im;
    im = re * z.im + im * z.re;
    return *this;
}

ComplexAlg ComplexAlg::operator*=(long double a)
{
    re *= a;
    im *= a;
    return *this;
}

ComplexAlg ComplexAlg::operator/=(ComplexAlg z)
{
    re = (re * z.re + im * z.im) / (z.re * z.re + z.im * z.im);
    im = (z.re * im - re * z.im) / (z.re * z.re + z.im * z.im);
    return *this;
}

ComplexAlg ComplexAlg::operator/=(long double a)
{
    re /= a;
    im /= a;
    return *this;
}

ComplexAlg ComplexAlg::operator+(ComplexAlg z)
{
    ComplexAlg x;
    x.re = re + z.re;
    x.im = im + z.im;
    return x;
}

ComplexAlg ComplexAlg::operator+(long double a)
{
    ComplexAlg x;
    x.re = re + a;
    x.im = im;
    return x;
}

ComplexAlg operator+(long double a, ComplexAlg z)
{
    ComplexAlg x;
    x.re = z.re + a;
    x.im = z.im;
    return x;
}

ComplexAlg ComplexAlg::operator-(ComplexAlg z)
{
    ComplexAlg x;
    x.re = re - z.re;
    x.im = im - z.im;
    return x;
}

ComplexAlg ComplexAlg::operator-(long double a)
{
    ComplexAlg x;
    x.re = re - a;
    x.im = im;
    return x;
}

ComplexAlg operator-(long double a, ComplexAlg z)
{
    ComplexAlg x;
    x.re = a - z.re;
    x.im = -z.im;
    return x;
}

ComplexAlg ComplexAlg::operator*(ComplexAlg z)
{
    ComplexAlg x;
    x.re = re * z.re - im * z.im;
    x.im = re * z.im + im * z.re;
    return x;
}

ComplexAlg ComplexAlg::operator*(long double a)
{
    ComplexAlg x;
    x.re = re * a;
    x.im = im * a;
    return x;
}

ComplexAlg operator*(long double a, ComplexAlg z)
{
    ComplexAlg x;
    x.re = z.re * a;
    x.im = z.im * a;
    return x;
}

ComplexAlg ComplexAlg::operator/(ComplexAlg z)
{
    ComplexAlg x;
    x.re = (re * z.re + im * z.im) / (z.re * z.re + z.im * z.im);
    x.im = (z.re * im - re * z.im) / (z.re * z.re + z.im * z.im);
    return x;
}

ComplexAlg ComplexAlg::operator/(long double a)
{
    ComplexAlg x;
    x.re = re / a;
    x.im = im / a;
    return x;
}

bool ComplexAlg::operator==(ComplexAlg z)
{
    return re == z.re && im == z.im;
}

bool ComplexAlg::operator!=(ComplexAlg z)
{
    return re != z.re || im != z.im;
}

std::istream& operator>>(std::istream& i, ComplexAlg& z)
{
    i >> z.re >> z.im;
    return i;
}

std::ostream& operator<<(std::ostream& o, const ComplexAlg& z)
{
    if (z.re && z.im > 0)
        o << z.re << "+" << z.im << "i";
    else if (z.re && z.im < 0)
        o << z.re << "-" << -z.im << "i";
    else if (!z.re && z.im)
        o << z.im << "i";
    else
        o << z.re;
    return o;
}

long double ComplexAlg::modul()
{
    long double m = sqrt(re * re + im * im);
    return m;
}

ComplexAlg ComplexAlg::conjugat()
{
    ComplexAlg z;
    z.re = re;
    z.im = -im;
    return z;
}

ComplexTrig ComplexAlg::conversieFormaTrig()
{
    ComplexTrig z;
    z.setModul(sqrt(re * re + im * im));
    z.setArg(atan(im / re));
    return z;
}
