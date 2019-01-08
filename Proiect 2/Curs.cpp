#include "Curs.h"


Course::Course(std::string subject, std::string type, std::vector<Activity*> activities)
{
    m_Subject = subject;
    m_Type = type;
    m_Activities = activities;
}

std::string Course::get_Subject()
{
    return m_Subject;
}

std::string Course::get_Type()
{
    return m_Type;
}

void Course::set_Subject(std::string name)
{
    m_Subject = name;
}

void Course::set_Type(std::string type)
{
    m_Type = type;
}
