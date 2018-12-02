static char *input_override =
    "\r\rY\r"
    "2 PRINT TAB(26) \"CIVIL WAR\"\r"
    "4 PRINT TAB(15) \"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY\"\r"
    "6 PRINT : PRINT : PRINT\r"
    "20 REM ORIGINAL GAME DESIGN: CRAM, GOODIE, HIBBARD LEXINGTON H.S.\r"
    "30 REM MODIFICATIONS: G. PAUL, R. HESS (TIES), 1973\r"
    "50  DIM S(4),C$(14),M1(14),M2(14),C1(14),C2(14),M(14)\r"
    "60  REM UNION INFO ON LIKELY CONFEDERATE STRATEGY\r"
    "70  S(1)=25 : S(2)=25 : S(3)=25 : S(4)=25\r"
    "82  REM READ HISTORICAL DATA.\r"
    "84  FOR D=1 TO 14\r"
    "86  READ C$(D),M1(D),M2(D),C1(D),C2(D),M(D)\r"
    "88  NEXT D\r"
    "89  LET D=RND(-1)\r"
    "90  PRINT\r"
    "100  PRINT \"DO YOU WANT INSTRUCTIONS\";\r"
    "110  INPUT X$\r"
    "120  IF X$=\"YES\" THEN 160\r"
    "130  IF X$=\"NO\" THEN 370\r"
    "140  PRINT \"YES OR NO -- \";\r"
    "150  GOTO 110\r"
    "160  PRINT : PRINT : PRINT : PRINT\r"
    "170  PRINT \"THIS IS A CIVIL WAR SIMULATION.\"\r"
    "180  PRINT \"TO PLAY TYPE A RESPONSE WHEN THE COMPUTER ASKS.\"\r"
    "190  PRINT \"REMEMBER THAT ALL FACTORS ARE INTERRELATED AND THAT YOUR\"\r"
    "200  PRINT \"RESPONSES COULD CHANGE HISTORY. FACTS AND FIGURES USED "
    "ARE\"\r"
    "210  PRINT \"BASED ON THE ACTUAL OCCURRENCE. MOST BATTLES TEND TO "
    "RESULT\"\r"
    "220  PRINT \"AS THEY DID IN THE CIVIL WAR, BUT IT ALL DEPENDS ON YOU!!\"\r"
    "230  PRINT\r"
    "240  PRINT \"THE OBJECT OF THE GAME IS TO WIN AS MANY BATTLES AS \";\r"
    "245  PRINT \"POSSIBLE.\"\r"
    "250  PRINT\r"
    "260  PRINT \"YOUR CHOICES FOR DEFENSIVE STRATEGY ARE:\"\r"
    "270  PRINT \"        (1) ARTILLERY ATTACK\"\r"
    "280  PRINT \"        (2) FORTIFICATION AGAINST FRONTAL ATTACK\"\r"
    "290  PRINT \"        (3) FORTIFICATION AGAINST FLANKING MANEUVERS\"\r"
    "300  PRINT \"        (4) FALLING BACK\"\r"
    "310  PRINT \" YOUR CHOICES FOR OFFENSIVE STRATEGY ARE:\"\r"
    "320  PRINT \"        (1) ARTILLERY ATTACK\"\r"
    "330  PRINT \"        (2) FRONTAL ATTACK\"\r"
    "340  PRINT \"        (3) FLANKING MANEUVERS\"\r"
    "350  PRINT \"        (4) ENCIRCLEMENT\"\r"
    "360  PRINT \"YOU MAY SURRENDER BY TYPING A '5' FOR YOUR STRATEGY.\"\r"
    "370  PRINT : PRINT : PRINT : PRINT \"ARE THERE TWO GENERALS PRESENT \";\r"
    "380  PRINT \"(ANSWER YES OR NO)\";\r"
    "390  INPUT B$\r"
    "400  IF B$=\"YES\" THEN 430\r"
    "410  IF B$ <> \"NO\" THEN 380\r"
    "420  PRINT : PRINT \"YOU ARE THE CONFEDERACY.   GOOD LUCK!\"\r"
    "425  PRINT\r"
    "430  LET D=1\r"
    "440  IF B$ <> \"YES\" THEN 460\r"
    "450  LET D=2\r"
    "460  PRINT \"SELECT A BATTLE BY TYPING A NUMBER FROM 1 TO 14 ON\"\r"
    "470  PRINT \"REQUEST.  TYPE ANY OTHER NUMBER TO END THE SIMULATION.\"\r"
    "480  PRINT \"BUT '0' BRINGS BACK EXACT PREVIOUS BATTLE SITUATION\"\r"
    "490  PRINT \"ALLOWING YOU TO REPLAY IT\"\r"
    "500  PRINT\r"
    "510  PRINT \"NOTE: A NEGATIVE FOOD$ ENTRY CAUSES THE PROGRAM TO \"\r"
    "520  PRINT \"USE THE ENTRIES FROM THE PREVIOUS BATTLE\"\r"
    "530  PRINT\r"
    "540  PRINT \"AFTER REQUESTING A BATTLE, DO YOU WISH \";\r"
    "550  PRINT \"BATTLE DESCRIPTIONS \";\r"
    "560  PRINT \"(ANSWER YES OR NO)\";\r"
    "570  INPUT X$\r"
    "580  IF X$=\"YES\" THEN 600\r"
    "590  IF X$ <> \"NO\" THEN 560\r"
    "600  L=0:W=0:R1=0:Q1=0:M3=0:M4=0:P1=0:P2=0:T1=0:T2=0\r"
    "610  F(2)=0:H(2)=0:B(2)=0:R2=0:Q2=0:C6=0:F=0:W0=0:Y=0:Y2=0:U=0:U2=0\r"
    "620  PRINT : PRINT : PRINT\r"
    "630  PRINT \"WHICH BATTLE DO YOU WISH TO SIMULATE\";\r"
    "640  INPUT A\r"
    "650  IF A <> 0 THEN 660\r"
    "655  IF R <> 0 THEN 1140\r"
    "660  IF A <=0 THEN 2860\r"
    "665  IF A >= 15 THEN 2860\r"
    "670  LET C$=C$(A)\r"
    "680  LET M1=M1(A)\r"
    "690  LET M2=M2(A)\r"
    "700  LET C1=C1(A)\r"
    "710  LET C2=C2(A)\r"
    "720  LET M=M(A)\r"
    "960  LET U=0\r"
    "970  REM  INFLATION CALC\r"
    "980  LET I1=10+(L-W)*2\r"
    "990  LET I2=10+(W-L)*2\r"
    "1000  REM - MONEY AVAILABLE\r"
    "1010  LET D(1)=100*INT((M1*(100-I1)/2000)*(1+(R1-Q1)/(R1+1))+.5)\r"
    "1020  LET D(2)=100*INT(M2*(100-I2)/2000+.5)\r"
    "1030  IF B$ <> \"YES\" THEN 1050\r"
    "1040  LET D(2)=100*INT((M2*(100-I2)/2000)*(1+(R2-Q2)/(R2+1))+.5)\r"
    "1050  REM - MEN   AVAILABLE\r"
    "1060  LET M5=INT(M1*(1+(P1-T1)/(M3+1)))\r"
    "1070  LET M6=INT(M2*(1+(P2-T2)/(M4+1)))\r"
    "1080  LET F1=5*M1/6\r"
    "1090  PRINT : PRINT : PRINT : PRINT : PRINT\r"
    "1100  PRINT \"THIS IS THE BATTLE OF \";C$\r"
    "1110  IF X$=\"NO\" THEN 1150\r"
    "1120  IF A>11 THEN 1130\r"
    "1125  ON A GOTO 3580,3620,3650,3690,3720,3750,3780,3800,3830,3860,3890\r"
    "1130  ON A-11 GOTO 3920,3950,3980\r"
    "1140  PRINT C$\" INSTANT REPLAY\"\r"
    "1150  PRINT\r"
    "1160  PRINT \" \",\"CONFEDERACY\",\" UNION\"\r"
    "1170  PRINT \"MEN\",\" \"M5,\" \"M6\r"
    "1180  PRINT \"MONEY\",\"$\";D(1),\"$\";D(2)\r"
    "1190  PRINT \"INFLATION\",\" \";I1+15;\"%\",\" \";I2;\"%\"\r"
    "1195  PRINT\r"
    "1200  REM - ONLY IN PRINTOUT IS CONFED INFLATION = I1+15%\r"
    "1210  REM - IF TWO GENERALS, INPUT CONFED. FIRST\r"
    "1220  FOR I=1 TO D\r"
    "1230  IF B$ <> \"YES\" THEN 1260\r"
    "1240  IF I=2 THEN 1260\r"
    "1250  PRINT \"CONFEDERATE GENERAL---\";\r"
    "1260  PRINT \"HOW MUCH DO YOU WISH TO SPEND FOR\"\r"
    "1270  PRINT \" - FOOD......\";\r"
    "1280  INPUT F\r"
    "1290  IF F >= 0 THEN 1360\r"
    "1300  IF R1 <> 0 THEN 1330\r"
    "1310  PRINT \"NO PREVIOUS ENTRIES\"\r"
    "1320  GOTO 1270\r"
    "1330  PRINT \"ASSUME YOU WANT TO KEEP SAME ALLOCATIONS\"\r"
    "1340  PRINT\r"
    "1350  GOTO 1510\r"
    "1360  LET F(I)=F\r"
    "1370  PRINT \" - SALARIES..\";\r"
    "1380  INPUT H(I)\r"
    "1390  LET N=1\r"
    "1400  IF H(I)<0 THEN 1490\r"
    "1410  PRINT \" - AMMUNITION\";\r"
    "1420  INPUT B(I)\r"
    "1430  LET N=2\r"
    "1440  IF B(I)<0 THEN 1490\r"
    "1450  PRINT\r"
    "1460  IF F(I)+H(I)+B(I) <= D(I) THEN 1510\r"
    "1470  PRINT \"THINK AGAIN! YOU HAVE ONLY $\"D(I)\r"
    "1480  GOTO 1270\r"
    "1490  PRINT \"NEGATIVE VALUES NOT ALLOWED.\"\r"
    "1500  ON N GOTO 1370,1410\r"
    "1510  IF B$ <> \"YES\" THEN 1550\r"
    "1520  IF I=2 THEN 1550\r"
    "1530  PRINT \"UNION GENERAL---\";\r"
    "1540  NEXT I\r"
    "1550  FOR Z=1 TO D\r"
    "1560  IF B$ <> \"YES\" THEN 1620\r"
    "1570  ON Z GOTO 1580,1600\r"
    "1580  PRINT \"CONFEDERATE \";\r"
    "1590  GOTO 1620\r"
    "1600  PRINT \"      UNION \";\r"
    "1610  REM - FIND MORALE\r"
    "1620  LET O=((2*F(Z)^2+H(Z)^2)/F1^2+1)\r"
    "1630  IF O<10 THEN 1660\r"
    "1640  PRINT \"MORALE IS HIGH\"\r"
    "1650  GOTO 1700\r"
    "1660  IF O<5 THEN 1690\r"
    "1670  PRINT \"MORALE IS FAIR\"\r"
    "1680  GOTO 1700\r"
    "1690  PRINT \"MORALE IS POOR\"\r"
    "1700  IF B$ <> \"YES\" THEN 1760\r"
    "1710  LET O(Z)=O\r"
    "1720  NEXT Z\r"
    "1730  LET O2=O(2)\r"
    "1740  LET O=O(1)\r"
    "1750  PRINT \"CONFEDERATE GENERAL---\";\r"
    "1760  REM - ACTUAL OFF/DEF BATTLE SITUATION\r"
    "1770  IF M <> 3 THEN 1800\r"
    "1780  PRINT \"YOU ARE ON THE OFFENSIVE\"\r"
    "1790  GOTO 1840\r"
    "1800  IF M <> 1 THEN 1830\r"
    "1810  PRINT \"YOU ARE ON THE DEFENSIVE\"\r"
    "1820  GOTO 1840\r"
    "1830  PRINT \"BOTH SIDES ARE ON THE OFFENSIVE \"\r"
    "1840  PRINT\r"
    "1850  REM - CHOOSE STRATEGIES\r"
    "1860  IF B$ <> \"YES\" THEN 1910\r"
    "1870  FOR I=1 TO 2\r"
    "1880  ON I GOTO 1890,1920\r"
    "1890  PRINT \"CONFEDERATE STRATEGY \";\r"
    "1900  GOTO 1920\r"
    "1910  PRINT \"YOUR STRATEGY \";\r"
    "1920  INPUT Y\r"
    "1930  IF ABS(Y-3)<3 THEN 1960\r"
    "1940  PRINT \"STRATEGY\";Y;\"NOT ALLOWED.\"\r"
    "1950  GOTO 1910\r"
    "1960  IF B$=\"YES\" THEN 2000\r"
    "1970  IF Y=5 THEN 2830\r"
    "1980  GOSUB 3110\r"
    "1990  GOTO 2170\r"
    "2000  IF I=2 THEN 2040\r"
    "2010  LET Y1=Y\r"
    "2020  PRINT \"UNION STRATEGY \";\r"
    "2030  NEXT I\r"
    "2040  LET Y2=Y\r"
    "2050  LET Y=Y1\r"
    "2060  IF Y2=5 THEN 2020\r"
    "2070  REM : SIMULATED LOSSES-NORTH\r"
    "2080  LET C6=(2*C2/5)*(1+1/(2*(ABS(Y2-Y)+1)))\r"
    "2090  LET C6=C6*(1.28+(5*M2/6)/(B(2)+1))\r"
    "2100  LET C6=INT(C6*(1+1/O2)+.5)\r"
    "2110  REM - IF LOSS > MEN PRESENT, RESCALE LOSSES\r"
    "2120  LET E2=100/O2\r"
    "2130  IF INT(C6+E2)<M6 THEN 2190\r"
    "2140  LET C6=INT(13*M6/20)\r"
    "2150  LET E2=7*C6/13\r"
    "2160  LET U2=1\r"
    "2170  REM - CALCULATE SIMULATED LOSSES\r"
    "2180  PRINT\r"
    "2190  PRINT : PRINT : PRINT ,\"CONFEDERACY\",\"UNION\"\r"
    "2200  LET C5=(2*C1/5)*(1+1/(2*(ABS(Y2-Y)+1)))\r"
    "2210  LET C5=INT(C5*(1+1/O)*(1.28+F1/(B(1)+1))+.5)\r"
    "2220  LET E=100/O\r"
    "2230  IF C5+100/O<M1*(1+(P1-T1)/(M3+1)) THEN 2270\r"
    "2240  LET C5=INT(13*M1/20*(1+(P1-T1)/(M3+1)))\r"
    "2250  LET E=7*C5/13\r"
    "2260  LET U=1\r"
    "2270  IF D=1 THEN 2500\r"
    "2280  PRINT \"CASUALTIES\",C5,C6\r"
    "2290  PRINT \"DESERTIONS\",INT(E),INT(E2)\r"
    "2300  PRINT\r"
    "2310  IF B$ <> \"YES\" THEN 2350\r"
    "2320  PRINT \"COMPARED TO THE ACTUAL CASUALTIES AT \"C$\r"
    "2330  PRINT \"CONFEDERATE:\"INT(100*(C5/C1)+.5)\"% OF THE ORIGINAL\"\r"
    "2340  PRINT \"UNION:      \"INT(100*(C6/C2)+.5)\"% OF THE ORIGINAL\"\r"
    "2350  PRINT\r"
    "2360  REM - 1 WHO ONE\r"
    "2370  IF U <> 1 THEN 2380\r"
    "2375  IF U2=1 THEN 2460\r"
    "2380  IF U=1 THEN 2420\r"
    "2390  IF U2=1 THEN 2440\r"
    "2400  IF C5+E=C6+E2 THEN 2460\r"
    "2410  IF C5+E<C6+E2 THEN 2440\r"
    "2420  PRINT \"THE UNION WINS \"C$\r"
    "2430  GOTO 2600\r"
    "2440  PRINT \"THE CONFEDERACY WINS \"C$\r"
    "2450  GOTO 2660\r"
    "2460  PRINT \"BATTLE OUTCOME UNRESOLVED\"\r"
    "2470  LET W0=W0+1\r"
    "2480  IF A=0 THEN 2790\r"
    "2490  GOTO 2680\r"
    "2500  LET C6=INT(17*C2*C1/(C5*20))\r"
    "2510  LET E2=5*O\r"
    "2520  GOTO 2280\r"
    "2530  PRINT \"YOUR CASUALTIES WERE \"INT(100*(C5/C1)+.5)\"% OF \"\r"
    "2540  PRINT \"THE ACTUAL CASUALTIES AT \";C$\r"
    "2550  PRINT\r"
    "2560  REM - FIND WHO WON\r"
    "2570  IF U=1 THEN 2590\r"
    "2580  IF C5+E<17*C2*C1/(C5*20)+5*O THEN 2630\r"
    "2590  PRINT \"YOU LOSE \";C$\r"
    "2600  IF A=0 THEN 2790\r"
    "2610  LET L=L+1\r"
    "2620  GOTO 2680\r"
    "2630  PRINT \"YOU WIN \";C$\r"
    "2640  REM - CUMULATIVE BATTLE FACTORS WHICH ALTER HISTORICAL\r"
    "2650  REM  RESOURCES AVAILABLE.IF A REPLAY DON'T UPDATE.\r"
    "2660  IF A=0 THEN 2790\r"
    "2670  LET W=W+1\r"
    "2680  LET T1=T1+C5+E\r"
    "2690  LET T2=T2+C6+E2\r"
    "2700  LET P1=P1+C1\r"
    "2710  LET P2=P2+C2\r"
    "2720  LET Q1=Q1+(F(1)+H(1)+B(1))\r"
    "2730  LET Q2=Q2+(F(2)+H(2)+B(2))\r"
    "2740  LET R1=R1+M1*(100-I1)/20\r"
    "2750  LET R2=R2+M2*(100-I2)/20\r"
    "2760  LET M3=M3+M1\r"
    "2770  LET M4=M4+M2\r"
    "2780  GOSUB 3300\r"
    "2790  U=0:U2=0\r"
    "2800  PRINT \"---------------\"\r"
    "2810  GOTO 620\r"
    "2820  REM------FINISH OFF\r"
    "2830  PRINT \"THE CONFEDERACY HAS SURRENDERED\"\r"
    "2840  GOTO 2860\r"
    "2850  PRINT \"THE UNION HAS SURRENDERED.\"\r"
    "2860  PRINT : PRINT : PRINT : PRINT : PRINT : PRINT\r"
    "2870  PRINT \"THE CONFEDERACY \";\r"
    "2880  PRINT \"HAS WON \"W\" BATTLES AND LOST \"L\r"
    "2890  IF Y=5 THEN 2940\r"
    "2900  IF Y2=5 THEN 2920\r"
    "2910  IF W <= L THEN 2940\r"
    "2915  IF Y=5 THEN 2940\r"
    "2920  PRINT \"THE CONFEDERACY HAS WON THE WAR\"\r"
    "2930  GOTO 2950\r"
    "2940  PRINT \"THE UNION HAS WON THE WAR\"\r"
    "2950  PRINT\r"
    "2960  IF R1=0 THEN 3100\r"
    "2970  PRINT \"FOR THE \"W+L+W0\" BATTLES FOUGHT (EXCUDING RERUNS)\"\r"
    "2980  PRINT \" \",\" \",\" \";\r"
    "2990  PRINT \"CONFEDERACY\",\" UNION\"\r"
    "3000  PRINT \"HISTORICAL LOSSES\",INT(P1+.5),INT(P2+.5)\r"
    "3010  PRINT \"SIMULATED LOSSES\",INT(T1+.5),INT(T2+.5)\r"
    "3020  PRINT\r"
    "3030  PRINT \"    % OF "
    "ORIGINAL\",INT(100*(T1/P1)+.5),INT(100*(T2/P2)+.5)\r"
    "3040  IF B$=\"YES\" THEN 3100\r"
    "3050  PRINT\r"
    "3060  PRINT \"UNION INTELLIGENCE SUGGESTS THAT THE SOUTH USED \"\r"
    "3070  PRINT \"STRATEGIES 1, 2, 3, 4 IN THE FOLLOWING PERCENTAGES\"\r"
    "3080  PRINT S(1);S2(2);S(3);S(4)\r"
    "3090  REM---------------------------------\r"
    "3100  STOP\r"
    "3110  REM - UNION STRATEGY IS COMPUTER CHOSEN\r"
    "3120  PRINT \"UNION STRATEGY IS \";\r"
    "3130  IF A <> 0 THEN 3180\r"
    "3140  INPUT Y2\r"
    "3150  IF Y2 <=0 THEN 3160\r"
    "3155  IF Y2<5 THEN 3290\r"
    "3160  PRINT \"ENTER 1 , 2 ,3 , OR 4 (USUALLY PREVIOUS UNION STRATEGY)\"\r"
    "3170  GOTO 3140\r"
    "3180  LET S0=0\r"
    "3190  LET R=100*RND(0)\r"
    "3200  FOR I=1 TO 4\r"
    "3210  LET S0=S0+S(I)\r"
    "3220  REM - IF ACTUAL STRATEGY INFO IS IN PROGRAM DATA STATEMENTS\r"
    "3230  REM   THEN R-100 IS EXTRA WEIGHT GIVEN TO THAT STATEGY.\r"
    "3240  IF R<S0 THEN 3270\r"
    "3250  NEXT I\r"
    "3260  REM - IF ACTUAL STRAT. IN,THEN HERE IS Y2= HIST. STRAT.\r"
    "3270  LET Y2=I\r"
    "3280  PRINT Y2\r"
    "3290  RETURN\r"
    "3300  REM LEARN  PRESENT STRATEGY, START FORGETTING OLD ONES\r"
    "3310  REM - PRESENT STRATEGY OF SOUTH GAINS 3*S, OTHERS LOSE S\r"
    "3320  REM   PROBABILITY POINTS, UNLESS A STRATEGY FALLS BELOW 5%.\r"
    "3330  LET S=3\r"
    "3340  LET S0=0\r"
    "3350  FOR I=1 TO 4\r"
    "3360  IF S(I) <= 5 THEN 3390\r"
    "3370  LET S(I)=S(I)-S\r"
    "3380  LET S0=S0+S\r"
    "3390  NEXT I\r"
    "3400  LET S(Y)=S(Y)+S0\r"
    "3410  RETURN\r"
    "3420  REM - HISTORICAL DATA...CAN ADD MORE (STRAT.,ETC) BY INSERTING\r"
    "3430  REM   DATA STATEMENTS AFTER APPRO. INFO, AND ADJUSTING READ\r"
    "3440  DATA \"BULL RUN\",18000,18500,1967,2708,1\r"
    "3450  DATA \"SHILOH\",40000.,44894.,10699,13047,3\r"
    "3460  DATA \"SEVEN DAYS\",95000.,115000.,20614,15849,3\r"
    "3470  DATA \"SECOND BULL RUN\",54000.,63000.,10000,14000,2\r"
    "3480  DATA \"ANTIETAM\",40000.,50000.,10000,12000,3\r"
    "3490  DATA \"FREDERICKSBURG\",75000.,120000.,5377,12653,1\r"
    "3500  DATA \"MURFREESBORO\",38000.,45000.,11000,12000,1\r"
    "3510  DATA \"CHANCELLORSVILLE\",32000,90000.,13000,17197,2\r"
    "3520  DATA \"VICKSBURG\",50000.,70000.,12000,19000,1\r"
    "3530  DATA \"GETTYSBURG\",72500.,85000.,20000,23000,3\r"
    "3540  DATA \"CHICKAMAUGA\",66000.,60000.,18000,16000,2\r"
    "3550  DATA \"CHATTANOOGA\",37000.,60000.,36700.,5800,2\r"
    "3560  DATA \"SPOTSYLVANIA\",62000.,110000.,17723,18000,2\r"
    "3570  DATA \"ATLANTA\",65000.,100000.,8500,3700,1\r"
    "3580  PRINT \"JULY 21, 1861.  GEN. BEAUREGARD, COMMANDING THE SOUTH, "
    "MET\"\r"
    "3590  PRINT \"UNION FORCES WITH GEN. MCDOWELL IN A PREMATURE BATTLE AT\"\r"
    "3600  PRINT \"BULL RUN. GEN. JACKSON HELPED PUSH BACK THE UNION "
    "ATTACK.\"\r"
    "3610  GOTO 1150\r"
    "3620  PRINT \"APRIL 6-7, 1862.  THE CONFEDERATE SURPRISE ATTACK AT\"\r"
    "3630  PRINT \"SHILOH FAILED DUE TO POOR ORGANIZATION.\"\r"
    "3640  GOTO 1150\r"
    "3650  PRINT \"JUNE 25-JULY 1, 1862.  GENERAL LEE (CSA) UPHELD THE\"\r"
    "3660  PRINT \"OFFENSIVE THROUGHOUT THE BATTLE AND FORCED GEN. "
    "MCCLELLAN\"\r"
    "3670  PRINT \"AND THE UNION FORCES AWAY FROM RICHMOND.\"\r"
    "3680  GOTO 1150\r"
    "3690  PRINT \"AUG 29-30, 1862.  THE COMBINED CONFEDERATE FORCES UNDER\";\r"
    "3695  PRINT \" LEE\"\r"
    "3700  PRINT \"AND JACKSON DROVE THE UNION FORCES BACK INTO WASHINGTON.\"\r"
    "3710  GOTO 1150\r"
    "3720  PRINT \"SEPT 17, 1862.  THE SOUTH FAILED TO INCORPORATE MARYLAND\"\r"
    "3730  PRINT \"INTO THE CONFEDERACY.\"\r"
    "3740  GOTO 1150\r"
    "3750  PRINT \"DEC 13, 1862.  THE CONFEDERACY UNDER LEE SUCCESSFULLY\"\r"
    "3760  PRINT \"REPULSED AN ATTACK BY THE UNION UNDER GEN. BURNSIDE.\"\r"
    "3770  GOTO 1150\r"
    "3780  PRINT \"DEC 31, 1862.  THE SOUTH UNDER GEN. BRAGG WON A CLOSE \";\r"
    "3785  PRINT \"BATTLE.\"\r"
    "3790  GOTO 1150\r"
    "3800  PRINT \"MAY 1-6, 1863.  THE SOUTH HAD A COSTLY VICTORY AND LOST\"\r"
    "3810  PRINT \"ONE OF THEIR OUTSTANDING GENERALS, 'STONEWALL' JACKSON.\"\r"
    "3820  GOTO 1150\r"
    "3830  PRINT \"JULY 4, 1863.  VICKSBURG WAS A COSTLY DEFEAT FOR THE "
    "SOUTH\"\r"
    "3840  PRINT \"BECAUSE IT GAVE THE UNION ACCESS TO THE MISSISSIPPI.\"\r"
    "3850  GOTO 1150\r"
    "3860  PRINT \"JULY 1-3, 1863.  A SOUTHERN MISTAKE BY GEN. LEE AT \";\r"
    "3865  PRINT \"GETTYSBURG\"\r"
    "3870  PRINT \"COST THEM ONE OF THE MOST CRUCIAL BATTLES OF THE WAR.\"\r"
    "3880  GOTO 1150\r"
    "3890  PRINT \"SEPT. 15, 1863. CONFUSION IN A FOREST NEAR CHICKAMAUGA "
    "LED\"\r"
    "3900  PRINT \"TO A COSTLY SOUTHERN VICTORY.\"\r"
    "3910  GOTO 1150\r"
    "3920  PRINT \"NOV. 25, 1863. AFTER THE SOUTH HAD SIEGED GEN. "
    "ROSENCRANS'\"\r"
    "3930  PRINT \"ARMY FOR THREE MONTHS, GEN. GRANT BROKE THE SIEGE.\"\r"
    "3940  GOTO 1150\r"
    "3950  PRINT \"MAY 5, 1864.  GRANT'S PLAN TO KEEP LEE ISOLATED BEGAN TO\"\r"
    "3960  PRINT \"FAIL HERE, AND CONTINUED AT COLD HARBOR AND PETERSBURG.\"\r"
    "3970  GOTO 1150\r"
    "3980  PRINT \"AUGUST, 1864.  SHERMAN AND THREE VETERAN ARMIES "
    "CONVERGED\"\r"
    "3990  PRINT \"ON ATLANTA AND DEALT THE DEATH BLOW TO THE CONFEDERACY.\"\r"
    "4000  GOTO 1150\r"
    "4010  END\r";
