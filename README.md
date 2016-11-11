# Week-day_the_quick_way

<center>** date.cpp and date.py **</center>

This is a program that calculates the day of the week in a quick way.

Just enter the date as y m d separated by spaces.

It gives out the day of the week (Sat - Fri) the date falls on!

In principle the formula

3\*(int)((9\*m-8)/10) - (int)(abs(2\*m-4)/5) + (int)(5\*y/4) - (int)(y/100) + (int)(y/400) + (((y%4==0)?1:0) - ((y%100==0)?1:0) + ((y%400==0)?1:0))\*((m\<3)?1:0)

should be applied without the statement

y=y%400

But the key is, that if y were changed by a multiple of 400 this formula's result changes by an integer multiple of 497 which in turn is a multiple of 7, giving the same day of the week! Thus we apply the formula without it!

Once we do this, the term (int)(y/400) which is the floor vanishes because y is between 0 and 399 inclusive.

This formula is based on the designation

0 mod 7 = Saturday<br>
1 mod 7 = Sunday<br>
...<br>
6 mod 7 = Friday

<center>** weekdays.R **</center>

This is a program that accepts a year, a month and a day in the week and outputs the first date in the month that falls on the weekday inputted. Run the no_of_weekdays(y,m,weekday) in R with some arguments of your choice (weekday = 1-7 for Sunday-Saturday)

E.g.: no_of_weekdays(2016,4,6) returns 1, meaning
"1st April is the first Friday of April 2016"
