#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


// Prototypen deklarieren
//Daten werden im integerArray gespeichert
//maxNumElements gibt die maximale mögliche Anzahl im Array an
int readArray(int integerArray[], int maxNumElements);
int sumArray(int integerArray[], int numElements);
void displayArray(int integerArray[], int numElements);
int main(int nNumberofArgs, char* pszArgs[])
{
// Den Schleifenzähler eingeben
cout << "This program sums values entered "
<< "by the user\n";
cout << "Terminate the loop by entering "
<< "a negative number\n";
cout << endl;

// die Zahlen in einem lokalen Array speichern
int inputValues[128];
int numberOfValues = readArray(inputValues, 128);

// jetzt die Werte und ihre Summe ausgeben
displayArray(inputValues, numberOfValues);
cout << "The sum is "
<< sumArray(inputValues, numberOfValues)
<< endl;


return 0;
}

//readArray - ließt die Eingabe in einem integerArray. Bis der Bediener eine negative Zahl eingibt
int readArray(int integerArray[], int maxNumElements)
{
int numberOfValues;
for(numberOfValues = 0;
numberOfValues < maxNumElements;
numberOfValues++)
{
//die nächste Zahl holen
int integerValue;
cout << "Enter next number: ";
cin >> integerValue;
//wenn negativ
if (integerValue < 0)
{
//...dann raus
break;
}
//anderfalls die Zahl im Array speichern
integerArray[numberOfValues] = integerValue;
}
//die Anzahl gelesener Zahlen zurückliefern
return numberOfValues;
}
// displayArray - Elemente eines Arrays
// die Länge size0FloatArray anzeigen
void displayArray(int integerArray[], int numElements)
{
cout << "The value of the array is:" << endl;
for (int i = 0; i < numElements; i++)
{
cout << i << ": " << integerArray[i] << endl;
}
cout << endl;
}
// sumArray - die Summe der Elemente eines Integer Arrays zurückgeben
int sumArray(int integerArray[], int numElements)
{
int accumulator = 0;
for (int i = 0; i < numElements; i++)
{
accumulator += integerArray[i];
}
return accumulator;
}
