//Bashar Levin Bale2100@student.miun.se
//Contacts grundläggande uppgift

#include <iostream>
#include <fstream>
#include <string>
#include "addContact.h"
#include "search.h"
#include "remove.h"
using namespace std; 

int main()
{
    char choice;
    while(1) 
    {
        cout << "Main menu" << endl;
        cout << "------------------" << endl;
        cout<<"Choose one of these options"<<endl;
        cout << "1. Add contact" << endl;
        cout << "2. Search for a contact" << endl;
        cout << "3. Remove a contact" << endl;
        cout << "4. End the program" << endl;
        cout << "------------------" << endl;
        cin >> choice;
        
        if ((choice >= 65 && choice <= 90) || (choice >= 97 && choice <= 122)) 
        cout << "Character '" << choice << "' was entered "; // An error if the choice is not a number
        
        switch (choice)
        {
            case '1' : 
                add();
                break;
            case '2' : 
                search();
                break;
            case '3' : 
                remove();
                break; 
            case '4' : 
                return 0; 
                break;
            default : 
                cout<<"Invalid choice"<<endl; 
                break; 
            
        }
    }

    return 0; 
}
