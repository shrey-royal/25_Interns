#include <iostream>
using namespace std;

class GradingSystem {
public:
    char calculateGrade(int score) {
        if (score >= 90) return 'A';
        else if (score >= 80) return 'B';
        else if (score >= 70) return 'C';
        else if (score >= 60) return 'D';
        else return 'F';
    }

    char calculateGrade(int score1, int score2, int score3) {
        int average = (score1 + score2 + score3) / 3;
        return calculateGrade(average);
    }

    char calculateGrade(float gpa) {
        if (gpa >= 4.0) return 'A';
        else if (gpa >= 3.0) return 'B';
        else if (gpa >= 2.0) return 'C';
        else if (gpa >= 1.0) return 'D';
        else return 'F';
    }
};

int main() {
    GradingSystem gs;

    cout << "Grade from single score (85): " << gs.calculateGrade(85) << endl;
    cout << "Grade from three scores (80, 90, 85): " << gs.calculateGrade(80, 90, 85) << endl;
    cout << "Grade from GPA (3.7): " << gs.calculateGrade(3.7f) << endl;

    return 0;
}