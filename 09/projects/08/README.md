### Project 9.08
Write a program that simulates the game of craps, which is played with two dice.
On the first roll, the player winds if the sum of the dice is 7 or 11. The
player loses if the sum is 2, 3 or 12. Any other roll is called the "point" and
the game continues. On each subsequent roll, the player wins if he or she rolls
the point again. The player loses by rolling 7. Any other roll is ignored and
the game continues. At the end of each game, the program will ask the user
whether or not to play again. When the user enters a response other than `y` or
`Y`, the program will display the number of wins and losses then terminate.

```
You rolled: 8
Your point is 8
You rolled: 3
You rolled: 10
You rolled: 8
You win!

Play again? y

You rolled: 6
Your point is 6
You rolled: 5
You rolled: 12
You rolled: 3
You rolled: 7
You lose!

Play again? y

You rolled: 11
You win!

Play again? n

Wins: 2  Losses: 1
```

Write your program as three functions: `main`, `roll_dice` and `play_game`. Here
are the prototypes for the latter two functions:

```c
int roll_dice(void);
bool play_game{void);
```

`roll_dice` should generate two random numbers, each between 1 and 6, and return
their sum. `play_game` should play one craps game (calling `roll_dice` to
determine the outcome of each dice roll); it will return `true` if the player
wins and `false` if the player loses. `play_game` is also responsible for
displaying messages showing the results of the player's dice rolls. `main` will
call `play_game` repeatedly keeping track of the number of wins and losses and
displaying the "you win" and "you lose" messages. *Hint*: Use the `rand`
function to generate random numbers. See the `deal.c` program in Section 8.2 for
an example of how to call `rand` and the related `srand` function.

### Solution
See `8.c`.
