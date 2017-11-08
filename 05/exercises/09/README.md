### Exercise 5.09
Are the following `if` statements equivalent? If not, why not?

```c
if (score >= 90)       if (score < 60)
    printf("A");           printf("F");
else if (score >= 80)  else if (score < 70)
    printf("B");           printf("D");
else if (score >= 70)  else if (score < 80)
    printf("C");           printf("C");
else if (score >= 60)  else if (score < 90)
    printf("D")            printf("B");
else                   else
    printf("F");           printf("A");
```

### Solution
The statements are equivalent.
