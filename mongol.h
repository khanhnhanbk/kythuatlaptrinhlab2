//
// Created by Nhan Nguyen on 01/03/2021.
//
#ifndef MONGOL_H
#define MONGOL_H

// The library here is concretely set, students are not allowed to include any other libraries.

string readyForBattle(const string ID[], const int NID, const string input1[], const int N1);
int decode(const string A, const string B);
string findRoute(const string ID[], const int NID, const string input3[]);
string decodeVfunction(const string A, const string B);
string findBetrayals(const string input5[], const int N5);
int attack(const string input6[]);
int calculateNoOfWaitingDays(const string input7Str, const string input7Matrix, const int N7);

////////////////////////////////////////////////////////////////////////////
/// STUDENT'S ANSWER HERE
////////////////////////////////////////////////////////////////////////////

string readyForBattle(const string ID[], const int NID, const string input1[], const int N1)
{
    string *decodeInput1;
    decodeInput1 = new string[N1];
    for (int i = 0; i < N1; i++)
    {
        // cout << i << ". " << input1[i] << '\n';
        decodeInput1[i] = "";

        for (int j = 0; j < (int)input1[i].length() - 1; j += 2)
        {
            // cout << j;
            if (input1[i][j] == ' ')
            {
                decodeInput1[i] += ' ';
                j++;
            }
            if (input1[i][j] == '0')
            {
                if (input1[i][j + 1] == '0')
                    decodeInput1[i] += '0';
                else
                    decodeInput1[i] += '1';
            }
            else if (input1[i][j + 1] == '0')
                decodeInput1[i] += '2';
            else
                decodeInput1[i] += '3';
        }
        cout << decodeInput1[i] << "\n ";
    }
    delete[] decodeInput1;
    string So0{"EFGHIJK"};
    string So1{"LMNOPQR"};
    string So2{"#TUVWXY"};
    string So3{"@ASZBCD"};
    cout << "\n------------------\n";
    for (int i = 0; i < N1; i++)
    {
        int j = 0;
        while (j < decodeInput1[i].length())
        {
            cout << "\n------------------\n";
            cout << decodeInput1[i] << '\n';
            if (decodeInput1[i][j] == ' ')
                j++;
            else
            {
                int count = j;
                while (j < decodeInput1[i].length() - 1 && decodeInput1[i][j] == decodeInput1[i][j + 1])
                    j++;
                count = j - count;
                cout << count << '\n';
                j++;
            }
        }
    }

    return "You can remove this return";
}
int decode(const string A, const string B)
{
    return -1;
}
string findRoute(const string ID[], const int NID, const string input3[])
{
    return "You can remove this return";
}
string decodeVfunction(const string A, const string B)
{
    return "You can remove this return";
}
string findBetrayals(const string input5[], const int N5)
{
    return "You can remove this return";
}
int attack(const string input6[])
{
    return -1;
}
int calculateNoOfWaitingDays(const string input7Str, const string input7Matrix, const int N7)
{
    return -1;
}

#endif /* MONGOL_H */
