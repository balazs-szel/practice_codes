#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player1_score = 30;
    int player2_score = 30;
    int round = 1;
    int rand_num;
    
    // Seed the random number generator
    srand(time(NULL));
    
    // Play the game until one player's score reaches 0
    while(player1_score > 0 && player2_score > 0) {
        printf("Round %d:\n", round);
        
        // Generate random number for player 1
        rand_num = rand() % 5 + 1;
        player1_score -= rand_num;
        printf("Player 1 lost %d points. Score: %d\n", rand_num, player1_score);
        
        // Generate random number for player 2
        rand_num = rand() % 5 + 1;
        player2_score -= rand_num;
        printf("Player 2 lost %d points. Score: %d\n", rand_num, player2_score);
        
        round++;
    }
    
    // Whose winner the game
    if(player1_score <= 0 && player2_score <= 0) {
        printf("The game is a tie.\n");
    }
    else if(player1_score <= 0) {
        printf("Player 2 wins!\n");
    }
    else {
        printf("Player 1 wins!\n");
    }
    
    return 0;
}
