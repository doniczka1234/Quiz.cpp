#include "pch.h"
#include <iostream>

int main()
{
	Pytanie p[5];
	int suma(0);
	for (int i=0; i<=4; i++)
	{ 
		p[i].nr_pytania = i+1;
		p[i].wczytaj();
		p[i].zadaj();
		p[i].sprawdz();
		suma+=p[i].punkt;
	}
	
	std::cout << "Koniec quizu!!\n Zdobyte punkty : " << suma <<std::endl;
	if (suma == 5) std::cout << "W pytke ;) \n";
	else std::cout << "No tak srednio bym powiedzial, tak sreednio ;(\n";
	system("Pause");
	return 0;
}