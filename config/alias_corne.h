
// Reference:

/*              Corne Aliexpress

  ╭────────────────────────┬─────────┬────────────────────────╮ 
  │  0   1   2   3   4   5 │    6    │ 7   8   9   10  11  12 │ 
  │ 13  14  15  16  17  18 │ 19 20 21│ 22  23  24  25  26  27 │ 
  │ 28  29  30  31  32  33 │    32   │ 36  37  38  39  40  41 │ 
  │             42  43  44 │ 34      │ 45  46  47             │ 
  ╰────────────────────────┴─────────┴────────────────────────╯             */


#pragma once

// Left Top Row
#define LT0 5
#define LT1 4
#define LT2 3
#define LT3 2
#define LT4 1
#define LT5 0

// Left Middle Row
#define LM0 18
#define LM1 17
#define LM2 16
#define LM3 15
#define LM4 14
#define LM5 13

// Left Bottom Row
#define LB0 33
#define LB1 32
#define LB2 31
#define LB3 30
#define LB4 29
#define LB5 28

// Left Thumb Row
#define LH0 44
#define LH1 43
#define LH2 42

// Right Top Row
#define RT0 7
#define RT1 8
#define RT2 9
#define RT3 10
#define RT4 11
#define RT5 12

// Right Middle Row
#define RM0 22
#define RM1 23
#define RM2 24
#define RM3 25
#define RM4 26
#define RM5 27

// Right Bottom Row
#define RB0 36
#define RB1 37
#define RB2 38
#define RB3 39
#define RB4 40
#define RB5 41

// Right Thumb Row
#define RH0 45
#define RH1 46
#define RH2 47

// D-Pad
// #define D0 6
// #define D1 19
// #define D2 32
// #define D3 45
// #define D4 58


#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5
#define KEYS_T LH0 LH1 LH2 RH0 RH1 RH2

#define KEYS_D D0 D1 D2 D3 D4