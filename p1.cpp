#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream outFile("students.txt");
    if (!outFile)
    {
        cout << "Error creating file!" << endl;
        return 1;
    }
    int roll;
    string name;
    float marks;
    cout << "Enter details of 5 students:\n";
    for (int i = 1; i <= 5; i++)
    {
        cout << "\nStudent " << i << endl;
        cout << "Roll No: ";
        cin >> roll;
        cout << "Name: ";
        cin >> name;
        cout << "Marks: ";
        cin >> marks;
        outFile << roll << " " << name << " " << marks << endl;
    }
    outFile.close();
    cout << "\nRecords saved successfully!" << endl;
    return 0;
}
