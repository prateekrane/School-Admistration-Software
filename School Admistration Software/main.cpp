#include <iostream>
#include <string.h>
#include <Choises.h>
#include <Enter_Data.h>
#include <Read_Data.h>

using namespace std;

void Display()
{
     cout << endl;
     cout << "*********************************" << endl;
     cout << " -SCHOOL ADMISTRSTION SOFTWARE- " << endl;
     cout << "*********************************" << endl
          << endl;
     cout << "A-ADMIN-Panel" << endl;
     cout << " 1.New Principle Entry" << endl;
     cout << " 2.Principle Data" << endl
          << endl;
     cout << "P-PRINCIPLE-Panel" << endl;
     cout << " 1.New Faculty Entry" << endl;
     cout << " 2.Faculty Details" << endl
          << endl;
     cout << "F-FACULTY-Panel" << endl;
     cout << " 1.Entry Student Details" << endl;
     cout << " 2.Show Student Details" << endl;
     cout << " 3.Search Student" << endl
          << endl;
     cout << "S-STUDENT-Panel" << endl;
     cout << " 1.See Result" << endl
          << endl;
     cout << "*********************************" << endl;
}
string Selection_Choice()
{
     string get_choice;
     cout << "Enter the Choice" << endl;
     getline(cin, get_choice);
     return get_choice;
}

int main()
{
     int value;
     Display();
     string str = Selection_Choice();
     value = get_choice(str);
     cout << endl;

     Enter_Data(value);

     Read_Data(value);
}