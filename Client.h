#include"Masini.h"
class Client:public Masina
{
private:

	string nume = "";
	int total_plata = 1;

public:

	Client()
	{
		cout << "Constr cu 0 parametrii Client" << endl;
	}

	Client(string, int);

	Client(const Client& customer);

	Client(string, int, string, int,int);

	void set_nume(string);
	string get_nume();

	void set_total_plata(int);
	int get_total_plata();

	string description_Client();

};

