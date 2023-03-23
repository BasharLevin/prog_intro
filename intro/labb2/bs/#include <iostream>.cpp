#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main ()
{
    string name , lastName , personNum, adress, kön; 
    fstream inFil; 
    fstream outFil; 
    outFil.open("out.txt");


    inFil.open("names.txt", ios::in);
    if (inFil.is_open())
        while (inFil.is_open())
        {
            int gender = personNum[8];
            inFil>>name ; 
            inFil>>lastName; 
            inFil>>personNum; 
            inFil>>adress; 
            if (gender % 2==0 )
            kön="[K]";
            else 
            kön="[M]";

            outFil<<"Förnamn : "<<name<<"\n"<<"Efternamn : "<<lastName<<"\n"<<"adress : "<<adress<<"\n"<<kön<<endl; 
            
            inFil.close();
        }
        inFil.close(); 

        
    
    
    




    return 0; 
}

