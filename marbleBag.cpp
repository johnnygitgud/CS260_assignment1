#include <iostream>// this library is important for all input and outputs.
using namespace std;

int main() {
    int marbleBag = 0; //It's important to declare data type for variables. Semicolons are important for almost every line in C++
    int userInput = 0;
    
    //Let the user know about the empty marble bag.
    cout << "Here we have a bag of marbles. It currently has:\n " << marbleBag << " marbles." << endl;
    //Prompt user to add marbles to the bag.
    cout << "Type a number to add more marbles to the Bag of Marbles." << endl;
    cin >> userInput;
    int totalMarbles = marbleBag + userInput;//This variable does addition and holds the new amount of marbles.

    //Let the user know the amount of marbles has changed to what they entered
    cout << "Now the bag of marbles has: " << totalMarbles << " marbles inside it now." << endl;

    //Prompt the user to subtract marbles from what they added earlier.
    cout << "Type a number to remove some marbles from the Bag of Marbles." << endl;
    cin >> userInput;

    //These variable can be reused to subtract marbles from the amount that was added to the empty bag.
    totalMarbles = totalMarbles - userInput;

    //Display the current amount of marbles
    cout << "Now the bag of marbles has: " << totalMarbles << " marbles inside it now.";

    return 0;
}   