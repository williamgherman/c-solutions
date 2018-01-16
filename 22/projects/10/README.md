### Project 22.10

Modify the `inventory2.c` program of Section 17.5 by adding te `d` (dump) and
`r` (restore) operations described in Programming Project 8. Since the part
structures aren't stored in an array, the `d` operation can't save them all by a
single call of `fwrite`. Instead, it will need to visit each node in the linked
list, writing the part number, part name and quantity on hand to a file (Don't
save the `next` pointer; it won't be valid once the program terminates). As it
reads parts from a file, the `r` operation will rebuild the list one node at a
time.

### Solution

See program files.
