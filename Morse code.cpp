#include <iostream>
#include <windows.h>
#include<string>
using namespace std;

void eng(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
            if (str[i] == 'a' || str[i] == 'A')
                result += "01 ";
            if (str[i] == 'b' || str[i] == 'B')
                result += "1000 ";
            if (str[i] == 'c' || str[i] == 'C')
                result += "1010 ";
            if (str[i] == 'd' || str[i] == 'D')
                result += "100 ";
            if (str[i] == 'e' || str[i] == 'E')
                result += "0 ";
            if (str[i] == 'f' || str[i] == 'F')
                result += "0010 ";
            if (str[i] == 'g' || str[i] == 'G')
                result += "110 ";
            if (str[i] == 'h' || str[i] == 'H')
                result += "0000 ";
            if (str[i] == 'i' || str[i] == 'I')
                result += "00 ";
            if (str[i] == 'j' || str[i] == 'J')
                result += "0111 ";
            if (str[i] == 'k' || str[i] == 'K')
                result += "101 ";
            if (str[i] == 'l' || str[i] == 'L')
                result += "0100 ";
            if (str[i] == 'm' || str[i] == 'M')
                result += "11 ";
            if (str[i] == 'n' || str[i] == 'N')
                result += "10 ";
            if (str[i] == 'o' || str[i] == 'O')
                result += "111 ";
            if (str[i] == 'p' || str[i] == 'P')
                result += "0110 ";
            if (str[i] == 'q' || str[i] == 'Q')
                result += "1101 ";
            if (str[i] == 'r' || str[i] == 'R')
                result += "010 ";
            if (str[i] == 's' || str[i] == 'S')
                result += "000 ";
            if (str[i] == 't' || str[i] == 'T')
                result += "1 ";
            if (str[i] == 'u' || str[i] == 'U')
                result += "001 ";
            if (str[i] == 'v' || str[i] == 'V')
                result += "0001 ";
            if (str[i] == 'w' || str[i] == 'W')
                result += "011 ";
            if (str[i] == 'x' || str[i] == 'X')
                result += "1001 ";
            if (str[i] == 'y' || str[i] == 'Y')
                result += "1011 ";
            if (str[i] == 'z' || str[i] == 'Z')
                result += "1100 ";
            if (str[i] == '.')
                result += ". ";
            if (str[i] == ',')
                result += ", ";
            if (str[i] == '\'')
                result += "\' ";
            if (str[i] == '_')
                result += "_ ";
            if (str[i] == ' ')
                result += " ";
            if (str[i] == '-')
                result += "- ";
            if (str[i] == '!')
                result += "! ";
            if (str[i] == '&')
                result += "& ";
            if (str[i] == '@')
                result += "@ ";
            if (str[i] == '?')
                result += "? ";
            if (str[i] == ')')
                result += ") ";
            if (str[i] == '(')
                result += "( ";
            if (str[i] == '%')
                result += "% ";
            if (str[i] == '1')
                result += "01111 ";
            if (str[i] == '2')
                result += "00111 ";
            if (str[i] == '3')
                result += "00011 ";
            if (str[i] == '4')
                result += "00001 ";
            if (str[i] == '5')
                result += "00000 ";
            if (str[i] == '6')
                result += "10000 ";
            if (str[i] == '7')
                result += "11000 ";
            if (str[i] == '8')
                result += "11100 ";
            if (str[i] == '9')
                result += "11110 ";
            if (str[i] == '0')
                result += "11111 ";
    }
    cout << "\nResult: " << result << endl;
}

void rus(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'а' || str[i] == 'А')
            result += "01 ";
        if (str[i] == 'б' || str[i] == 'Б')
            result += "1000 ";
        if (str[i] == 'в' || str[i] == 'В')
            result += "011 ";
        if (str[i] == 'г' || str[i] == 'Г')
            result += "110 ";
        if (str[i] == 'д' || str[i] == 'Д')
            result += "100 ";
        if (str[i] == 'е' || str[i] == 'ё' || str[i] == 'Е' || str[i] == 'Ё')
            result += "0 ";
        if (str[i] == 'ж' || str[i] == 'Ж')
            result += "0001 ";
        if (str[i] == 'з' || str[i] == 'З')
            result += "1100 ";
        if (str[i] == 'и' || str[i] == 'И')
            result += "00 ";
        if (str[i] == 'й' || str[i] == 'Й')
            result += "0111 ";
        if (str[i] == 'к' || str[i] == 'К')
            result += "101 ";
        if (str[i] == 'л' || str[i] == 'Л')
            result += "0100 ";
        if (str[i] == 'м' || str[i] == 'М')
            result += "11 ";
        if (str[i] == 'н' || str[i] == 'Н')
            result += "10 ";
        if (str[i] == 'о' || str[i] == 'О')
            result += "111 ";
        if (str[i] == 'п' || str[i] == 'П')
            result += "0110 ";
        if (str[i] == 'р' || str[i] == 'Р')
            result += "010 ";
        if (str[i] == 'с' || str[i] == 'С')
            result += "000 ";
        if (str[i] == 'т' || str[i] == 'Т')
            result += "1 ";
        if (str[i] == 'у' || str[i] == 'У')
            result += "001 ";
        if (str[i] == 'ф' || str[i] == 'Ф')
            result += "0010 ";
        if (str[i] == 'х' || str[i] == 'Х')
            result += "0000 ";
        if (str[i] == 'ц' || str[i] == 'Ц')
            result += "1010 ";
        if (str[i] == 'ч' || str[i] == 'Ч')
            result += "1110 ";
        if (str[i] == 'ш' || str[i] == 'Ш')
            result += "1111 ";
        if (str[i] == 'щ' || str[i] == 'Щ')
            result += "1101 ";
        if (str[i] == 'ъ' || str[i] == 'Ъ')
            result += "011010 ";
        if (str[i] == 'ы' || str[i] == 'Ы')
            result += "1011 ";
        if (str[i] == 'ь' || str[i] == 'Ь')
            result += "1001 ";
        if (str[i] == 'э' || str[i] == 'Э')
            result += "00100 ";
        if (str[i] == 'ю' || str[i] == 'Ю')
            result += "0011 ";
        if (str[i] == 'я' || str[i] == 'Я')
            result += "0101 ";
        if (str[i] == '.')
            result += ". ";
        if (str[i] == ',')
            result += ", ";
        if (str[i] == '\'')
            result += "\' ";
        if (str[i] == '_')
            result += "_ ";
        if (str[i] == ' ')
            result += " ";
        if (str[i] == '-')
            result += "- ";
        if (str[i] == '!')
            result += "! ";
        if (str[i] == '&')
            result += "& ";
        if (str[i] == '@')
            result += "@ ";
        if (str[i] == '?')
            result += "? ";
        if (str[i] == ')')
            result += ") ";
        if (str[i] == '(')
            result += "( ";
        if (str[i] == '%')
            result += "% ";
        if (str[i] == '1')
            result += "01111 ";
        if (str[i] == '2')
            result += "00111 ";
        if (str[i] == '3')
            result += "00011 ";
        if (str[i] == '4')
            result += "00001 ";
        if (str[i] == '5')
            result += "00000 ";
        if (str[i] == '6')
            result += "10000 ";
        if (str[i] == '7')
            result += "11000 ";
        if (str[i] == '8')
            result += "11100 ";
        if (str[i] == '9')
            result += "11110 ";
        if (str[i] == '0')
            result += "11111 ";
    }
    cout << "\nResult: " << result << endl;
}

void toeng(string str)
{
    string result = "", temp = "", temp1 = "", temp2 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0)
        {
            temp2 += temp = str[i];
            continue;
        }

        temp1 = str[i];        
        if (temp1 != " ")
        {
            if (temp != " ")
                temp2 += temp1;
            else
            {
                temp2 = "";
                temp2 += temp1;
            }
        }
        else
        {
            l:
            if (temp2 == "01")
                result += 'a';
            if (temp2 == "1000")
                result += 'b';
            if (temp2 == "1010")
                result += 'c';
            if (temp2 == "100")
                result += 'd';
            if (temp2 == "0")
                result += 'e';
            if (temp2 == "0010")
                result += 'f';
            if (temp2 == "110")
                result += 'g';
            if (temp2 == "0000")
                result += 'h';
            if (temp2 == "00")
                result += 'i';
            if (temp2 == "0111")
                result += 'j';
            if (temp2 == "101")
                result += 'k';
            if (temp2 == "0100")
                result += 'l';
            if (temp2 == "11")
                result += 'm';
            if (temp2 == "10")
                result += 'n';
            if (temp2 == "111")
                result += 'o';
            if (temp2 == "0110")
                result += 'p';
            if (temp2 == "1101")
                result += 'q';
            if (temp2 == "010")
                result += 'r';
            if (temp2 == "000")
                result += 's';
            if (temp2 == "1")
                result += 't';
            if (temp2 == "001")
                result += 'u';
            if (temp2 == "0001")
                result += 'v';
            if (temp2 == "011")
                result += 'w';
            if (temp2 == "1001")
                result += 'x';
            if (temp2 == "1011")
                result += 'y';
            if (temp2 == "1100")
                result += 'z';
            if (temp2 == ".")
                result += '.';
            if (temp2 == ",")
                result += ',';
            if (temp2 == "\"")
                result += '\"';
            if (temp2 == "_")
                result += '_';
            if (temp2 == "-")
                result += '-';
            if (temp2 == "!")
                result += '!';
            if (temp2 == "&")
                result += '&';
            if (temp2 == "@")
                result += '@';
            if (temp2 == "?")
                result += '?';
            if (temp2 == ")")
                result += ')';
            if (temp2 == "(")
                result += '(';
            if (temp2 == "%")
                result += '%';
            if (temp2 == "01111")
                result += '1';
            if (temp2 == "00111")
                result += '2';
            if (temp2 == "00011")
                result += '3';
            if (temp2 == "00001")
                result += '4';
            if (temp2 == "00000")
                result += '5';
            if (temp2 == "10000")
                result += '6';
            if (temp2 == "11000")
                result += '7';
            if (temp2 == "11100")
                result += '8';
            if (temp2 == "11110")
                result += '9';
            if (temp2 == "11111")
                result += '0';
            if (i == str.length() - 1)
                break;
            if (str[i] == ' ' && temp != " ")
            {
                temp = str[i];
                temp2 = "";
                continue;
            }
            if (temp == " " && temp1 == " ")
            {
                result += " ";
                temp2 = "";
                continue;
            }
        }
        temp = str[i];
        if (i == str.length() - 1)
            goto l;
    }
    cout << "\nResult: " << result << endl;
}

void torus(string str)
{
    string result = "", temp = "", temp1 = "", temp2 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0)
        {
            temp2 += temp = str[i];
            continue;
        }

        temp1 = str[i];
        if (temp1 != " ")
        {
            if (temp != " ")
                temp2 += temp1;
            else
            {
                temp2 = "";
                temp2 += temp1;
            }
        }
        else
        {
        l:
            if (temp2 == "01")
                result += 'а';
            if (temp2 == "1000")
                result += 'б';
            if (temp2 == "011")
                result += 'в';
            if (temp2 == "110")
                result += 'г';
            if (temp2 == "100")
                result += 'д';
            if (temp2 == "0")
                result += 'е';
            if (temp2 == "0001")
                result += 'ж';
            if (temp2 == "1100")
                result += 'з';
            if (temp2 == "00")
                result += 'и';
            if (temp2 == "0111")
                result += 'й';
            if (temp2 == "101")
                result += 'к';
            if (temp2 == "0100")
                result += 'л';
            if (temp2 == "11")
                result += 'м';
            if (temp2 == "10")
                result += 'н';
            if (temp2 == "111")
                result += 'о';
            if (temp2 == "0110")
                result += 'п';
            if (temp2 == "010")
                result += 'р';
            if (temp2 == "000")
                result += 'с';
            if (temp2 == "1")
                result += 'т';
            if (temp2 == "001")
                result += 'у';
            if (temp2 == "0010")
                result += 'ф';
            if (temp2 == "0000")
                result += 'х';
            if (temp2 == "1010")
                result += 'ц';
            if (temp2 == "1110")
                result += 'ч';
            if (temp2 == "1111")
                result += 'ш';
            if (temp2 == "1101")
                result += 'щ';
            if (temp2 == "011010")
                result += 'ъ';
            if (temp2 == "1011")
                result += 'ы';
            if (temp2 == "1001")
                result += 'ь';
            if (temp2 == "00100")
                result += 'э';
            if (temp2 == "0011")
                result += 'ю';
            if (temp2 == "0101")
                result += 'я';
            if (temp2 == ".")
                result += '.';
            if (temp2 == ",")
                result += ',';
            if (temp2 == "\"")
                result += '\"';
            if (temp2 == "_")
                result += '_';
            if (temp2 == "-")
                result += '-';
            if (temp2 == "!")
                result += '!';
            if (temp2 == "&")
                result += '&';
            if (temp2 == "@")
                result += '@';
            if (temp2 == "?")
                result += '?';
            if (temp2 == ")")
                result += ')';
            if (temp2 == "(")
                result += '(';
            if (temp2 == "%")
                result += '%';
            if (temp2 == "01111")
                result += '1';
            if (temp2 == "00111")
                result += '2';
            if (temp2 == "00011")
                result += '3';
            if (temp2 == "00001")
                result += '4';
            if (temp2 == "00000")
                result += '5';
            if (temp2 == "10000")
                result += '6';
            if (temp2 == "11000")
                result += '7';
            if (temp2 == "11100")
                result += '8';
            if (temp2 == "11110")
                result += '9';
            if (temp2 == "11111")
                result += '0';
            if (i == str.length() - 1)
                break;
            if (str[i] == ' ' && temp != " ")
            {
                temp = str[i];
                temp2 = "";
                continue;
            }
            if (temp == " " && temp1 == " ")
            {
                result += " ";
                temp2 = "";
                continue;
            }
        }
        temp = str[i];
        if (i == str.length() - 1)
            goto l;
    }
    cout << "\nResult: " << result << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    link:
    cout << "\tMorse code translator\nby Kamishiro Iyamoto\n\n\n\t0 - dot\n\t1 - dash\n\n\n The program supports English and Russian. Enter your language(e/r), but to exit the program, enter q. (To play a sound and scare your non-programmer friend, enter s)\n\n";
    
    char l;
    cin >> l;
    cin.ignore(32767, '\n');
    system("cls");
    
    if (l == 'e')
    {
        cout << "Translate English into Morse code or Morse code into English?(e/m): ";
        cin >> l;
        cin.ignore(32767, '\n');
        if (l == 'e')
        {
            cout << "Enter your text: ";
            string str;
            getline(cin, str);
            eng(str);
        }
        if (l == 'm')
        {
            cout << "Enter your text: ";
            string str;
            getline(cin, str);
            toeng(str);
        }
    }
    if (l == 'r')
    {
        cout << "Перевести с русского на азбуку Морзе(r) или с азбуки Морзе на Русский(m): ";
        cin >> l;
        cin.ignore(32767, '\n');
        if (l == 'r')
        {
            cout << "Введите текст: ";
            string str;
            getline(cin, str);
            rus(str);
        }
        if (l == 'm')
        {
            cout << "Введите текст: ";
            string str;
            getline(cin, str);
            torus(str);
        }
    }
    if (l == 's')
        cout << '\a';
    if (l == 'q')
        return 0;

    system("pause");
    system("cls");
    goto link;
}