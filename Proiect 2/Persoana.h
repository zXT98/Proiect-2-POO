#ifndef PERSOANA_H_INCLUDED
#define PERSOANA_H_INCLUDED


#include <string>
#include <vector>
#include "Rol.h"

class Person{
public:
	Person(std::vector<Role*> Roles,std::string CNP, std::string FirstName, std::string LastName, std::string Email);
	Person();

	void set_FirstName(std::string);
	std::string get_FirstName();

	void set_LastName(std::string);
	std::string get_LastName();

	void set_CNP(std::string);
	std::string get_CNP();

	void set_Email(std::string);
	std::string get_Email();

	//virtual std::string get_occupation();

	friend std::istream & operator>>(std::istream & stream, Person& p);
	friend std::ostream & operator<<(std::ostream & stream, Person& p);

	void AddRole(Role*);

protected:
	std::string m_FirstName;
	std::string m_LastName;
	std::string m_CNP;
	std::string m_Email;
	std::vector<Role*>m_Roles;
};


#endif // PERSOANA_H_INCLUDED
