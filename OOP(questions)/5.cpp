// An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate
// number on the ballot paper. Write a C++ program to read the ballots and count the votes cast for each candidate using an array. In
// case, a number read is outside the range 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the program should also count
// the number of spoilt ballots.



#include <iostream>
using namespace std;

int main() {
    int votes[5] = {0}; // Array to store votes for candidates 1 to 5
    int spoiltBallots = 0, vote, totalVoters;

    cout << "Enter the number of voters: ";
    cin >> totalVoters;

    cout << "Enter the votes (1-5 for candidates, any other number for spoilt ballot):\n";
    for (int i = 0; i < totalVoters; i++) {
        cin >> vote;
        if (vote >= 1 && vote <= 5)
            votes[vote - 1]++; // Increment count for the respective candidate
        else
            spoiltBallots++;   // Count spoilt ballots
    }

    // Display the results
    cout << "\nElection Results:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Candidate " << (i + 1) << ": " << votes[i] << " votes\n";
    }
    cout << "Spoilt Ballots: " << spoiltBallots << endl;

    return 0;
}
