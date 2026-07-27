#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream inFile("students.txt");
    if (!inFile)
    {
        cout << "File not found!" << endl;
        return 1;
    }
    int roll, count = 0;
    string name;
    float marks;
    cout << left << setw(10) << "Roll" << setw(15) << "Name"<< setw(10) << "Marks" << endl;
    cout << "-----------------------------------" << endl;
    while (inFile >> roll >> name >> marks)
    {
        cout << left << setw(10) << roll<< setw(15) << name << setw(10) << marks << endl;
        count++;
    }
    inFile.close();
    cout << "\nTotal Records = " << count << endl;
    return 0;
}
