### Exercise 16.22

Let `chess_pieces` be the following enumeration:

```c
enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
```

(a) Write a declaration (including an initializer) for a constant array of
integers named `piece_value` that stores the numbers 200, 9, 5, 3, 3 and 1,
representing the value of each chess piece from king to pawn. (The king's value
is actually infinite, since "capturing" the king (checkmate) ends the game, but
some chess-playing software assigns the king a large value such as 200.)

(b) (C99) Repeat part (a), but use a designated initializer to initialize the
array. Use the eumeration constants in `chess_pieces` as subscripts in the
designators. (*Hint:* See the last question in Q&A for an example.)

### Solution

#### (a)

```c
const int piece_value[] = {200, 9, 5, 3, 3, 1};
```

#### (b)

```c
const int piece_value[] = {
    [KING] = 200, 
    [QUEEN] = 9,
    [ROOK] = 5, 
    [BISHOP] = 3,
    [KNIGHT] = 3,
    [PAWN] = 1
};
```
