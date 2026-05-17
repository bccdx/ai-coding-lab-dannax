#pragma once
#include <string>

class GradeBook {
public:
    GradeBook();
    void addGrade(const std::string& assignment, double score);
    double getAverage() const;
    double getHighest() const;
    int numGrades() const;
private:
    double* grades;
    double highestGrade;
    std::string* assignments;
};