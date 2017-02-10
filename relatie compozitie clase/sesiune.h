#if !defined (__SESIUNE_H__)
#define __SESIUNE_H__

#include <iostream>
#include <string>
#include <list>
using namespace std;

class Sesiune
{
public:
	Sesiune(const string& denumire, const string& moderator):_denumire(denumire),_moderator(moderator)
	{
		cout << "Initializare instanta Sesiune." << endl;
		cout << "Denumire:" << _denumire << endl;
		cout << "Moderator: " << _moderator << endl;
	}

	void InregistrareaParticipant(const string& numeParticipant);
	void PrezentareParticipanti() const;

private:
	string _denumire;
	string _moderator;

	list<string> _participanti;

};

#endif

