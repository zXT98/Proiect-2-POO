#include "Room.h"


Room::Room(std::string nume)
{
    m_Name = nume;
}

std::string Room::get_Name()
{
    return m_Name;
}

std::istream& operator>> (std::istream& stream, Room& p)
{
    std::cin >> p.m_Name;
    return stream;
}

std::ostream& operator<< (std::ostream& stream, const Room& p)
{
    std::cout << p.m_Name << '\n';
    return stream;
}
