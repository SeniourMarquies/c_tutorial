#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void message(const char* message){
    printf("%s\n",message);
}
int getRandomNumber(int num){
    srand(time(NULL));
    int random_number = rand() % num + 1;
    return random_number;
}

int main() {
    // Initialize variables:
    int playerChoice = 0;
    int computerChoice = 0;

    // Display instructions and menu:
    message("Welcome to Rock-Paper-Scissors!");
do
{
     // Get user input:
    message("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): "  );
    
    scanf("%d", &playerChoice);

    // Validate player's input:
    if (playerChoice < 1 || playerChoice > 3) {
        message("Invalid choice. Please choose 1, 2, or 3\a.");
        return -1; // Exit with error
    }

    // Generate computer's choice randomly:
    srand(time(NULL));
    int random_number = getRandomNumber(3);
    computerChoice = random_number;

    // Determine the winner:
    if (playerChoice == computerChoice) {
        message("Tİe.");
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        message("Player wins.");
    } else message("Computer wins.");
message("You wanna play again?(y or Y to continue.)");
getchar(); // Consume newline character left in input buffer:
} while (getc(stdin) == 'y' || getc(stdin) == 'Y');

   
    return 0;
}

