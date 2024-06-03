#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string txt;
    int i, count = 0;

    cout << "Enter the text: ";
    getline(cin, txt);
    cout << txt << endl;

    // Convert to lowercase (optional)
    for (i = 0; txt[i] != '\0'; i++) {
        txt[i] = tolower(txt[i]);
    }

    // Count vowels
    for (i = 0; txt[i] != '\0'; i++) {
        if (txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u') {
            count++;
        }
    }

    cout << "Number of vowels: " << count << endl;

    return 0;
}
