#include <bits/stdc++.h>
using namespace std;

class CollegeCourse
{
    // your code here
private:
    string courseID;
    int gp;
    char grade;
    int credits;

public:
    void set_CourseId(string courseID)
    {
        this->courseID = courseID;
    }

    void set_Grade(char grade)
    {
        this->grade = grade;
    }

    void set_Credit(int credits)
    {
        this->credits = credits;
    }

    int calculateGradePoints(char grade)
    {
        grade = toupper(grade);
        switch (grade)
        {
        case 'A':
            gp = 10;
            break;
        case 'B':
            gp = 9;
            break;
        case 'C':
            gp = 8;
            break;
        case 'D':
            gp = 7;
            break;
        case 'E':
            gp = 6;
            break;
        case 'F':
            gp = 5;
            break;
        }
        return gp;
    }

    int calculateHonorPoints(int gp, int credits)
    {
        return gp * credits;
    }

    void display()
    {
        cout << calculateGradePoints(grade) << " " << calculateHonorPoints(gp, credits) << endl;
    }
};

int main()
{
    int t;
    while (t--)
    {
        CollegeCourse cc;
        string courseId;
        int gp;
        char grade;
        int credits;
        cin >> courseId >> grade >> credits;
        cc.set_CourseId(courseId);
        cc.set_Grade(grade);
        cc.set_Credit(credits);
        gp = cc.calculateGradePoints(grade);
        cc.calculateHonorPoints(gp, credits);
        cc.display();
    }
    return 0;
}