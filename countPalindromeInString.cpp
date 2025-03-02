#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Function to check if a word is a palindrome
bool isPalindrome(const string& word) {
    if (word.empty()) return false; // Return false for an empty word
    
    int n = word.length();
    for (int i = 0; i < n / 2; ++i) {
        if (word[i] != word[n - i - 1]) {
            return false; // Not a palindrome
        }
    }
    return true; // Word is a palindrome
}

// Function to count palindrome words in a string
int countPalindromeWords(const string& str) {
    string temp = ""; // Temporary string to store current word
    int ans = 0;      // Counter for palindrome words

    // Traverse the string
    for (char ch : str) {
        if (!isspace(ch)) {
            temp += tolower(ch); // Add the character to temp (convert to lowercase)
        } else {
            if (!temp.empty() && isPalindrome(temp)) {
                ans++; // Increment count if temp is a palindrome
            }
            temp = ""; // Reset temp for the next word
        }
    }

    // Check the last word
    if (!temp.empty() && isPalindrome(temp)) {
        ans++; // Increment count if the last word is a palindrome
    }

    return ans;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the input string including spaces

    int result = countPalindromeWords(input);
    cout << "Number of palindrome words: " << result << endl;

    return 0;
}
