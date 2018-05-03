#ifndef _STUDENT_H_
#define _STDENT_H_
#include <string>
#include <vector>
class student
{
private:
std::string firstName;
std::string lastName;
std::vector<double> grades;
double score;
double grade;
public:
student();
void setName(std::string, std::string);
std::string fullName();
void addGrade(double);
double getScore();
};
#endif

