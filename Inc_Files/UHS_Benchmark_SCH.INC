--
-- *****************************************************************************
-- *               Underground Hydrogen Storage Benchmark Study                *
-- *                         Version: 1.0 - License: CC BY                     *
-- *                    Clausthal University of Technology                     *
-- *****************************************************************************
--

FBHPDEF
50 1000  /

WELSPECS                                
  WELL3 GROUP1 31 34 1210 GAS 0 STD SHUT YES 1* SEG 3* STD /
  /

WLIST                                   
  '*WELLS F' NEW
  WELL3 /
  /

COMPDAT                                 
  WELL3 31 34 2 2 OPEN 1* 1.89577 0.1905 164.316 0 1* Z 9.90003 /
  WELL3 31 34 3 3 OPEN 1* 1.47081 0.1905 127.482 0 1* Z 9.89976 /
  WELL3 31 34 4 4 OPEN 1* 1.46764 0.1905 127.207 0 1* Z 9.89976 /
  WELL3 31 34 5 5 OPEN 1* 4.4673 0.1905 387.202 0 1* Z 9.89973 /
  WELL3 31 34 6 6 OPEN 1* 4.46731 0.1905 387.203 0 1* Z 9.89972 /
  WELL3 31 34 7 7 OPEN 1* 5.35562 0.1905 464.197 0 1* Z 9.89971 /
  WELL3 31 34 8 8 OPEN 1* 5.34435 0.1905 463.22 0 1* Z 9.89971 /
  WELL3 31 34 9 9 OPEN 1* 10.2979 0.1905 892.565 0 1* Z 9.89971 /
  WELL3 31 34 10 10 OPEN 1* 10.2982 0.1905 892.59 0 1* Z 9.8997 /
  WELL3 31 34 11 11 OPEN 1* 1.56672 0.1905 135.796 0 1* Z 9.89974 /
  WELL3 31 34 12 12 OPEN 1* 1.56673 0.1905 135.796 0 1* Z 9.89974 /
  /

GRUPTREE                                
  GROUP1 FIELD /
  /

WCONINJE                                
  WELL3 GAS 1* BHP 2* 90 /
  /

TUNING                                  
0.1 5 /
/
/

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /

TSTEP
11*5 /


DATES                                   
  1 MAR 2018 /
  /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
6*5 /

DATES
1 'APR' 2018 /
/


WCONINJE                                
  WELL3 GAS 1* BHP 2* 94 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /

TSTEP
12*5 /

DATES
1 'JUN' 2018 /
/

TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
5*5 /

DATES
1 'JUL' 2018 /
/

WCONINJE                                
  WELL3 GAS 1* BHP 2* 98 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /
TSTEP
12*5 /

DATES
1 'SEP' 2018 /
/

TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
5*5 /

DATES
1 'OCT' 2018 /
/

WCONINJE                                
  WELL3 GAS 1* BHP 2* 102 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /

TSTEP
12*5 /

DATES
1 'DEC' 2018 /
/

TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
6*5 /

DATES
1 'JAN' 2019 /
/


WCONINJE                                
  WELL3 GAS 1* RATE 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /

TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
18*5 /


WCONPROD                                
  WELL3 OPEN GRAT 2* 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
3*5 /


WCONINJE                                
  WELL3 GAS OPEN RATE 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /

TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
18*5 /


WCONPROD                                
  WELL3 OPEN GRAT 2* 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
3*5 /


WCONINJE                                
  WELL3 GAS OPEN RATE 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /

TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
18*5 /


WCONPROD                                
  WELL3 OPEN GRAT 2* 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /

TSTEP
3*5 /


WCONINJE                                
  WELL3 GAS OPEN RATE 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /

WINJGAS                                 
'WELL3' 'STREAM' 'WSTR1' 2* /
 /


TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /


TSTEP
18*5 /


WCONPROD                                
  WELL3 OPEN GRAT 2* 6E+05 /
  /

TUNING                                  
0.1 5 /
/
/

WELLOPEN                                
'WELL3' /
 /


TSTEP
18*5 /


TUNING                                  
0.1 5 /
/
/

WELLSHUT                                
'WELL3' /
 /


TSTEP
3*5 /


