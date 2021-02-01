#include <iostream>


using namespace std;




class Memoryfield {
public:
	int M0[4][4] = { 2,6,7,1, 6,4,5,3, 8,5,4,7, 1,7,2,3 };
	int M1[4][4] = { 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 };

	int ze1, ze2, sp1, sp2;
	bool endgame = true;
	int zaehler = 0;



	void printGameField() {
		for (int z = 0; z < 4; z++)
		{
			cout << endl;
			for (int s = 0; s < 4; s++)
			{

				cout << M1[z][s] << "\t";



			}
			cout << "\n";



		}

	}



	void enterCards() {
		//eingabe der Zahlenwerte
		cout << "z: "; cin >> ze1;
		cout << "s: "; cin >> sp1;

		cout << "z2: "; cin >> ze2;
		cout << "s2: "; cin >> sp2;

		//decke das Spielfeld mit der eingegebenen Zahl aus
		M1[ze1][sp1] = M0[ze1][sp1];
		M1[ze2][sp2] = M0[ze2][sp2];
	}

	void logic() {
		if (M1[ze1][sp1] != M1[ze2][sp2]) {
			M1[ze1][sp1] = 0;
			M1[ze2][sp2] = 0;
		}
	}
};




int main() {

	Memoryfield mf;

	while (true)
	{
		mf.printGameField();
		mf.enterCards();
		system("cls");
		mf.printGameField();
		system("pause");
		mf.logic();
		system("cls");
	}


	return 0;
}