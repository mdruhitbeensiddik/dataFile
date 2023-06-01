#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isSpecialChar(char c) {
    return (c == '$' || c == '%' || c == '@');
}

int main() {
    string input;
    getline(cin, input);

    int totalInputs = input.length();
    int spaceCount = 0;
    int specialCharCount = 0;
    int consonantCount = 0;
    int vowelCount = 0;
    int numberCount = 0;

    for (char c : input) {
        if (c == ' ') {
            spaceCount++;
        } else if (isSpecialChar(c)) {
            specialCharCount++;
        } else if (isdigit(c)) {
            numberCount++;
        } else if (isVowel(c)) {
            vowelCount++;
        } else {
            consonantCount++;
        }
    }

    cout << "Total number of inputs: " << totalInputs << endl;
    cout << "Total number of spaces: " << spaceCount << endl;
    cout << "Total number of special characters: " << specialCharCount << endl;
    cout << "Total number of consonants: " << consonantCount << endl;
    cout << "Total number of vowels: " << vowelCount << endl;
    cout << "Total number of numbers: " << numberCount << endl;

    return 0;
}
