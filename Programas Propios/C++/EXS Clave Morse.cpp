/*
 * Crea un programa que sea capaz de transformar texto natural a codigo
 * morse y viceversa.
 * - Debe detectar automaticamente de que tipo se trata y realizar
 *   la conversion.
 * - En morse se soporta raya "-", punto ".", un espacio " " entre letras
 *   o simbolos y dos espacios entre palabras "  ".
*/
#include <iostream>
#include <string.h>
#include <sstream>
#include <stdio.h>

using namespace std;

//Prototipo de funciones
string morse(string,int);

int main() {
	int seleccion;
	char palabra[100];
	string conversion;
	
	cout<<"Digite 0 para ingresar palabras, 1 para ingresar morse: ";	cin>>seleccion;
	cout<<endl;
	fflush(stdin);
	
	if (seleccion == 0) {
		//PALABRAS A MORSE
		cout<<"Digite la frase que desea convertir: ";	cin.getline(palabra,100,'\n');
		conversion = morse(palabra,seleccion);
		cout<<"\nCONVERSION: "<<conversion<<"\n\n";
	} else if (seleccion == 1) {
		//MORSE A PALABRAS
		cout<<"Digite la frase que desea convertir: ";	cin.getline(palabra,100,'\n');
		conversion = morse(palabra,seleccion);
		cout<<"\nCONVERSION: "<<conversion<<"\n\n";
	}else {
		//LA SELECCION NO EXISTE
		cout<<"...\n\n";
	}
	
	system("pause");
	return 0;
}

//Definicion de funciones
string morse(string palabra, int seleccion) {
	string resultado = "";
	//PASAR STRING A CHAR PARA COMPARAR CADA UNO DE LOS CARACTERES
	char palabraCaracteres[100]; 
	strcpy(palabraCaracteres, palabra.c_str());	//Pasando la cadena
	strupr(palabraCaracteres);					//Mayusculas
	
	if (seleccion == 0) {
		for (int i=0; i<=strlen(palabraCaracteres); i++) {
			switch(palabraCaracteres[i]) {
				case 'A': resultado += ".-"; 	break;
		        case 'B': resultado += "-..."; 	break;
		        case 'C': resultado += "-.-."; 	break;
		        case 'D': resultado += "-.."; 	break;
		        case 'E': resultado += "."; 	break;
		        case 'F': resultado += "..-."; 	break;
		        case 'G': resultado += "--."; 	break;
		        case 'H': resultado += "...."; 	break;
		        case 'I': resultado += ".."; 	break;
		        case 'J': resultado += ".---"; 	break;
		        case 'K': resultado += "-.-"; 	break;
		        case 'L': resultado += ".-.."; 	break;
		        case 'M': resultado += "--"; 	break;
		        case 'N': resultado += "-."; 	break;
		        case 'O': resultado += "---"; 	break;
		        case 'P': resultado += ".--."; 	break;
		        case 'Q': resultado += "--.-"; 	break;
		        case 'R': resultado += ".-."; 	break;
		        case 'S': resultado += "..."; 	break;
		        case 'T': resultado += "-"; 	break;
		        case 'U': resultado += "..-"; 	break;
		        case 'V': resultado += "...-"; 	break;
		        case 'W': resultado += ".--"; 	break;
		        case 'X': resultado += "-..-"; 	break;
		        case 'Y': resultado += "-.--"; 	break;
		        case 'Z': resultado += "--.."; 	break;
		
		        //Numeros
		        case '0': resultado += "-----"; break;
		        case '1': resultado += ".----"; break;
		        case '2': resultado += "..---"; break;
		        case '3': resultado += "...--"; break;
		        case '4': resultado += "....-"; break;
		        case '5': resultado += "....."; break;
		        case '6': resultado += "-...."; break;
		        case '7': resultado += "--..."; break;
		        case '8': resultado += "---.."; break;
		        case '9': resultado += "----."; break;
		
		        //Caracteres especiales
		        case '.': resultado += ".-.-.-"; 	break;
		        case ',': resultado += "--..--"; 	break;
		        case '?': resultado += "..--.."; 	break;
		        case '\\': resultado += ".-..-."; 	break;
		        
		        //Espacio para separar palabras en Morse
		        case ' ': resultado += "  "; 		break;
			}
		}
		//PALABRA A MORSE
		return resultado;
	}
	if (seleccion == 1) {
		string morse = "";
		stringstream ss(palabra);
		
		//Extrae cada simbolo
		while (ss >> morse) {
	        resultado += (morse == ".-") ? "A" :
	                     (morse == "-...") ? "B" :
	                     (morse == "-.-.") ? "C" :
	                     (morse == "-..") ? "D" :
	                     (morse == ".") ? "E" :
	                     (morse == "..-.") ? "F" :
	                     (morse == "--.") ? "G" :
	                     (morse == "....") ? "H" :
	                     (morse == "..") ? "I" :
	                     (morse == ".---") ? "J" :
	                     (morse == "-.-") ? "K" :
	                     (morse == ".-..") ? "L" :
	                     (morse == "--") ? "M" :
	                     (morse == "-.") ? "N" :
	                     (morse == "---") ? "O" :
	                     (morse == ".--.") ? "P" :
	                     (morse == "--.-") ? "Q" :
	                     (morse == ".-.") ? "R" :
	                     (morse == "...") ? "S" :
	                     (morse == "-") ? "T" :
	                     (morse == "..-") ? "U" :
	                     (morse == "...-") ? "V" :
	                     (morse == ".--") ? "W" :
	                     (morse == "-..-") ? "X" :
	                     (morse == "-.--") ? "Y" :
	                     (morse == "--..") ? "Z" :
	                     
	                     //Numeros
	                     (morse == "-----") ? "0" :
	                     (morse == ".----") ? "1" :
	                     (morse == "..---") ? "2" :
	                     (morse == "...--") ? "3" :
	                     (morse == "....-") ? "4" :
	                     (morse == ".....") ? "5" :
	                     (morse == "-....") ? "6" :
	                     (morse == "--...") ? "7" :
	                     (morse == "---..") ? "8" :
	                     (morse == "----.") ? "9" :
	
	                     //Caracteres especiales
	                     (morse == ".-.-.-") ? "." :
	                     (morse == "--..--") ? "," :
	                     (morse == "..--..") ? "?" :
	                     (morse == ".-..-.") ? "\\" :
	
	        morse = "";  //Reinicia el codigo Morse despues de convertirlo
    	}
		//MORSE A PALABRA
		return resultado;
	}
	return "";
}
