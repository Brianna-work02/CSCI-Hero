#include <iostream>
#include <fstream>
using namespace std;

string heroName;
//int exp = 0;
int role, weapon;

void welcome() {
    cout << "Welcome to Hero Adventure!" << endl;
    cout << "In this game, you will embark on a thrilling journey as a hero." << endl;
    cout << "You will face various challenges and make important decisions that will shape your destiny." << endl;
    cout << "Are you ready to begin your adventure? Let's get started!" << endl;
}

void scene01() {
    cout << "-------The Mysterious Forest---------" << endl;
    cout << "You find yourself in a dense and mysterious forest. The trees are tall and the air is thick with the scent of moss." << endl;
    cout << "As you explore, you come across a fork in the path. Do you choose to go left towards the sound of running water, or right towards the faint glow of light?" << endl;
    cout << "Enter 1 for left or 2 for right to make your choice. " << endl;
}

void scene02a() {
    cout << "-------The Waterfall-----------" << endl;
    cout << "You find yourself at a waterfall." << endl;
    cout << "As you explore, you come across a fork in the path. Do you choose to go left or right?" << endl;
    cout << "Enter 'left' or 'right' to make your choice: " << endl;
}

void scene02b() {
    cout << "-------The Cave-----------" << endl;
    cout << "You find yourself in a cave." << endl;
    cout << "As you explore, you come across a fork in the path. Do you choose to go left or right?" << endl;
    cout << "Enter 'left' or 'right' to make your choice: " << endl;
}

void scene03() {
    cout << "-------The Castle Path-----------" << endl;
    cout << "You have entered the castle." << endl;
    cout << "As you explore, you come across a fork path. Do you choose to go left or right?" << endl;
    cout << "Enter 'left' or 'right' to make your choice: " << endl;
}

void FinalScene() {
    cout << "-------The Demon King Appears-----------" << endl;
    cout << "You have reached the final battle." << endl;
    cout << "Up until this point has been to prepare you to fight the demon King!" << endl;
}

void Ending() {
    cout << "-------The Hero's Victory-----------" << endl;
    cout << "Congratulations! You have defeated the Demon King and saved the kingdom!" << endl;
}

// increase exp points to level up player 
/* void levelUp() {
    static int level = 1;
    if (exp >= 20 && level == 1) {
        level = level + 1;
        cout << "You leveled up to Level " << level << endl;
    }
    else if (exp >= 40 && level == 2) {
        level = level + 1;
        cout << "You leveled up to Level " << level << endl;
    }
    */


    // value functions
    // Function to increase exp when an enemy is defeated or end game when not enough exp
    /*
    battle(enemyName, enemyExp) {
        cout << "An enemy appears: " << enemyName << endl;
        cout << "Enemy EXP required: " << enemyExp << endl;

        if (exp >= enemyExp) {
            cout << "You have defeated " << enemyName << " and gained " << enemyExp << " EXP!" << endl;
            exp = exp + enemyExp;
            levelUp();
        }
        else {
            cout << "You do not have enough EXP to defeat " << enemyName << ". Game Over." << endl;
            exit(0);
        }
    }
    */



int main()
{
    string choice;

    welcome();
    cout << "Enter your hero's name: " << endl;
    cin >> heroName;
    cout << "Welcome, " << heroName << "! Your adventure begins now." << endl;
    cout << "As you prepare for your adventure, you must choose your role. Do you choose to be 1.) a brave knight or 2.) a wise wizard?" << endl;
    cout << "Enter '1' for knight or '2' for wizard to make your choice: " << endl;
    cin >> role;
    cout << "You come across a selection of weapons. Do you choose 1.) the sword or 2.) the magic staff?" << endl;
    cout << "Enter '1' for sword or '2' for staff to make your choice: " << endl;
    cin >> weapon;

    if (role == 1 && weapon == 1 || role == 2 && weapon == 2) {
        cout << "You chose a powerful combination!.  You gained extra EXP!" << endl;
        //  exp += 10;
    }
    else {
        cout << "You chose a less effective combination" << endl;


    }




    scene01();
    cin >> choice;
    if (choice == "left") {
        cout << "You follow the sound of running water and discover a beautiful waterfall. You take a moment to rest and enjoy the serene surroundings." << endl;
        scene02a();
        cin >> choice;

        if (choice == "left") {

            cout << " You have entered the left path " << endl;
            scene03();
            cin >> choice;

            if (choice == "left") {
                cout << " You have entered the left path " << endl;
            }
            else if (choice == "right") {
                cout << " You have entered the right path " << endl;
            }
            else {
                cout << "Invalid choice. Please enter 'left' or 'right'." << endl;
            }


        }
        else if (choice == "right") {
            cout << " You have entered the right path " << endl;
            scene03();
            cin >> choice;

            if (choice == "left") {
                cout << " You have entered the left path " << endl;
            }
            else if (choice == "right") {
                cout << " You have entered the right path " << endl;
            }
            else {
                cout << "Invalid choice. Please enter 'left' or 'right'." << endl;
            }


        }
        else {
            cout << "Invalid choice. Please enter 'left' or 'right'." << endl;
        }


    }

    else if (choice == "right") {
        cout << "You head towards the faint glow of light and find a hidden cave. Inside, you discover ancient artifacts and a mysterious map." << endl;
        scene02b();

        cin >> choice;
        if (choice == "left") {
            cout << " You have entered the left path " << endl;
            scene03();
            cin >> choice;

            if (choice == "left") {
                cout << " You have entered the left path " << endl;
            }
            else if (choice == "right") {
                cout << " You have entered the right path " << endl;
            }
            else {
                cout << "Invalid choice. Please enter 'left' or 'right'." << endl;
            }


        }

        else if (choice == "right") {
            cout << " You have entered the right path " << endl;
            scene03();
            cin >> choice;

            if (choice == "left") {
                cout << " You have entered the left path " << endl;
            }
            else if (choice == "right") {
                cout << " You have entered the right path " << endl;
            }
            else {
                cout << "Invalid choice. Please enter 'left' or 'right'." << endl;
            }


        }

        else {
            cout << "Invalid choice. Please enter 'left' or 'right'." << endl;
        }

    }
    else {
        cout << "Invalid choice. Please enter 'left' or 'right'." << endl;
    }


    return 0;
}

