#pragma once
#include <string>
#include <vector>

class GradeBook {
public:
    GradeBook();
    void addGrade(const std::string& assignment, double score);
    double getAverage() const;
    double getHighest() const;
    int numGrades() const;
private:
    std::vector<double> grades;
    double highestGrade;
    std::vector<std::string> assignments;
};
