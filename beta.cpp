#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <fstream>

using namespace std;
fstream in,out,of,of1;
int main()
{
	char risp;
	int k=0;
	int i=0;
	char app;
	bool prima=true;
	char pes[200];
	char parola[200];
do{
	int f=0;
	cout << "Ciao, benvenuto all'impiccato" ;
	if (prima)
	{
	in.open("parola.txt",ios::in);
	while (in.good())
	{
	in >> parola[i];
		i++;
	}
}
	cout << "la parola da indovinare è stata caricata";
	cout << "questa e' la parola da indovinare" << endl;
   if (prima)
   {
   	 of.open("ind.txt",ios::out);
	for (int e=0;e<i-1;e++){
        of << "_";
	}
	of.close();
	 }  
    of1.open("ind.txt",ios::in);
	for (int e=0;e<i-1;e++){
        of1 >> app;
		cout << app; 
	}
	of1.close();
	cout << endl;
	cout << "Hai 30 secondi per ogni lettera";
	cout << endl;
	cout << "Digita una lettera:" ;
	cin >> risp;
	while (f<i)
	{
		if (risp==parola[f])
		{
		pes[f]=risp;
	}
	else if (prima){
		pes[f]='_';
	}
	f++;
	}
	
	 cout << "controllo in corso della parola, attendere";
	out.open("ind.txt",ios::out);
	for (int e=0;e<f-1;e++) out << pes[e];
	out.close();
	prima=false;
	int o=0;
int fg=0;
	while (parola[o]!='\0')
	{
		if (pes[o]==parola[o]) fg++;
	o++;
	}
	if (fg==i-1) {
	cout << endl;
	for (int e=0;e<f-1;e++) cout << pes[e];
	cout << endl << "parola indovinata!!";
Sleep(6000);
	 k=3;
}
system("cls");
}
while (k!=3);
}
