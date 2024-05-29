def CheckPalindrome(Text):
    Text = ''.join(char.lower() for char in Text if char.isalpha())
    
    #.isalpha() checks if all the characters in a string are alphabetical characters
    #converts the new string to lowercase using the lower() method.
    
    return Text == Text[::-1]
#reverses the order of elements in a sequence

def main():
    user_input = input("Enter a string: ")
    
    if CheckPalindrome(user_input):
        print("Yes, it's a palindrome!")
        
    else:
        print("No, it's not a palindrome.")

if __name__ == "__main__":
    main()

