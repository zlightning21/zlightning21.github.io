/******************************************************************************
Rock, Paper, Scissors

The rules to This gmae are as follows:

    Rock beats Scissors
    Scissors beats Paper
    Paper beats Rock


*******************************************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//funcion prototypes
void rules();
void menu();
void play();

int main()
{
    int choice;     // holds the menu choice
    
    do 
    {
        menu();
        cout << "Enter your Choice (1,2, or 3) " << endl;
        cin >> choice;
        
        // do some action based on the menu choice
        if(choice ==1)
        {
            //play the game
            play();
        }
        else if (choice == 2)
        {
            // display the rules
            system("cls"); // clears the console
            //call the rules function
            rules();
        }
        else if(choice == 3)
        {
           // Quit
           cout << "Thank you for using the program. Bye";
        }
        else
        {
            // display an error
            system("cls");
            cout << "**********************************" << endl;
            cout << "\t Error: INVALID MENU choice" <<endl;
            cout << "**********************************" << endl;
        }
    }while(choice != 3);
    
    return 0;
}

/*
    function named rules that displays the rules of the rock paper scissors
    game
*/ 
void rules()
{
    // displays the rules to the game
    cout << "**********************************" << endl;
    cout << "\t Rock, Paper, Scissors Rules" <<endl;
    cout << "**********************************" << endl;
    cout << "\t - Rock beats Paper" << endl;
    cout << "\t - Scissors beats Paper" << endl;
    cout << "\t Paper beats Rock" << endl;
    cout << "**********************************" << endl;
}

/*
    function that displays the menu for the game
*/
void menu()
{
    cout << "**********************************" << endl;
    cout << "\t Rock, Paper, Scissors Rules" << endl;
    cout << "**********************************" << endl;
    cout << "\t 1 - Play Rock, Paper, Scissors" << endl;
    cout << "\t 2 - View the rules to the game" << endl;
    cout << "\t 3 - Quit" << endl;
    cout << "**********************************" << endl;
    
}

void play()
{
    // generate a random number 
    srand(time(0));
    
    //variables
    int userchoice;      //user's choice
    int cpuchoice;       // cpu choice
    
    cout << "************************************" << endl;
    cout << "\t Rock, paper, Scissors - GAME TIME" << endl;
    cout << "************************************" << endl;
    cout << "\t Select one of the following: " << endl;
    cout << "\t 1 - Rock" << endl;
    cout << "\t 2 - Paper" << endl;
    cout << "\t 3 - Scissors" << endl;
    cout << "************************************" << endl;
    cout << "Enter your choice (1, 2, or 3): " ;
    cin >> userchoice;
    
    //validate the user's choice
    while(userchoice < 1 or userchoice >3)
    {
        cout << "**********************************" << endl;
        cout << "\t Error: INVALID MENU choice" <<endl;
        cout << "**********************************" << endl;
        cout << "Enter your choice (1, 2, or 3) ";
        cin >> userchoice;
    }
    
    // implement the game logic
    if(userchoice ==1)
    {
        // user picked Rock
        if(cpuchoice ==3)
            cout << "You picked rock, CPU picked scissors. YOU WIN! :) \n\n"; // user wins
        else if(cpuchoice ==2)
            cout << "You picked rock, CPU picked Paper. You lose :( \n\n"; // user loses
        else
            cout << "You picked rock, CPU picked Rock. You Tied :| \n\n"; // tie
    }
    else if (userchoice ==2)
    {
        // user picked Paper
        if(cpuchoice ==1)
            cout << "You picked paper, CPU picked rock. YOU WIN! :) \n\n"; // user wins
        else if(cpuchoice ==3)
            cout << "You picked paper, CPU picked Scissors. You lose :( \n\n"; // user loses
        else
            cout << "You picked paper, CPU picked paper. You Tied :| \n\n"; // tie
    }
    else 
    {
        // user picked Scissors
        if(cpuchoice ==2)
            cout << "You picked Scissors, CPU picked Paper. YOU WIN! :) \n\n"; // user wins
        else if(cpuchoice ==1)
            cout << "You picked Scissors, CPU picked rock. You lose :( \n\n"; // user loses
        else
            cout << "You picked Scissors, CPU picked Scissors. You Tied :| \n\n"; // tie
    }

}