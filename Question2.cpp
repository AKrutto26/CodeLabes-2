#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool CheckPalindrome(string Text) {
    
    string cleanedText;
    
    // Convert characters to lowercase and keep only alphabetical characters
    for (char c : Text) {
        if (isalpha(c)) {
            cleanedText += tolower(c);
        }
    }
    
    // Check if the cleaned text is equal to its reverse
    return cleanedText == string(cleanedText.rbegin(), cleanedText.rend());
}

int main() {
    string userInput;
    
    cout << "Enter a string: ";
    getline(cin, userInput);
    
    if (CheckPalindrome(userInput)) {
        cout << "Yes, it's a palindrome!" << endl;
    } else {
        cout << "No, it's not a palindrome." << endl;
    }
    
    return 0;
}