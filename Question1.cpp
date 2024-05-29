#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool CheckVowel(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (char vowel : vowels) {
        if (c == vowel) {
            return true;
        }
    }
    return false;
}

bool CheckConsonant(char c) {
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    for (char consonant : consonants) {
        if (c == consonant) {
            return true;
        }
    }
    return false;
}

int main() {
    char user_input;
    
    cout << "Enter a single character: ";
    cin >> user_input;
    
    if (isalpha(user_input)) {

        if (CheckVowel(user_input)) {
            cout << "The character '" << user_input << "' is a vowel." << endl;

        } else if (CheckConsonant(user_input)) {
            cout << "The character '" << user_input << "' is a consonant." << endl;
        }
    }
    
     else {
        cout << "Please enter a valid alphabetical character." << endl;
    }

    return 0;
}
