#include "func.h"
#include <iostream>

void func1()
{
int a = 0, b=0;
fstream myFile;
string File ; 
myFile.open(File);

    if (myFile.is_open())
    {
        while (myFile >> a >> b )
        {}
        if (a < b )
            cout<<"File is not sorteted"<<endl; 
        else 
           cout<<"File is sorterted"<<endl;
        myFile.close();
    }
 
 }
 