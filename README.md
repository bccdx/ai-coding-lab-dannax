# Lab: Stub-Driven Development

A short exercise to practice the workflow from this lecture. You'll turn it in as a single GitHub repository.

## Setup

1. Create a new public GitHub repository named `ai-coding-lab-<your-name>` (e.g., `ai-coding-lab-jchen`).
2. Open it in a Codespace, or clone it locally — whichever you prefer.

## Getting Started

You'll build a small `GradeBook` class using the header and stubs to get started and ensure you own the design.

### Starter header

Copy this header into `GradeBook.h`:

```cpp
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
    // You decide what goes here.
};
```

## Steps (commit at each step)

1. **Decide your private members.** Edit `GradeBook.h` to declare the members you'll need. Commit with a message like *"Add private members to GradeBook header."*

2. **Create stubs.** Create `GradeBook.cpp` with stub bodies for every function — each one should compile and return a sensible default. The project must build. Commit.

3. **Use "Plan" mode** to ask the AI for an implementation plan for each function. Review, then change to Agent mode and ask it to implement.

4. **Get the AI agent** to create some test data for you and write some simple tests that you can visually check in the `main` function (you do **NOT** need to use ctest). You're just looking for terminal output that lets you see that the functions are working correctly. Feel free to use Agent mode for this entire step.

## Submission

- Make sure your repo is **public** (or shared with the instructor) on GitHub.
- Submit the **URL** of your repository.
