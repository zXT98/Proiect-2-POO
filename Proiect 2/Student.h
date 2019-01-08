#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>
#include "Persoana.h"
class Student : public Person{
private:
	std::string m_Birthdate;
	int m_NrMatricol;
	int m_AnStudii;
	std::string m_FormaFinantare;
public:
	Student();
	std::string get_occupation() override;

};

#endif // STUDENT_H_INCLUDED
