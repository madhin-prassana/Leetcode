// Created by Madhin Prassana on 30/03/25.
// Leetcode -> 13. Roman to Integer
#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int integer = 0;
    int previousValue = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue = roman[s[i]];

        if (currentValue < previousValue) {
            integer -= currentValue;
        } else {
            integer += currentValue;
        }

        previousValue = currentValue;
    }

    return integer;
}

int main() {
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    cout << "Integer value is " << romanToInt(s) << endl;
    return 0;
}
