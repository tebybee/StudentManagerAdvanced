#include "student.h"
#include <string>
#include <vector>
student::student()
{
        firstName = " ";
        lastName = " ";
        score = 0.0;
}
void student::setName(std::string s1, std::string s2)
{   
        firstName = s1;
        lastName = s2;
}
std::string student::fullName()
{
        std::string f;
        f.append(firstName);
        f.append(" ");
        f.append(lastName);
        return f;
}
void student::addGrade(double grade)
{
        grades.push_back(grade);
}
double student::getScore()
{   
        for(int i=0; i< grades.size(); i++)
        {   
                score += grades[i];
        }
        if(grades.size() > 0)
        {
                score = (double) score/(double)grades.size();
        }
        return score;
}

