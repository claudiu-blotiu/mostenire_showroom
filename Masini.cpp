#include"Masini.h"

Masina::Masina(string marca, int motor,int impozit):Showroom("Autoklass",100,"A")
{
	cout << "Constr cu 3 parametrii Masina" << endl;
	this->marca = marca;
	this->motor = motor;
	this->impozit = impozit;
}

Masina::Masina(const Masina& product) :Showroom(product)
{
	cout << "Constr de copiere Masina" << endl;
	this->marca = product.marca;
	this->motor = product.motor;
	this->impozit = impozit;
}

Masina::Masina(string marca, int motor,int impozit, string nume, int nr_masini, string clasa) : Showroom(nume, nr_masini, clasa)
{
	cout << "Constr cu 6 parametrii Masina" << endl;

	this->marca = marca;
	this->motor = motor;
	this->impozit = impozit;
}


void Masina::set_marca(string marca)
{
	this->marca = marca;
}
string Masina::get_marca()
{
	return this->marca;
}

void Masina::set_motor(int motor)
{
	this->motor = motor;
}
int Masina::get_motor()
{
	return this->motor;
}

void Masina::set_impozit(int impozit)
{
	this->impozit = impozit;
}
int Masina::get_impozit()
{
	return this->impozit;
}


string Masina::description_Masina()
{
	string text = "";

	text += "marca: " + this->marca + "\n";
	text += "motor: " + to_string(this->motor) + "\n";
	text += "impozit: " + to_string(this->impozit) + "\n";
	
	return text;
}


