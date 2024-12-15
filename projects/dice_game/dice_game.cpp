#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std; 
int dice_game() 
{
    char playAgain = 'y'; 
    while(playAgain == 'y' || playAgain == 'Y'){
        int x = time(0); 
        srand(x); 
        int guess=-1; 
        int actual = 1 + rand() % 6; 
        int count = 0; 
        cout << "Dice has been thrown, guess the number it landed on" << endl;
        while(guess!=actual){
            cout<<"Enter a value: "; 
            cin>>guess; 
            if(guess < 1 || guess > 6){
                cout << "Invalid input! Please enter a number between 1 and 6" << endl; 
                continue; 
            }
            count++;
            if(guess < actual){
                cout << "Too low!" << endl; 
            }else if(guess > actual){
                cout << "Too high!" << endl; 
            } else {
                cout << "Congratulations! You guessed the number in " << count << " attempts." << endl; 
            }
        }
        cout << "Do you want to play again (y/n): "; 
        cin >> playAgain; 
        
        while(playAgain != 'y' && playAgain != 'Y' && playAgain != 'n' && playAgain != 'N'){
            cout << "Invalid input! Please enter 'y' for yes or 'n' for no: "; 
            cin >> playAgain; 
        }
    }
    cout << "\nThanks for playing! Goodbye!" << endl; 
    return 0; 
}