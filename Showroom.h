#include<iostream>
#include<string>
using namespace std;

class Showroom
{
private:

	string nume = "";
	int nr_masini = 1;
	string clasa = "";

public:

	Showroom()
	{
		cout << "Eu sunt constructorul fara parametrii al bazei"<<endl;
	}

	Showroom(string, int, string);

	Showroom(const Showroom& reprezentanta);

	void set_nume(string);
	string get_nume();

	void set_nr_masini(int);
	int get_nr_masini();

	void set_clasa(string);
	string get_clasa();

	string description_Showroom();

	string to_save();

	












};

