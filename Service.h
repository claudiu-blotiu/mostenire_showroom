#include"Showroom.h"

class Service :public Showroom
{
private:
	
	string tip_serviciu = "";
	int cost_estimativ = 1;

public:

	Service()
	{
		cout << "Constr cu 0 parametrii Service" << endl;
	}

	Service(string,int);
	
	Service(const Service& platform);

	Service(string, int, string, int, string);

	void set_tip_serviciu(string);
	string get_tip_serviciu();

	void set_cost_estimativ(int);
	int get_cost_estimativ();

	string description_Service();



};

