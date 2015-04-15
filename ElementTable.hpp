#ifndef ELEMENTTABLE_HPP_INCLUDED
#define ELEMENTTABLE_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <vector>

class ElementTable
{
private:
    std::vector<std::string> elementNames;
    void saveElementNamesFrom(std::ifstream&);

public:
    ElementTable();
    std::string getElementName(int);
};

#endif // ELEMENTTABLE_HPP_INCLUDED
