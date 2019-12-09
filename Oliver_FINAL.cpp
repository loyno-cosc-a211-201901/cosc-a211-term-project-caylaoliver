// Cayla Oliver
// This program will help women create outfits for a date night or late night out 
// 12/9/2019

#include <iostream>
#include <iomanip>
using namespace std;

// this function determines the user's style
int style()
{
    int choice;
    
    cout << "How do you like your clothing to fit? \n"
        << "1. Tight & sexy \n" << "2. Loose & comfy \n" << endl;
    cin >> choice;

    // this loops checks for a valid input
    while(choice < 0 || choice > 2)
    {
        cout << "Please Enter A Number 1-2" << endl;
        cin >> choice;
    }

    return choice;
}

// this function determines the user's shoe preference
int footwear()
{
    int choice;

    cout << "\nDo you prefer heels or flats? \n"
        << "1. Heels \n" << "2. Flats \n" << endl;
    cin >> choice;

    // this loops checks for a valid input
    while(choice < 0 || choice > 2)
    {
        cout << "Please Enter A Number 1-2" << endl;
        cin >> choice;
    }

    return choice;

}

//this function gives advice to user
void tips()
{
    cout << "Tips for planning future outfits \n" << "---------------------------------\n"
        << "You can never go wrong with all black or white. \n" 
        << "You can never go wrong with pearl or diamond earrings; Your outfit will pop. \n" 
        << "Cuffing the bottom of your jeans always adds a cute touch.\n" << endl;

}

int main()
{
    //declare variables
    int quesA, quesB;
    char again;

    const int LOOSE = 2;
    const int TIGHT = 2;
    const int TYPE = 2;

    // these arrays hold the type of clothing & shoe choices
    string dress[TIGHT] = {"Body con dress", "Sheath dress"};
    string dress2[LOOSE] = {"Shift dress", "A-line dress"};
    
    string top[TIGHT] = {"Elevated tee", "sleeveless top"};
    string top2[LOOSE] = {"Silk Button Front Blouse", "loose top2"};

    string pants[TIGHT] = {"Skinny jeans", "Straight jeans"};
    string pants2[LOOSE] = {"Wide leg jeans", "Flare jeans"};
    
    string skirt[TIGHT] = {"Body Con Skirt", "Pencil skirt"};
    string skirt2[LOOSE] = {"A-line skirt", "Box Pleated skirt"};

    string shoes[TYPE] = {"Wedge heel", "Stiletto"};
    string shoes2[TYPE] = {"Loafers", "Ballerinas"};
    

    do
    {
        // assign a variable to functions
        quesA = style();
        quesB = footwear();
    
        // this if statement clarifies the user's input
        if(quesA == 1)
        {
            cout << "\nYou like your clothing to be tight & sexy" << endl;
        }
        else
        {
            cout << "\nYou like your clothing to be loose & comfy" << endl;
        }
        
        // this if statement clarifies the user's input
        if(quesB == 1)
        {
            cout << "You prefer heels" << endl;
        }
        else
        {
            cout << "You prefer flats" << endl;
        }

        // the do while loop confirms the user's inputs are correct
        cout << "\nIs this correct?" << endl;
        cout << "Enter Y for yes or N for no" << endl;
        cin >> again;
    }
    while(again == 'n'|| again == 'N');

    // This statement suggests the user outfits
    if (quesA == 1)
    {
        cout << "\nYour suggested dress type: " << endl;

        for(int count = 0; count < TIGHT; count++)
        {
            cout << dress[count] << endl;
        }

        cout << "\nYour suggested shirt type: " << endl;
        for(int count = 0; count < TIGHT; count++)
        {
            cout << top[count] << endl; 
        }

        cout << "\nYour suggested pants type: " << endl;
        for(int count = 0; count < TIGHT; count++)
        {
            cout << pants[count] << endl;
        }

        cout << "\nYour suggested skirt type: " << endl;
        for(int count = 0; count < TIGHT; count++)
        {
            cout << skirt[count] << endl; 
        }
    }
    else
    {
        cout << "\nYour suggested dress type: " << endl;

        for(int count = 0; count < TIGHT; count++)
        {
            cout << dress2[count] << endl;
        }

        cout << "\nYour suggested shirt type: " << endl;
        for(int count = 0; count < TIGHT; count++)
        {
            cout << top2[count] << endl; 
        }

        cout << "\nYour suggested pants type: " << endl;
        for(int count = 0; count < TIGHT; count++)
        {
            cout << pants2[count] << endl;
        }

        cout << "\nYour suggested skirt type: " << endl;
        for(int count = 0; count < TIGHT; count++)
        {
            cout << skirt2[count] << endl; 
        }
    }

    //  this statement suggest shoes to complete outfit
    if(quesB == 1)
    {
        cout << "\nYour suggested shoe type: " << endl;
        for(int count = 0; count < TYPE; count++)
        {
            cout << shoes[count] << endl;
        }
    }
    else
    {
        cout << "\nYour suggested shoe type: " << endl;
        for(int count = 0; count < TYPE; count++)
        {
            cout << shoes2[count] << endl;
        }
    }

    // thank user
    // display tips
    cout << "\nThank you for using my program.\n" << endl;
    tips();

    return 0;
}
