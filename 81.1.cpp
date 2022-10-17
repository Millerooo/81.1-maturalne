#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

class file
{
        ifstream inFile;
        int liczba;
        string a;
        int xa, xb, ya, yb, xc, yc;
        public:
                file();
                ~file();
                void loop(); 
};


file::file()
{
        inFile.open("wspolrzedne.txt"); 
        if (!inFile.good())
        {
                cerr << "Błąd pliku";
                exit(1);
        }
}

file::~file()
{
        inFile.close();
}

void file::loop()
{
        string data; 
        while (!inFile.eof())
        {
        	if ((xa>0) && (ya>0) && (xb>0) && (yb>0) && (xc>0) && (yc>0)) {
 				liczba++;
 }
			}
                inFile >> liczba;
                cout << liczba <<" ";
        }


int main()
{
        file f;
        f.loop();
        return 0;
}
