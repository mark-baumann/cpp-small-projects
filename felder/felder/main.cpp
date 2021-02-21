#include <iostream>

using namespace std;

// Strukturen
//
struct S_FeldInfo
{
	bool Besetzt;
	char Name[30];
};

// Variablen und Konstanten
//
const int Breite = 5;
const int Hoehe = 5;
S_FeldInfo Spielfeld[Breite][Hoehe];

// Prototypen
void LoescheSpielfeld();
void ZeigeSpielfeld();
void ZeigeFelddaten();
void BesetzeFeld();

int main()
{
	int Auswahl = 0;

	LoescheSpielfeld(); // Spielfeld initialisieren


	do
	{
		cout << endl;
		cout << "1 - Spielfeld anzeigen" << endl;
		cout << "2 - Feld besetzen" << endl;
		cout << "3 - Felddaten anzeigen" << endl;
		cout << "4 - Spielfeld loeschen" << endl;
		cout << "5 - Programm beenden" << endl;
		cout << "Auswahl: ";
		cin >> Auswahl;

		switch (Auswahl)
		{

		case (1):
		{
			ZeigeSpielfeld();
		} break;


		case (2):
		{
			BesetzeFeld();
		} break;


		case (3):
		{
			ZeigeFelddaten();
		} break;


		case (4):
		{
			LoescheSpielfeld();
			cout << "Spielfeld wurde geloescht!" << endl;
		} break;


		case (5):
		{
			cout << "Programm beendet." << endl;
		} break;

		default:
		{
			cout << "Ungueltiger Menuepunkt!" << endl;
		}
		}

	} while (Auswahl != 5);

	return 0;
}


void LoescheSpielfeld()
{
	for (int y = 0; y < Hoehe; y++)
	{
		for (int x = 0; x < Breite; x++)
		{
			Spielfeld[x][y].Besetzt = false; //setze alle werte auf false. die Logik das es dann auch angezeigt wird, kommt in zeigespielfeld()
		}
	}

} 

void ZeigeSpielfeld()
{
	cout << endl;

	for (int y = 0; y < Hoehe; y++)
	{
		for (int x = 0; x < Breite; x++)
		{
			// Wenn das Feld besetzt ist, ein X zeichnen,
			// ansonsten einen Punkt
			if (Spielfeld[x][y].Besetzt == true)
				cout << "X";
			else
				cout << ".";
		}

		cout << endl;
	}
} 

void BesetzeFeld()
{
	int x = 0;
	int y = 0;

	// Koordinaten abfragen
	do
	{
		cout << "x-Position (1-" << Breite << "): ";
		cin >> x;
	} while (x<1 || x>Breite);

	do
	{
		cout << "y-Position (1-" << Hoehe << "): ";
		cin >> y;
	} while (y<1 || y>Breite);

	// Name abfragen und Felddaten f¸llen
	cout << "Name: ";
	cin.ignore();
	cin.get(Spielfeld[x - 1][y - 1].Name, 29);
	Spielfeld[x - 1][y - 1].Besetzt = true;

} 

void ZeigeFelddaten() {
	int x = 0;
	int y = 0;

	do {
		cout << "x Position";
		cin >> x;
	} while (x < 1 || x > Breite);

	do {
		cout << "y Position";
		cin >> y;
	} while (y < 1 || y > Breite);


	if (Spielfeld[x-1][y-1].Besetzt == false) {
		cout << "Dieses Feld ist noch nicht besetzt";
	}
	else {
		cout << "Dieses Feld wird von " << Spielfeld[x-1][y-1].Name << " besetzt";
	}

}


