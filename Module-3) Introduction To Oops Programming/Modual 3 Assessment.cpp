#include <iostream>
#include <string>
using namespace std;

class Lecture 
{
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLecturers;

public:
    void addLecture(string lecturerName, string subjectName, string courseName, int numberOfLecturers) 
	{
        this->lecturerName = lecturerName;
        this->subjectName = subjectName;
        this->courseName = courseName;
        this->numberOfLecturers = numberOfLecturers;
    }

    void getinfo(int num) 
	{
        cout << "---------------------------------\n";
        cout << "\nYOUR | " << num << " | lecturer details" << endl;
        cout << "Lecturer Name   : " << lecturerName << endl;
        cout << "Subject Name    : " << subjectName << endl;
        cout << "Course Name     : " << courseName << endl;
        cout << "No. of Lectures : " << numberOfLecturers << endl;
        cout << "---------------------------------\n";
    }
};

int main() 
{
	int num;
	cout<<"HOW MANY LECTURER DETAILES YOU WANTT :"<<endl;
	cin>>num;
    Lecture lecc[num];

    cout << "Enter details of " << num << " lecturers:\n";
    for (int i = 0; i < num; i++) 
	{
        string lec;
		string sub;
		string cou;
        int nolec;

        cout << "\nEnter details for Lecturer " << (i + 1) << ":\n";
        cout << "Lecturer Name   : ";
        cin >> lec;
        cout << "Subject Name    : ";
        cin >> sub;
        cout << "Course Name     : ";
        cin >> cou;
        cout << "No. of Lectures : ";
        cin >> nolec;

        lecc[i].addLecture(lec,sub,cou,nolec);
    }

    
    cout << "\n========= LECTURER DETAILS =========\n";
    for (int i = 0; i < num; i++) 
	{
        lecc[i].getinfo(i + 1);
    }

    return 0;
}

