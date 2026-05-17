#include "GradeBook.h"
#include <iostream>
#include <string>

int testsPassed = 0;
int testsFailed = 0;

void test(bool condition, const std::string& testName) {
    if (condition) {
        std::cout << "  Success! " << testName << std::endl;
        testsPassed++;
    } else {
        std::cout << "  Fail! " << testName << std::endl;
        testsFailed++;
    }
}

int main() {
    std::cout << "\n=== GradeBook Test Suite ===" << std::endl;
    std::cout << std::endl;

    GradeBook book;

    // Test 1: Empty state
    test(book.numGrades() == 0, "Empty GradeBook has 0 grades");
    test(book.getAverage() == 0.0, "Empty GradeBook average returns 0");
    test(book.getHighest() == 0.0, "Empty GradeBook highest returns 0");

    // Test 2: Single grade
    book.addGrade("Exam 1", 85.0);
    test(book.numGrades() == 1, "Single grade increases count to 1");
    test(book.getAverage() == 85.0, "Single grade average is correct");
    test(book.getHighest() == 85.0, "Single grade highest is correct");

    // Test 3: Multiple grades
    book.addGrade("Exam 2", 95.0);
    book.addGrade("Exam 3", 75.0);
    test(book.numGrades() == 3, "Multiple grades count is correct");
    test(book.getAverage() == 85.0, "Multiple grades average is correct");
    test(book.getHighest() == 95.0, "Multiple grades highest is correct");

    // Test 4: Score clamping
    GradeBook clampTest;
    clampTest.addGrade("Too High", 150.0);
    clampTest.addGrade("Too Low", -50.0);
    test(clampTest.getHighest() == 100.0, "High score clamped to 100");
    test(clampTest.getAverage() == 50.0, "Low score clamped to 0");

    // Test 5: Edge cases
    GradeBook edgeTest;
    edgeTest.addGrade("Perfect", 100.0);
    edgeTest.addGrade("Zero", 0.0);
    test(edgeTest.getHighest() == 100.0, "Perfect score of 100 is highest");
    test(edgeTest.getAverage() == 50.0, "Average of 100 and 0 is 50");

    // Summary
    std::cout << std::endl;
    std::cout << "=== Results: " << testsPassed << " passed, "
              << testsFailed << " failed ===" << std::endl;
    std::cout << std::endl;

    return (testsFailed > 0) ? 1 : 0;
}