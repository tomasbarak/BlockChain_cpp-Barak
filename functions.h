#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

using namespace std;
//Comienzo declaracion de funciones
string replaceLines(string line, char replacement);
int displayMenu();
int readBlockchain(string ruta, bool display);
string readLastBlock(string ruta, bool display);
uintmax_t mineBlock(string ruta, string prevHash, int blockProof);
//Fin declaracion de funciones
#include "displayBlockchain.cpp"
#include "displayMenu.cpp"
#include "readLastBlock.cpp"
#include "replaceEndlines.cpp"
#include "mineBlock.cpp"
#endif // FUNCTIONS_H_INCLUDED
