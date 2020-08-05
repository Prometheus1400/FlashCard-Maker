#include <iostream>
#include <string>
#include "header.hpp"
using namespace std;
//Testt
int main(){
    Set Set_Number_One("Set 1");
    string input;

    cout << "What would you like to do, add or run a set? (ADD,RUN,EXIT): ";
    cin >> input;

    while(input != "EXIT"){
        if(input == "ADD"){
            Set_Number_One.add_cards();
        }
        else if(input == "RUN"){
            Set_Number_One.run_set();
        }
        else{
            cout << "Input not recognized, try again.\n";
            cout << "What would you like to do, add or run a set? (ADD,RUN,EXIT): ";
            cin >> input;
            break;
        }

        cout << "What would you like to do, add or run a set? (ADD,RUN,EXIT): ";
        cin >> input;
    }


}
