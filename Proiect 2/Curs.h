#ifndef CURS_H_INCLUDED
#define CURS_H_INCLUDED

#include "Activitate.h"

class Course{
public:
	Course();
	Course(std::string subject, std::string type, std::vector<Activity*> activities);

	std::string get_Subject();
	void set_Subject(std::string);

	std::string get_Type();
	void set_Type(std::string);

private:
    std::string m_Subject;
    std::string m_Type;
    std::vector<Activity*> m_Activities;
    int m_Presences;
};


#endif // CURS_H_INCLUDED
