#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>



void Pytanie::wczytaj()
{
	std::fstream plik;
	plik.open("quiz.txt", std::ios::in);	

	if (!plik.good())
	{
		std::cout << "Nie udalo sie otworzyc pliku!\n";
		exit(0);
	}
	int nr_linii = (nr_pytania - 1) * 6 + 1;
	int aktualny_nr = 1;	
	std::string linia;

	while (getline(plik, linia))
	{
		if (aktualny_nr == nr_linii) tresc = linia;
		if (aktualny_nr == nr_linii+1) a = linia;
		if (aktualny_nr == nr_linii + 2) b = linia;
		if (aktualny_nr == nr_linii + 3) c = linia;
		if (aktualny_nr == nr_linii + 4) d = linia;
		if (aktualny_nr == nr_linii + 5) poprawna = linia;
		aktualny_nr++;
	}
	plik.close();
}

void Pytanie::zadaj()
{
	std::cout << std::endl << tresc << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << "---------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Odpowiedz:  ";
	std::cin >> odp;
	transform(odp.begin(), odp.end(), odp.begin(),::tolower);
}

void Pytanie::sprawdz()
{
	if (odp == poprawna)
	{
		punkt = 1;
	}
	else punkt = 0;
}