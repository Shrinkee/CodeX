

#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <string>
using namespace std;
//int checker
bool isNum(string word) {
	for (int i = 0; i < word.length(); i++) {
		if (isdigit(word[i])== false) {
			return false;
		}
		else {
			return true;
		}
	}
}


int main() {
	system("color B");
	
	
	char a = 177, b = 219;
	cout << "\n\n";
	
	cout << R"(
			       ______     ______     _____     ______        __  __    
			      /\  ___\   /\  __ \   /\  __-.  /\  ___\      /\_\_\_\   
			      \ \ \____  \ \ \/\ \  \ \ \/\ \ \ \  __\      \/_/\_\/_  
			       \ \_____\  \ \_____\  \ \____-  \ \_____\      /\_\/\_\ 
			        \/_____/   \/_____/   \/____/   \/_____/      \/_/\/_/                                               
)";

	cout << "\n";
	cout << "\t";
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "\t";
	for (int i = 0; i <= 100; i++)
	cout << a;
	Sleep(150);
	cout << "\r";
	cout << "\t";
	for (int i = 0; i <= 100; i++) {

		cout << b;
		Sleep(25);
	}


	system("cls");

	
	int x, i;
	int k;
	char txt[97];
	string keyWord;
	
	

	Start:
		cout << ".-------------------------------------." << endl;
		cout << "| Please Enter Your Ciphering Method  |" << endl;
		cout << "| 1. Ceasar Cipher                    |" << endl;
		cout << "| 2. Vigenere Cipher                  |" << endl;
		cout << "| Enter Below:                        |" << endl;
		cout << "'-------------------------------------'" << endl;
		Sleep(1000);
		cin >> x;
		
		if ( x > 2 || !(x)) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << ".-------------------------------------." << endl;
			cout << "| Please Enter a Correct Value        |" << endl;
			cout << "'-------------------------------------'" << endl;
			Sleep(1000);
			cout << ".-------------------------------------." << endl;
			cout << "| The Program Will Now Restart...     |" << endl;
			cout << "'-------------------------------------'" << endl;
			Sleep(2000);
			system("cls");
			goto Start;
		}
		else {

			system("cls");
			Sleep(1000);
			switch (x) {
				csar:
			case 1:
				//Caesar Cipher
				int shift;

				cout << ".=======================================================================================================." << endl;
				cout << "| A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z |" << endl;
				cout << "| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |10 | 11| 12| 13| 14| 15| 16| 17| 18| 19| 20| 21| 22| 23| 24| 25|" << endl;
				cout << "'======================================================================================================='" << endl;
				cout << "***You've chosen Caesar Cipher***\n" << endl;
				cout << "***In cryptography, a Caesar cipher is categorized as a substitution cipher in\nwhich the alphabet in the plain text is shifted by a fixed number down the alphabet.***\n" << endl;
				cout << ".-------------------------------------." << endl;
				cout << "| Please Enter Your Text              |" << endl;
				cout << "'-------------------------------------'\n" << endl;
				cin >> txt;
				cout << "\n.-------------------------------------." << endl;
				cout << "| Please Enter Your Selected Method   |" << endl;
				cout << "| 1. Encryption                       |" << endl;
				cout << "| 2. Decryption                       |" << endl;
				cout << "| 3. Go Back                          |" << endl;
				cout << "'-------------------------------------'\n" << endl;
				cin >> x;


				if (!(x) || x > 3 ) {
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << ".-------------------------------------." << endl;
					cout << "| Please Enter a Correct Value        |" << endl;
					cout << "'-------------------------------------'" << endl;
					Sleep(1000);
					cout << ".-------------------------------------." << endl;
					cout << "| The Program Will Now Restart...     |" << endl;
					cout << "'-------------------------------------'" << endl;
					Sleep(2000);
					system("cls");

					goto Start;
				}
				else {
					switch (x) {

					case 1:
						//encryption
						
						cout << "\n.-------------------------------------." << endl;
						cout << "| Please Enter Your Key               |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						cin >> shift;


						if (!(shift)) {
							cin.clear();
							cin.ignore(INT_MAX, '\n');
							cout << ".-------------------------------------." << endl;
							cout << "| Please Input a Valid Key            |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							Sleep(2000);
							system("cls");
							goto csar;
						}
						else {
							for (i = 0; (i < 26 && txt[i] != '\0'); i++)
								txt[i] = txt[i] + shift;
							cout << ".-------------------------------------." << endl;
							cout << "| Your Text is Being Encrypted...     |" << endl;
							Sleep(1500);
							cout << "| Processing...                       |" << endl;
							Sleep(1500);
							cout << "| Done                                |" << endl;
							cout << "| Your Encrypted Text is " << txt <<"  "<< endl;
							cout << "'-------------------------------------'\n" << endl;
							cout << ".-------------------------------------." << endl;
							cout << "| Do you want to see the Process?     |" << endl;
							cout << "| If YES Enter 1     If NO Enter 2    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							cin >> x;

							switch (x) {
							case 1:
								cout << ".-------------------------------------------------------." << endl;
								cout << "| First get the value of the first letter of your text. |" << endl;
								cout << "| then add your shift " << shift <<"                    " << endl;
								cout << "| And you will get "<< txt<<"                           " << endl;
								cout << "'-------------------------------------------------------'\n" << endl;
								break;
							default:
								Sleep(2000);
								cout << ".-------------------------------------." << endl;
								cout << "| The Program Will Restart Shortly    |" << endl;
								cout << "'-------------------------------------'\n" << endl;
								Sleep(10000);
								system("cls");
								goto Start;
								break;
							}
							Sleep(2000);
							cout << ".-------------------------------------." << endl;
							cout << "| The Program Will Restart Shortly    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							Sleep(10000);
							system("cls");
							goto Start;
							break;
						}
					case 2:
						//decryption
						cout << ".-------------------------------------." << endl;
						cout << "| Please Enter Your Key               |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						cin >> shift;
						if (!(shift)) {
							cin.clear();
							cin.ignore(INT_MAX, '\n');
							cout << ".-------------------------------------." << endl;
							cout << "| Please Input a Valid Key            |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							Sleep(2000);
							system("cls");
							goto csar;
						}
						else {
							for (i = 0; (i < 26 && txt[i] != '\0'); i++)
								txt[i] = txt[i] - shift;

							cout << ".-------------------------------------." << endl;
							cout << "| Your Text is Being Decrypted...     |" << endl;
							Sleep(1500);
							cout << "|Processing...                        |" << endl;
							Sleep(1500);
							cout << "| Done                                |" << endl;
							cout << "| Your Decrypted Text is " << txt << "    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							cout << ".-------------------------------------." << endl;
							cout << "| Do you want to see the Process?     |" << endl;
							cout << "| If YES Enter 1     If NO Enter 2    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							cin >> x;
							switch (x) {
							case 1:
								cout << ".-------------------------------------------------------." << endl;
								cout << "| First get the value of the first letter of your text. |" << endl;
								cout << "| then subtract your shift " << shift << "                    " << endl;
								cout << "| And you will get " << txt << "                           " << endl;
								cout << "'-------------------------------------------------------'\n" << endl;
								break;
							default:
								Sleep(2000);
								cout << ".-------------------------------------." << endl;
								cout << "| The Program Will Restart Shortly    |" << endl;
								cout << "'-------------------------------------'\n" << endl;
								Sleep(10000);
								system("cls");
								goto Start;
								break;
							}
							Sleep(2000);
							cout << ".-------------------------------------." << endl;
							cout << "| The Program Will Restart Shortly    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							Sleep(10000);
							system("cls");
							goto Start;
							break;

						}
					case 3:
						//goback
						case3:
						cout << ".-------------------------------------." << endl;
						cout << "| Please Wait....                     |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						Sleep(2000);
						system("cls");
						goto Start;
						break;

					default:
						cout << ".-------------------------------------." << endl;
						cout << "| Invalid Input                       |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						break;

					}
					break;
				}
			case 2:
				// Vigenere Cipher
				vigenere:
				cout << ".=======================================================================================================." << endl;
				cout << "| A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z |" << endl;
				cout << "| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |10 | 11| 12| 13| 14| 15| 16| 17| 18| 19| 20| 21| 22| 23| 24| 25|" << endl;
				cout << "'======================================================================================================='" << endl;
				cout << "***You've chosen Vigenere Cipher***\n" << endl;
				cout << "***As a transposition code or a code involving the substitution of alphabetic letters\nthe Vigenere cipher represented an improvement from codes that simply shifted letters consistently.\nThese primitive codes were easy to break through processes like letter frequency.\nStill, even the Vigenere code is not considered a very strong code, and is easily broken with modern tools.***\n" << endl;
				cout << ".-------------------------------------." << endl;
				cout << "| Please Enter Your Text              |" << endl;
				cout << "'-------------------------------------'\n" << endl;
				cin >> txt;
				cout << "\n.-------------------------------------." << endl;
				cout << "| Please Enter Your Selected Method   |" << endl;
				cout << "| 1. Encryption                       |" << endl;
				cout << "| 2. Decryption                       |" << endl;
				cout << "| 3. Go Back                          |" << endl;
				cout << "'-------------------------------------'\n" << endl;
				cin >> x;


				if (!(x) || x > 3) {
					cin.clear();
					cin.ignore(INT_MAX, '\n');
					cout << ".-------------------------------------." << endl;
					cout << "| Please Enter a Correct Value        |" << endl;
					cout << "'-------------------------------------'" << endl;
					Sleep(1000);
					cout << ".-------------------------------------." << endl;
					cout << "| The Program Will Now Restart...     |" << endl;
					cout << "'-------------------------------------'" << endl;
					Sleep(2000);
					system("cls");

					goto Start;
				}
				else {
					switch (x) {
						//encryption
					case 1:
						cout << "\n.-------------------------------------." << endl;
						cout << "| Please Enter Your Keyword           |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						cin >> keyWord;

						if ( isNum(keyWord) ) {
							cout << "\n.-------------------------------------." << endl;
							cout << "| Please Input a Valid Keyword        |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							Sleep(2000);
							system("cls");
							goto vigenere;
						}
						else {
							
							for (i = 0, k = 0; i < 26 && txt[i] != '\0'; i++) {
								txt[i] = (((txt[i] - 97) + (keyWord[k] - 97)) % 26) + 97;
								k++;
								if (k == i) {
									txt[i] = (((txt[i] - 97) + (keyWord[k] - 97)) % 26) + 97;
								}
								else if (k == keyWord.length()){
									k = 0;
								}
								
							}
							
							cout << ".-------------------------------------." << endl;
							cout << "| Your Text is Being Encrypted...     |" << endl;
							Sleep(1500);
							cout << "| Processing...                       |" << endl;
							Sleep(1500);
							cout << "| Done                                |" << endl;
							cout << "| Your Encrypted Text is " << txt << "  " << endl;
							cout << "'-------------------------------------'\n" << endl;
							cout << ".-------------------------------------." << endl;
							cout << "| Do you want to see the Process?     |" << endl;
							cout << "| If YES Enter 1     If NO Enter 2    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							cin >> x;
							switch (x) {
							case 1:
								cout << ".-------------------------------------------------------." << endl;
								cout << "| First GET the value of the first letter of your text. |" << endl;
								cout << "| Then SUBTRACT it to 97, the letter 'a' in ASCII table.|" << endl;
								cout << "| Then GET the value of the first letter of your Keyword|" << endl;
								cout << "| Then SUBTRACT it to 97, the letter 'a' in ASCII table.|" << endl;
								cout << "| Then ADD the two value that you got.                  |" << endl;
								cout << "| Then USE a modulo 26 to the Value you got.            |" << endl;
								cout << "| Then ADD it again from 97.                            |" << endl;
								cout << "| Then DO this to the other letters.                    |" << endl;
								cout << "| Then you will get " << txt << "                      " << endl;
								cout << "'-------------------------------------------------------'\n" << endl;
								break;
							default:
								Sleep(2000);
								cout << ".-------------------------------------." << endl;
								cout << "| The Program Will Restart Shortly    |" << endl;
								cout << "'-------------------------------------'\n" << endl;
								Sleep(10000);
								system("cls");
								goto Start;
								break;
							}
							Sleep(2000);
							cout << ".-------------------------------------." << endl;
							cout << "| The Program Will Restart Shortly    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							Sleep(10000);
							system("cls");
							goto Start;
							break;
						}
					case 2:
						//decryption
						cout << ".-------------------------------------." << endl;
						cout << "| Please Enter Your Keyword           |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						cin >> keyWord;

						if ( isNum(keyWord) ) {
							cin.clear();
							cin.ignore(INT_MAX, '\n');
							cout << "\n.-------------------------------------." << endl;
							cout << "| Please Input a Valid Keyword        |" << endl;
							cout << "'-------------------------------------'" << endl;
							Sleep(2000);
							system("cls");
							goto vigenere;
						}
						else { 
							
							for (i = 0, k = 0; i < 26 && txt[i] != '\0' ; i++) {
								txt[i] = (((txt[i]- 122) - (keyWord[k] - 97)) % 26) + 122;
								k++;
								if (k == i) {
									txt[i] = (((txt[i] - 122) - (keyWord[k] - 97)) % 26) + 122;
									
								}
								else if (k == keyWord.length()) {
									k = 0;
									
								}
								
							}
								
							
							cout << ".-------------------------------------." << endl;
							cout << "| Your Text is Being Decrypted...     |" << endl;
							Sleep(1500);
							cout << "| Processing...                       |" << endl;
							Sleep(1500);
							cout << "| Done                                |" << endl;
							cout << "| Your Decrypted Text is " << txt << "  " << endl;
							cout << "'-------------------------------------'\n" << endl;
							cout << ".-------------------------------------." << endl;
							cout << "| Do you want to see the Process?     |" << endl;
							cout << "| If YES Enter 1     If NO Enter 2    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							cin >> x;
							switch (x) {
							case 1:
								cout << ".--------------------------------------------------------." << endl;
								cout << "| First GET the value of the first letter of your text.  |" << endl;
								cout << "| Then SUBTRACT it to 122, the letter 'z' in ASCII table.|" << endl;
								cout << "| Then GET the value of the first letter of your Keyword |" << endl;
								cout << "| Then SUBTRACT it to 97, the letter 'a' in ASCII table. |" << endl;
								cout << "| Then SUBTRACT the two value that you got.              |" << endl;
								cout << "| Then USE a modulo 26 to the Value you got.             |" << endl;
								cout << "| Then ADD it again from 122.                            |" << endl;
								cout << "| Then DO this to the other letters.                     |" << endl;
								cout << "| Then you will get " << txt << "                      " << endl;
								cout << "'--------------------------------------------------------'\n" << endl;
								break;
							default:
								Sleep(2000);
								cout << ".-------------------------------------." << endl;
								cout << "| The Program Will Restart Shortly    |" << endl;
								cout << "'-------------------------------------'\n" << endl;
								Sleep(10000);
								system("cls");
								goto Start;
								break;
							}
							Sleep(2000);
							cout << ".-------------------------------------." << endl;
							cout << "| The Program Will Restart Shortly    |" << endl;
							cout << "'-------------------------------------'\n" << endl;
							Sleep(10000);
							system("cls");
							goto Start;
							break;

						}
					case 3:
						//go back
						cout << ".-------------------------------------." << endl;
						cout << "| Please Wait....                     |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						Sleep(2000);
						system("cls");
						goto Start;
						break;

					default:
						cout << ".-------------------------------------." << endl;
						cout << "| Invalid Input                       |" << endl;
						cout << "'-------------------------------------'\n" << endl;
						Sleep(2000);
						system("cls");
						goto Start;
						break;
						

					}
					break;
				}

			}
		} 
		

	_getch();
	return 0;
}
