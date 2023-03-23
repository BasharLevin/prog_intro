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


    inFil.open("names.txt");
    if (inFil.is_open())
    {
        while (inFil >> name >> lastName >> personNum  )
       {
            int gender = personNum[8];
           /* inFil>>name ; 
            inFil>>lastName; 
            inFil>>personNum; 
            inFil>>adress; */
            if (gender % 2==0 )
            kön="[K]";
            else 
            kön="[M]";

            inFil.ignore();
            getline(inFil,adress);
           
                
            outFil<<"Förnamn : "<<name<<"\n"<<"Efternamn : "<<lastName<<"\n"<<"adress : "<<adress<<"\n"<<kön<<endl; 
            
            
        }
        outFil.close();
        inFil.close(); 
    }
         return 0; 
}

