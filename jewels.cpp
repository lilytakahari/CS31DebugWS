#include <iostream>
#include <string>
using namespace std;

int jewelCounter(string j, string s)
{
    int count = 0;
    for (int i = 0; i != s.size(); i++)
    {
        for (int k = 0; k != j.size(); k++)
        {
            if (s[i] == j[k])
            {
                continue;
                count++;
            }
        }
    }
    return count;
}

string notJewels(string j, string s) {
    string stones;
    bool isJewel = false;
    for (int i = 0; i != s.size(); i++)
    {
        for (int k = 0; k != j.size(); k++)
        {
            if(s[i] == j[k])
                isJewel = true;
        }
        if (!isJewel)
            stones += s[i];
        isJewel = true;
    }
    return stones;
}

int main()
{
    string j;
    string s;
    
    cout << "Input the type of stones that are jewels: ";
    getline(cin, j);
    
    cout << "Input the stones that you have: ";
    getline(cin, s);
    
    cout << "Number of stones you have that are jewels: " << jewelCounter(j, s) << endl;
    cout << "Stones that are not jewels: " << notJewels(j, s) << endl;
}
