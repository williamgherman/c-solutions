### Project 11.02
Modify Programming Project 8 from Chapter 5 so that it includes the following
function:

```c
void find_closest_flight(int desired_time, 
                         int *departure_time, 
                         int *arrival_time);
```

This function wil find the flight whose departure time is closest to
`desired_time` (expressed in minutes sinces midnight). It will store the
departure and arrival times of this flight (also expressed in minutes since
midnight) in the variables pointed to by `departure_time` and `arrival_time`,
respectively.

### Solution
See `2.c`.
