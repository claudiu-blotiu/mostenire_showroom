#include "Client.h"
Client::Client(string nume, int total_plata):Masina("Audi",1900,190)
{
	cout << "Constr cu 3 parametrii Client" << endl;

	this->nume = nume;
	this->total_plata = total_plata;
}

Client::Client(const Client& customer) :Masina(customer)
{
	cout << "Constr de copiere Client" << endl;

	this->nume = customer.nume;
	this->total_plata = customer.total_plata;
}

Client::Client(string nume, int total_plata, string marca, int motor, int impozit) :Masina(marca, motor, impozit)
{
	cout << "Constr cu 6 parametrii Client" << endl;

	this->nume = nume;
	this->total_plata = total_plata;
}

void Client::set_nume(string nume)
{
	this->nume = nume;
}
string Client::get_nume()
{
	return this->nume;
}

void Client::set_total_plata(int buget)
{
	this->total_plata = total_plata;
}
int Client::get_total_plata()
{
	return this->total_plata;
}

string Client::description_Client()
{
	string text = "";

	text += "nume: " + this->nume + "\n";
	text += "total_plata: " + to_string(this->total_plata) + "\n";

	return text;
}