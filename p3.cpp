#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("students.txt");
    ofstream temp("temp.txt");
    int searchRoll, roll;
    string name;
    float marks, newMarks;
    bool found=false;
    cout<<"Enter Roll No to Update: ";
    cin>>searchRoll;
    cout<<"Enter New Marks: ";
    cin>>newMarks;
    while(file>>roll>>name>>marks)
    {
        if(roll==searchRoll)
        {
            marks=newMarks;
            found=true;
        }
        temp<<roll<<" "<<name<<" "<<marks<<endl;
    }
    file.close();
    temp.close();
    remove("students.txt");
    rename("temp.txt","students.txt");
    if(found)
        cout<<"Record Updated Successfully.";
    else
        cout<<"Roll No Not Found.";
    return 0;
}
