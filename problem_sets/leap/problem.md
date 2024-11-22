[URL](https://exercism.org/tracks/c/exercises/leap)

# Introduction

A leap year (in the Gregorian calendar) occurs:

1. In every year that is evenly divisible by 4.
2. Unless the year is evenly divisible by 100, in which case it's only a leap year if the year is also evenly divisible by 400.

Some examples:

1997 was not a leap year as it's not divisible by 4.
1900 was not a leap year as it's not divisible by 400.
2000 was a leap year!

# Notes

## What is not a leap year?
1. `year` is evenly divisible by 100 and `year` not evenly divisible by 400 
2. None of the below cases

## What is a leap year?
1. Dividing `year` by 4 returns an even number, no fractions and therefore decimal places -> use `modulo`
2. `year` is not evenly divisible by 100 and `year` evenly divisible by 400

```pseudocode
int year = <some year> 

if (year %% 4 == 0) AND ((year %% 100 != 0) OR (year %% 400 == 0))
    print "is a leap year"
else 
    print "is not a leap year"
```