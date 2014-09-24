#include "contiki.h"
#include "CuTest.h"

int16_t inputpoints[] =
{
-814,13052,9542,
518,12304,8796,
2618,12316,9648,
3760,12008,9874,
4232,12082,10472,
6796,10874,11070,
4616,11144,10982,
4880,10640,10222,
8084,9848,11006,
4896,11032,11286,
4718,11242,11428,
5254,11414,11994,
5556,12232,10654,
3386,11924,12216,
4036,11462,11632,
4866,13644,12184,
4100,11108,10588,
3232,10904,10530,
3560,10182,12046,
4940,9766,10498,
4376,11754,11732,
4846,9426,11694,
3330,10774,12058,
4612,9976,11350,
3358,10246,11590,
3764,9972,11752,
3506,9894,11942,
4066,10072,12192,
3686,11038,10596,
3494,10584,10390,
1696,4444,5233,
2040,4909,5217,
2247,5246,4566,
1066,6172,5259,
1311,5205,5495,
1423,6350,4839,
1287,6209,4917,
1620,5497,5231,
2183,4589,5414,
2722,4032,5375,
2324,3782,5135,
1656,3752,4760,
2090,3878,4559,
2358,4004,3514,
2076,4142,2268,
1808,3981,2170,
1545,3812,3012,
1367,3577,4619,
1118,3248,5819,
926,2987,8125,
899,2925,9056,
1174,2744,9741,
1348,2414,10117,
1567,2184,9500,
1749,2027,8686,
1749,1798,8101,
1642,1752,7457,
1422,1795,7082,
1308,1833,6827,
1048,1884,6803,
717,1967,6689,
564,1966,6745,
590,1894,6977,
481,1883,7010,
-40,1904,10321,
-418,1604,16061,
-830,762,17049,
-205,-563,13732,
960,-1179,10318,
1584,-825,8082,
1708,112,7116,
1132,967,7286,
400,1432,8119,
42,1641,8665,
132,1477,8992,
385,1183,8897,
650,900,8796,
865,670,8718,
866,659,8532,
1040,595,8431,
1134,734,8354,
1173,840,8365,
1063,872,8444,
1118,936,8275,
1306,853,8055,
1595,738,7913,
1728,747,7817,
1848,751,7761,
1889,808,7787,
1541,909,7791,
1030,1103,7956,
1036,1324,7775,
939,1344,7632,
870,1464,7650,
1014,1381,7544,
932,1385,7505,
672,995,7368,
963,1224,7582,
1220,1653,7560,
1361,1781,7612,
1274,1722,7530,
1128,1632,7631,
1137,1482,7741,
1237,1444,7874,
1332,1508,7909,
1417,1413,8032,
1346,1270,7994,
1193,1257,8037,
1003,1313,7757,
917,1302,7658,
725,1431,7602,
672,1545,7632,
583,1592,7628,
586,1456,7744,
1080,1697,7921,
1210,1871,7856,
1100,1736,7762,
979,1673,7666,
1185,1684,7810,
1506,1632,8008,
1633,1537,7959,
1677,1490,7918,
1790,1505,7962,
2006,1545,7924,
1881,1603,7889,
2211,1471,8021,
2215,1369,8053,
2256,1431,8193,
2206,1426,8251,
2083,1489,8151,
1653,1050,8173,
1813,1132,8502,
2122,1766,8879,
2105,1969,8820,
2253,2287,8811,
2105,1964,8953,
2133,1818,9238,
2180,1857,9209,
2322,1886,9250,
2357,1855,9508,
2344,1857,9829,
2514,1915,10007,
2559,1929,10202,
2685,1837,10492,
2576,1848,11046,
1500,2069,11598,
2002,2347,11216,
1448,2182,10963,
1015,2900,11181,
1208,3248,11227,
654,3948,10606,
-102,4492,10069,
-927,4799,9551,
-1268,5082,8590,
-2091,5144,7448,
-3445,5037,6461,
-4826,4613,5151,
-6453,3799,3315,
-8002,3215,1237,
-9443,2994,-1504,
-10842,2984,-4718,
-12362,3299,-8379,
-14190,3406,-11782,
-15131,2966,-14731,
-15077,2384,-18375,
-13943,1270,-21947,
-13398,2321,-20363,
-9062,6088,-17721,
-4751,2638,-16657,
-5463,-515,-17486,
-5637,-1617,-17687,
-3708,-2411,-17551,
-2583,-4434,-16984,
-1160,-6752,-16244,
347,-8818,-15467,
1666,-11168,-14694,
3253,-14373,-11131,
6634,-17248,-4076,
10035,-18534,4472,
12327,-18881,13429,
12252,-18162,19042,
12332,-16615,17738,
12701,-16628,13932,
14512,-18332,14966,
13932,-18014,14309,
14382,-17270,15003,
13594,-16399,13978,
14184,-16023,14090,
14244,-15120,12310,
14968,-13460,10927,
14609,-11459,10818,
13751,-9073,10874,
12186,-6700,10618,
11194,-5049,10758,
10549,-3819,11085,
8875,-3271,11354,
7645,-2968,10821,
6735,-2697,10096,
5803,-2358,9626,
5751,-2069,8946,
5162,-1854,8447,
5306,-1787,7786,
5458,-1808,7221,
5468,-1857,6827,
5492,-1741,6787,
5386,-1553,6421,
5177,-1486,6040,
5054,-1590,5747,
4755,-1512,5318,
4174,-1265,5088,
3708,-1033,4820,
3038,-715,4344,
2326,-637,3930,
1754,-740,3655,
1190,-791,3241,
692,-1041,3003,
175,-1109,2768,
-333,-1054,2967,
-751,-979,3222,
-1207,-1074,3721,
-1327,-942,4362,
-2931,-523,4364,
-3481,-71,4616,
-4721,633,4956,
-5623,1504,4818,
-6567,2591,4456,
-7025,3710,4126,
-7456,4440,4122,
-7582,4810,4190,
-7658,4989,4265,
-7368,4935,4596,
-6936,4908,5102,
-6655,4869,5559,
-6406,4685,5944,
-6062,4536,5977,
-5841,4388,6100,
-5756,4371,6144,
-5611,4484,6086,
-5501,4464,6050,
-5335,4479,6108,
-5175,4387,6098,
-5008,4318,6094,
-4801,4197,6030,
-4595,4089,5986,
-4479,4048,5985,
-4363,3994,5919,
-4170,3938,5828,
-3973,3749,5801,
-3844,3627,5847,
-3733,3533,5854,
-3643,3474,5902,
-3599,3457,6038,
-3448,3406,6061,
-3391,3410,6266,
-3324,3331,6357,
-3209,3361,6359,
-3066,3308,6393,
-2957,3194,6473,
-2954,3179,6612,
-2973,3209,6733,
-2960,3302,6726,
-3010,3398,6612,
-3034,3384,6613,
-3016,3378,6615,
-2972,3277,6582,
-2893,3237,6641,
-2895,3222,6680,
-3082,3448,6737,
-3149,3448,6731,
-3108,3427,6655,
-3043,3306,6713,
-2981,3186,6774,
-2903,3134,6832,
-2802,3158,6908,
-2838,3160,6873,
-2883,3157,6930,
-3036,3238,6920,
-3049,3381,6854,
-2981,3329,6939,
-2993,3175,6894,
-2914,3099,6870,
-2814,3175,6817,
-2716,3172,6661,
-2716,3147,6587,
-2666,3074,6560,
-2630,3137,6496,
-2669,3146,6504,
-2656,3126,6507,
-2642,3046,6498,
-2604,3017,6495,
-2513,3013,6406,
-2481,3023,6467,
-2521,2988,6306,
-2518,3050,6400,
-2668,3109,6438,
-2760,3109,6539,
-2825,3126,6527,
-2858,3176,6601,
-2902,3180,6700,
-2980,3191,6591,
-3010,3263,6526,
-3033,3222,6595,
-2930,3165,6642,
-2912,3111,6684,
-2918,3132,6685,
-2936,3198,6753,
-2960,3217,6726,
-3073,3209,6676,
-3077,3185,6797,
-3107,3194,6590,
-3099,3233,6641,
-3152,3210,6617,
-3103,3231,6638,
-3093,3220,6552,
-3097,3177,6546,
-3105,3200,6612,
-3002,3165,6537,
-3004,3197,6559,
-2907,3166,6503,
-2916,3155,6448,
-2898,3155,6386,
-2903,3118,6463,
-2908,3140,6460,
-2902,3140,6499,
-2940,3184,6425,
-3014,3192,6490,
-2985,3157,6493,
-3039,3148,6575,
-2982,3143,6607,
-3051,3158,6611,
-3115,3210,6547,
-3084,3213,6632,
-3075,3139,6607,
-3003,3197,6612,
-3012,3187,6639,
-3067,3193,6643,
-3035,3214,6658,
-3011,3205,6549,
-2977,3169,6585,
-2950,3142,6568,
-2929,3111,6560,
-2973,3167,6544,
-2937,3146,6580,
-2971,3164,6546,
-2966,3154,6500,
-2888,3098,6524,
-2886,3106,6537,
-2914,3116,6505,
-2951,3177,6473,
-2958,3137,6507,
-3008,3123,6521,
-2951,3161,6550,
-2990,3140,6591,
-2947,3152,6600,
-2975,3174,6489,
-2975,3201,6590,
-2998,3198,6555,
-2968,3180,6564,
-3016,3170,6523,
-3065,3178,6544,
-3037,3202,6553,
-3070,3174,6488,
-3140,3216,6499,
-3170,3202,6537,
-3117,3184,6463,
-3138,3208,6508,
-3065,3199,6484,
-3015,3143,6500,
-2970,3136,6491,
-2976,3165,6519,
-3017,3189,6419,
-3028,3203,6418,
-3039,3193,6421,
-3093,3208,6476,
-3058,3174,6491,
-3021,3159,6595,
-2936,3156,6591,
-2948,3173,6645,
-2882,3207,6588,
-2867,3173,6611,
-2910,3177,6599,
-2849,3137,6531,
-2952,3171,6580,
-2964,3138,6620,
-2995,3180,6518,
-3025,3151,6600,
-3010,3182,6594,
-3025,3189,6627,
-3050,3219,6599,
-3002,3186,6459,
-3006,3233,6500,
-3021,3203,6457,
-3008,3179,6345,
-2996,3242,6428,
-3010,3206,6413,
-2997,3188,6425,
-3031,3209,6449,
-3050,3232,6485,
-3025,3187,6427,
-2982,3233,6448,
-3006,3218,6462,
-3021,3180,6466,
-3014,3211,6625,
-3017,3257,6573,
-3071,3216,6623,
-3024,3223,6637,
-3033,3200,6673,
-3019,3216,6678,
-3138,3182,6715,
-3205,3093,6851,
-3328,3004,7168,
-3624,2758,7513,
-4288,1844,7692,
-3409,3011,8895,
-3167,3230,10183,
-3128,2831,11805,
-2518,2983,13756,
-2046,2742,15158,
-560,2314,15534,
299,2261,14721,
651,2556,13538,
574,3025,12470,
-321,3495,11531,
-161,3426,10326,
-1061,3068,8497,
-1732,3045,7284,
-2997,2682,6500,
-3074,2540,5422,
-3976,1730,2837,
-2694,1211,1220,
-3168,1126,-738,
-3472,989,-2902,
-3571,1044,-4376,
-3030,1369,-5206,
-4063,1657,-6443,
-4816,1364,-7422,
-4846,2326,-7656,
-6078,3444,-8065,
-5810,2525,-6637,
-6052,2200,-5938,
-6094,2127,-5809,
-5596,2153,-5693,
-5612,2129,-6409,
-5596,2109,-6596,
-5635,1590,-6927,
-6075,1626,-7243,
-6192,1873,-7208,
-6963,1918,-7521,
-7261,2218,-7721,
-7934,2569,-8006,
-8038,2434,-7998,
-8145,2500,-7795,
-7858,2723,-7787,
-7766,2687,-7582,
-7386,2691,-7379,
-7078,2750,-7115,
-6859,2892,-6704,
-6842,2987,-6421,
-6955,3091,-6382,
-7016,3328,-6483,
-7227,3492,-6434,
-7410,3583,-6408,
-7617,3809,-6073,
-7637,3870,-5866,
-7701,3862,-5766,
-7775,3860,-5455,
-7666,3819,-5169,
-7624,3705,-4749,
-7395,3762,-4390,
-7195,3762,-4088,
-6986,3659,-3559,
-6566,3837,-3121,
-6370,3804,-2648,
-5987,3719,-1944,
-5806,3745,-1335,
-5645,3821,-554,
-5432,3918,279,
-5327,3782,1135,
-5044,3667,2045,
-4705,3543,2710,
-4439,3477,3494,
-4262,3413,4049,
-3865,3261,4276,
-3312,3067,4327,
-2616,2725,4126,
-1970,2492,3942,
-1025,2212,3867,
-344,1893,3731,
369,1558,3801,
1065,1278,3878,
1561,826,4146,
2018,628,4545,
2563,628,5061,
2660,453,5780,
2934,325,6594,
2754,-128,7335,
3294,718,8699,
3184,699,9506,
3121,1000,10242,
2861,1116,10892,
2639,1450,11314,
2550,1734,11399,
};


void TestGesture(CuTest* tc)
{
  // test gesture
  gesture_init(0);

  for(int i = 0; i < sizeof(inputpoints) /sizeof(int16_t)/ 3; i+=3)
  {
    gesture_processdata(&inputpoints[i * 3]);
  }
}

CuSuite* GestureGetSuite(void)
{
	CuSuite* suite = CuSuiteNew("gesture");

  SUITE_ADD_TEST(suite, TestGesture);

  return suite;
}
