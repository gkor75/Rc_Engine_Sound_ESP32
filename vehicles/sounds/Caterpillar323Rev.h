const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 3139;
const signed char revSamples[] = {//0
0, -1, 0, 1, 2, 4, 7, 9, 11, 13, 15, 16, 16, 15, 14, 12, //16
10, 4, 0, -4, -8, -12, -15, -18, -21, -22, -21, -20, -18, -12, -7, 0, //32
6, 12, 22, 28, 35, 40, 46, 50, 54, 57, 59, 58, 56, 54, 48, 44, //48
40, 35, 30, 24, 19, 16, 12, 8, 6, 1, -1, -2, -3, -4, -3, -1, //64
1, 2, 5, 7, 10, 14, 16, 17, 19, 20, 22, 23, 22, 21, 20, 19, //80
18, 17, 15, 13, 12, 13, 15, 16, 18, 20, 22, 26, 30, 32, 33, 34, //96
34, 33, 32, 30, 29, 27, 24, 22, 21, 21, 20, 19, 17, 15, 13, 12, //112
12, 11, 13, 14, 15, 17, 18, 21, 22, 22, 23, 23, 23, 23, 23, 22, //128
22, 21, 19, 16, 14, 12, 10, 9, 6, 4, 3, 1, -2, -4, -7, -9, //144
-11, -13, -15, -18, -20, -21, -23, -24, -27, -30, -31, -32, -33, -34, -35, -36, //160
-36, -35, -33, -31, -28, -26, -23, -21, -19, -17, -14, -12, -10, -8, -7, -5, //176
-3, -1, 1, 2, 4, 7, 8, 10, 11, 10, 9, 6, 3, -1, -6, -11, //192
-16, -24, -29, -34, -38, -42, -47, -50, -53, -55, -56, -57, -55, -54, -53, -52, //208
-51, -48, -43, -41, -38, -34, -30, -22, -18, -14, -11, -8, -5, -1, 2, 4, //224
6, 8, 11, 13, 14, 15, 15, 16, 15, 15, 14, 14, 13, 11, 8, 4, //240
0, -4, -9, -13, -18, -20, -22, -23, -23, -23, -22, -21, -21, -21, -23, -24, //256
-25, -26, -27, -28, -29, -28, -27, -26, -25, -23, -21, -21, -20, -19, -18, -17, //272
-17, -18, -19, -20, -21, -21, -21, -21, -20, -20, -18, -16, -14, -13, -11, -10, //288
-8, -5, -4, -2, 0, 1, 2, 2, 2, 2, 0, -2, -7, -10, -14, -18, //304
-22, -25, -29, -31, -33, -35, -37, -38, -39, -40, -40, -40, -40, -39, -37, -35, //320
-32, -29, -25, -18, -12, -7, -2, 4, 11, 16, 20, 24, 26, 27, 28, 26, //336
23, 21, 17, 14, 7, 2, -3, -9, -14, -21, -25, -28, -30, -30, -29, -24, //352
-20, -15, -9, -2, 6, 17, 24, 32, 39, 43, 50, 53, 55, 56, 57, 57, //368
54, 52, 50, 48, 45, 41, 35, 31, 26, 22, 18, 13, 11, 8, 7, 6, //384
5, 4, 3, 3, 1, 0, 0, 0, 0, 1, 2, 3, 6, 8, 11, 14, //400
16, 19, 23, 25, 28, 31, 34, 37, 39, 41, 43, 45, 46, 47, 47, 46, //416
45, 44, 40, 35, 30, 25, 20, 15, 11, 6, 4, 3, 4, 3, 5, 7, //432
10, 14, 18, 23, 31, 37, 44, 50, 56, 66, 70, 73, 76, 76, 76, 73, //448
70, 65, 59, 53, 47, 37, 31, 26, 20, 13, 6, 1, -3, -7, -11, -13, //464
-16, -17, -17, -17, -17, -15, -14, -12, -9, -6, -4, 1, 3, 5, 8, 11, //480
13, 16, 17, 18, 19, 20, 21, 23, 23, 21, 20, 18, 13, 9, 4, -1, //496
-5, -8, -12, -13, -15, -16, -16, -17, -17, -17, -16, -16, -16, -16, -16, -17, //512
-18, -19, -21, -25, -27, -30, -34, -37, -39, -44, -47, -50, -53, -56, -58, -58, //528
-57, -54, -51, -46, -38, -32, -26, -22, -17, -12, -6, -4, -2, 0, 3, 5, //544
6, 5, 4, 2, -1, -7, -12, -18, -25, -32, -39, -48, -54, -60, -64, -68, //560
-71, -73, -72, -71, -69, -66, -60, -56, -51, -45, -39, -34, -25, -18, -11, -4, //576
4, 14, 19, 23, 27, 29, 31, 31, 30, 27, 24, 21, 15, 11, 6, 1, //592
-4, -10, -18, -23, -27, -30, -31, -33, -32, -31, -30, -26, -23, -17, -11, -5, //608
0, 8, 15, 23, 28, 33, 36, 38, 38, 37, 35, 30, 25, 18, 7, 0, //624
-10, -19, -28, -37, -47, -53, -60, -65, -68, -70, -70, -70, -70, -68, -65, -61, //640
-57, -53, -49, -43, -37, -28, -21, -14, -8, -3, 3, 9, 11, 12, 12, 10, //656
3, -2, -7, -13, -20, -27, -37, -43, -49, -56, -61, -66, -71, -74, -77, -77, //672
-77, -74, -71, -66, -60, -53, -44, -32, -22, -12, -4, 4, 11, 20, 24, 27, //688
29, 30, 29, 27, 25, 22, 18, 13, 6, 1, -4, -8, -11, -15, -17, -16, //704
-15, -10, -5, 4, 12, 19, 27, 36, 44, 53, 58, 63, 66, 68, 69, 68, //720
67, 66, 64, 62, 57, 52, 47, 42, 35, 28, 18, 10, 3, -4, -10, -17, //736
-21, -25, -26, -27, -28, -27, -25, -21, -18, -15, -11, -4, 1, 6, 10, 14, //752
21, 25, 28, 31, 32, 33, 32, 31, 29, 26, 22, 18, 13, 10, 7, 4, //768
3, 1, 2, 4, 6, 9, 13, 17, 21, 25, 28, 31, 34, 38, 41, 43, //784
44, 46, 47, 48, 48, 48, 48, 47, 45, 44, 42, 41, 39, 37, 32, 28, //800
24, 19, 13, 4, -3, -11, -18, -25, -31, -38, -42, -45, -45, -44, -43, -39, //816
-36, -32, -28, -24, -16, -11, -6, 0, 5, 9, 14, 16, 17, 16, 13, 11, //832
5, 0, -6, -12, -18, -28, -33, -38, -43, -46, -49, -50, -50, -48, -46, -42, //848
-37, -29, -24, -19, -13, -8, -1, 3, 7, 11, 14, 17, 18, 19, 18, 17, //864
15, 12, 9, 6, 4, 2, -1, -5, -6, -7, -8, -8, -7, -6, -4, -1, //880
2, 6, 12, 17, 21, 26, 30, 33, 38, 41, 44, 44, 44, 43, 43, 42, //896
40, 38, 37, 34, 32, 30, 29, 27, 25, 22, 19, 16, 12, 7, 3, -3, //912
-8, -14, -19, -24, -30, -35, -40, -45, -49, -53, -59, -62, -64, -65, -65, -64, //928
-59, -56, -51, -46, -40, -31, -26, -21, -15, -10, -5, 2, 6, 11, 13, 15, //944
16, 17, 18, 16, 15, 12, 9, 7, 5, 3, 0, -3, -6, -8, -8, -9, //960
-10, -11, -11, -10, -10, -9, -9, -8, -7, -6, -5, -4, -2, 1, 3, 5, //976
8, 9, 10, 13, 13, 13, 13, 12, 10, 8, 7, 6, 5, 5, 5, 6, //992
7, 8, 9, 10, 13, 14, 16, 18, 20, 23, 25, 27, 29, 30, 30, 30, //1008
29, 27, 25, 22, 17, 11, 6, 0, -4, -9, -16, -19, -22, -24, -25, -25, //1024
-23, -20, -16, -11, -6, 4, 11, 19, 27, 33, 41, 51, 58, 64, 69, 74, //1040
79, 85, 88, 89, 89, 88, 85, 82, 77, 72, 67, 61, 51, 45, 38, 31, //1056
24, 19, 11, 7, 4, 2, 1, 3, 5, 6, 9, 11, 15, 22, 26, 30, //1072
34, 39, 43, 52, 56, 59, 62, 65, 67, 67, 66, 64, 62, 59, 52, 48, //1088
42, 36, 31, 26, 18, 13, 10, 7, 5, 4, 3, 4, 5, 7, 10, 15, //1104
18, 21, 24, 26, 29, 30, 30, 30, 30, 29, 29, 29, 29, 28, 27, 26, //1120
27, 26, 24, 24, 22, 20, 19, 17, 17, 17, 18, 20, 22, 24, 26, 29, //1136
32, 37, 40, 42, 44, 44, 43, 39, 35, 32, 28, 24, 16, 12, 7, 2, //1152
-2, -7, -14, -18, -20, -22, -24, -25, -26, -27, -27, -26, -25, -23, -21, -18, //1168
-15, -11, -6, -1, 2, 5, 7, 9, 14, 16, 18, 20, 22, 24, 24, 22, //1184
20, 17, 14, 10, 4, -1, -7, -11, -15, -23, -27, -31, -35, -37, -40, -45, //1200
-47, -49, -50, -50, -49, -47, -46, -43, -41, -38, -34, -34, -33, -33, -32, -33, //1216
-36, -39, -43, -46, -50, -55, -62, -67, -73, -77, -82, -89, -93, -96, -99, -102, //1232
-104, -107, -107, -107, -107, -105, -104, -99, -96, -93, -90, -87, -81, -76, -73, -70, //1248
-67, -64, -60, -58, -56, -54, -54, -52, -51, -51, -50, -49, -50, -53, -55, -58, //1264
-62, -64, -67, -70, -72, -75, -77, -78, -79, -78, -78, -78, -76, -76, -73, -70, //1280
-65, -61, -57, -53, -46, -41, -37, -34, -32, -32, -31, -32, -33, -35, -37, -40, //1296
-43, -46, -49, -51, -53, -54, -55, -56, -57, -58, -58, -56, -54, -53, -53, -53, //1312
-51, -50, -49, -47, -45, -44, -43, -43, -42, -41, -42, -45, -48, -50, -53, -57, //1328
-60, -63, -64, -66, -66, -66, -66, -64, -62, -61, -60, -59, -58, -55, -52, -50, //1344
-48, -47, -43, -41, -38, -34, -31, -28, -27, -25, -23, -23, -23, -23, -24, -25, //1360
-26, -27, -28, -29, -29, -28, -26, -23, -19, -13, -8, -2, 2, 7, 14, 19, //1376
24, 28, 32, 36, 41, 45, 47, 48, 48, 49, 46, 44, 42, 40, 37, 33, //1392
31, 28, 26, 25, 23, 24, 25, 27, 30, 34, 38, 47, 53, 59, 67, 74, //1408
83, 90, 97, 103, 110, 115, 121, 124, 126, 127, 127, 126, 122, 119, 113, 107, //1424
101, 93, 86, 80, 74, 69, 65, 60, 57, 54, 52, 51, 51, 52, 54, 57, //1440
60, 64, 70, 75, 80, 84, 90, 95, 102, 106, 109, 111, 113, 115, 112, 110, //1456
106, 101, 96, 87, 79, 72, 64, 56, 48, 38, 31, 24, 19, 14, 8, 5, //1472
3, 3, 4, 6, 13, 18, 25, 33, 40, 48, 60, 66, 72, 78, 83, 89, //1488
91, 91, 91, 91, 89, 83, 79, 75, 71, 67, 61, 52, 44, 36, 29, 21, //1504
9, 2, -5, -10, -15, -18, -22, -22, -21, -19, -16, -12, -7, -3, 1, 5, //1520
7, 10, 11, 12, 14, 13, 13, 11, 9, 8, 6, 4, 2, -1, -2, -3, //1536
-5, -6, -9, -9, -9, -9, -9, -9, -7, -5, -3, -1, 1, 2, 5, 7, //1552
10, 12, 15, 20, 23, 26, 29, 31, 32, 32, 31, 30, 29, 27, 25, 22, //1568
20, 17, 14, 11, 7, 5, 3, 0, -1, -2, -3, -2, -2, -2, 0, 0, //1584
4, 7, 9, 12, 15, 21, 25, 28, 31, 34, 36, 40, 41, 42, 43, 45, //1600
46, 47, 48, 49, 48, 49, 48, 50, 50, 49, 48, 48, 47, 46, 44, 42, //1616
40, 36, 33, 29, 23, 17, 11, 1, -4, -9, -14, -17, -20, -24, -25, -25, //1632
-25, -24, -21, -18, -15, -13, -10, -8, -4, -1, 1, 3, 5, 8, 12, 15, //1648
16, 16, 17, 17, 16, 15, 13, 11, 10, 7, 5, 3, 1, -2, -3, -6, //1664
-8, -10, -11, -13, -16, -18, -21, -25, -27, -29, -32, -34, -37, -38, -39, -40, //1680
-40, -40, -39, -39, -39, -37, -35, -33, -33, -31, -30, -29, -27, -26, -24, -22, //1696
-19, -15, -13, -11, -9, -7, -6, -5, -5, -5, -5, -7, -9, -12, -16, -18, //1712
-20, -22, -24, -25, -26, -27, -26, -24, -23, -22, -20, -19, -17, -15, -13, -12, //1728
-12, -11, -11, -12, -12, -14, -14, -16, -18, -19, -21, -24, -25, -26, -28, -28, //1744
-27, -25, -23, -21, -18, -15, -14, -15, -15, -19, -22, -25, -29, -34, -39, -46, //1760
-51, -56, -60, -66, -74, -78, -82, -86, -89, -91, -92, -91, -90, -89, -85, -82, //1776
-74, -69, -64, -57, -52, -44, -40, -36, -34, -33, -32, -34, -37, -40, -44, -48, //1792
-52, -58, -63, -68, -73, -77, -82, -85, -87, -89, -92, -92, -92, -91, -89, -86, //1808
-81, -77, -67, -61, -54, -47, -41, -31, -26, -21, -15, -12, -8, -3, -2, 1, //1824
2, 3, 4, 3, 4, 3, 1, 1, -2, -3, -5, -7, -8, -9, -10, -10, //1840
-9, -9, -9, -9, -7, -6, -3, 0, 3, 9, 13, 18, 21, 24, 27, 30, //1856
31, 31, 31, 30, 30, 29, 29, 28, 26, 25, 24, 25, 26, 25, 26, 27, //1872
27, 28, 29, 28, 28, 27, 23, 21, 19, 16, 13, 7, 3, -2, -7, -11, //1888
-15, -18, -20, -23, -24, -25, -26, -26, -26, -25, -22, -19, -14, -10, -6, -2, //1904
1, 4, 7, 9, 10, 12, 14, 15, 16, 17, 18, 19, 20, 22, 23, 24, //1920
26, 27, 28, 28, 29, 30, 31, 32, 31, 30, 29, 28, 27, 25, 21, 17, //1936
14, 13, 12, 11, 10, 10, 12, 15, 19, 24, 28, 33, 37, 41, 45, 48, //1952
51, 52, 52, 51, 47, 41, 35, 27, 19, 11, 0, -6, -12, -17, -22, -25, //1968
-29, -29, -29, -27, -25, -21, -13, -6, 2, 8, 15, 25, 31, 35, 38, 41, //1984
42, 42, 43, 43, 42, 41, 41, 40, 39, 39, 39, 37, 37, 36, 36, 36, //2000
35, 34, 35, 35, 35, 35, 35, 35, 37, 39, 40, 41, 42, 42, 43, 44, //2016
43, 43, 42, 40, 40, 40, 38, 36, 33, 28, 24, 19, 13, 8, -3, -9, //2032
-15, -21, -26, -30, -37, -39, -41, -43, -43, -42, -40, -39, -35, -32, -29, -24, //2048
-20, -15, -10, -4, 1, 8, 11, 14, 17, 18, 17, 15, 12, 8, 3, -2, //2064
-10, -16, -22, -27, -30, -34, -38, -41, -43, -43, -44, -44, -44, -43, -41, -39, //2080
-39, -36, -33, -29, -24, -20, -15, -8, -5, -2, 1, 2, 3, 3, 3, 4, //2096
3, 2, 2, 2, 1, 0, -1, -2, -2, -3, -4, -4, -5, -4, -5, -5, //2112
-4, -3, -3, 0, 1, 2, 2, 2, 2, 1, 0, -2, -5, -7, -9, -11, //2128
-13, -16, -18, -20, -23, -25, -26, -27, -28, -27, -25, -23, -19, -16, -12, -7, //2144
-5, -3, -1, 0, 1, 2, 3, 3, 3, 4, 3, 1, 0, -2, -4, -7, //2160
-12, -16, -20, -24, -28, -33, -39, -43, -47, -49, -50, -51, -50, -48, -46, -43, //2176
-40, -36, -34, -31, -27, -24, -21, -16, -13, -10, -6, -3, -1, 0, 0, -1, //2192
-3, -5, -8, -9, -11, -13, -15, -17, -18, -19, -18, -18, -18, -18, -18, -18, //2208
-19, -18, -19, -22, -24, -27, -29, -32, -33, -36, -36, -36, -35, -33, -30, -28, //2224
-26, -24, -21, -18, -15, -14, -13, -12, -11, -12, -14, -15, -17, -19, -21, -23, //2240
-24, -25, -25, -25, -24, -22, -21, -19, -17, -14, -11, -6, -2, 2, 5, 9, //2256
15, 19, 23, 27, 29, 31, 34, 34, 36, 36, 34, 33, 30, 28, 26, 23, //2272
19, 14, 11, 7, 5, 3, 1, -2, -3, -6, -9, -11, -13, -16, -18, -20, //2288
-21, -21, -19, -16, -13, -10, -7, -4, 1, 4, 7, 11, 13, 14, 16, 16, //2304
16, 15, 13, 9, 6, 3, -2, -7, -11, -18, -23, -29, -34, -40, -44, -47, //2320
-48, -49, -47, -44, -38, -32, -26, -18, -9, -3, 10, 17, 25, 32, 37, 42, //2336
47, 48, 48, 48, 49, 46, 43, 39, 35, 30, 25, 18, 12, 7, 2, -1, //2352
-4, -4, -4, -3, -1, 2, 7, 9, 10, 10, 11, 12, 12, 13, 14, 14, //2368
14, 16, 16, 16, 15, 14, 13, 10, 9, 10, 11, 13, 15, 18, 20, 23, //2384
26, 28, 30, 32, 33, 35, 37, 38, 38, 38, 38, 38, 37, 36, 36, 35, //2400
34, 35, 37, 37, 37, 38, 38, 38, 38, 38, 37, 35, 34, 33, 31, 29, //2416
28, 27, 25, 23, 22, 21, 21, 21, 20, 19, 20, 20, 20, 22, 23, 24, //2432
26, 28, 29, 31, 32, 35, 35, 36, 37, 36, 36, 34, 32, 31, 28, 25, //2448
23, 19, 16, 15, 12, 8, 3, -1, -5, -11, -17, -24, -35, -44, -53, -61, //2464
-69, -75, -81, -83, -84, -84, -83, -80, -77, -73, -69, -65, -62, -56, -52, -48, //2480
-45, -42, -40, -38, -36, -35, -34, -33, -34, -34, -36, -37, -38, -39, -43, -44, //2496
-45, -45, -45, -44, -43, -40, -37, -35, -31, -27, -24, -22, -19, -17, -15, -12, //2512
-10, -7, -3, 0, 7, 12, 18, 22, 26, 31, 36, 39, 41, 42, 44, 43, //2528
41, 40, 36, 33, 30, 23, 19, 15, 11, 8, 5, 3, 4, 6, 8, 12, //2544
16, 24, 29, 35, 38, 41, 45, 47, 48, 49, 48, 46, 42, 38, 35, 31, //2560
27, 23, 16, 13, 10, 8, 5, 3, 3, 5, 7, 8, 10, 11, 13, 14, //2576
14, 14, 13, 11, 12, 12, 11, 10, 9, 9, 8, 8, 7, 7, 7, 8, //2592
8, 8, 8, 8, 11, 13, 13, 15, 17, 22, 24, 27, 31, 35, 38, 44, //2608
47, 49, 50, 51, 53, 53, 53, 52, 52, 51, 51, 49, 45, 43, 41, 37, //2624
29, 23, 16, 10, 4, -3, -12, -18, -23, -28, -32, -36, -38, -39, -40, -40, //2640
-40, -40, -39, -38, -37, -34, -30, -27, -24, -20, -19, -17, -15, -15, -14, -14, //2656
-14, -13, -12, -11, -9, -6, -4, -2, -2, -2, -2, -3, -4, -6, -6, -6, //2672
-6, -6, -6, -6, -6, -7, -7, -8, -8, -8, -7, -6, -5, -3, 2, 6, //2688
12, 17, 22, 28, 38, 43, 47, 52, 55, 55, 55, 54, 51, 47, 42, 34, //2704
29, 26, 23, 20, 18, 16, 16, 16, 17, 18, 20, 22, 25, 28, 31, 34, //2720
38, 41, 44, 45, 46, 46, 44, 41, 38, 33, 28, 19, 12, 5, -2, -9, //2736
-16, -26, -33, -40, -47, -52, -57, -62, -64, -66, -66, -65, -61, -57, -53, -48, //2752
-42, -37, -29, -25, -21, -16, -13, -10, -6, -6, -7, -8, -10, -16, -20, -25, //2768
-31, -35, -39, -46, -48, -50, -52, -52, -51, -50, -48, -45, -41, -36, -27, -19, //2784
-12, -4, 5, 13, 26, 34, 39, 44, 47, 48, 48, 45, 42, 36, 29, 16, //2800
7, -3, -13, -23, -33, -48, -56, -63, -69, -73, -77, -77, -76, -73, -68, -61, //2816
-49, -38, -27, -15, -4, 6, 18, 24, 26, 27, 27, 23, 19, 13, 6, -1, //2832
-10, -23, -31, -41, -49, -58, -65, -73, -78, -80, -81, -80, -76, -71, -64, -56, //2848
-46, -35, -19, -7, 4, 17, 28, 39, 53, 61, 69, 75, 79, 81, 81, 79, //2864
75, 70, 62, 47, 36, 24, 11, -3, -16, -35, -47, -57, -67, -75, -85, -91, //2880
-94, -96, -95, -93, -86, -78, -70, -60, -49, -39, -23, -14, -6, 0, 4, 8, //2896
8, 6, 3, -1, -5, -15, -22, -30, -39, -47, -56, -68, -76, -83, -90, -97, //2912
-104, -108, -111, -111, -113, -113, -110, -108, -104, -100, -96, -91, -83, -77, -71, -65, //2928
-59, -51, -46, -41, -37, -33, -29, -26, -24, -23, -24, -24, -25, -28, -30, -32, //2944
-34, -36, -38, -40, -42, -44, -45, -45, -46, -46, -46, -46, -46, -46, -46, -46, //2960
-46, -46, -46, -46, -45, -43, -41, -39, -37, -35, -33, -30, -29, -28, -27, -27, //2976
-26, -24, -23, -22, -21, -20, -19, -18, -17, -17, -16, -15, -15, -14, -12, -9, //2992
-6, -2, 2, 7, 13, 22, 27, 32, 38, 44, 50, 56, 60, 65, 69, 73, //3008
80, 83, 85, 87, 89, 89, 87, 84, 82, 77, 73, 69, 61, 56, 52, 48, //3024
44, 39, 38, 37, 38, 39, 41, 46, 51, 57, 63, 68, 73, 82, 87, 92, //3040
97, 100, 104, 105, 105, 104, 103, 101, 98, 95, 92, 89, 87, 85, 81, 78, //3056
74, 69, 65, 60, 56, 52, 47, 43, 39, 36, 34, 32, 30, 30, 30, 30, //3072
31, 32, 33, 34, 35, 36, 36, 35, 34, 32, 28, 24, 19, 15, 10, 3, //3088
-1, -4, -7, -10, -10, -10, -9, -7, -5, -2, 3, 9, 13, 17, 22, 26, //3104
32, 36, 40, 43, 45, 46, 46, 45, 43, 40, 36, 32, 25, 19, 14, 9, //3120
3, -3, -8, -11, -14, -17, -18, -20, -20, -20, -19, -17, -15, -12, -10, -7, //3136
-5, -3, 0, };
