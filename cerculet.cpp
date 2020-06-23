#include "pch.h"
#include <cmath>
#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

#define koala 20
#define panda 20

char Matrice[koala][panda];

int formula(int x1, int y1, int x2, int y2) {
	return floor(sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));
}

void scarmanz(char *mourice,int cx, int cy, int radiatie, char sign) {
	int i, j;
	for (i = 0; i <= koala; i++)
		for (j = 0; j < panda; j++)
			if (formula(j, i, cx, cy) == radiatie)
				mourice[i*koala + j] = sign;
			else
				mourice[i*koala + j] = 0;
}

int main() {
	int i, j, muie = 10, dragnea; char choice;
	string maria;
A:
	string psd; char sign = '#';
	system("color 0a");
	cout << "Meniu: " << endl << "1. Run the program" << endl << "2. Change Character" << endl << "3. Exit" << endl << "What do you want (use numbers): ";
	cin >> choice;
	if (choice != '1' && choice != '2' && choice != '3') {
		system("color 0c");
		system("cls");
		cout << "Invalid option!" << endl;
		system("pause");
		system("cls");
		goto A;
	}
	system("cls");
	switch (choice) {
	case '1':
	C:
		cout << "raza cerc (pls use numbers between 1 and 9): "; cin >> dragnea;
		if (dragnea > 9 || dragnea < 1) {
			cout << "Your circle might not be displayed, do you want to continue? ('y' || 'n'): ";
			cin >> psd;
			if (psd.compare("n") == 0) {
				system("cls");
				goto C;
			}
		}
		system("cls");
		scarmanz(&Matrice[0][0], muie, muie, dragnea, sign);
		for (i = 0; i < koala; i++) {
			system("color 09");
			system("ping localhost -n . 1 >nul");
			for (j = 0; j < panda; j++)
				cout << Matrice[i][j] << ' ';
			cout << endl;
		}
		cout << "to run again press 'y'" << endl << "To go to the main menu press 'm'" << endl << "To exit press anything else" << endl << "Option: ";
		cin >> psd;
		if (psd.compare("y") == 0) {
			system("cls");
			goto C;
		}
		else if (psd.compare("m") == 0) {
			system("cls");
			goto A;
		}
		else {
			cout << "Thanks for trying it out :)" << endl;
			system("pause");
			break;
		}
	case '2':
	B:
		cout << "Character choice (ex. @, $, #, *): ";
		cin >> sign;
		cout << "raza cerc (pls use numbers between 1 and 9): "; cin >> dragnea;
		if (dragnea > 9 || dragnea < 1) {
			cout << "Your circle might not be displayed, do you want to continue? ('y' || 'n'): ";
			cin >> psd;
			if (psd.compare("n") == 0) {
				system("cls");
				goto B;
			}
		}
		system("cls");
		scarmanz(&Matrice[0][0], muie, muie, dragnea, sign);
		for (i = 0; i < koala; i++) {
			system("color 09");
			system("ping localhost -n . 1 >nul");
			for (j = 0; j < panda; j++)
				cout << Matrice[i][j] << ' ';
			cout << endl;
		}
		cout << "to run again press 'y'" << endl << "To go to the main menu press 'm'" << endl << "To exit press anything else" << endl << "Option: ";
		cin >> psd;
		if (psd.compare("y") == 0) {
			system("cls");
			goto B;
		}
		else if (psd.compare("m") == 0) {
			system("cls");
			goto A;
		}
		else {
			cout << "Thanks for trying it out :)" << endl;
			system("pause");
			break;
		}
	case '3':
		cout << "Thanks for trying it out :)" << endl;
		system("pause");
		break;
	}
	return 0;

}