#include <iostream>
using namespace std;
void myTokenizer(char *data, char **list_tokens, char delimiter)
{
    int row = 0;     
    int col = 0;    
    bool inToken = false;
    for (int i = 0; data[i] != '\0'; i++)
    {
        if (data[i] == delimiter)
        {
            if (inToken)
            {
                list_tokens[row][col] = '\0'; 
                row++;  
                col = 0;    
                inToken = false;   
            }
        }
        else
        {
            list_tokens[row][col] = data[i];
            col++;  
            inToken = true;   
        }
    }

    if (inToken)
        list_tokens[row][col] = '\0';
         list_tokens[row + 1] = nullptr;
}
int main()
{
    char sent[100];
    cin.getline(sent, 100, '\n');
    cout << sent << endl;

    int numTokens = 1;
    for (int i = 0; sent[i] != '\0'; i++)
    {
        if (sent[i] == ',')
            numTokens++;
    }
    char **list_tokens = new char *[numTokens + 1];   
    for (int i = 0; i < numTokens; i++)
    {
        list_tokens[i] = new char[100];   
    }
    myTokenizer(sent, list_tokens, ',');
    for (int i = 0; list_tokens[i] != nullptr; i++)
    {
        cout << list_tokens[i] << endl;
    }
    for (int i = 0; i < numTokens; i++)
    {
        delete[] list_tokens[i];
    }
    delete[] list_tokens;
    return 0;
}
