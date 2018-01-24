### Exercise 26.13

Section 26.3 described some of the ISO 8601 date and time formats. Here are a
few more:

(a) Year followed by day of year: *YYYY-DDD*, where *DDD* is a number between
001 and 366  
(b) Year, week and day of week: *YYYY-Www-D*, where *ww* is a number between 0
and 53, and *D* is a digit between 1 through 7, beginning with Monday and ending
with Sunday  
(c) Combined date and time: *YYYY-MM-DD*T*hh:mm:ss*

Give `strftime` strings that correspond to each of these formats.

### Solution

(a) `%Y-%j`  
(b) `%Y-W%V-%u`  
(c) `%FT%X`
