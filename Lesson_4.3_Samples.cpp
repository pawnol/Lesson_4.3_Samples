/*
Lesson 4.3 Samples
Pawelski
4/15/2021
Here are the sample programs for this lesson.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Example 1
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }
    cout << "\n";

    // Example 2
    for (int i = 1; i <= 5; i++) 
    {
        cout << i << "\n";
    }
    cout << "\n";

    // Example 3
    for (int i = 5; i > 0; i--) 
    {
        cout << i << "\n";
    }
    cout << "\n";

    // Exmaple 3.5
    // This example prints even values between 0 and 10
    for (int i = 0; i <= 10; i += 2) 
    {
        cout << i << "\n";
    }
    cout << "\n";

    // Example 4
    for (int i = 10; i > 0; i--) 
    {
        cout << "I have " << i << " marbles left...\n";
    }
    cout << "I have lost all my marbles!\n\n";

    // Example 5
    // This is a modified version of example 4 so it does not say "1 marbles"
    // Notice that I cannot use i outside the for loop, as it is only defined inside the loop
    for (int i = 10; i > 1; i--) {
        cout << "I have " << i << " marbles left...\n";
    }
    cout << "I have 1 marble left...\n";
    cout << "I have lost all my marbles!\n\n";

    // Example 6
    // This example allows the user to enter how many marbles to start with
    int marbles;
    cout << "How many marbles do you have? ";
    cin >> marbles;
    for (int i = marbles; i > 1; i--) 
    {
        cout << "You have " << i << " marbles left...\n";
    }
    cout << "You have 1 marble left...\n";
    cout << "You have lost all your marbles!\n\n";

    // Example 7
    // This prints each letter of the word on a seperate line
    // We will revisit this particular example in the next unit!
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (int i = 0; i < word.length(); i++) 
    {
        cout << word[i] << "\n";
    }
    cout << "\n";

    // Example 8
    // This example uses the toupper function for characters to convert a string to all capitals
    // We will revisit this particular example in the next unit!
    string capitalizedWord = "";
    cout << "Enter a word: ";
    cin >> word;
    for (int i = 0; i < word.length(); i++) 
    {
        capitalizedWord += toupper(word[i]);
    }
    cout << capitalizedWord << "\n";
    return 0;
}
