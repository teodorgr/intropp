#include <iostream>
using namespace std;

// opgave 1
//int main()
  //{
	//cout << "hello world";

  //}

// oppgave 2
//int main()
//{
	//string bruce;
	//cout << "Skriv bruce";
	//cin >> bruce;
	//cout << "Du skrev " <<bruce;


/*void hallo()
{


	string morn;
	cout << "   morn, Hva heter du \n";
	cin >>  morn;
	cout << " Det er du som heter "   << morn;


}


int main()
{
	int i = 1;
	for (i = 1; i < 5;)
	{
		hallo();
		++i;

	}
	if (i == 5);
	{
		cout << " Stop ";
	}


}
*/

char teo = 'a';
int teo1 = 1;
long teo2 = 1;
float teo3 = 2;
double teo4 = 3;
int main()
{
	cout << "stoerrelsen paa char = " << sizeof(teo) << "\n";
	cout << "stoerrelsen paa int = " << sizeof(teo1) << "\n";
	cout << "stoerrelsen paa long = " << sizeof(teo2) << "\n";
	cout << "stoerrelsen paa float = " << sizeof(teo3) << "\n";
	cout << "stoerrelsen paa double = " << sizeof(teo4) << "\n";
}