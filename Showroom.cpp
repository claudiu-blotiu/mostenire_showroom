#include "Showroom.h"

Showroom::Showroom(string nume, int nr_masini, string clasa)
{
	cout << "Eu sunt constrcutorul cu patru paramterii al bazei" << endl;
	this->nume = nume;
	this->nr_masini = nr_masini;
	this->clasa = clasa;
}

Showroom::Showroom(const Showroom& reprezentanta)
{
	cout << "Constr de copiere baza" << endl;

	this->nume = reprezentanta.nume;
	this->nr_masini = reprezentanta.nr_masini;
	this->clasa = reprezentanta.clasa;
	
}

void Showroom::set_nume(string nume)
{
	this->nume = nume;
}
string Showroom::get_nume()
{
	return this->nume;
}

void Showroom::set_nr_masini(int nr_masini)
{
	this->nr_masini = nr_masini;
}
int Showroom::get_nr_masini()
{
	return this->nr_masini;
}

void Showroom::set_clasa(string clasa)
{
	this->clasa = clasa;
}
string Showroom::get_clasa()
{
	return this->clasa;
}

string Showroom::description_Showroom()
{
	string text = "";

	text += "nume: " + this->nume + "\n";
	text += "nr_masini: " + to_string(this->nr_masini) + "\n";
	text += "clasa: " + this->clasa + "\n";

	return text;
}

string Showroom::to_save()
{
	string text = "";

	text += this->nume + " ";
	text += to_string(this->nr_masini) + " ";
	text += this->clasa + " ";

	return text;
}