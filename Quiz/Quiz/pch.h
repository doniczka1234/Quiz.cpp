#ifndef Pytanie_H
#define Pytanie_H
#include <iostream>
class Pytanie
{
	public:
		std::string tresc;
		std::string a, b, c, d;
		int nr_pytania;
		std::string  poprawna;
		std::string  odp;
		int punkt;				//  0 lub 1 przyznawane za odp na pytanie
		// metody

		// wczytuje dane z pliku.txt
		void wczytaj();
		// zadaje pytanie
		void zadaj();
		// sprawdza poprawnosc odpowiedzi
		void sprawdz();

};

#endif //Pytanie_H
