#ifndef STUDENTROL_H_INCLUDED
#define STUDENTROL_H_INCLUDED

#include <iostream>
#include <string>
#include "Rol.h"

class StudentRole{
private:
	std::string m_Birthdate;
	int m_NrMatricol;
	int m_AnStudii;
	std::string m_FormaFinantare;
public:
	StudentRole():Role(Role::STUDENT_ROLE){
    }
};

#endif // STUDENTROL_H_INCLUDED
