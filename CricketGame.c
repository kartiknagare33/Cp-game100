#include <stdio.h>

struct Score {
    int runs;
    int wickets;
    float overs;
};

void displayScore(struct Score score) {
    printf("Score: %d/%d\n", score.runs, score.wickets);
    printf("Overs: %.1f\n", score.overs);
}

int main() {
    struct Score teamScore = {0, 0, 0.0};
    int userRuns, userWickets;
    float userOvers;
    
    printf("Welcome to the Cricket Score Board!\n");
    
    while (1) {
        printf("Enter runs scored in this over: ");
        scanf("%d", &userRuns);
        printf("Enter wickets fallen in this over: ");
        scanf("%d", &userWickets);
        printf("Enter overs bowled in this over: ");
        scanf("%f", &userOvers);
        
        teamScore.runs += userRuns;
        teamScore.wickets += userWickets;
        teamScore.overs += userOvers;
        
        displayScore(teamScore);
        
        printf("Do you want to continue (1/0)? ");
        int continueGame;
        scanf("%d", &continueGame);
        
        if (!continueGame) {
            printf("Game over!\n");
            break;
        }
    }
    
    return 0;
}
