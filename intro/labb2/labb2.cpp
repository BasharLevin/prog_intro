#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{   
    string name , lastname , person , kön , adress; 
    fstream myFile;
    fstream outFile; 
    outFile.open("output.txt");
    myFile.open("names.txt");
    if (myFile.is_open())
    {
        while (myFile >> name >> lastname >> person)
        {
         int gender = person [8];
         if (gender % 2==0 )
            kön="[K]";
            else 
            kön="[M]";
            myFile.ignore();
            getline(myFile,adress);

         outFile<<"Förnamn : "<<name<<","<<"Efternamn : "<<lastname<<" "<<kön<<"\n"<<endl;
         outFile<<"adress : "<< adress <<"\n"<< endl; 
        }
        myFile.close(); 
        outFile.close();
    }

    return 0; 
}