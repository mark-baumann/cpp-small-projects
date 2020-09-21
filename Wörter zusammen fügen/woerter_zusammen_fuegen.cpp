#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
// Prototypen deklarieren
void concatString(char szTarget[], const char szSource[]);
int main(int nNumberofArgs, char* pszArgs[])
{
//Ersten String einlesen
char szString1[256];
cout << "Enter string #1:";
cin.getline(szString1, 128);
//Zweiten String einlesen
char szString2[128];
cout << "Enter string #2:";
cin.getline(szString2, 128);
// Mit einem - verbinden
concatString(szString1, " - ");
// Ersten String (inkl. Strich) mit dem zweiten String verbinden
concatString(szString1, szString2);
// das Resultat
cout << "\n" << szString1 << endl;
return 0;
}
// concatString - szSource an das Ende von szTarget hängen
void concatString(char szTarget[], const char szSource[])
{
// Ende  des ersten Strings suchen
int targetIndex = 0;
while(szTarget[targetIndex])
{
targetIndex++;
}
// nehme den zweiten String und hänge Ihn an den ersten String an 
int sourceIndex = 0;
while(szSource[sourceIndex])
{
szTarget[targetIndex] =
szSource[sourceIndex];
targetIndex++;
sourceIndex++;
}
// mache das bis die Null komnmt
szTarget[targetIndex] = '\0';
}