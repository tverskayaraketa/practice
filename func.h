#pragma once

typedef struct VAZ
{
	char* carname;
	int fuel;
	int hp;
	int toner;
	int tuning;
} Devyatka;

Devyatka* Constructor(char* name, int fuel, int hp, int toner, int tuning);

void Licence(Devyatka heli);

void Refuel(Devyatka heli);

void Gai(Devyatka heli);

void Change(Devyatka heli);

void hasan(Devyatka heli);

Devyatka* Destructor(Devyatka heli);
