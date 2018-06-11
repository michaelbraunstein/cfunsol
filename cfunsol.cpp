/*Michael Braunstein
CISS 290 320 
Wohlleber
June 4, 2018
CFUNSOL
This will as a series of questions and also perform the specified calculations

*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<cstring>
#include<cmath>
#include<iostream>
#include<cctype>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int cosine, logarithms, convert, choice, conv;
char ext;
string hexadecimal;

int main(){
	cout << "Menu\n" << endl << "Type 1 to find logarithms\n" << endl << "Type 2 for converting between decimals and hex using the old fashioned coputation method\n" << endl << "Type 3 for finding cosines\n" << endl << "Type 4 to convert a cstring date\n " << endl << "Type 5 to convert between hex and decimal using a cstring method\n" << endl << "Type 6 to exit to leave the program\n" << endl;
cin >> choice;

if (choice == 1) { //logarithm
	int type;
	float output, logo;
	cout << "\nEnter 1 to find Natural Logarithm and to find Common Logaritm press 2\n" << endl;
	cin >> type;
	if (type == 1) {  //natural
		cout << "\nTo find the Natural Logarithm, enter the number:\n " << endl;
		cin >> logo;
		output = log10(logo);
		cout << "\nThe Natural Logarithm of " << logo << " is " << output << "\n" << endl;

		}
	if (type == 2) { //common logarithm
		
		cout << "To find the Common Logarithm, enter the number:\n " << endl;
		cin >> logo;
		output = log(logo);
		cout << " The Common Logarithm of " << logo << " is " << output << "\n" << endl;

	}

}

else if (choice == 2) {  //convert hex to dec
	int decimal, choice, caps, pow, dec2;
	bool down = true;
	

	cout << "\n Type in a number 3 if you want to convert hex to decimal or type 6 if you want to convert dec to hedadecimal: " << "\n" << endl;
	cin >> (choice);
	pow = 0;
	decimal = 0;

	if (choice == 3) {
		cout << "\n Enter the hex that you want to convert to decimal: \n " << endl;
		cin >> hexadecimal;
		for (int i = hexadecimal.length() - 1; i >= 0; i--) {
			     if (hexadecimal[i] == '0') decimal += 0 * (1 <<(4 *pow));
			else if (hexadecimal[i] == '1') decimal += 1 * (1 << (4 * pow));
			else if (hexadecimal[i] == '2') decimal += 2 * (1 << (4 * pow));
			else if (hexadecimal[i] == '3') decimal += 3 * (1 << (4 * pow));
			else if (hexadecimal[i] == '4') decimal += 4 * (1 << (4 * pow));
			else if (hexadecimal[i] == '5') decimal += 5 * (1 << (4 * pow));
			else if (hexadecimal[i] == '6') decimal += 6 * (1 << (4 * pow));
			else if (hexadecimal[i] == '7') decimal += 7 * (1 << (4 * pow));
			else if (hexadecimal[i] == '8') decimal += 8 * (1 << (4 * pow));
			else if (hexadecimal[i] == '9') decimal += 9 * (1 << (4 * pow));
			else if (hexadecimal[i] == 'A') decimal += 10 * (1 << (4 * pow));
			else if (hexadecimal[i] == 'B') decimal += 11 * (1 << (4 * pow));
			else if (hexadecimal[i] == 'C') decimal += 12 * (1 << (4 * pow));
			else if (hexadecimal[i] == 'D') decimal += 13 * (1 << (4 * pow));
			else if (hexadecimal[i] == 'E') decimal += 14 * (1 << (4 * pow));
			else if (hexadecimal[i] == 'F') decimal += 15 * (1 << (4 * pow));
			pow++;
		}
		cout << "\nThe Decimal verson of " << (hexadecimal) << " is " << (decimal) << "\n" << endl;

	}

	if (choice == 6) {
		string hexadecimal = "";
		int decimal, remain;

		cout << "\nIf you want to display the hex in lower case letters type 8, \nif you want to display the hex in upper case press 9. " << endl;
		cin >> caps;
		if (caps == 9) down = false;
		else down = true;{

			cout << "\nEnter the decimal that you want to convert to hex: \n " << endl;
			cin >> decimal;
		dec2 = decimal;
		while (decimal > 15) {
			remain = decimal % 16;
			decimal = decimal / 16;
			if (remain < 10) hexadecimal = std::to_string(remain) + hexadecimal;
			else if (remain == 10) hexadecimal = "a" + hexadecimal;
			else if (remain == 11) hexadecimal = "b" + hexadecimal;
			else if (remain == 12) hexadecimal = "c" + hexadecimal;
			else if (remain == 13) hexadecimal = "d" + hexadecimal;
			else if (remain == 14) hexadecimal = "e" + hexadecimal;
			else if (remain == 15) hexadecimal = "f" + hexadecimal;
		}
		if (decimal < 10) hexadecimal = std::to_string(decimal) + hexadecimal;
		else if (decimal == 10) hexadecimal = "a" + hexadecimal;
		else if (decimal == 11) hexadecimal = "b" + hexadecimal;
		else if (decimal == 12) hexadecimal = "c" + hexadecimal;
		else if (decimal == 13) hexadecimal = "d" + hexadecimal;
		else if (decimal == 14) hexadecimal = "e" + hexadecimal;
		else if (decimal == 15) hexadecimal = "f" + hexadecimal;
	}

		if (down == false) {
			for (int i = 0; i < hexadecimal.length(); i++)
				hexadecimal[i] = toupper(hexadecimal[i]);
				//putchar(tolower(hexadecimal(i)));
				cout << "\nThe hexadecimal of " << dec2 << " is " << "H0" << hexadecimal << "\n" << endl;
		}


		system("pause");
	}













}






else if (choice == 3) {
	int cosintype;
	float cosin;
	float output;
	cout << "\nType in the number 1 if you want to find the Arc Cosin, type in 2 if you want to find the" << endl;
	cout <<	"Hyperbolic Cosine, and type 3 if you want to find the Cosine. \n" << endl;

	cin >> cosintype;

	if (cosintype == 1) {

		cout << "\nTo find Arc cosin, enter a number\n " << endl;
		cin >> cosin;
		output = acos(cosin);
		cout << "\nThe equation has determined that the equation output for the Arc Cosin of " << cosin << " is " << output << " \n " << endl;
	}

	if (cosintype == 2) {
		cout << "\nEnter a number to find Hyperbolic Cosin\n" << endl;
		cin >> cosin;
		output = cosh(cosin);
		cout << "\nThe equation has determined that the equation output for the Hyperbolic Cosin of " << cosin << " is " << output << " \n " << endl;
	}

	if (cosintype == 3) {
		cout << "\nEnter a number to find Cosin\n" << endl;
		cin >> cosin;
		output = cos(cosin);
		cout << "\nThe equation has determined that the equation output for the Cosin of " << cosin << " is " << output << "\n " << endl;
	}
}

else if (choice == 4) {
	//string date;
	//string dash, slash, date;
	
char date[11], *dptr, slash[11];
	
	//char a[3], b[3], c[5], d[11];
	char d[11];
	
	cout << "Enter the date in the format of mm/dd/yyyy to convert to form of mm-dd-yyyy using cstring functions.\n" << endl;
	//cin.getline(date, sizeof(date), '\n');
	cin >> date;
	strcpy (slash, date);
	dptr = strtok (date, "/ ");
	strcpy (d, dptr);
	strcat (d, "-");

	dptr = strtok ( '\0' ,"/");
	strcat (d, dptr);
	strcat(d, "-");

	dptr = strtok ('\0', " /");
	strcat (d, dptr);
	
	//replace(date.begin(), date.end(), '/', '-');

	cout << "The old date of " << slash << " now reads " << d << endl;




}

else if (choice == 5) {


	int decimal, hexadecimal, choice, pow, dec2;
	// bool down = true;


	cout << "\n Type in a number 3 if you want to convert hex to decimal using " << endl;
	cout << " cstring or type 6 if you want to convert dec to hexadecimal using cstring: " << "\n" << endl;
	cin >> choice;
	pow = 0;
	decimal = 0;

	if (choice == 3) {
		cout << "\n Enter the hex that you want to convert to decimal: \n " << endl;
		cin >> hex >> hexadecimal;

		cout << "The decimal  is " ;
		std::cout << std::dec << hexadecimal << endl << '\n';

		//cout << "\nThe Decimal verson of " << (hexadecimal) << " is " << (decimal) << "\n" << endl;
		system("pause");

	}


	if (choice == 6) {
		string hexadecimal = "";
		int decimal;
		boolalpha;
		bool dn = 0;
		cout << "If you want to use cstring to display the hex in lower case letters type true \n ";
		cout << "If you want to display the hex in upper case type false. " << endl;
		std::cout << std::boolalpha << dn << '\n';
		//std::cout << std::noboolalpha << down << '\n';
		//return 0;
		cin >> boolalpha >> dn;
		if (dn == true) {
		 

			cout << "\nEnter the decimal that you want to convert to hex: \n " << endl;
			cin >> decimal;
			dec2 = decimal;
			cout << "The Hexadecmil of " << dec2 << " is " << endl;
			std::cout << showbase << _tolower_l << std::hex << decimal << endl << '\n';
			system("pause");
		}
		if (dn == false) {
			cout << "\nEnter the decimal that you want to convert to hex: \n " << endl;
			cin >> decimal;
			dec2 = decimal;
			cout << "The Hexadecmil of " << dec2 << " is " << endl;
			std::cout << showbase << uppercase << std::hex << decimal << endl << '\n';
			system("pause");
		}
		system("pause");
	}



	else if (choice == 6) {
		{
			cout << "Exiting " << endl;
		}
		exit(EXIT_SUCCESS);
	}
	cout << "To exit the program type e :\n " << endl;
	cin >> ext;
}

}