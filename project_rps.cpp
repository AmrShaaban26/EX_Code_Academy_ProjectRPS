#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayGameLayout()
{
    //this function prints the initial game layout and the choices that the user
    // has in front of the computer.
    cout << "-- Rock Paper Scissors Game --" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
}

int manageInteger1()
{
    //this function manages the user input without taking in any arguments
    //the output is what the use input in the program.
    int Integer = 0;
    bool state = true;
    cout << "Choose (1 - 3): ";
    cin >> Integer;
    do{
        if (Integer <= 0 || Integer > 3)
        {
            cout << "Please try again with a number in the range from 1 to 3, Sir!" << endl;
            state = false;
            cout << "Choose (1 - 3): ";
            cin >> Integer;
            state = true;
        }
        else
        {
            break;
        }
    } while (state = true);
    return Integer;
}

int manageInteger2()
{
    // this function manages the computer input through randomly generating
    // a number between 1 and 3 to be suitable for the game
    srand(time(0));
    return rand() % 3 + 1;
}

void PrintingUserChoice(int Integer)
{
    //this function prints the choice corresponding to the number chosen by the user
    cout << "You chose: ";
    switch (Integer)
    {
        case 1:
        cout << "Rock" << endl;
        break;
        case 2:
        cout << "Paper" << endl;
        break;
        default:
        cout << "Scissors" << endl;
    }
}

void PrintingComputerChoice(int Integer)
{
    //this function prints the choice corresponding to the number chosen by the computer
    cout << "Computer chose: ";
    switch (Integer)
    {
        case 1:
        cout << "Rock" << endl;
        break;
        case 2:
        cout << "Paper" << endl;
        break;
        default:
        cout << "Scissors" << endl;
    }
}

void gameLogicandDecidingWhoWon(int Integer1, int Integer2)
{
    if (Integer1 == Integer2)
    {
        cout << "It is a draw. Nobody wins." << endl;
    }
    else if (Integer1 == 1 && Integer2 == 3||
             Integer1 == 3 && Integer2 == 2||
             Integer1 == 2 && Integer2 == 1)
             {
                cout << "You won! Congratulations!!!!!" <<endl;
             }
    else
    {
        cout << "You Lost! Computer won!" << endl;
    }
}

int main()
{
    displayGameLayout();
    int Integer1 = manageInteger1();
    int Integer2 = manageInteger2();
    cout << endl;
    cout << endl;
    PrintingUserChoice(Integer1);
    PrintingComputerChoice(Integer2);
    cout <<"----------------------------------------" << endl;
    gameLogicandDecidingWhoWon(Integer1, Integer2);
}