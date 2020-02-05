#pragma once

#include <iostream>
using namespace std;

class Crypt_chiffre_ADFGVX
{
public:
	Crypt_chiffre_ADFGVX();
	void Encryption();
	void Decryption();
	~Crypt_chiffre_ADFGVX();//Déclaration du tableau


};

void Create_Table(char tableau[6][6]) //Déclaration du tableau
{
    int i,j;
	/*Initialisation des caractères*/
	tableau[0][0]=' ';
	tableau[0][1]='#';
	tableau[0][2]='+';
	tableau[0][3]='%';
	tableau[0][4]='-';
	tableau[0][5]='.';
	tableau[0][6]='*';
	tableau[1][0]='#';
	tableau[2][0]='+';
	tableau[3][0]='%';
	tableau[4][0]='-';
	tableau[5][0]='.';
	tableau[6][0]='*';

	/*Initialisation des caractères une fois déchiffrés*/

	//Colonne 1
	tableau[1][1]='0';
	tableau[2][1]='1';
	tableau[3][1]='2';
	tableau[4][1]='3';
	tableau[5][1]='4';
	tableau[6][1]='5';

	//Colonne 2
	tableau[1][2]='a';
	tableau[2][2]='b';
	tableau[3][2]='c';
	tableau[4][2]='d';
	tableau[5][2]='e';
	tableau[6][2]='f';

	//Colonne 3
	tableau[1][3]='i';
	tableau[2][3]='j';
	tableau[3][3]='k';
	tableau[4][3]='l';
	tableau[5][3]='m';
	tableau[6][3]='n';

	//Colonne 4
	tableau[1][4]='u';
	tableau[2][4]='v';
	tableau[3][4]='w';
	tableau[4][4]='x';
	tableau[5][4]='y';
	tableau[6][4]='z';

	//Colonne 5
	tableau[1][5]='o';
	tableau[2][5]='p';
	tableau[3][5]='q';
	tableau[4][5]='r';
	tableau[5][5]='s';
	tableau[6][5]='t';

	//Colonne 6
	tableau[1][6]='6';
	tableau[2][6]='7';
	tableau[3][6]='8';
	tableau[4][6]='9';
	tableau[5][6]='g';
	tableau[6][6]='h';

	for (i=0;i<=6;i++){
		for (j=0;j<=6;j++){
			cout<<tableau[j][i]<<endl;
		}
	}
}
