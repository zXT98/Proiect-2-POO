#include "RoomRep.h"

Room * RoomRepository::findByName(std::string room)
{
	for (int i = 0; i < m_Entitati.size(); i++)
		if (m_Entitati[i]->get_Name() == room)
			return m_Entitati[i];
}
