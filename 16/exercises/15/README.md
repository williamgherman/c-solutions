### Exercise 16.15

(a) Declare a tag for an enumerataion whose values represent the seven days of
the week.  
(b) Use `typedef` to define a name for the enumeration of part (a).

### Solution

#### (a)

```c
enum weekdays = {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
                 FRIDAY, SATURDAY, SUNDAY};
```

#### (b)

```c
typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY,
              FRIDAY, SATURDAY, SUNDAY} Day;
```
