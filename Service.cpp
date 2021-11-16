#include "Service.h"

Service::Service(string tip_serviciu, int cost_estimativ) :Showroom("Bavaria",50,"Sibiu") //apleaza Constructorul"Persoana"cu parametrii
{
	cout << "Constr cu 3 parametrii Service" << endl;
	this->tip_serviciu = tip_serviciu;
	this->cost_estimativ = cost_estimativ;
	
}

Service::Service(const Service& service):Showroom(service)
{
	cout << "Constr copiere Service" << endl;

	this->tip_serviciu = service.tip_serviciu;
	this->cost_estimativ = service.cost_estimativ;
}

Service::Service(string tip_serviciu, int cost_estimativ, string nume, int nr_masini,string clasa) :Showroom(nume, nr_masini, clasa)
{
	cout << "Constr cu 6 parametrii Service" << endl;

	this->tip_serviciu = tip_serviciu;
	this->cost_estimativ = cost_estimativ;
}

void Service::set_tip_serviciu(string tip_serviciu)
{
	this->tip_serviciu = tip_serviciu;
}
string Service::get_tip_serviciu()
{
	return this->tip_serviciu;
}

void Service::set_cost_estimativ(int cost_estimativ)
{
	this->cost_estimativ = cost_estimativ;
}
int Service::get_cost_estimativ()
{
	return this->cost_estimativ;
}

string Service::description_Service()
{
	string text = "";

	text += "tip_serviciu: " + this->tip_serviciu + "\n";
	text += "cost_estimativ: " + to_string(this->cost_estimativ) + "\n";

	return text;
}