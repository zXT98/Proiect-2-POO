#include <iostream>
#include <vector>
#include "PersoanaRep.h"


Person * PersonRepository::findByFullName(std::string FirstName, std::string LastName)
{

	for (int i = 0; i < m_Entitati.size(); i++)
		if (m_Entitati.at(i)->get_FirstName() == FirstName && m_Entitati.at(i)->get_LastName() == LastName)
			return m_Entitati.at(i);
}

Person * PersonRepository::findByCNP(std::string CNP)
{
	for (int i = 0; i < m_Entitati.size(); i++)
		if (m_Entitati.at(i)->get_CNP() == CNP)
			return m_Entitati.at(i);
}

/*void PersonRepository::add(Person * p)
{
	m_Persons.push_back(p);
}*/


