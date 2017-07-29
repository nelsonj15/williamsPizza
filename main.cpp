#include <iostream>
#include <string.h>

struct pizzaData
{
    
    char c_name[200];		// This will be hold the name of the Company.
    int p_inches;			// This will hold the diameter of the pizza.
    float p_weight;		// This will hold the weight of the pizza.
    
};

using namespace std;

int
main ()
{
    
    cout <<
    "\n\n\n******************************************************************"
    << endl;
    cout << "***** Rob Nelson *************************************************"
    << endl;
    cout << "***** CSC 301     ************************************************"
    << endl;
    cout << "***** Project 3: William Wingate's Pizza-Analysis Service ********"
    << endl;
    cout <<
    "******************************************************************\n\n"
    << endl;
    
    char again = 'y';
    pizzaData *company;
    company = new pizzaData;
    
    
    while (again == 'y' or again == 'Y')
    {
        
        if (again == 'n')
            break;
        
        cout << "What is the size in inches of the pizza?";
        cin >> company->p_inches;
        cin.ignore ();
        cout << "What is the pizza company's name?";
        cin.getline (company->c_name, 200);
        cout << "What is the weight of the pizza in lbs?";
        cin >> company->p_weight;
        
        cout << "\n\nThe Pizza company's name is:" << " " <<
        company->c_name << " ";
        cout << "The diameter of the pizza is:" << " " << company->
        p_inches << " " << "inches" << " ";
        cout << "The weight of the pizza in lbs is:" << " " << company->
        p_weight << endl;
        
        cout << "\nWould you like enter new data? y/n";
        cin >> again;
        
        
    }
    
    cout << "\n ** Last Pizza Company Entered **" << "\n\nPizza Company:" << " "
    << company->c_name << " " << "Pizza Diameter:" << " " << company->
    p_inches << " " << "Pizza Weight:" << " " << company->p_weight << endl;
    
    
    
    
    
    return 0;
}
