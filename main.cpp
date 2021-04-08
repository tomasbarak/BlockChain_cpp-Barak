#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include "functions.h"
using namespace std;


int main() {

    string ruta;
    ifstream file;

    cout << "Type your blockchain txt file directory (include your file name and its extension): ";
    cin >> ruta;

       /* while(!fileCheck){
            cout << "Sisenior";
            cin >> ruta;
            fileCheck.open(ruta);
        }
        cout << endl <<"No such file or directory, please type the right directory and file name, or create a .txt file in a new directory" << endl << endl;
        cout << "Type your blockchain txt file directory (include your file name and its extension): ";*/

        //D:/Colegio tomi/CodeBlocksProjects/BlockchainHashing/BlockChain.txt

    file.open(ruta, ios::in);

	while (!file) {
		cout << endl <<"No such file or directory, please type the right directory and file name, or create a .txt file in a new directory" << endl << endl;
        cout << "Type your blockchain txt file directory (include your file name and its extension): ";
        cin >> ruta;
        file.open(ruta, ios::in);
	}

    displayMenu();

    int selection;

    cin >> selection;

    cout << endl;
    switch(selection){

    case 1:
    readBlockchain(ruta, true);
    break;

    case 2:
    readLastBlock(ruta, true);
    break;

    case 3:
    mineBlock(ruta, readLastBlock(ruta, false), readBlockchain(ruta, false));
    break;

    }
}
