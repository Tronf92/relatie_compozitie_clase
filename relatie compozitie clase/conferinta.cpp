#include "sesiune.h"

int main()
{
	Sesiune oop("Programare orientata obiect", "Mircea Preda");

	oop.InregistrareaParticipant("Daniel Popescu");
	oop.InregistrareaParticipant("Maria Marinescu");

	oop.PrezentareParticipanti();

	Sesiune pp("Programare procedurala", "Cristian Ionesc");

	pp.InregistrareaParticipant("Paul Ionescu");
	pp.InregistrareaParticipant("Daniela Iliescu");

	pp.PrezentareParticipanti();

	getchar();
	return 0;

}
