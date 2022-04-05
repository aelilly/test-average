// testAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int getScore(string);
double calcAverage(int, int, int, int);
int findLowest(int, int, int, int);

int main()
{
    int score1, score2, score3, score4;

    score1 = getScore("Input first test score: ");
    score2 = getScore("Input second test score: ");
    score3 = getScore("Input third test score: ");
    score4 = getScore("Input fourth test score: ");

    cout << "Average test score: " << setprecision(1) << fixed;
    cout << calcAverage(score1, score2, score3, score4) << "%";

}

int getScore(string prompt) {
    int score;
    do {
        cout << prompt;
        cin >> score;
        if (score < 0 || score > 100)
            cout << "Invalid Score" << endl;
    } while (score < 0 || score > 100);
    return score;
}

double calcAverage(int score1, int score2, int score3, int score4) {
    double lowest = findLowest(score1, score2, score3, score4);
    return (((0.0 + score1 + score2 + score3 + score4) - lowest) / 3);
}

int findLowest(int score1, int score2, int score3, int score4) {
    int counter{};
    while (counter < score1 && counter < score2 && counter < score3 && counter < score4) {
        counter++;
    }
    return counter;
}

/*
Input first test score: -20
Invalid Score
Input first test score: 100
Input second test score: 80
Input third test score: 95
Input fourth test score: 75
Average test score: 91.7%
*/
