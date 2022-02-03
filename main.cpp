//
//  main.cpp
//  Chapter2Project_Loop
//
//  Created by Geoffrey Matis on 1/30/22.
//

#include <iostream>
using namespace std;

int main() {
    
    double numberOfExercises, numberOfExercisesDisplay, score, total, scoreSum = 0, totalSum = 0, avgScore; // Declaring variables for the program and initializing scoreSum and totalSum so that they can be used to add the scores with each iteration.
    
    cout << "Enter the number of exercises to input: " << endl; // user input - total exercises
    cin >> numberOfExercises; // initializing the variable with the user input
    numberOfExercisesDisplay = (numberOfExercises - numberOfExercises) + 1; // initializing a variable using a calculation to dynamically display the current exercise number with each iteration

    while (numberOfExercises > 0)
    {
        cout << "Enter the score received for Exercise " << numberOfExercisesDisplay << ": "; // User input - actual score for the current exercise.
        cin >> score; // initializing the variable with the current input
        scoreSum += score; // initializing the variable with sum of the actual scores on each iteration
        cout << "Enter the total points possible for Exercise " << numberOfExercisesDisplay << ": "; // User input - the total score possible for current input
        cin >> total; // initializing the variable with the current user input
        totalSum += total; // initializing the variable with the total score sum on each iteration
        numberOfExercises--; // 1 is subtracted from the total number of exercises with each iteration so the loop will eventually break
        numberOfExercisesDisplay++; // Adding 1 to the exercise display with each iteration
    }
    // Magic formula to format percentage with two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    avgScore = (scoreSum / totalSum) * 100; // initializing variable by calculating the averaage of all the actual scores
    
    cout << "Your total is " << scoreSum << " out of " << totalSum << ", or " << avgScore << "%" << endl; // outputting the results.
    
    return 0;
        
}
