#include <iostream>
#include <string>

using namespace std;



string mass_mole;

// Mass in grams
int mass_grams;
//Number of moles
int number_moles;


// ATOMIC MASS
int carbon = 12;
int oxygen = 16;
int calcium = 40;
int hydrogen = 1;
int sulphur = 32;
int sodium = 23;
int chlorine = 35.5;
// chosen elements
int chosen_one;
int chosen_two;
int chosen_three;
string display_name;
int Mr;
// Which stuff??
int which_stuff;


// Find MASS or MOLES

void which() {

    cout << "Which of these would you like to find the mass in grams or number of moles of?\n";
    cout << "(Type the number)\n\n";
    
    cout << "1.  Carbon Dioxide : CO2\n";
    cout << "2.  Calcium Carbonate : CaCO3" << endl;
    cout << "3.  Pure Sulphuric Acid : H2SO4\n";
    cout << "4.  Sodium Chloride : NaCl\n";
    cout << "5.  Methane Gas : CH4\n";
    
    cin >> which_stuff;

}


void findmass() {

    mass_grams = number_moles * Mr;

    cout << endl << display_name << mass_grams << "g " << endl << endl;

}
void findmoles() {

    number_moles = mass_grams/Mr;

    cout << endl << display_name << number_moles << " moles" << endl;


}


void confirmation() {

    switch(which_stuff) {

        case 1:
            chosen_one = carbon;
            chosen_two = oxygen * 2;
            Mr = chosen_one + chosen_two;
            display_name = "Carbon Dioxide (CO2) : ";
            break;
        case 2:
            chosen_one = calcium;
            chosen_two = carbon;
            chosen_three = oxygen * 3;
            Mr = chosen_one + chosen_two + chosen_three;
            display_name = "Calcium Carbonate (CaCO3) : ";
            break;
        case 3:
            chosen_one = hydrogen * 2;
            chosen_two = sulphur;
            chosen_three = oxygen * 4;
            Mr = chosen_one + chosen_two + chosen_three;
            display_name = "Pure Sulphuric Acid (H2SO4) : ";
            break;
        case 4:
            chosen_one = sodium;
            chosen_two = chlorine;
            Mr = chosen_one + chosen_two;
            display_name = "Sodium Chloride (NaCl) : ";
            break;
        case 5:
            chosen_one = carbon;
            chosen_two = hydrogen * 4;
            Mr = chosen_one + chosen_two;
            display_name = "Methane Gas (CH4) : ";
            break;


    }






    cout << "Do you want to find the mass in grams or the number of moles";
    cin >> mass_mole;


    if(mass_mole == "mass") {

        cout << "What is the number of moles?";
        cin >> number_moles;

        findmass();

    }
    if(mass_mole == "mole") {

        cout << "What is the mass in grams?";
        cin >> mass_grams;

        findmoles();
    }

}

int main() {

    which();
    confirmation();    
    

}