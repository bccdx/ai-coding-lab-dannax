#include "GradeBook.h"

GradeBook::GradeBook()
    : highestGrade(0.0) {
    // Empty - all members initialized above
}

void GradeBook::addGrade(const std::string& assignment, double score) {
    // Validate score (clamp between 0 and 100)
    if (score < 0) {
        score = 0;
    }
    if (score > 100) {
        score = 100;
    }

    // Add to vectors
    assignments.push_back(assignment);
    grades.push_back(score);

    // Update highest grade
    if (grades.size() == 1 || score > highestGrade) {
        highestGrade = score;
    }
}

double GradeBook::getAverage() const {
    if (grades.empty()) {
        return 0.0;
    }

    double sum = 0.0;
    for (double grade : grades) {
        sum += grade;
    }
    return sum / grades.size();
}

double GradeBook::getHighest() const {
    if (grades.empty()) {
        return 0.0;
    }
    return highestGrade;
}

int GradeBook::numGrades() const {
    return static_cast<int>(grades.size());
}