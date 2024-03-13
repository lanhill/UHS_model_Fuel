--
-- *****************************************************************************
-- *               Underground Hydrogen Storage Benchmark Study                *
-- *                         Version: 1.0 - License: CC BY                     *
-- *                    Clausthal University of Technology                     *
-- *****************************************************************************
--

RPTONLY
RUNSUM
EXCEL

------------------
-- data to collect
-------------------
FPR     -- (Field) Pressure average value

FPRP    --Pressure average value (Pore-Volume Weighted)

FGIR    --Gas Injection Rate

FGIT    --Gas Injection Total

FGPR    --Gas Production Rate

FGPT    --Gas Production Total

--
FCMPR   --Hydrocarbon Component Molar Production Rates (2 => CH4 in this case)
 /

--
FCMPT   --Hydrocarbon Component Molar Production Totals 
 /

--
FCMIR   --Hydrocarbon Component Molar Injection Rates
 /

--
FCMIT   --Hydrocarbon Component Molar Injection Totals
  /

--
FYMF    --Vapor Mole Fraction
  /

--
FCMIP   --Component Hydrocarbon as Moles
  /

--
FCWM    --Molar amount of specified component dissolved in water
  /
 
--
FCGMI   --Molar amount of specified component trapped in gas
  / 

--
FCGMM   --Molar amount of specified component mobile in gas
  /                       

--      
WBHP  
'WELL3'/

--TIMESTEP                           


