# Game in C Language with data structure and algorithm

Discription
It seems like you've shared a portion of C code for a game where the player is tasked with sorting elements in different "Glasses" using certain rules. This code is written in C and uses functions to manage the game's logic and display. Here's an overview of the code's functionality:

1. `instruction()`: Displays the game's instructions and options for playing or exiting.

2. `loser()`: Provides a message when the player loses the game. It encourages the player to try again.

3. `rules()`: Displays the game rules.

4. `status()`: Checks whether the game is over or not based on certain conditions. If the game is won, it displays a congratulatory message.

5. `display()`: Displays the current state of the "Glasses" and the number of steps taken in the game. It also notifies the player if any "Glass" is full.

6. `game()`: Implements the main game logic. It allows the player to transfer elements between "Glasses" according to the rules and keeps track of the number of moves.

7. The code uses various conditional statements to validate and execute the player's moves, including checks for matching elements and stack capacity.

8. The game loops recursively by calling the `game()` function until the player wins or exits the game.

Overall, this code represents the core logic of a game involving sorting elements in different containers (Glasses) using specific rules. The player's goal is to sort the elements efficiently with the fewest possible moves.

Library Needed : 

- #include <stdio.h>
- #include <stdlib.h>
- #include <conio.h>
- #include <string.h>

  <hr>

  DSA Used :

- Stacks

  <hr>

Function Created

-int main()
-void instruction()
-void loser()
-void rules() 
-int status()
-void display()
-void game()




  
