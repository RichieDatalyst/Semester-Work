#include<iostream>
using namespace std;
void inputStringArray(string **arr, int numRows) {
    for (int i = 0; i < numRows; i++) {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        int numWords = 0;
        string word;
        while (ss >> word) {
            numWords++;
        }
        arr[i] = new string[numWords];
        ss.clear();
        ss.str(sentence);
        int j = 0;
        while (ss >> word) {
            arr[i][j] = word;
            j++;
        }
    }
}
void deleteString(string **arr, int numRows, string substring, int sentenceNum) {
    bool deleteAll = (sentenceNum == -1);
    for (int i = 0; i < numRows; i++) {
        bool containsSubstring = false;
        for (int j = 0; j < strlen(arr[i]); j++) {
            if (arr[i][j].find(substring) != string::npos) {
                containsSubstring = true;
                break;
            }
        }
        if (containsSubstring && (deleteAll || i == sentenceNum)) {
            delete[] arr[i];
            arr[i] = NULL;
        }
    }
}