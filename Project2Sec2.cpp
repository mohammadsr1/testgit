// Mohammad Safaeirad, 2133075, 20.04.2022
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person
{
    string Fname, Lname;
    int age;
} p1;

struct Address
{
    char Streetname[40], Cityname[30], Pcode[7], Province[20];
} a1;

struct Student
{
    Person p1;
    Address a1;
    int id;
    bool deleted = false;
} s1;

vector<Student> v_students(0);

void AddStudents();

void DisplayStudentsIndex(int index);

void DisplayStudents();

void SearchStudent();

void ModifyStudent();

void DeleteStudent();

int main()
{
    char opt;
    do
    {
        cout << "1- Create and add a student\n";
        cout << "2- Search a student by ID\n";
        cout << "3- Modify the information of the student\n";
        cout << "4- Delete the information of the student\n";
        cout << "5- Display students in ascending order\n";
        cout << "6- Exit\n";
        cout << "Select a option: ";
        cin >> opt;
        cin.ignore();
        switch (opt)
        {
        case '1':
            AddStudents();
            break;
        case '2':
            SearchStudent();
            break;
        case '3':
            ModifyStudent();
            break;
        case '4':
            DeleteStudent();
            break;
        case '5':
            DisplayStudents();
            break;
        case '6':
            cout << "Thanks for using this application. BYE!";
            break;

        default:
            cout << "Invalid option try again\n";
            break;
        }
    } while (opt != '6');

    return 0;
}

void AddStudents()
{
    int count = 0;
    char ans;
    while (true)
    {
        cout << "Enter student's first name: ";
        getline(cin, s1.p1.Fname);
        cout << "Enter student's last name: ";
        getline(cin, s1.p1.Lname);
        cout << "Enter student's the age: ";
        cin >> s1.p1.age;
        cin.ignore();
        cout << "Enter student's address: ";
        cin.getline(s1.a1.Streetname, 40 + 1);
        cout << "Enter the city name: ";
        cin.getline(s1.a1.Cityname, 30 + 1);
        cout << "Enter the postal code: ";
        cin.getline(s1.a1.Pcode, 7 + 1);
        cout << "Enter the Province/State: ";
        cin.getline(s1.a1.Province, 20 + 1);
        cout << "The student ID is: " << count + 2133075 << endl;
        v_students.push_back(s1);
        cout << "=========================\n";
        cout << "If you want to add new student enter any charachter\nIf you want to go back to MENU enter 0: " << endl;
        cin >> ans;
        cin.ignore();
        if (ans == '0')
        {
            break;
        }
        count++;
    }
}

void DisplayStudentsIndex(int index)
{
    Student print = v_students.at(index);
    if (print.deleted)
    {
        return;
    }
    else
    {
        cout << "Student first name: " << v_students[index].p1.Fname << endl;
        cout << "Student last name: " << v_students[index].p1.Lname << endl;
        cout << "Student age: " << v_students[index].p1.age << endl;
        cout << "Student ID: " << index + 2133075 << endl; // Generating ID by ourselve and give it to the user
        cout << "Student address: " << v_students[index].a1.Streetname << endl;
        cout << "Student city name: " << v_students[index].a1.Cityname << endl;
        cout << "Student postal code: " << v_students[index].a1.Pcode << endl;
        cout << "Student province/state: " << v_students[index].a1.Province << endl;
        cout << "********************************************\n";
    }
}

void DisplayStudents()
{
    for (int i = 0; i < v_students.size(); i++)
    {
        DisplayStudentsIndex(i);
    }
}

void SearchStudent()
{
    int index;
    cout << "Enter student ID that you want to search: ";
    cin >> index;
    index = index - 2133075;
    if (index < 0 || index > v_students.size())
    {
        cout << "Invalid ID, Try again!" << endl;
    }
    else
    {
        DisplayStudentsIndex(index);
    }
}

void ModifyStudent()
{
    int index;
    cout << "Enter The student ID that you want to change: ";
    cin >> index;
    cin.ignore();
    index = index - 2133075;
    if (index < 0 || index > v_students.size())
    {
        cout << "Invalid ID, Try again!" << endl;
    }
    else
    {
        DisplayStudentsIndex(index);
        Student newStudent = v_students[index];
        cout << "Enter student's new first name: ";
        getline(cin, newStudent.p1.Fname);
        cout << "Enter student's new last name: ";
        getline(cin, newStudent.p1.Lname);
        cout << "Enter student's new age: ";
        cin >> newStudent.p1.age;
        cin.ignore();
        cout << "Enter student's new address: ";
        cin.getline(newStudent.a1.Streetname, 40 + 1);
        cout << "Enter new city name: ";
        cin.getline(newStudent.a1.Cityname, 30 + 1);
        cout << "Enter new postal code: ";
        cin.getline(newStudent.a1.Pcode, 7 + 1);
        cout << "Enter new Province/State: ";
        cin.getline(newStudent.a1.Province, 20 + 1);
        v_students.at(index) = newStudent;
        cout << "\n\nUPDATED!\n\n";
    }
}

void DeleteStudent()
{
    char opt;
    do
    {
        int index;
        cout << "Enter the ID that you want to delete: ";
        cin >> index;
        index = index - 2133075;
        if (index < 0 || index > v_students.size())
        {
            cout << "Invalid ID, Try again!" << endl;
        }
        else
        {
            DisplayStudentsIndex(index);
            cout << "Enter 0 to delete this student: ";
            cin >> opt;
            cout << "\n********************************************\n";
            cin.ignore();
            Student remove = v_students.at(index);
            if (remove.deleted)
            {
                cout << "The student is already deleted" << endl;
                break;
            }
            else
            {
                remove.deleted = true;
                v_students.at(index) = remove;
                cout << "DELETED!\n";
            }
        }
    } while (opt != '0');
}