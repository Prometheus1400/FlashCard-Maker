#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Set{
    //attributes
    string name,temp_input, temp_term, temp_definition;
    vector<string> terms,definitions;
    int length;
    
    
    public:
    //initializer
    Set(string newname){
        name = newname;
    }

    //methods
        void add_cards(){
            temp_input = "y";

            while(temp_input != "n"){
                cout << "Enter term here: ";
                cin >> temp_term;
                cout << "Enter definition here: ";
                cin >> temp_definition;

                terms.push_back(temp_term);
                definitions.push_back(temp_definition);
                
                cout << "\nAdd another term? (Y/n): ";
                cin >> temp_input;
            }
        }

        void run_set(){
            length = terms.size();

            for(int i = 0; i < length; i++){
                cout << terms[i] << ":\n";
                cout << definitions[i] << "\n\n";
            }
        }
};