#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main()
{
    ifstream inFile("students.txt");
    ofstream tempFile("temp.txt");
    if (!inFile || !tempFile)
    {
        cout << "Error opening files!" << endl;
        return 1;
    }
    int roll, deleteRoll;
    string name;
    float marks;
    bool found = false;
    cout << "Enter Roll No to delete: ";
    cin >> deleteRoll;
    while (inFile >> roll >> name >> marks)
    {
        if (roll == deleteRoll)
        {
            found = true;
            continue;
        }
        tempFile << roll << " " << name << " "<< marks << endl;
    }
    inFile.close();
    tempFile.close();
    remove("students.txt");
    rename("temp.txt", "students.txt");
    if (found)
        cout << "Record Deleted Successfully." << endl;
    else
        cout << "Roll No not found." << endl;
    return 0;
}
