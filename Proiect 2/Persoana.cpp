#include "Persoana.h"
#include <iostream>

Person::Person(std::vector<Role*> Roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email=""):m_Email(Email)
{
    m_FirstName=FirstName;
	m_LastName=LastName;
	m_CNP=CNP;
	m_Roles=Roles;
}

void Person::set_FirstName(std::string FN){
	m_FirstName = FN;
}

std::string Person::get_FirstName(){
	return m_FirstName;
}

void Person::set_LastName(std::string LN){
	m_LastName = LN;
}

std::string Person::get_LastName(){
	return m_LastName;
}

void Person::set_CNP(std::string cnp){
	m_CNP = cnp;
}

std::string Person::get_CNP(){
	return m_CNP;
}

void Person::set_Email(std::string email){
	m_Email = email;
}

std::string Person::get_Email()
{
	return m_Email;
}
/*
std::string Person::get_occupation(){
	return "No occupation";
}*/

/*
std::istream & operator>>(std::istream & stream, Person & p){
	std::string str;
	char ch;
	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.m_LastName = str;
	str = "";

	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.m_FirstName = str;
	str = "";

	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.m_CNP = str;
	str = "";

	stream.get(ch);
	while (ch != '\n' && !stream.eof()) {
		str += ch;
		stream.get(ch);
	}
	p.m_Email = str;
	str = "";

	return stream;
}
*/

std::istream& operator>>(std::istream& stream, Person& p)
{
    stream >> p.m_CNP >> p.m_FirstName >> p.m_LastName >> p.m_Email;
    return stream;
}


std::ostream & operator<<(std::ostream & stream, Person & p){
	stream << "CNP: " << p.m_CNP << "\nFirst Name: " << p.m_FirstName << "\nLast Name: " << p.m_LastName << "\nEmail: " << p.m_Email << "\n";  //<< p.get_occupation();
	return stream;
}
void Person::AddRole(Role* role){
    m_Roles.push_back(role);
}
