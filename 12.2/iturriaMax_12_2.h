#pragma once
typedef enum m { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }Month;
void read(int*, Month*);
void NextDay(int, int*, Month, Month*);
void PrintDay(int, Month);