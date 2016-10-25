# Week-day_the_quick_way
This is a program that calculates the day of the week in a quick way.

Just enter the date as y m d separated by spaces.

It gives out the day of the week (Sat - Fri) the date falls on!

The formula should in principle haven been applied without the statement

y=y%400

But the key is, that if y were changed by a multiple of 400 this formula's result changes by an integer multiple of 497 which in turn is a multiple of 7, giving the same day of the week!

This formula is based on the designation 0 mod 7 = Saturday, 1 mod 7 = Sunday, ... 6 mod 7 = Friday
