/*Michael Braunstein
CISS 290 320 
Wohlleber
June 4, 2018
CFUNSOL
This will as a series of questions and also perform the specified calculations

*/

#include<string>
#include<cmath>
#include<iostream>
#include<ctype.h>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int cosine, logarithms, convert, choice, conv;
char ext;

int main(){
	cout << "Menu\n"  << "Type 1 to find logarithms\n" << endl << "Type 2 for converting between decimals and hex\n" 
	<< endl << "Type 3 for finding cosines\n" << endl << "Type 4 to exit to leave the program\n" << endl;
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
	int decimal, remain, choice, caps, pow, dec2;
	string hexadecimal, decimalout;
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
			else if (hexadecimal[i] == '10') decimal += 10 * (1 << (4 * pow));
			else if (hexadecimal[i] == '11') decimal += 11 * (1 << (4 * pow));
			else if (hexadecimal[i] == '12') decimal += 12 * (1 << (4 * pow));
			else if (hexadecimal[i] == '13') decimal += 13 * (1 << (4 * pow));
			else if (hexadecimal[i] == '14') decimal += 14 * (1 << (4 * pow));
			else if (hexadecimal[i] == '15') decimal += 15 * (1 << (4 * pow));
			pow++;
		}
		cout << "\nThe Decimal verson of " << (hexadecimal) << " is " << (decimal) << "\n" << endl;

	}

	if (choice == 6) {
		hexadecimal == "";
		int decimal, remain;
		
		cout << "\nIf you want to display the hex in capital letters type 9, \nif you want to display the hex in lower case press 8. " << endl;
		cin >> caps;
		cout << "\nEnter the decimal that you want to convert to hex: \n " << endl;
		cin >> decimal;

		if (caps == 9) down = false;
		else down = true;
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

		if (down == false) {
			for (int i = 0; i = hexadecimal.length(); i++)
				hexadecimal[i] = toupper(hexadecimal[i]);

		}
		cout << "\nThe hexadecimal of " << dec2 << " is " << "H0" << hexadecimal << "\n" << endl;

		
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
	{
	
		
		
		cout << "Exiting " << endl;
	}
	exit(EXIT_SUCCESS);



}


cout << "To exit the program type e :\n " << endl;
cin >> ext;



}