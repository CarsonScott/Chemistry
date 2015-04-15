#ifndef ATOM_HPP_INCLUDED
#define ATOM_HPP_INCLUDED

#include <iostream>

class Atom
{
private:
    int protons;
    int neutrons;
    int electrons;

public:
    Atom(int, int, int);
    int getAtomicNumber();
    int getMassNumber();
    int getCharge();
};

#endif // ATOM_HPP_INCLUDED
