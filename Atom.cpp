#include "Atom.hpp"

Atom::Atom(int protons, int neutrons, int electrons)
{
    this->protons = protons;
    this->neutrons = neutrons;
    this->electrons = electrons;
}

int Atom::getAtomicNumber()
{
    int atomicNumber = protons;
    return atomicNumber;
}

int Atom::getMassNumber()
{
    int massNumber = protons + neutrons;
    return massNumber;
}

int Atom::getCharge()
{
    int charge = protons - electrons;
    return charge;
}
