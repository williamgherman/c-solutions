### Exercise 9.04
Write a function `day_of_year(month, day, year)` that returns the day of the
year (an integer between 1 and 366) specified by the three arguments.

### Solution

int day_of_year(int month, int day, int year) {
if(day<=0 || day>31 || month<=0 || month>12 || !year || (month==2 && day>29) \
   || (!(year%400) || !(year%4) && year%100) && day>29) return 0;

unsigned int sum=0;

for(unsigned char i=1;i<month;i++){
    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) sum+=31;
    else if(i==2){
        if(!(year%400) || (!(year%4)) && (year%100)) sum+=29;
        else sum+=28;
    }
    else sum+=30;
}
    return sum+day;
}

