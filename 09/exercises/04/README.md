### Exercise 9.04
Write a function `day_of_year(month, day, year)` that returns the day of the
year (an integer between 1 and 366) specified by the three arguments.

### Solution

int day_of_year(int month, int day, int year) {
if((day<=0 || day>31) || (month<=0 || month>12) || !year) return 0;

bool leap_year=false;

if(!(year%400)) leap_year=true;
else if(!(year%100)) leap_year=false;
else if(!(year%4)) leap_year=true;

int month_array[12];

for(unsigned char i=1;i<=12;i++){
if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) month_array[i-1]=31;
else if (i==2) {
    if(leap_year) month_array[i-1]=29;
    else month_array[i-1]=28;
}
else month_array[i-1]=30;
}

unsigned char sum=0;
for(unsigned char i=1;i<month;i++){
   sum+=month_array[i-1];
   printf("%d\n",sum);
}
    return sum+=day;
}
