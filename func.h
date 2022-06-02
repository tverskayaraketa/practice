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

void Licence(Devyatka laiba);

void Refuel(Devyatka laiba);

void Gai(Devyatka laiba);

void Change(Devyatka laiba);

void hasan(Devyatka laiba);

Devyatka* Destructor(Devyatka laiba);
