#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Function to convert string to an integer choice
int string_to_choice(const string &str)
{
    static unordered_map<string, int> choice_map = {
        {"A-1", 1},
        {"A-2", 2},
        {"P-1", 3},
        {"P-2", 4},
        {"F-1", 5},
        {"F-2", 6},
        {"F-3", 7},
        {"S-1", 8}};

    auto it = choice_map.find(str);
    return (it != choice_map.end()) ? it->second : 0; // Return 0 for invalid choices
}

int get_choice(const string &str)
{
    int choice = string_to_choice(str);

    switch (choice)
    {
    case 1:
        cout << endl
             << "Panel Name- ADMIN" << endl;
        cout << "A-1 New Principle Entry" << endl;
        break;
    case 2:
        cout << endl
             << "Panel Name- ADMIN" << endl;
        cout << "A-2 Principle Data" << endl;
        break;
    case 3:
        cout << endl
             << "Panel Name- PRINCIPLE" << endl;
        cout << "P-1 New Faculty Entry" << endl;
        break;
    case 4:
        cout << endl
             << "Panel Name- PRINCIPLE" << endl;
        cout << "P-2 Faculty Details" << endl;
        break;
    case 5:
        cout << endl
             << "Panel Name- FACULTY" << endl;
        cout << "F-1 Entry Student Details" << endl;
        break;
    case 6:
        cout << endl
             << "Panel Name- FACULTY" << endl;
        cout << "F-2 Show Student Details" << endl;
        break;
    case 7:
        cout << endl
             << "Panel Name- FACULTY" << endl;
        cout << "F-3 Search Students" << endl;
        break;
    case 8:
        cout << endl
             << "Panel Name- STUDENT" << endl;
        cout << "S-1 Student Result" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        return -1; // Indicates an invalid choice
    }

    return choice;
}
