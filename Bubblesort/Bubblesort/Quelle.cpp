#include <iostream>

using namespace std;

int main() {

	int Z[5] = { 5, 24, 1, 233, -7 };


	bool tausch;
	int help;




	do {


		tausch = false;


		for (int i = 0; i < 4; i++) {

			if (Z[i] > Z[i + 1]) {

				help = Z[i];    //hilfe = a 
				Z[i] = Z[i + 1]; // a = b 
				Z[i + 1] = help; // b = h 


				tausch = true;
			}


		}
		for (int i = 0; i < 5; i++) {

			cout << Z[i] << "\t" <<"\n";
			
		}
		cout << "---------" << "\n";
	} while (tausch == true);



	system("pause");
	return 0;
}