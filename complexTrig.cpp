#include "complexTrig.h"
#include "complexAlg.h"
#include <iostream>
#include <cmath>

ComplexTrig::ComplexTrig()
{
    mdl = arg = 0;
}

ComplexTrig::ComplexTrig(long double r, long double t)
{
    mdl = r;
    arg = t;
}

ComplexTrig::ComplexTrig(const ComplexTrig& pz)
{
    mdl = pz.mdl;
    arg = pz.arg;
}

void ComplexTrig::setModul(long double r)
{
    mdl = r;
}

void ComplexTrig::setArg(long double t)
{
    arg = t;
}

long double ComplexTrig::getModul()
{
    return mdl;
}

long double ComplexTrig::getArg()
{
    return arg;
}

ComplexTrig ComplexTrig::operator*=(ComplexTrig z)
{
    mdl *= z.mdl;
    arg += z.arg;
    return *this;
}

ComplexTrig ComplexTrig::operator*=(long double a)
{
    mdl *= a;
    return *this;
}

ComplexTrig ComplexTrig::operator/=(ComplexTrig z)
{
    mdl /= z.mdl;
    arg -= z.arg;
    return *this;
}

ComplexTrig ComplexTrig::operator/=(long double a)
{
    mdl /= a;
    return *this;
}

ComplexTrig ComplexTrig::operator*(ComplexTrig z)
{
    ComplexTrig x;
    x.mdl = mdl * z.mdl;
    x.arg = arg + z.arg;
    return x;
}

ComplexTrig ComplexTrig::operator*(long double a)
{
    ComplexTrig x;
    x.mdl = mdl * a;
    x.arg = arg;
    return x;
}

ComplexTrig operator*(long double a, ComplexTrig z)
{
    ComplexTrig x;
    x.mdl = z.mdl * a;
    x.arg = z.arg;
    return x;
}

ComplexTrig ComplexTrig::operator/(ComplexTrig z)
{
    ComplexTrig x;
    x.mdl = mdl / z.mdl;
    x.arg = arg - z.arg;
    return x;
}

ComplexTrig ComplexTrig::operator/(long double a)
{
    ComplexTrig x;
    x.mdl = mdl / a;
    x.arg = arg;
    return x;
}

bool ComplexTrig::operator==(ComplexTrig z)
{
    return mdl == z.mdl && arg == z.arg;
}

bool ComplexTrig::operator!=(ComplexTrig z)
{
    return mdl != z.mdl || arg != z.arg;
}

std::istream& operator>>(std::istream& i, ComplexTrig& z)
{
    /*using namespace std;
    {
        // cout << "Modulul numarului complex in forma trigonometrica: ";
        i >> z.mdl;
        // cout << "Argumentul numarului complex in forma trigonometrica: ";
        i >> z.arg;
    } // namespace std*/
    i >> z.mdl >> z.arg;
    return i;
}

std::ostream& operator<<(std::ostream& o, const ComplexTrig& z)
{
    if (z.mdl)
        o << z.mdl << "(cos(" << z.arg << ")+isin(" << z.arg << "))";
    else
        o << z.mdl;
    return o;
}

ComplexAlg ComplexTrig::conversieFormaAlg()
{
    ComplexAlg z;
    z.setReal(mdl * cos(arg));
    z.setImag(mdl * sin(arg));
    return z;
}
