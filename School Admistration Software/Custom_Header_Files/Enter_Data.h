#include <iostream>
#include <string.h>
#include <fstream>
#include <limits>

using namespace std;
void Enter_Data(int val)
{
    if (val == 1)
    {
        ofstream A_1;
        A_1.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Principle.csv", ios::app);
        int entries;
        cout << "Enter the No.of Entries" << endl;
        cin >> entries;
        for (int i = 0; i < entries; i++)
        {
            int ID;
            string name, pwd;
            if (entries == 1)
            {
                cout << "Enter Principle Data " << "ID Name Password" << endl;
                cin >> ID;
                getline(cin, name);
                getline(cin, pwd);
                A_1 << ID << "," << name << "," << pwd << endl;
            }
            else
            {
                cout << endl
                     << "Enter your " << i + 1 << " entry" << " ID Name Password" << endl;
                cin >> ID;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, name);
                getline(cin, pwd);
                A_1 << ID << "," << name << "," << pwd << endl;
            }
        }
        A_1.close();
        cout << endl
             << "ENTRIES DONE SUCESSFULLY!! " << endl;
    }
    else if (val == 3)
    {
        ofstream F_1;
        F_1.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Faculty.csv", ios::app);
        int entries;
        cout << "Enter the No.of Entries" << endl;
        cin >> entries;
        for (int i = 0; i < entries; i++)
        {
            int ID;
            string name, pwd;
            if (entries == 1)
            {
                cout << "Enter Faculty Data " << "ID Name Password" << endl;
                cin >> ID;
                getline(cin, name);
                getline(cin, pwd);
                F_1 << ID << "," << name << "," << pwd << endl;
            }
            else
            {
                cout << endl
                     << "Enter your " << i + 1 << " entry" << " ID Name Password" << endl;
                cin >> ID;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, name);
                getline(cin, pwd);
                F_1 << ID << "," << name << "," << pwd << endl;
            }
        }
        F_1.close();
        cout << endl
             << "EENTRIES DONE SUCESSFULLY!! " << endl;
    }
    else if (val == 5)
    {
        ofstream S_1;
        S_1.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Student.csv", ios::app);
        int entries;
        cout << "Enter the No.of Entries" << endl;
        cin >> entries;
        for (int i = 0; i < entries; i++)
        {
            int Roll_no, marks, percent;
            string name;
            if (entries == 1)
            {
                cout << "Enter Faculty Data " << "ID Name Password" << endl;
                cin >> Roll_no;
                cin >> marks;
                cin >> percent;
                getline(cin, name);
                S_1 << Roll_no << "," << name << "," << marks << "," << percent << endl;
            }
            else
            {
                cout << endl
                     << "Enter your " << i + 1 << " entry" << " ID Name Password" << endl;
                cin >> Roll_no;
                cin >> marks;
                cin >> percent;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, name);
                S_1 << Roll_no << "," << name << "," << marks << "," << percent << endl;
            }
        }
        S_1.close();
        cout << endl
             << "EENTRIES DONE SUCESSFULLY!! " << endl;
    }
}