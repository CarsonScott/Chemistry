#include "ElementTable.hpp"

void ElementTable::saveElementNamesFrom(std::ifstream& source)
{
    char line[256];
    while(source.getline(line, 256))
    {
        std::string name = std::string(line);
        elementNames.push_back(name);
    }
}

ElementTable::ElementTable()
{
    std::ifstream source("elements.txt");
    saveElementNamesFrom(source);
    source.close();
}

std::string ElementTable::getElementName(int atomicNumber)
{
    if(atomicNumber < 1)
    {
        atomicNumber = 1;
    }
    else if(atomicNumber > 118)
    {
        atomicNumber = 118;
    }

    std::string elementName = elementNames[atomicNumber - 1];
    return elementName;
}
