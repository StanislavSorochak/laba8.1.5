// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1) вияснити число входжень в послідовність групи букв "abc".
// 2) замінити кожну групу букв "abc" парою зірочок "**".

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

bool contain(char* str, size_t i)
{
    if (str[i] == 'S' && str[i + 1] == 'Q')
        return true;
    else
        if (str[i] == 'Q' && str[i + 1] == 'S')
            return true;
        else
            if (i < strlen(str))
                return  contain(str, ++i);
            else
                return false;
}

char* change(char* str, char* sNew, size_t l, size_t i)
{
    if (i < strlen(str) - 3)
    {
        if (str[i] == 'S' || str[i] == 'Q')
        {
            sNew[l] = '*';
            sNew[l + 1] = '*';
            sNew[l + 2] = '*';
            l += 3;
            i += 1;
        }

        else
        {
            sNew[l] = str[i];
            ++l;
        }
        return   change(str, sNew, l, ++i);
    }
    else
    {
        sNew[l++] = str[i++];
        sNew[l++] = str[i];
        sNew[l] = '\0';
        strcpy_s(str, strlen(sNew) + 1, sNew);
        return str;
    }
}

int main()
{
    char* str = new char[101];
    char* sNew = new char[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "Changed string: \n";
    if (contain(str, 0))
    {
        cout << change(str, sNew, 0, 0);
    }
    delete[] sNew;
    delete[] str;
    cout << endl;
    return 0;
}

