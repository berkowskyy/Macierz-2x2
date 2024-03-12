#ifndef _MACIERZ_H_
#define _MACIERZ_H_
#include <iostream>

using namespace std;

class Macierz {

private:
	double macierz[2][2];

public:
	/// <summary>
	/// Konstruktor domy�lny ustawiaj�cy warto�ci macierzy na 0
	/// </summary>
	Macierz();

	/// <summary>
	/// Konstruktor kopiuj�cy macierz
	/// </summary>
	/// <param name="copy">referencja do obiektu Macierz</param>
	Macierz(const Macierz& copy);

	/// <summary>
	/// Destruktor klasy Macierz
	/// </summary>
	~Macierz();

	/// <summary>
	/// Przeci��ony operator mno�enia
	/// </summary>
	/// <param name="copy">Referencja do obiektu Macierz</param>
	/// <returns>Zwraca wynik mnozenia macierzy</returns>
	Macierz operator * (const Macierz& copy) const;

	/// <summary>
	/// Przeci��ony operator dodawania
	/// </summary>
	/// <param name="copy">Referencja do obiektu Macierz</param>
	/// <returns>Zwraca wynik dodawania macierzy</returns>
	Macierz operator + (const Macierz& copy) const;

	/// <summary>
	/// Przeci��ony operator mno�enia
	/// </summary>
	/// <param name="x">wartosc, dzieki ktorej mozna mnozyc przez skalar</param>
	/// <returns>Zwraca wynim mnozenia macierzy</returns>
	Macierz operator * (const double x) const;

	/// <summary>
	/// Przeci��ony operator przypisania
	/// </summary>
	/// <param name="copy">Referencja do obiektu Macierz</param>
	/// <returns>Zwraca przypisana macierz</returns>
	Macierz& operator =(const Macierz& copy);

	/// <summary>
	/// Przeci��onu operator por�wnania
	/// </summary>
	/// <param name="copy"Referencja do obiektu Macierz></param>
	/// <returns>Zwraca 0 lub 1</returns>
	bool operator == (const Macierz& copy) const;

	/// <summary>
	/// Przeci��ony operator szybszego dodawania
	/// </summary>
	/// <param name="copy"></param>
	/// <returns>Zwraca macierz po dodaniu</returns>
	Macierz& operator += (const Macierz& copy);

	/// <summary>
	/// Przeci��ony operator szybszego mno�enia
	/// </summary>
	/// <param name="copy"></param>
	/// <returns>Zwraca pomnozona macierz</returns>
	Macierz& operator *= (const Macierz& copy);

	/// <summary>
	/// Przeci��ony operator szybszego mno�enia
	/// </summary>
	/// <param name="x">wartosc, dzieki ktorej mozemy mnozyc przez skalar</param>
	/// <returns>Zwraca pomnozona macierz</returns>
	Macierz& operator *= (const double x);

	/// <summary>
	/// Przeci��ony operator wstawiania
	/// </summary>
	/// <param name="s"></param>
	/// <param name="m"></param>
	/// <returns>Zwraca wartosc tekstowa</returns>
	friend std::ostream& operator <<(std::ostream& s, const Macierz& m);

	/// <summary>
	/// Metoda ustawiania wartosci
	/// </summary>
	/// <param name="i">lokalizacja z pierwszej tablicy</param>
	/// <param name="j">lokalizacja z drugiej tablicy</param>
	/// <param name="x">wartosc w miejscu [i] [j]</param>
	void set(int i, int j, double x);

	/// <summary>
	/// Metoda otrzymywania wartosci
	/// </summary>
	/// <param name="i">Indeks z pierwszej tablicy</param>
	/// <param name="j">Indeks z drugiej tablicy</param>
	/// <returns>Zwraca wartosc elementu z miejsca [i] [j]</returns>
	double get(int i, int j) const;

	/// <summary>
	/// Metoda transpozycji macierzy
	/// </summary>
	void transpozycja();
};



#endif //_MACIERZ_H_
