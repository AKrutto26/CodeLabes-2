def CheckVowel(char):
    vowels = ['a','e','i','o','u','A','E','I','O','U']
    return char in vowels

def CheckConsonant(char):
    consonants = ['b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z','B','C','D','F','G','H','I','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z']
    return char in consonants

def main():
    
    user_input = input("Enter a single character: ")
    
    if len(user_input) != 1:
        print("Please enter only one character.")
        return
    
    char = user_input
    
    if user_input.isalpha():
        
        """isalpha() function creates a loop and also  examines a string for alphabetical characters and returns True only if the string contains all alphabetical characters"""
        
        if CheckVowel(char):
            print(f"The character '{char}' is a vowel.")
            
        elif CheckConsonant(char):
            print(f"The character '{char}' is a consonant.")
            
    else:
        print("Please enter a valid alphabetical character.")

if __name__ == "__main__":
    main()

