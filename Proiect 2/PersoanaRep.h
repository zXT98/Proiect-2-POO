#ifndef PERSOANAREP_H_INCLUDED
#define PERSOANAREP_H_INCLUDED

#include "Repository.h"
#include "Persoana.h"
#include <vector>

class PersonRepository : public Repository<Person> {
	//std::vector<Person*> m_Persons;
public:
	Person* findByFullName(std::string FirstName, std::string LastName);
	Person* findByCNP(std::string CNP);

	//void add(Person *p);

};

#endif // PERSOANAREP_H_INCLUDED
