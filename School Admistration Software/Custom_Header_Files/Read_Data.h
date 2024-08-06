#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>
#include <fstream>
#include <limits>
#include <conio.h>

using namespace std;

void Read_Data(int val)
{
    if (val == 2)
    {
        ifstream A_2;
        A_2.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Principle.csv");
        if (!A_2)
        {
            cerr << "Error opening file for reading!" << endl;
        }

        // User input storing variable
        int user_ID, choice;
        string pass = "";

        cout << "1.FULL DATA DISPLAY" << endl;
        cout << "2.SPECIFIC DATA DISPLAY" << endl;
        cout << endl
             << "Enter Choice " << endl;
        cin >> choice;
        if (choice == 1)
        {
            string line, ID, name;
            while (getline(A_2, line))
            {
                stringstream ss(line);
                getline(ss, ID, ',');
                getline(ss, name, ',');
                cout << ID << " " << name << '\n';
            }
        }
        else
        {
            string line, ID, name, password;
            char ch;
            cout << "Enter Principle ID :";
            cin >> user_ID;
            cout << "Enter Password : ";
            ch = _getch();
            while (ch != 13)
            {
                pass.push_back(ch);
                cout << '*';
                ch = _getch();
            }

            while (getline(A_2, line))
            {
                stringstream ss(line);
                getline(ss, ID, ',');
                getline(ss, name, ',');
                getline(ss, password, ',');

                if (to_string(user_ID) == ID && password == pass)
                {
                    cout << "\n\n";
                    cout << ID << " " << name << '\n';
                }
            }
        }
    }
    else if (val == 4)
    {

        ifstream P_2;
        P_2.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Faculty.csv");
        if (!P_2)
        {
            cerr << "Error opening file for reading!" << endl;
        }

        // User input storing variable
        int user_ID, choice;
        string pass = "";

        cout << "1.FULL DATA DISPLAY" << endl;
        cout << "2.SPECIFIC DATA DISPLAY" << endl;
        cout << endl
             << "Enter Choice " << endl;
        cin >> choice;
        if (choice == 1)
        {
            string line, ID, name;
            while (getline(P_2, line))
            {
                stringstream ss(line);
                getline(ss, ID, ',');
                getline(ss, name, ',');
                cout << ID << " " << name << '\n';
            }
        }
        else
        {
            string line, ID, name, password;
            char ch;
            cout << "Enter Faculty ID :";
            cin >> user_ID;
            cout << "Enter Password : ";
            ch = _getch();
            while (ch != 13)
            {
                pass.push_back(ch);
                cout << '*';
                ch = _getch();
            }

            while (getline(P_2, line))
            {
                stringstream ss(line);
                getline(ss, ID, ',');
                getline(ss, name, ',');
                getline(ss, password, ',');

                if (to_string(user_ID) == ID && password == pass)
                {
                    cout << "\n\n";
                    cout << ID << " " << name << '\n';
                }
            }
        }
    }
    else if (val == 6)
    {
        ifstream F_2;
        F_2.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Student.csv");
        if (!F_2)
        {
            cerr << "Error opening file for reading!" << endl;
        }

        string line, roll_no, name, marks, percent;
        while (getline(F_2, line))
        {
            stringstream ss(line);
            getline(ss, roll_no, ',');
            getline(ss, name, ',');
            getline(ss, marks, ',');
            getline(ss, percent, ',');

            cout << roll_no << " " << name << " " << marks << " " << percent << '\n';
        }
    }
    else if (val == 7)
    {

        string roll_no, name, marks, percent;
        ifstream P_2;
        P_2.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Student.csv");
        if (!P_2)
        {
            cerr << "Error opening file for reading!" << endl;
        }
        string line, std_number, std_name;
        cout << "Enter Student Roll_NO : ";
        cin >> std_number;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Student name : ";

        getline(cin, std_name);

        while (getline(P_2, line))
        {
            stringstream ss(line);
            getline(ss, roll_no, ',');
            getline(ss, name, ',');
            getline(ss, marks, ',');
            getline(ss, percent, ',');

            if (std_number == roll_no && std_name == name)
            {
                cout << "\n\n";
                cout << roll_no << " " << name << " " << marks << " " << percent << '\n';
            }
        }
    }
    else if (val == 8)
    {

        string roll_no, name, marks, percent;
        ifstream S_2;
        S_2.open("C:\\Users\\Prateek\\School Admistration Software\\DB_FILES\\Student.csv");
        if (!S_2)
        {
            cerr << "Error opening file for reading!" << endl;
        }
        string line, std_number, std_name;
        cout << "Enter Roll_NO : ";
        cin >> std_number;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Your Name : ";

        getline(cin, std_name);

        while (getline(S_2, line))
        {
            stringstream ss(line);
            getline(ss, roll_no, ',');
            getline(ss, name, ',');
            getline(ss, marks, ',');
            getline(ss, percent, ',');

            if (std_number == roll_no && std_name == name)
            {
                cout << "\n\n";
                cout << roll_no << " " << name << " " << marks << " " << percent << '\n';
            }
        }
    }
}