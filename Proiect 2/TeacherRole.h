#ifndef TEACHERROLE_H_INCLUDED
#define TEACHERROLE_H_INCLUDED

#include <iostream>
#include "Rol.h"
class TeacherRole : public Role{
public:
	//TeacherRole();
	//~TeacherRole();
	TeacherRole():Role(TEACHER_ROLE){}
};

#endif // TEACHERROLE_H_INCLUDED
