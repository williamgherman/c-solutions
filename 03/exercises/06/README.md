### Exercise 3.06
Show how to modify the `addfrac.c` program of Section 3.2 so that the user is
allowed to enter fractions that contain spaces before and after each `/`
character.

### Solution
Add a space after the first `%d` for each `scanf` statement. This will allow
pattern matching for whitespace between the two `%d`s and the `/` character.

See `addfrac.c`.
