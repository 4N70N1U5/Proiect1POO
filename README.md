# Proiect1POO

In acest proiect am implementat doua clase, una pentru numere complexe in forma algebrica - ```ComplexAlg``` - si una pentru numere complexe in forma trigonometrica - ```ComplexTrig```. Pentru acestea am implementat constructori, set-eri, get-eri, diverse metode si am supraincarcat operatori compusi de atribuire, operatori aritmetici binari, operatori relationali si operatori de citire si de scriere.

De asemenea, prezint functionalitatile acestor clase, efectuand diverse operatii pe obiecte de tipul acestora.

### Numere complexe in forma algebrica - clasa ```ComplexAlg```

Numerele complexe in forma algebrica sunt de forma *z = a + bi*, unde *a* este partea reala a numarului, iar *b* este partea imaginara a numarului. Aceasta clasa permite stocarea numerelor complexe in aceasta forma.

- Atributele acestei clase sunt doua variabile de tip ```long double```, una pentru partea reala a numarului - ```re``` - si una pentru partea imaginara - ```im```. 
- Am implementat trei constructori, unul neparametrizat (partea reala si cea imaginara sunt ambele 0) si doi parametrizati, dintre care unul accepta doua argumente, pentru parte reala si imaginara, si unul de copiere. 
- Am implementat set-eri si get-eri - ```void setReal(long double)```, ```void setImag(long double)```, ```long double getReal()``` si ```long double getImag()``` - cate unul pentru partea reala si pentru partea imaginara.
- Am supraincarcat operatorii compusi de atribuire ```+=```, ```-=```, ```*=``` si ```/=```, atat pentru operatii intre doua numere complexe, cat si pentru operatii intre un numar complex si unul real.
- Am supraincarcat operatorii aritmetici binari ```+```, ```-```, ```*``` si ```/```, atat pentru operatii intre doua numere complexe, cat si pentru operatii intre un numar complex si unul real (pentru toti mai putin ```/```, ordinea poate fi ori complex si real, ori real si complex). Pentru operatii precum inmultirea sau impartirea numerelor complexe sunt implementate formulele matematice corespunzatoare.
- Am supraincarcat operatorii relationali ```==``` si ```!=```. Acestia verifica daca partile reale, respectiv partile imaginare a doua numere complexe sunt egale intre ele.
- Am supraincarcat operatorii de citire si de scriere ```>>``` si ```<<```. Operatorul de scriere se adapteaza in functie de parte reala nula sau nenula, pozitiva sau negativa, respectiv parte imaginara nula sau nenula, pozitiva sau negativa.
- Metoda ```modul()``` returneaza un numar real, modulul numarului complex calculat dupa formula matematica.
- Metoda ```conjugat()``` returneaza un numar complex in forma algebrica, conjugatul numarului complex calculat dupa formula matematica.
- Metoda ```conversieFormaTrig()``` returneaza un numar complex in forma trigonometrica (obiect de tipul clasei ```ComplexTrig```). Calculeaza modulul si argumentul dupa formulele matematice si foloseste set-erii clasei ```ComplexTrig``` pentru a crea obiectul de tipul acesteia, care reprezinta scrierea in forma trigonometrica a numarului complex in forma algebrica.

### Numere complexe in forma trigonometrica - clasa ```ComplexTrig```

Numerele complexe in forma trigonometrica sunt de forma *z = r(cos(t) + isin(t))*, unde *r = sqrt(a^2 + b^2)* este modulul numarului, iar *t = arctan(b / a)* este argumentul numarului.

- Atributele acestei clase sunt tot doua variabile de tip ```long double```, una pentru modulul numarului - ```mdl``` - si una pentru argumentul acestuia - ```arg```.
- Am implementat, de asemenea, trei constructori, unul neparametrizat (modulul si argumentul sunt ambele 0) si doi parametrizati, dintre care unul accepta doua argumente, pentru modul si argument, si unul de copiere.
- Am implementat set-eri si get-eri - ```void setModul(long double)```, ```void setArg(long double)```, ```long double getModul()``` si ```long double getArg();``` - cate unul pentru modul si pentru argument.
- Am supraincarcat operatorii compusi de atribuire ```*=``` si ```/=```, atat pentru operatii intre doua numere complexe, cat si pentru operatii intre un numar complex si unul real.
- Am supraincarcat operatorii aritmetici binari ```*``` si ```/```, atat pentru operatii intre doua numere complexe, cat si pentru operatii intre un numar complex si unul real (pentru ```*```, ordinea poate fi ori complex si real, ori real si complex). I-am implementat folosind formulele matematice corespunzatoare.
- Am supraincarcat operatorii relationali ```==``` si ```!=```. Acestia verifica daca modulele, respectiv argumentele a doua numere complexe sunt egale intre ele.
- Am supraincarcat operatorii de citire si de scriere ```>>``` si ```<<```. Operatorul de scriere se adapteaza in functie de modul nul sau nenul si afiseaza numele functiilor trigonometrice.
- Metoda ```conversieFormaAlg()``` returneaza un numar complex in forma algebrica (obiect de tipul clasei ```ComplexAlg```). Calculeaza partea reala si partea imaginara si foloseste set-erii clasei ```ComplexAlg``` pentru a crea obiectul de tipul acesteia, care reprezinta scrierea in forma algebrica a numarului complex in forma trigonometrica.
