#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <limits>
#include <conio.h>

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
        int count = 0;
        string line, ID, password, Principle_ID, name, pass = "";
        char ch;
        cout << "Enter Principle ID :";
        cin >> Principle_ID;
        cout << "Enter Your Password : ";
        ch = _getch();
        while (ch != 13)
        {
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        ifstream Ev_1;
        Ev_1.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Principle.csv");

        while (getline(Ev_1, line))
        {
            stringstream ss(line);
            getline(ss, ID, ',');
            getline(ss, name, ',');
            getline(ss, password, ',');

            if (Principle_ID == ID && pass == password)
            {
                count++;
            }
        }
        Ev_1.close();
        cout << "\n"
             << endl;
        if (count == 1)
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
    }
    else if (val == 5)
    {

        int count = 0;
        string line, ID, password, Faculty_ID, name, pass = "";
        char ch;
        cout << "Enter Faculty ID :";
        cin >> Faculty_ID;
        cout << "Enter Your Password : ";
        ch = _getch();
        while (ch != 13)
        {
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        ifstream Ev_2;
        Ev_2.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Faculty.csv");

        while (getline(Ev_2, line))
        {
            stringstream ss(line);
            getline(ss, ID, ',');
            getline(ss, name, ',');
            getline(ss, password, ',');

            if (Faculty_ID == ID && pass == password)
            {
                count++;
            }
        }
        Ev_2.close();
        cout << "\n"
             << endl;
        if (count == 1)
        {
            ofstream S_1;
            S_1.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Student.csv");
            int entries;
            cout << "Enter the No.of Entries" << endl;
            cin >> entries;
            for (int i = 0; i < entries; i++)
            {
                int Roll_no, marks, percent;
                string name;
                if (entries == 1)
                {
                    cout << "Enter Student Data " << "Roll_Number Student_Name Student_Marks Student_Percentage" << endl;
                    cin >> Roll_no;
                    cin >> marks;
                    cin >> percent;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, name);
                    S_1 << Roll_no << "," << name << "," << marks << "," << percent << endl;
                }
                else
                {
                    cout << endl
                         << "Enter your " << i + 1 << " entry" << " Roll_Number Student_Name Student_Marks Student_Percentage" << endl;
                    cin >> Roll_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, name);
                    cin >> marks;
                    cin >> percent;

                    S_1 << Roll_no << "," << name << "," << marks << "," << percent << endl;
                }
            }
            S_1.close();
            cout << endl
                 << "ENTRIES DONE SUCESSFULLY!! " << endl;
        }
    }
}