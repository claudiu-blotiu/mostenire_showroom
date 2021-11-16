#include"Service.h"
class Masina :public Showroom
{
private:

	string marca = "";
	int motor = 1;
	int impozit = 1;

public:

	Masina()
	{
		cout << "Constr cu 0 parametrii Masina" << endl;
	}

	Masina(string, int,int);

	Masina(const Masina& product);

	Masina(string, int,int, string, int, string); // Constructor de initializare

	void set_marca(string);
	string get_marca();

	void set_motor(int);
	int get_motor();

	void set_impozit(int);
	int get_impozit();

	string description_Masina();
	

};

