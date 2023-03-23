#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main ()
{
    int age =0 , val=0 , postKode = 0;
    string name, lastName, adress, birthDate, email;
    fstream out_file;
    out_file.open("contacts.txt");
    
    cout<<"Welcome "<< "\n"<<" choose one of the following options"<<"\n"<<"1. Lägga till en kontakt"<<"\n"<<"2. Ta bort en konatakt"<<"\n"<<"3. Söka efter en kontakt"<<endl;
    cin>>val;
    if (val == 1)
        {
            cout<<"enter first name"<<endl;
            cin>>name;
            cout<<"Enter last name"<<endl;
            cin>>lastName;
            cout<<"Enter adress"<<endl;
            cin>>adress;
            cout<<"Enter post code"<<endl;
            cin>>postKode;
            cot<<"Enter email adress"<<endl;
            cin<<email;
            cout<<"Enter birthDate"<<endl;
            cin>>birthDate;
            out_file<< name <<" "<< lastName << " "
            <<"\n"<< adress <<postKode<<" \n"<< birthDate<<"\n"<<email<<endl;
            
        }
    if (val == 2)
        {
            name.erase();
            lastName.erase();
            adress.erase();
            birthDate.erase();
            cout<<"contact suc deleted"<<endl;
        
        
        }
    if (val == 3)
        {
            cout<<"Type the first and the last name"<<endl;
            
        }
    
    
    
    
    return 0;
    
}

