#ifndef REPOSITORY_H_INCLUDED
#define REPOSITORY_H_INCLUDED


#include<vector>

template<class Temp>
class Repository
{
 public:
     void add(Temp* p);
     void print();

protected:
    std::vector<Temp*> m_Entitati;
};


#endif // REPOSITORY_H_INCLUDED
