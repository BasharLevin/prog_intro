#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

int main()
{
//    first i need to save the input into the text file
//     then i need to sort the input like a name and number
// last but not least i need a pointer så att i can ask for these values
// ex. run the program
//    choose one of these options
//    option number 1 add number
//    optiion nubmer 2 search for a number
//    option number 3 delet a number
//    input the option number
//    1 name? last name? number ? adress?
    
    
    int age = 0, x=0;
    string name, last_name, number, adress;
    cout<<"choose one of these options"<<"\n"<<endl;
    cout<<"Type 1 to add a contact "<<"type 2 to search for a contact "<<"type 3 to remove a contact"<<endl; 
    cin>>x;
    if (x== 1)
    {
        cout<<"enter first name"<<endl;
        cin>>name;
        cout<<"enter last name"<<endl;
        cin>>last_name;
        cout<<"enter the nunber"<<endl;
        cin>>number;
        cout<<" name "<< name<<" "<<last_name<<" nunber is  "<< number<<endl;
        
    }
    else if (x == 2)
    {
        cout<<"enter the first and last name"<<endl;
    }
    
}
