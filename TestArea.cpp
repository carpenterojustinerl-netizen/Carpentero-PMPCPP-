/*#include <iostream>
using namespace std;

int main() {

    int n, ctr;
    float score[100], maxScore, minScore;

    cout << "How many scores? : ";
    cin >> n;

    for (ctr = 0; ctr < n; ctr++) {
        cout << "Enter score " << ctr + 1 << ": ";
        cin >> score[ctr];
    }

    maxScore = score[0];
    minScore = score[0];

    for (ctr = 1; ctr < n; ctr++) {
        if (score[ctr] > maxScore)
            maxScore = score[ctr];
        if (score[ctr] < minScore)
            minScore = score[ctr];
    }

    cout << "Maximum score: " << maxScore << endl;
    cout << "Minimum score: " << minScore << endl;
    return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {

    int n, i, j;
    string name[100], temp;

    cout << "How many students? : ";
    cin >> n;
    cin.ignore();

    for (i = 0; i < n; i++) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, name[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (name[j] > name[j + 1]) {// out of order? swap
                temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (i = 0; i < n; i++)
        cout << name[i] << endl;
    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    int i;
    float height[10], sum = 0, average;

    for (i = 0; i < 10; i++) {
        cout << "Enter height of student " << i + 1 << ": ";
        cin >> height[i];
        sum = sum + height[i];
    }

    average = sum / 10;
    cout << "Average height: " << average << endl;

    cout << "Students taller than average:\n";
    for (i = 0; i < 10; i++) {
        if (height[i] > average)
            cout << height[i] << endl;
    }
    return 0;
}