#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string names[n];
    float marks[n][3];
    float total[n];
    float average[n];
    char grade[n];
    int gradeCount[5] = {0}; // A, B, C, D, F
    float maxAvg = 0;

    // Input data
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> names[i];

        total[i] = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> marks[i][j];
            total[i] += marks[i][j];
        }

        average[i] = total[i] / 3;

        // Determine grade
        if (average[i] >= 90) grade[i] = 'A';
        else if (average[i] >= 75) grade[i] = 'B';
        else if (average[i] >= 60) grade[i] = 'C';
        else if (average[i] >= 50) grade[i] = 'D';
        else grade[i] = 'F';

        // Count grades
        if (grade[i] == 'A') gradeCount[0]++;
        else if (grade[i] == 'B') gradeCount[1]++;
        else if (grade[i] == 'C') gradeCount[2]++;
        else if (grade[i] == 'D') gradeCount[3]++;
        else gradeCount[4]++;

        // Track top average
        if (average[i] > maxAvg) maxAvg = average[i];
    }

    // Display table
    cout << "\nStudent Gradebook:\n";
    cout << "Name\tTotal\tAverage\tGrade\n";

    for (int i = 0; i < n; i++) {
        cout << names[i] << "\t" << total[i] << "\t" << average[i] << "\t" << grade[i];
        if (average[i] == maxAvg) cout << " <-- Top Performer";
        cout << endl;
    }

    // Display summary
    cout << "\nGrade Summary:\n";
    cout << "A: " << gradeCount[0] << endl;
    cout << "B: " << gradeCount[1] << endl;
    cout << "C: " << gradeCount[2] << endl;
    cout << "D: " << gradeCount[3] << endl;
    cout << "F: " << gradeCount[4] << endl;

    return 0;
}