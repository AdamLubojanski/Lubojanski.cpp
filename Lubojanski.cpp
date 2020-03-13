#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
	
   fstream plik;  
   string text[10];
   int liczba[10];
   int i=0;
   
   plik.open("c:\\plik_wejsciowy.txt", ios::in);
   
   if(plik.good()) 
            while(!plik.eof())  
                  {
                   plik>>text[i];
                   plik>>liczba[i];
				   texts[i] = texts[i].erase(0, liczba[i]);
                	i++;
                   }
                  plik.close();
                        
    plik.open("c:\\plik_wypisz.txt"); 
	     
	for(int q=0;q<i;q++){
		plik<<text[q]<<endl<<endl<<endl<<endl;
	}
    plik.close();                            
	return 0;
}
