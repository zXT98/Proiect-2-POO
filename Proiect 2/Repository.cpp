#include<iostream>
#include "Repository.h"

template<class Temp>
void Repository<Temp>::add(Temp* p)
{
    m_Entitati.push_back(p);
}

template<class Temp>
void Repository<Temp>::print()
{
    for(int i = 0; i < m_Entitati.size(); i++)
        std::cout << *m_Entitati[i]<<" ";
    std::cout << '\n';

}
