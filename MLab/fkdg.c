
#property copyright "路易提款机"
#property link      "路易提款机"
extern string tt0="--------更改固定手数下单------------";
extern bool IsFixLots=true;//固定定手数开关
extern double FixLots=0.1;//固定手数下单大小
extern string tt1="--------------------";
extern string t1 = "路易提款机";
extern double Lots = 0.01;
extern double LotExponent = 1.55;
extern int lotdecimal = 6;
extern double PipStep = 30.0;
double g_lots_112 = 10.0;
extern bool MM = FALSE;
extern double TakeProfit = 10.0;
bool gi_132 = FALSE;
double gd_136 = 20.0;
extern bool UseTrailingStop = FALSE;
extern double TrailStart = 13.0;
extern double TrailStop = 3.0;
extern double slip = 5.0;
extern string t3 = " 路易提款机A";
extern int MaxTrades_Hilo = 10;
bool gi_224 = FALSE;
double gd_228 = 48.0;
double g_pips_240 = 500.0;
double g_slippage_272;
extern int MagicNumber_Hilo = 112233;
double g_price_284;
double gd_292;
double gd_unused_300;
double gd_unused_308;
double gd_316;
double gd_324;
double g_price_332;
double g_bid_340;
double g_ask_348;
double gd_356;
double gd_364;
double gd_372;
bool gi_380;
string gs_384 = "路易提款机A";
int gi_392 = 0;
int gi_396;
int gi_400 = 0;
double gd_404;
int g_pos_412 = 0;
int gi_416;
double gd_420 = 0.0;
bool gi_428 = FALSE;
bool gi_432 = FALSE;
bool gi_436 = FALSE;
int gi_440;
bool gi_444 = FALSE;
double gd_448;
double gd_456;
extern string t4 = " 路易提款机B ";
extern int MaxTrades_15 = 10;
int g_timeframe_516 = PERIOD_H1;
double g_pips_528 = 500.0;
bool gi_552 = FALSE;
double gd_556 = 48.0;
double g_slippage_572;
extern int g_magic_176_15 = 223311;
double g_price_584;
double gd_592;
double gd_unused_600;
double gd_unused_608;
double g_price_616;
double g_bid_624;
double g_ask_632;
double gd_640;
double gd_648;
double gd_656;
bool gi_664;
string gs_668 = "路易提款机B";
int gi_676 = 0;
int gi_680;
int gi_684 = 0;
double gd_688;
int g_pos_696 = 0;
int gi_700;
double gd_704 = 0.0;
bool gi_712 = FALSE;
bool gi_716 = FALSE;
bool gi_720 = FALSE;
int gi_724;
bool gi_728 = FALSE;
double gd_732;
double gd_740;
int g_datetime_748 = 1;
extern string t5 = " 路易提款机C ";
extern int MaxTrades_16 = 10;
int g_timeframe_804 = PERIOD_M1;
double g_pips_812 = 500.0;
bool gi_836 = FALSE;
double gd_840 = 48.0;
double g_slippage_856;
extern int g_magic_176_16 = 332211;
double g_price_868;
double gd_876;
double gd_unused_884;
double gd_unused_892;
double g_price_900;
double g_bid_908;
double g_ask_916;
double gd_924;
double gd_932;
double gd_940;
bool gi_948;
string gs_952 = "路易提款机C";
int gi_960 = 0;
int gi_964;
int gi_968 = 0;
double gd_972;
int g_pos_980 = 0;
int gi_984;
double gd_988 = 0.0;
bool gi_996 = FALSE;
bool gi_1000 = FALSE;
bool gi_1004 = FALSE;
int gi_1008;
bool gi_1012 = FALSE;
double gd_1016;
double gd_1024;
int g_datetime_1032 = 1;
int g_timeframe_1044 = PERIOD_M1;
int g_timeframe_1048 = PERIOD_M5;
int g_timeframe_1052 = PERIOD_M15;
int g_timeframe_1056 = PERIOD_M30;
int g_timeframe_1060 = PERIOD_H1;
int g_timeframe_1064 = PERIOD_H4;
int g_timeframe_1068 = PERIOD_D1;
bool g_corner_1072 = TRUE;
int gi_1076 = 0;
int gi_1080 = 10;
int g_window_1084 = 0;
bool gi_1088 = TRUE;
bool gi_unused_1092 = TRUE;
bool gi_1096 = FALSE;
int g_color_1100 = Gray;
int g_color_1104 = Gray;
int g_color_1108 = Gray;
int g_color_1112 = DarkOrange;
int gi_unused_1116 = 36095;
int g_color_1120 = Lime;
int g_color_1124 = OrangeRed;
int gi_1128 = 65280;
int gi_1132 = 17919;
int g_color_1136 = Lime;
int g_color_1140 = Red;
int g_color_1144 = Orange;
int g_period_1148 = 8;
int g_period_1152 = 17;
int g_period_1156 = 9;
int g_applied_price_1160 = PRICE_CLOSE;
int g_color_1164 = Lime;
int g_color_1168 = Tomato;
int g_color_1172 = Green;
int g_color_1176 = Red;
string gs_unused_1180 = "<<<< STR Indicator Settings >>>>>>>>>>>>>";
string gs_unused_1188 = "<<<< RSI Settings >>>>>>>>>>>>>";
int g_period_1196 = 9;
int g_applied_price_1200 = PRICE_CLOSE;
string gs_unused_1204 = "<<<< CCI Settings >>>>>>>>>>>>>>";
int g_period_1212 = 13;
int g_applied_price_1216 = PRICE_CLOSE;
string gs_unused_1220 = "<<<< STOCH Settings >>>>>>>>>>>";
int g_period_1228 = 5;
int g_period_1232 = 3;
int g_slowing_1236 = 3;
int g_ma_method_1240 = MODE_EMA;
string gs_unused_1244 = "<<<< STR Colors >>>>>>>>>>>>>>>>";
int g_color_1252 = Lime;
int g_color_1256 = Red;
int g_color_1260 = Orange;
string gs_unused_1264 = "<<<< MA Settings >>>>>>>>>>>>>>";
int g_period_1272 = 5;
int g_period_1276 = 9;
int g_ma_method_1280 = MODE_EMA;
int g_applied_price_1284 = PRICE_CLOSE;
string gs_unused_1288 = "<<<< MA Colors >>>>>>>>>>>>>>";
int g_color_1296 = Lime;
int g_color_1300 = Red;
string gs_dummy_1312;
string g_text_1484;
string g_text_1492;
string g_dbl2str_1500 = "";
string g_dbl2str_1508 = "";
int g_color_1516 = ForestGreen;

int init() {
   gd_372 = MarketInfo(Symbol(), MODE_SPREAD) * Point;//点差
   gd_656 = MarketInfo(Symbol(), MODE_SPREAD) * Point;//点差
   gd_940 = MarketInfo(Symbol(), MODE_SPREAD) * Point;//点差
   ObjectCreate("Lable1", OBJ_LABEL, 0, 0, 1.0);
   ObjectSet("Lable1", OBJPROP_CORNER, 2);
   ObjectSet("Lable1", OBJPROP_XDISTANCE, 23);
   ObjectSet("Lable1", OBJPROP_YDISTANCE, 21);
   g_text_1492 = "路易王提款机-EA";
   ObjectSetText("Lable1", g_text_1492, 16, "Times New Roman", Aqua);
   ObjectCreate("Lable", OBJ_LABEL, 0, 0, 1.0);
   ObjectSet("Lable", OBJPROP_CORNER, 2);
   ObjectSet("Lable", OBJPROP_XDISTANCE, 3);
   ObjectSet("Lable", OBJPROP_YDISTANCE, 1);
   
   ObjectSetText("Lable", g_text_1484, 16, "Times New Roman", DeepSkyBlue);
   return (0);
}

int deinit() {
   ObjectDelete("cja");
   ObjectDelete("Signalprice");
   ObjectDelete("SIG_BARS_TF1");
   ObjectDelete("SIG_BARS_TF2");
   ObjectDelete("SIG_BARS_TF3");
   ObjectDelete("SIG_BARS_TF4");
   ObjectDelete("SIG_BARS_TF5");
   ObjectDelete("SIG_BARS_TF6");
   ObjectDelete("SIG_BARS_TF7");
   ObjectDelete("SSignalMACD_TEXT");
   ObjectDelete("SSignalMACDM1");
   ObjectDelete("SSignalMACDM5");
   ObjectDelete("SSignalMACDM15");
   ObjectDelete("SSignalMACDM30");
   ObjectDelete("SSignalMACDH1");
   ObjectDelete("SSignalMACDH4");
   ObjectDelete("SSignalMACDD1");
   ObjectDelete("SSignalSTR_TEXT");
   ObjectDelete("SignalSTRM1");
   ObjectDelete("SignalSTRM5");
   ObjectDelete("SignalSTRM15");
   ObjectDelete("SignalSTRM30");
   ObjectDelete("SignalSTRH1");
   ObjectDelete("SignalSTRH4");
   ObjectDelete("SignalSTRD1");
   ObjectDelete("SignalEMA_TEXT");
   ObjectDelete("SignalEMAM1");
   ObjectDelete("SignalEMAM5");
   ObjectDelete("SignalEMAM15");
   ObjectDelete("SignalEMAM30");
   ObjectDelete("SignalEMAH1");
   ObjectDelete("SignalEMAH4");
   ObjectDelete("SignalEMAD1");
   ObjectDelete("SIG_DETAIL_1");
   ObjectDelete("SIG_DETAIL_2");
   ObjectDelete("SIG_DETAIL_3");
   ObjectDelete("SIG_DETAIL_4");
   ObjectDelete("SIG_DETAIL_5");
   ObjectDelete("SIG_DETAIL_6");
   ObjectDelete("SIG_DETAIL_7");
   ObjectDelete("SIG_DETAIL_8");
   ObjectDelete("Lable");
   ObjectDelete("Lable1");
   ObjectDelete("Lable2");
   ObjectDelete("Lable3");
   return (0);
}

int start() {
   int li_4;
   int li_8;
   int li_12;
   int li_16;
   int li_20;
   int li_24;
   int li_28;
   color color_32;
   color color_36;
   color color_40;
   color color_44;
   color color_48;
   color color_52;
   color color_56;
   string ls_unused_60;
   color color_68;
   color color_72;
   color color_76;
   color color_80;
   color color_84;
   color color_88;
   color color_92;
   color color_96;
   string ls_unused_100;
   color color_108;
   int li_unused_112;
   double ihigh_1128;
   double ilow_1136;
   double iclose_1144;
   double iclose_1152;
   double ld_1228;
   double ld_1320;
   double ld_1328;
   int li_1336;
   int count_1340;
   double ld_1424;
   double ld_1432;
   int li_1440;
   int count_1444;
   int ind_counted_0 = IndicatorCounted();
   if (Lots > g_lots_112) Lots = g_lots_112;
   Comment("" 
      + "\n" 
      + "路易提款机-EA" 
      + "\n" 
      + "________________________________" 
      + "\n" 
      + ":         " + AccountCompany() 
      + "\n" 
      + "  " + TimeToStr(TimeCurrent(), TIME_DATE|TIME_SECONDS) 
      + "\n" 
      + "________________________________" 
      + "\n" 
      + ":             " + AccountName() 
      + "\n" 
      + "        " + AccountNumber() 
      + "\n" 
      + ":   " + AccountCurrency() 
      + "\n" 
      + "_______________________________" 
      + "\n" 
      + " 路易提款机A :" + CountTrades_Hilo() 
      + "\n" 
      + " 路易提款机B :" + CountTrades_15() 
      + "\n" 
      + " 路易提款机C :" + CountTrades_16() 
      + "\n" 
      + "                  :" + OrdersTotal() 
      + "\n" 
      + "_______________________________" 
      + "\n" 
      + ":                      " + DoubleToStr(AccountBalance(), 2) 
      + "\n" 
      + ":   " + DoubleToStr(AccountEquity(), 2) 
      + "\n" 
   + "_______________________________");
   gd_316 = NormalizeDouble(AccountBalance(), 2);
   gd_324 = NormalizeDouble(AccountEquity(), 2);
   if (gd_324 >= 5.0 * (gd_316 / 6.0)) g_color_1516 = DodgerBlue;
   if (gd_324 >= 4.0 * (gd_316 / 6.0) && gd_324 < 5.0 * (gd_316 / 6.0)) g_color_1516 = DeepSkyBlue;
   if (gd_324 >= 3.0 * (gd_316 / 6.0) && gd_324 < 4.0 * (gd_316 / 6.0)) g_color_1516 = Gold;
   if (gd_324 >= 2.0 * (gd_316 / 6.0) && gd_324 < 3.0 * (gd_316 / 6.0)) g_color_1516 = OrangeRed;
   if (gd_324 >= gd_316 / 6.0 && gd_324 < 2.0 * (gd_316 / 6.0)) g_color_1516 = Crimson;
   if (gd_324 < gd_316 / 5.0) g_color_1516 = Red;
   ObjectDelete("Lable2");
   ObjectCreate("Lable2", OBJ_LABEL, 0, 0, 1.0);
   ObjectSet("Lable2", OBJPROP_CORNER, 3);
   ObjectSet("Lable2", OBJPROP_XDISTANCE, 153);
   ObjectSet("Lable2", OBJPROP_YDISTANCE, 31);
   g_dbl2str_1500 = DoubleToStr(AccountBalance(), 2);
   ObjectSetText("Lable2", "     " + g_dbl2str_1500 + "", 16, "Times New Roman", DodgerBlue);
   ObjectDelete("Lable3");
   ObjectCreate("Lable3", OBJ_LABEL, 0, 0, 1.0);
   ObjectSet("Lable3", OBJPROP_CORNER, 3);
   ObjectSet("Lable3", OBJPROP_XDISTANCE, 153);
   ObjectSet("Lable3", OBJPROP_YDISTANCE, 11);
   g_dbl2str_1508 = DoubleToStr(AccountEquity(), 2);
   ObjectSetText("Lable3", "     " + g_dbl2str_1508 + "", 16, "Times New Roman", g_color_1516);
   int ind_counted_272 = IndicatorCounted();
   string text_276 = "";
   string text_284 = "";
   string text_292 = "";
   string text_300 = "";
   string text_308 = "";
   string text_316 = "";
   string text_324 = "";
   if (g_timeframe_1044 == PERIOD_M1) text_276 = "M1";
   if (g_timeframe_1044 == PERIOD_M5) text_276 = "M5";
   if (g_timeframe_1044 == PERIOD_M15) text_276 = "M15";
   if (g_timeframe_1044 == PERIOD_M30) text_276 = "M30";
   if (g_timeframe_1044 == PERIOD_H1) text_276 = "H1";
   if (g_timeframe_1044 == PERIOD_H4) text_276 = "H4";
   if (g_timeframe_1044 == PERIOD_D1) text_276 = "D1";
   if (g_timeframe_1044 == PERIOD_W1) text_276 = "W1";
   if (g_timeframe_1044 == PERIOD_MN1) text_276 = "MN";
   if (g_timeframe_1048 == PERIOD_M1) text_284 = "M1";
   if (g_timeframe_1048 == PERIOD_M5) text_284 = "M5";
   if (g_timeframe_1048 == PERIOD_M15) text_284 = "M15";
   if (g_timeframe_1048 == PERIOD_M30) text_284 = "M30";
   if (g_timeframe_1048 == PERIOD_H1) text_284 = "H1";
   if (g_timeframe_1048 == PERIOD_H4) text_284 = "H4";
   if (g_timeframe_1048 == PERIOD_D1) text_284 = "D1";
   if (g_timeframe_1048 == PERIOD_W1) text_284 = "W1";
   if (g_timeframe_1048 == PERIOD_MN1) text_284 = "MN";
   if (g_timeframe_1052 == PERIOD_M1) text_292 = "M1";
   if (g_timeframe_1052 == PERIOD_M5) text_292 = "M5";
   if (g_timeframe_1052 == PERIOD_M15) text_292 = "M15";
   if (g_timeframe_1052 == PERIOD_M30) text_292 = "M30";
   if (g_timeframe_1052 == PERIOD_H1) text_292 = "H1";
   if (g_timeframe_1052 == PERIOD_H4) text_292 = "H4";
   if (g_timeframe_1052 == PERIOD_D1) text_292 = "D1";
   if (g_timeframe_1052 == PERIOD_W1) text_292 = "W1";
   if (g_timeframe_1052 == PERIOD_MN1) text_292 = "MN";
   if (g_timeframe_1056 == PERIOD_M1) text_300 = "M1";
   if (g_timeframe_1056 == PERIOD_M5) text_300 = "M5";
   if (g_timeframe_1056 == PERIOD_M15) text_300 = "M15";
   if (g_timeframe_1056 == PERIOD_M30) text_300 = "M30";
   if (g_timeframe_1056 == PERIOD_H1) text_300 = "H1";
   if (g_timeframe_1056 == PERIOD_H4) text_300 = "H4";
   if (g_timeframe_1056 == PERIOD_D1) text_300 = "D1";
   if (g_timeframe_1056 == PERIOD_W1) text_300 = "W1";
   if (g_timeframe_1056 == PERIOD_MN1) text_300 = "MN";
   if (g_timeframe_1060 == PERIOD_M1) text_308 = "M1";
   if (g_timeframe_1060 == PERIOD_M5) text_308 = "M5";
   if (g_timeframe_1060 == PERIOD_M15) text_308 = "M15";
   if (g_timeframe_1060 == PERIOD_M30) text_308 = "M30";
   if (g_timeframe_1060 == PERIOD_H1) text_308 = "H1";
   if (g_timeframe_1060 == PERIOD_H4) text_308 = "H4";
   if (g_timeframe_1060 == PERIOD_D1) text_308 = "D1";
   if (g_timeframe_1060 == PERIOD_W1) text_308 = "W1";
   if (g_timeframe_1060 == PERIOD_MN1) text_308 = "MN";
   if (g_timeframe_1064 == PERIOD_M1) text_316 = "M1";
   if (g_timeframe_1064 == PERIOD_M5) text_316 = "M5";
   if (g_timeframe_1064 == PERIOD_M15) text_316 = "M15";
   if (g_timeframe_1064 == PERIOD_M30) text_316 = "M30";
   if (g_timeframe_1064 == PERIOD_H1) text_316 = "H1";
   if (g_timeframe_1064 == PERIOD_H4) text_316 = "H4";
   if (g_timeframe_1064 == PERIOD_D1) text_316 = "D1";
   if (g_timeframe_1064 == PERIOD_W1) text_316 = "W1";
   if (g_timeframe_1064 == PERIOD_MN1) text_316 = "MN";
   if (g_timeframe_1068 == PERIOD_M1) text_324 = "M1";
   if (g_timeframe_1068 == PERIOD_M5) text_324 = "M5";
   if (g_timeframe_1068 == PERIOD_M15) text_324 = "M15";
   if (g_timeframe_1068 == PERIOD_M30) text_324 = "M30";
   if (g_timeframe_1068 == PERIOD_H1) text_324 = "H1";
   if (g_timeframe_1068 == PERIOD_H4) text_324 = "H4";
   if (g_timeframe_1068 == PERIOD_D1) text_324 = "D1";
   if (g_timeframe_1068 == PERIOD_W1) text_324 = "W1";
   if (g_timeframe_1068 == PERIOD_MN1) text_324 = "MN";
   if (g_timeframe_1044 == PERIOD_M15) li_4 = -2;
   if (g_timeframe_1044 == PERIOD_M30) li_4 = -2;
   if (g_timeframe_1048 == PERIOD_M15) li_8 = -2;
   if (g_timeframe_1048 == PERIOD_M30) li_8 = -2;
   if (g_timeframe_1052 == PERIOD_M15) li_12 = -2;
   if (g_timeframe_1052 == PERIOD_M30) li_12 = -2;
   if (g_timeframe_1056 == PERIOD_M15) li_16 = -2;
   if (g_timeframe_1056 == PERIOD_M30) li_16 = -2;
   if (g_timeframe_1060 == PERIOD_M15) li_20 = -2;
   if (g_timeframe_1060 == PERIOD_M30) li_20 = -2;
   if (g_timeframe_1064 == PERIOD_M15) li_24 = -2;
   if (g_timeframe_1064 == PERIOD_M30) li_24 = -2;
   if (g_timeframe_1068 == PERIOD_M15) li_28 = -2;
   if (g_timeframe_1064 == PERIOD_M30) li_28 = -2;
   if (gi_1076 < 0) return (0);
   ObjectDelete("SIG_BARS_TF1");
   ObjectCreate("SIG_BARS_TF1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_BARS_TF1", text_276, 7, "Arial Bold", g_color_1100);
   ObjectSet("SIG_BARS_TF1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_BARS_TF1", OBJPROP_XDISTANCE, gi_1080 + 134 + li_4);
   ObjectSet("SIG_BARS_TF1", OBJPROP_YDISTANCE, gi_1076 + 25);
   ObjectDelete("SIG_BARS_TF2");
   ObjectCreate("SIG_BARS_TF2", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_BARS_TF2", text_284, 7, "Arial Bold", g_color_1100);
   ObjectSet("SIG_BARS_TF2", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_BARS_TF2", OBJPROP_XDISTANCE, gi_1080 + 114 + li_8);
   ObjectSet("SIG_BARS_TF2", OBJPROP_YDISTANCE, gi_1076 + 25);
   ObjectDelete("SIG_BARS_TF3");
   ObjectCreate("SIG_BARS_TF3", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_BARS_TF3", text_292, 7, "Arial Bold", g_color_1100);
   ObjectSet("SIG_BARS_TF3", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_BARS_TF3", OBJPROP_XDISTANCE, gi_1080 + 94 + li_12);
   ObjectSet("SIG_BARS_TF3", OBJPROP_YDISTANCE, gi_1076 + 25);
   ObjectDelete("SIG_BARS_TF4");
   ObjectCreate("SIG_BARS_TF4", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_BARS_TF4", text_300, 7, "Arial Bold", g_color_1100);
   ObjectSet("SIG_BARS_TF4", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_BARS_TF4", OBJPROP_XDISTANCE, gi_1080 + 74 + li_16);
   ObjectSet("SIG_BARS_TF4", OBJPROP_YDISTANCE, gi_1076 + 25);
   ObjectDelete("SIG_BARS_TF5");
   ObjectCreate("SIG_BARS_TF5", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_BARS_TF5", text_308, 7, "Arial Bold", g_color_1100);
   ObjectSet("SIG_BARS_TF5", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_BARS_TF5", OBJPROP_XDISTANCE, gi_1080 + 54 + li_20);
   ObjectSet("SIG_BARS_TF5", OBJPROP_YDISTANCE, gi_1076 + 25);
   ObjectDelete("SIG_BARS_TF6");
   ObjectCreate("SIG_BARS_TF6", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_BARS_TF6", text_316, 7, "Arial Bold", g_color_1100);
   ObjectSet("SIG_BARS_TF6", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_BARS_TF6", OBJPROP_XDISTANCE, gi_1080 + 34 + li_24);
   ObjectSet("SIG_BARS_TF6", OBJPROP_YDISTANCE, gi_1076 + 25);
   ObjectDelete("SIG_BARS_TF7");
   ObjectCreate("SIG_BARS_TF7", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_BARS_TF7", text_324, 7, "Arial Bold", g_color_1100);
   ObjectSet("SIG_BARS_TF7", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_BARS_TF7", OBJPROP_XDISTANCE, gi_1080 + 14 + li_28);
   ObjectSet("SIG_BARS_TF7", OBJPROP_YDISTANCE, gi_1076 + 25);
   string text_332 = "";
   string text_340 = "";
   string text_348 = "";
   string text_356 = "";
   string text_364 = "";
   string text_372 = "";
   string text_380 = "";
   string ls_unused_388 = "";
   string ls_unused_396 = "";
   double imacd_404 = iMACD(NULL, g_timeframe_1044, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_MAIN, 0);
   double imacd_412 = iMACD(NULL, g_timeframe_1044, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_SIGNAL, 0);
   double imacd_420 = iMACD(NULL, g_timeframe_1048, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_MAIN, 0);
   double imacd_428 = iMACD(NULL, g_timeframe_1048, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_SIGNAL, 0);
   double imacd_436 = iMACD(NULL, g_timeframe_1052, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_MAIN, 0);
   double imacd_444 = iMACD(NULL, g_timeframe_1052, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_SIGNAL, 0);
   double imacd_452 = iMACD(NULL, g_timeframe_1056, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_MAIN, 0);
   double imacd_460 = iMACD(NULL, g_timeframe_1056, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_SIGNAL, 0);
   double imacd_468 = iMACD(NULL, g_timeframe_1060, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_MAIN, 0);
   double imacd_476 = iMACD(NULL, g_timeframe_1060, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_SIGNAL, 0);
   double imacd_484 = iMACD(NULL, g_timeframe_1064, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_MAIN, 0);
   double imacd_492 = iMACD(NULL, g_timeframe_1064, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_SIGNAL, 0);
   double imacd_500 = iMACD(NULL, g_timeframe_1068, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_MAIN, 0);
   double imacd_508 = iMACD(NULL, g_timeframe_1068, g_period_1148, g_period_1152, g_period_1156, g_applied_price_1160, MODE_SIGNAL, 0);
   if (imacd_404 > imacd_412) {
      text_356 = "-";
      color_44 = g_color_1172;
   }
   if (imacd_404 <= imacd_412) {
      text_356 = "-";
      color_44 = g_color_1168;
   }
   if (imacd_404 > imacd_412 && imacd_404 > 0.0) {
      text_356 = "-";
      color_44 = g_color_1164;
   }
   if (imacd_404 <= imacd_412 && imacd_404 < 0.0) {
      text_356 = "-";
      color_44 = g_color_1176;
   }
   if (imacd_420 > imacd_428) {
      text_364 = "-";
      color_48 = g_color_1172;
   }
   if (imacd_420 <= imacd_428) {
      text_364 = "-";
      color_48 = g_color_1168;
   }
   if (imacd_420 > imacd_428 && imacd_420 > 0.0) {
      text_364 = "-";
      color_48 = g_color_1164;
   }
   if (imacd_420 <= imacd_428 && imacd_420 < 0.0) {
      text_364 = "-";
      color_48 = g_color_1176;
   }
   if (imacd_436 > imacd_444) {
      text_372 = "-";
      color_52 = g_color_1172;
   }
   if (imacd_436 <= imacd_444) {
      text_372 = "-";
      color_52 = g_color_1168;
   }
   if (imacd_436 > imacd_444 && imacd_436 > 0.0) {
      text_372 = "-";
      color_52 = g_color_1164;
   }
   if (imacd_436 <= imacd_444 && imacd_436 < 0.0) {
      text_372 = "-";
      color_52 = g_color_1176;
   }
   if (imacd_452 > imacd_460) {
      text_380 = "-";
      color_56 = g_color_1172;
   }
   if (imacd_452 <= imacd_460) {
      text_380 = "-";
      color_56 = g_color_1168;
   }
   if (imacd_452 > imacd_460 && imacd_452 > 0.0) {
      text_380 = "-";
      color_56 = g_color_1164;
   }
   if (imacd_452 <= imacd_460 && imacd_452 < 0.0) {
      text_380 = "-";
      color_56 = g_color_1176;
   }
   if (imacd_468 > imacd_476) {
      text_340 = "-";
      color_36 = g_color_1172;
   }
   if (imacd_468 <= imacd_476) {
      text_340 = "-";
      color_36 = g_color_1168;
   }
   if (imacd_468 > imacd_476 && imacd_468 > 0.0) {
      text_340 = "-";
      color_36 = g_color_1164;
   }
   if (imacd_468 <= imacd_476 && imacd_468 < 0.0) {
      text_340 = "-";
      color_36 = g_color_1176;
   }
   if (imacd_484 > imacd_492) {
      text_348 = "-";
      color_40 = g_color_1172;
   }
   if (imacd_484 <= imacd_492) {
      text_348 = "-";
      color_40 = g_color_1168;
   }
   if (imacd_484 > imacd_492 && imacd_484 > 0.0) {
      text_348 = "-";
      color_40 = g_color_1164;
   }
   if (imacd_484 <= imacd_492 && imacd_484 < 0.0) {
      text_348 = "-";
      color_40 = g_color_1176;
   }
   if (imacd_500 > imacd_508) {
      text_332 = "-";
      color_32 = g_color_1172;
   }
   if (imacd_500 <= imacd_508) {
      text_332 = "-";
      color_32 = g_color_1168;
   }
   if (imacd_500 > imacd_508 && imacd_500 > 0.0) {
      text_332 = "-";
      color_32 = g_color_1164;
   }
   if (imacd_500 <= imacd_508 && imacd_500 < 0.0) {
      text_332 = "-";
      color_32 = g_color_1176;
   }
   ObjectDelete("SSignalMACD_TEXT");
   ObjectCreate("SSignalMACD_TEXT", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACD_TEXT", "MACD", 6, "Tahoma Narrow", g_color_1104);
   ObjectSet("SSignalMACD_TEXT", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACD_TEXT", OBJPROP_XDISTANCE, gi_1080 + 153);
   ObjectSet("SSignalMACD_TEXT", OBJPROP_YDISTANCE, gi_1076 + 35);
   ObjectDelete("SSignalMACDM1");
   ObjectCreate("SSignalMACDM1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACDM1", text_356, 45, "Tahoma Narrow", color_44);
   ObjectSet("SSignalMACDM1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACDM1", OBJPROP_XDISTANCE, gi_1080 + 130);
   ObjectSet("SSignalMACDM1", OBJPROP_YDISTANCE, gi_1076 + 2);
   ObjectDelete("SSignalMACDM5");
   ObjectCreate("SSignalMACDM5", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACDM5", text_364, 45, "Tahoma Narrow", color_48);
   ObjectSet("SSignalMACDM5", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACDM5", OBJPROP_XDISTANCE, gi_1080 + 110);
   ObjectSet("SSignalMACDM5", OBJPROP_YDISTANCE, gi_1076 + 2);
   ObjectDelete("SSignalMACDM15");
   ObjectCreate("SSignalMACDM15", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACDM15", text_372, 45, "Tahoma Narrow", color_52);
   ObjectSet("SSignalMACDM15", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACDM15", OBJPROP_XDISTANCE, gi_1080 + 90);
   ObjectSet("SSignalMACDM15", OBJPROP_YDISTANCE, gi_1076 + 2);
   ObjectDelete("SSignalMACDM30");
   ObjectCreate("SSignalMACDM30", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACDM30", text_380, 45, "Tahoma Narrow", color_56);
   ObjectSet("SSignalMACDM30", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACDM30", OBJPROP_XDISTANCE, gi_1080 + 70);
   ObjectSet("SSignalMACDM30", OBJPROP_YDISTANCE, gi_1076 + 2);
   ObjectDelete("SSignalMACDH1");
   ObjectCreate("SSignalMACDH1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACDH1", text_340, 45, "Tahoma Narrow", color_36);
   ObjectSet("SSignalMACDH1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACDH1", OBJPROP_XDISTANCE, gi_1080 + 50);
   ObjectSet("SSignalMACDH1", OBJPROP_YDISTANCE, gi_1076 + 2);
   ObjectDelete("SSignalMACDH4");
   ObjectCreate("SSignalMACDH4", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACDH4", text_348, 45, "Tahoma Narrow", color_40);
   ObjectSet("SSignalMACDH4", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACDH4", OBJPROP_XDISTANCE, gi_1080 + 30);
   ObjectSet("SSignalMACDH4", OBJPROP_YDISTANCE, gi_1076 + 2);
   ObjectDelete("SSignalMACDD1");
   ObjectCreate("SSignalMACDD1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalMACDD1", text_332, 45, "Tahoma Narrow", color_32);
   ObjectSet("SSignalMACDD1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalMACDD1", OBJPROP_XDISTANCE, gi_1080 + 10);
   ObjectSet("SSignalMACDD1", OBJPROP_YDISTANCE, gi_1076 + 2);
   double irsi_516 = iRSI(NULL, g_timeframe_1068, g_period_1196, g_applied_price_1200, 0);
   double irsi_524 = iRSI(NULL, g_timeframe_1064, g_period_1196, g_applied_price_1200, 0);
   double irsi_532 = iRSI(NULL, g_timeframe_1060, g_period_1196, g_applied_price_1200, 0);
   double irsi_540 = iRSI(NULL, g_timeframe_1056, g_period_1196, g_applied_price_1200, 0);
   double irsi_548 = iRSI(NULL, g_timeframe_1052, g_period_1196, g_applied_price_1200, 0);
   double irsi_556 = iRSI(NULL, g_timeframe_1048, g_period_1196, g_applied_price_1200, 0);
   double irsi_564 = iRSI(NULL, g_timeframe_1044, g_period_1196, g_applied_price_1200, 0);
   double istochastic_572 = iStochastic(NULL, g_timeframe_1068, g_period_1228, g_period_1232, g_slowing_1236, g_ma_method_1240, 0, MODE_MAIN, 0);
   double istochastic_580 = iStochastic(NULL, g_timeframe_1064, g_period_1228, g_period_1232, g_slowing_1236, g_ma_method_1240, 0, MODE_MAIN, 0);
   double istochastic_588 = iStochastic(NULL, g_timeframe_1060, g_period_1228, g_period_1232, g_slowing_1236, g_ma_method_1240, 0, MODE_MAIN, 0);
   double istochastic_596 = iStochastic(NULL, g_timeframe_1056, g_period_1228, g_period_1232, g_slowing_1236, g_ma_method_1240, 0, MODE_MAIN, 0);
   double istochastic_604 = iStochastic(NULL, g_timeframe_1052, g_period_1228, g_period_1232, g_slowing_1236, g_ma_method_1240, 0, MODE_MAIN, 0);
   double istochastic_612 = iStochastic(NULL, g_timeframe_1048, g_period_1228, g_period_1232, g_slowing_1236, g_ma_method_1240, 0, MODE_MAIN, 0);
   double istochastic_620 = iStochastic(NULL, g_timeframe_1044, g_period_1228, g_period_1232, g_slowing_1236, g_ma_method_1240, 0, MODE_MAIN, 0);
   double icci_628 = iCCI(NULL, g_timeframe_1068, g_period_1212, g_applied_price_1216, 0);
   double icci_636 = iCCI(NULL, g_timeframe_1064, g_period_1212, g_applied_price_1216, 0);
   double icci_644 = iCCI(NULL, g_timeframe_1060, g_period_1212, g_applied_price_1216, 0);
   double icci_652 = iCCI(NULL, g_timeframe_1056, g_period_1212, g_applied_price_1216, 0);
   double icci_660 = iCCI(NULL, g_timeframe_1052, g_period_1212, g_applied_price_1216, 0);
   double icci_668 = iCCI(NULL, g_timeframe_1048, g_period_1212, g_applied_price_1216, 0);
   double icci_676 = iCCI(NULL, g_timeframe_1044, g_period_1212, g_applied_price_1216, 0);
   string text_684 = "";
   string text_692 = "";
   string text_700 = "";
   string text_708 = "";
   string text_716 = "";
   string text_724 = "";
   string text_732 = "";
   string ls_unused_740 = "";
   string ls_unused_748 = "";
   text_732 = "-";
   color color_756 = g_color_1260;
   text_716 = "-";
   color color_760 = g_color_1260;
   text_684 = "-";
   color color_764 = g_color_1260;
   text_724 = "-";
   color color_768 = g_color_1260;
   text_692 = "-";
   color color_772 = g_color_1260;
   text_700 = "-";
   color color_776 = g_color_1260;
   text_708 = "-";
   color color_780 = g_color_1260;
   if (irsi_516 > 50.0 && istochastic_572 > 40.0 && icci_628 > 0.0) {
      text_732 = "-";
      color_756 = g_color_1252;
   }
   if (irsi_524 > 50.0 && istochastic_580 > 40.0 && icci_636 > 0.0) {
      text_716 = "-";
      color_760 = g_color_1252;
   }
   if (irsi_532 > 50.0 && istochastic_588 > 40.0 && icci_644 > 0.0) {
      text_684 = "-";
      color_764 = g_color_1252;
   }
   if (irsi_540 > 50.0 && istochastic_596 > 40.0 && icci_652 > 0.0) {
      text_724 = "-";
      color_768 = g_color_1252;
   }
   if (irsi_548 > 50.0 && istochastic_604 > 40.0 && icci_660 > 0.0) {
      text_692 = "-";
      color_772 = g_color_1252;
   }
   if (irsi_556 > 50.0 && istochastic_612 > 40.0 && icci_668 > 0.0) {
      text_700 = "-";
      color_776 = g_color_1252;
   }
   if (irsi_564 > 50.0 && istochastic_620 > 40.0 && icci_676 > 0.0) {
      text_708 = "-";
      color_780 = g_color_1252;
   }
   if (irsi_516 < 50.0 && istochastic_572 < 60.0 && icci_628 < 0.0) {
      text_732 = "-";
      color_756 = g_color_1256;
   }
   if (irsi_524 < 50.0 && istochastic_580 < 60.0 && icci_636 < 0.0) {
      text_716 = "-";
      color_760 = g_color_1256;
   }
   if (irsi_532 < 50.0 && istochastic_588 < 60.0 && icci_644 < 0.0) {
      text_684 = "-";
      color_764 = g_color_1256;
   }
   if (irsi_540 < 50.0 && istochastic_596 < 60.0 && icci_652 < 0.0) {
      text_724 = "-";
      color_768 = g_color_1256;
   }
   if (irsi_548 < 50.0 && istochastic_604 < 60.0 && icci_660 < 0.0) {
      text_692 = "-";
      color_772 = g_color_1256;
   }
   if (irsi_556 < 50.0 && istochastic_612 < 60.0 && icci_668 < 0.0) {
      text_700 = "-";
      color_776 = g_color_1256;
   }
   if (irsi_564 < 50.0 && istochastic_620 < 60.0 && icci_676 < 0.0) {
      text_708 = "-";
      color_780 = g_color_1256;
   }
   ObjectDelete("SSignalSTR_TEXT");
   ObjectCreate("SSignalSTR_TEXT", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SSignalSTR_TEXT", "STR", 6, "Tahoma Narrow", g_color_1104);
   ObjectSet("SSignalSTR_TEXT", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SSignalSTR_TEXT", OBJPROP_XDISTANCE, gi_1080 + 153);
   ObjectSet("SSignalSTR_TEXT", OBJPROP_YDISTANCE, gi_1076 + 43);
   ObjectDelete("SignalSTRM1");
   ObjectCreate("SignalSTRM1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalSTRM1", text_708, 45, "Tahoma Narrow", color_780);
   ObjectSet("SignalSTRM1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalSTRM1", OBJPROP_XDISTANCE, gi_1080 + 130);
   ObjectSet("SignalSTRM1", OBJPROP_YDISTANCE, gi_1076 + 10);
   ObjectDelete("SignalSTRM5");
   ObjectCreate("SignalSTRM5", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalSTRM5", text_700, 45, "Tahoma Narrow", color_776);
   ObjectSet("SignalSTRM5", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalSTRM5", OBJPROP_XDISTANCE, gi_1080 + 110);
   ObjectSet("SignalSTRM5", OBJPROP_YDISTANCE, gi_1076 + 10);
   ObjectDelete("SignalSTRM15");
   ObjectCreate("SignalSTRM15", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalSTRM15", text_692, 45, "Tahoma Narrow", color_772);
   ObjectSet("SignalSTRM15", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalSTRM15", OBJPROP_XDISTANCE, gi_1080 + 90);
   ObjectSet("SignalSTRM15", OBJPROP_YDISTANCE, gi_1076 + 10);
   ObjectDelete("SignalSTRM30");
   ObjectCreate("SignalSTRM30", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalSTRM30", text_724, 45, "Tahoma Narrow", color_768);
   ObjectSet("SignalSTRM30", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalSTRM30", OBJPROP_XDISTANCE, gi_1080 + 70);
   ObjectSet("SignalSTRM30", OBJPROP_YDISTANCE, gi_1076 + 10);
   ObjectDelete("SignalSTRH1");
   ObjectCreate("SignalSTRH1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalSTRH1", text_684, 45, "Tahoma Narrow", color_764);
   ObjectSet("SignalSTRH1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalSTRH1", OBJPROP_XDISTANCE, gi_1080 + 50);
   ObjectSet("SignalSTRH1", OBJPROP_YDISTANCE, gi_1076 + 10);
   ObjectDelete("SignalSTRH4");
   ObjectCreate("SignalSTRH4", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalSTRH4", text_716, 45, "Tahoma Narrow", color_760);
   ObjectSet("SignalSTRH4", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalSTRH4", OBJPROP_XDISTANCE, gi_1080 + 30);
   ObjectSet("SignalSTRH4", OBJPROP_YDISTANCE, gi_1076 + 10);
   ObjectDelete("SignalSTRD1");
   ObjectCreate("SignalSTRD1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalSTRD1", text_732, 45, "Tahoma Narrow", color_756);
   ObjectSet("SignalSTRD1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalSTRD1", OBJPROP_XDISTANCE, gi_1080 + 10);
   ObjectSet("SignalSTRD1", OBJPROP_YDISTANCE, gi_1076 + 10);
   double ima_784 = iMA(Symbol(), g_timeframe_1044, g_period_1272, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_792 = iMA(Symbol(), g_timeframe_1044, g_period_1276, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_800 = iMA(Symbol(), g_timeframe_1048, g_period_1272, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_808 = iMA(Symbol(), g_timeframe_1048, g_period_1276, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_816 = iMA(Symbol(), g_timeframe_1052, g_period_1272, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_824 = iMA(Symbol(), g_timeframe_1052, g_period_1276, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_832 = iMA(Symbol(), g_timeframe_1056, g_period_1272, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_840 = iMA(Symbol(), g_timeframe_1056, g_period_1276, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_848 = iMA(Symbol(), g_timeframe_1060, g_period_1272, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_856 = iMA(Symbol(), g_timeframe_1060, g_period_1276, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_864 = iMA(Symbol(), g_timeframe_1064, g_period_1272, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_872 = iMA(Symbol(), g_timeframe_1064, g_period_1276, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_880 = iMA(Symbol(), g_timeframe_1068, g_period_1272, 0, g_ma_method_1280, g_applied_price_1284, 0);
   double ima_888 = iMA(Symbol(), g_timeframe_1068, g_period_1276, 0, g_ma_method_1280, g_applied_price_1284, 0);
   string text_896 = "";
   string text_904 = "";
   string text_912 = "";
   string text_920 = "";
   string text_928 = "";
   string text_936 = "";
   string text_944 = "";
   string ls_unused_952 = "";
   string ls_unused_960 = "";
   if (ima_784 > ima_792) {
      text_896 = "-";
      color_68 = g_color_1296;
   }
   if (ima_784 <= ima_792) {
      text_896 = "-";
      color_68 = g_color_1300;
   }
   if (ima_800 > ima_808) {
      text_904 = "-";
      color_72 = g_color_1296;
   }
   if (ima_800 <= ima_808) {
      text_904 = "-";
      color_72 = g_color_1300;
   }
   if (ima_816 > ima_824) {
      text_912 = "-";
      color_76 = g_color_1296;
   }
   if (ima_816 <= ima_824) {
      text_912 = "-";
      color_76 = g_color_1300;
   }
   if (ima_832 > ima_840) {
      text_920 = "-";
      color_80 = g_color_1296;
   }
   if (ima_832 <= ima_840) {
      text_920 = "-";
      color_80 = g_color_1300;
   }
   if (ima_848 > ima_856) {
      text_928 = "-";
      color_84 = g_color_1296;
   }
   if (ima_848 <= ima_856) {
      text_928 = "-";
      color_84 = g_color_1300;
   }
   if (ima_864 > ima_872) {
      text_936 = "-";
      color_88 = g_color_1296;
   }
   if (ima_864 <= ima_872) {
      text_936 = "-";
      color_88 = g_color_1300;
   }
   if (ima_880 > ima_888) {
      text_944 = "-";
      color_92 = g_color_1296;
   }
   if (ima_880 <= ima_888) {
      text_944 = "-";
      color_92 = g_color_1300;
   }
   ObjectDelete("SignalEMA_TEXT");
   ObjectCreate("SignalEMA_TEXT", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMA_TEXT", "EMA", 6, "Tahoma Narrow", g_color_1104);
   ObjectSet("SignalEMA_TEXT", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMA_TEXT", OBJPROP_XDISTANCE, gi_1080 + 153);
   ObjectSet("SignalEMA_TEXT", OBJPROP_YDISTANCE, gi_1076 + 51);
   ObjectDelete("SignalEMAM1");
   ObjectCreate("SignalEMAM1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMAM1", text_896, 45, "Tahoma Narrow", color_68);
   ObjectSet("SignalEMAM1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMAM1", OBJPROP_XDISTANCE, gi_1080 + 130);
   ObjectSet("SignalEMAM1", OBJPROP_YDISTANCE, gi_1076 + 18);
   ObjectDelete("SignalEMAM5");
   ObjectCreate("SignalEMAM5", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMAM5", text_904, 45, "Tahoma Narrow", color_72);
   ObjectSet("SignalEMAM5", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMAM5", OBJPROP_XDISTANCE, gi_1080 + 110);
   ObjectSet("SignalEMAM5", OBJPROP_YDISTANCE, gi_1076 + 18);
   ObjectDelete("SignalEMAM15");
   ObjectCreate("SignalEMAM15", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMAM15", text_912, 45, "Tahoma Narrow", color_76);
   ObjectSet("SignalEMAM15", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMAM15", OBJPROP_XDISTANCE, gi_1080 + 90);
   ObjectSet("SignalEMAM15", OBJPROP_YDISTANCE, gi_1076 + 18);
   ObjectDelete("SignalEMAM30");
   ObjectCreate("SignalEMAM30", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMAM30", text_920, 45, "Tahoma Narrow", color_80);
   ObjectSet("SignalEMAM30", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMAM30", OBJPROP_XDISTANCE, gi_1080 + 70);
   ObjectSet("SignalEMAM30", OBJPROP_YDISTANCE, gi_1076 + 18);
   ObjectDelete("SignalEMAH1");
   ObjectCreate("SignalEMAH1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMAH1", text_928, 45, "Tahoma Narrow", color_84);
   ObjectSet("SignalEMAH1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMAH1", OBJPROP_XDISTANCE, gi_1080 + 50);
   ObjectSet("SignalEMAH1", OBJPROP_YDISTANCE, gi_1076 + 18);
   ObjectDelete("SignalEMAH4");
   ObjectCreate("SignalEMAH4", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMAH4", text_936, 45, "Tahoma Narrow", color_88);
   ObjectSet("SignalEMAH4", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMAH4", OBJPROP_XDISTANCE, gi_1080 + 30);
   ObjectSet("SignalEMAH4", OBJPROP_YDISTANCE, gi_1076 + 18);
   ObjectDelete("SignalEMAD1");
   ObjectCreate("SignalEMAD1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SignalEMAD1", text_944, 45, "Tahoma Narrow", color_92);
   ObjectSet("SignalEMAD1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SignalEMAD1", OBJPROP_XDISTANCE, gi_1080 + 10);
   ObjectSet("SignalEMAD1", OBJPROP_YDISTANCE, gi_1076 + 18);
   double ld_968 = NormalizeDouble(MarketInfo(Symbol(), MODE_BID), Digits);
   double ima_976 = iMA(Symbol(), PERIOD_M1, 1, 0, MODE_EMA, PRICE_CLOSE, 1);
   string ls_unused_984 = "";
   if (ima_976 > ld_968) {
      ls_unused_984 = "";
      color_96 = g_color_1140;
   }
   if (ima_976 < ld_968) {
      ls_unused_984 = "";
      color_96 = g_color_1136;
   }
   if (ima_976 == ld_968) {
      ls_unused_984 = "";
      color_96 = g_color_1144;
   }
   ObjectDelete("cja");
   ObjectCreate("cja", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("cja", "cja", 8, "Tahoma Narrow", DimGray);
   ObjectSet("cja", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("cja", OBJPROP_XDISTANCE, gi_1080 + 153);
   ObjectSet("cja", OBJPROP_YDISTANCE, gi_1076 + 23);
   if (gi_1096 == FALSE) {
      if (gi_1088 == TRUE) {
         ObjectDelete("Signalprice");
         ObjectCreate("Signalprice", OBJ_LABEL, g_window_1084, 0, 0);
         ObjectSetText("Signalprice", DoubleToStr(ld_968, Digits), 35, "Arial", color_96);
         ObjectSet("Signalprice", OBJPROP_CORNER, g_corner_1072);
         ObjectSet("Signalprice", OBJPROP_XDISTANCE, gi_1080 + 10);
         ObjectSet("Signalprice", OBJPROP_YDISTANCE, gi_1076 + 56);
      }
   }
   if (gi_1096 == TRUE) {
      if (gi_1088 == TRUE) {
         ObjectDelete("Signalprice");
         ObjectCreate("Signalprice", OBJ_LABEL, g_window_1084, 0, 0);
         ObjectSetText("Signalprice", DoubleToStr(ld_968, Digits), 15, "Arial", color_96);
         ObjectSet("Signalprice", OBJPROP_CORNER, g_corner_1072);
         ObjectSet("Signalprice", OBJPROP_XDISTANCE, gi_1080 + 10);
         ObjectSet("Signalprice", OBJPROP_YDISTANCE, gi_1076 + 60);
      }
   }
   int li_992 = 0;
   int li_996 = 0;
   int li_1000 = 0;
   int li_1004 = 0;
   int li_1008 = 0;
   int li_1012 = 0;
   li_992 = (iHigh(NULL, PERIOD_D1, 1) - iLow(NULL, PERIOD_D1, 1)) / Point;
   for (li_1012 = 1; li_1012 <= 5; li_1012++) li_996 = li_996 + (iHigh(NULL, PERIOD_D1, li_1012) - iLow(NULL, PERIOD_D1, li_1012)) / Point;
   for (li_1012 = 1; li_1012 <= 10; li_1012++) li_1000 = li_1000 + (iHigh(NULL, PERIOD_D1, li_1012) - iLow(NULL, PERIOD_D1, li_1012)) / Point;
   for (li_1012 = 1; li_1012 <= 20; li_1012++) li_1004 = li_1004 + (iHigh(NULL, PERIOD_D1, li_1012) - iLow(NULL, PERIOD_D1, li_1012)) / Point;
   li_996 /= 5;
   li_1000 /= 10;
   li_1004 /= 20;
   li_1008 = (li_992 + li_996 + li_1000 + li_1004) / 4;
   string ls_unused_1016 = "";
   string ls_unused_1024 = "";
   string dbl2str_1032 = "";
   string dbl2str_1040 = "";
   string dbl2str_1048 = "";
   string dbl2str_1056 = "";
   string ls_unused_1064 = "";
   string ls_unused_1072 = "";
   string ls_1080 = "";
   double iopen_1088 = iOpen(NULL, PERIOD_D1, 0);
   double iclose_1096 = iClose(NULL, PERIOD_D1, 0);
   double ld_1104 = (Ask - Bid) / Point;
   double ihigh_1112 = iHigh(NULL, PERIOD_D1, 0);
   double ilow_1120 = iLow(NULL, PERIOD_D1, 0);
   dbl2str_1040 = DoubleToStr((iclose_1096 - iopen_1088) / Point, 0);
   dbl2str_1032 = DoubleToStr(ld_1104, Digits - 4);
   dbl2str_1048 = DoubleToStr(li_1008, Digits - 4);
   ls_1080 = (iHigh(NULL, PERIOD_D1, 1) - iLow(NULL, PERIOD_D1, 1)) / Point;
   dbl2str_1056 = DoubleToStr((ihigh_1112 - ilow_1120) / Point, 0);
   if (iclose_1096 >= iopen_1088) {
      ls_unused_1064 = "-";
      color_108 = g_color_1120;
   }
   if (iclose_1096 < iopen_1088) {
      ls_unused_1064 = "-";
      color_108 = g_color_1124;
   }
   if (dbl2str_1048 >= ls_1080) {
      ls_unused_1072 = "-";
      li_unused_112 = gi_1128;
   }
   if (dbl2str_1048 < ls_1080) {
      ls_unused_1072 = "-";
      li_unused_112 = gi_1132;
   }
   ObjectDelete("SIG_DETAIL_1");
   ObjectCreate("SIG_DETAIL_1", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_DETAIL_1", "Spread", 14, "Times New Roman", g_color_1108);
   ObjectSet("SIG_DETAIL_1", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_DETAIL_1", OBJPROP_XDISTANCE, gi_1080 + 65);
   ObjectSet("SIG_DETAIL_1", OBJPROP_YDISTANCE, gi_1076 + 100);
   ObjectDelete("SIG_DETAIL_2");
   ObjectCreate("SIG_DETAIL_2", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_DETAIL_2", "" + dbl2str_1032 + "", 14, "Times New Roman", g_color_1112);
   ObjectSet("SIG_DETAIL_2", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_DETAIL_2", OBJPROP_XDISTANCE, gi_1080 + 10);
   ObjectSet("SIG_DETAIL_2", OBJPROP_YDISTANCE, gi_1076 + 100);
   ObjectDelete("SIG_DETAIL_3");
   ObjectCreate("SIG_DETAIL_3", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_DETAIL_3", "Volatility Ratio", 14, "Times New Roman", g_color_1108);
   ObjectSet("SIG_DETAIL_3", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_DETAIL_3", OBJPROP_XDISTANCE, gi_1080 + 65);
   ObjectSet("SIG_DETAIL_3", OBJPROP_YDISTANCE, gi_1076 + 115);
   ObjectDelete("SIG_DETAIL_4");
   ObjectCreate("SIG_DETAIL_4", OBJ_LABEL, g_window_1084, 0, 0);
   ObjectSetText("SIG_DETAIL_4", "" + dbl2str_1040 + "", 14, "Times New Roman", color_108);
   ObjectSet("SIG_DETAIL_4", OBJPROP_CORNER, g_corner_1072);
   ObjectSet("SIG_DETAIL_4", OBJPROP_XDISTANCE, gi_1080 + 10);
   ObjectSet("SIG_DETAIL_4", OBJPROP_YDISTANCE, gi_1076 + 115);
   double ld_1160 = LotExponent;
   int li_1168 = lotdecimal;
   double ld_1172 = TakeProfit;
   bool li_1180 = gi_132;
   double ld_1184 = gd_136;
   bool bool_1192 = UseTrailingStop;
   double ld_1196 = TrailStart;
   double ld_1204 = TrailStop;
   double ld_1212 = PipStep;
   double ld_1220 = slip;
   if (MM == TRUE) {
      if (MathCeil(AccountBalance()) < 2000.0) ld_1228 = Lots;
      else ld_1228 = 0.00001 * MathCeil(AccountBalance());
   } else ld_1228 = Lots;
   if (bool_1192) TrailingAlls_Hilo(ld_1196, ld_1204, g_price_332);
   if (gi_224) {
      if (TimeCurrent() >= gi_396) {
         CloseThisSymbolAll_Hilo();
         Print("Closed All due_Hilo to TimeOut");
      }
   }
   if (gi_392 == Time[0]) return (0);
   gi_392 = Time[0];
   double ld_1236 = CalculateProfit_Hilo();
   if (li_1180) {
      if (ld_1236 < 0.0 && MathAbs(ld_1236) > ld_1184 / 100.0 * AccountEquityHigh_Hilo()) {
         CloseThisSymbolAll_Hilo();
         Print("Closed All due_Hilo to Stop Out");
         gi_444 = FALSE;
      }
   }
   gi_416 = CountTrades_Hilo();
   if (gi_416 == 0) gi_380 = FALSE;
   for (g_pos_412 = OrdersTotal() - 1; g_pos_412 >= 0; g_pos_412--) {
      OrderSelect(g_pos_412, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo) {
         if (OrderType() == OP_BUY) {
            gi_432 = TRUE;
            gi_436 = FALSE;
            break;
         }
      }
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo) {
         if (OrderType() == OP_SELL) {
            gi_432 = FALSE;
            gi_436 = TRUE;
            break;
         }
      }
   }
   if (gi_416 > 0 && gi_416 <= MaxTrades_Hilo) {
      RefreshRates();
      gd_356 = FindLastBuyPrice_Hilo();
      gd_364 = FindLastSellPrice_Hilo();
      if (gi_432 && gd_356 - Ask >= ld_1212 * Point) gi_428 = TRUE;
      if (gi_436 && Bid - gd_364 >= ld_1212 * Point) gi_428 = TRUE;
   }
   if (gi_416 < 1) {
      gi_436 = FALSE;
      gi_432 = FALSE;
      gi_428 = TRUE;
      gd_292 = AccountEquity();
   }
   if (gi_428) {
      gd_356 = FindLastBuyPrice_Hilo();
      gd_364 = FindLastSellPrice_Hilo();
      if (gi_436) {
         gi_400 = gi_416;
         gd_404 = NormalizeDouble(ld_1228 * MathPow(ld_1160, gi_400), li_1168);
         RefreshRates();
         gi_440 = OpenPendingOrder_Hilo(1, gd_404, Bid, ld_1220, Ask, 0, 0, gs_384 + "-路易提款机", MagicNumber_Hilo, 0, HotPink);
         if (gi_440 < 0) {
            Print("Error: ", GetLastError());
            return (0);
         }
         gd_364 = FindLastSellPrice_Hilo();
         gi_428 = FALSE;
         gi_444 = TRUE;
      } else {
         if (gi_432) {
            gi_400 = gi_416;
            gd_404 = NormalizeDouble(ld_1228 * MathPow(ld_1160, gi_400), li_1168);//手数
            gi_440 = OpenPendingOrder_Hilo(0, gd_404, Ask, ld_1220, Bid, 0, 0, gs_384 + "-路易提款机", MagicNumber_Hilo, 0, Lime);
            if (gi_440 < 0) {
               Print("Error: ", GetLastError());
               return (0);
            }
            gd_356 = FindLastBuyPrice_Hilo();
            gi_428 = FALSE;
            gi_444 = TRUE;
         }
      }
   }
   if (gi_428 && gi_416 < 1) {
      ihigh_1128 = iHigh(Symbol(), 0, 1);
      ilow_1136 = iLow(Symbol(), 0, 2);
      g_bid_340 = Bid;
      g_ask_348 = Ask;
      if ((!gi_436) && !gi_432) {
         gi_400 = gi_416;
         gd_404 = NormalizeDouble(ld_1228 * MathPow(ld_1160, gi_400), li_1168);
         if (ihigh_1128 > ilow_1136) {
            if (iRSI(NULL, PERIOD_H1, 14, PRICE_CLOSE, 1) > 30.0) {
               gi_440 = OpenPendingOrder_Hilo(1, gd_404, g_bid_340, ld_1220, g_bid_340, 0, 0, gs_384 + "-" + gi_400, MagicNumber_Hilo, 0, HotPink);
               if (gi_440 < 0) {
                  Print("Error: ", GetLastError());
                  return (0);
               }
               gd_356 = FindLastBuyPrice_Hilo();
               gi_444 = TRUE;
            }
         } else {
            if (iRSI(NULL, PERIOD_H1, 14, PRICE_CLOSE, 1) < 70.0) {
               gi_440 = OpenPendingOrder_Hilo(0, gd_404, g_ask_348, ld_1220, g_ask_348, 0, 0, gs_384 + "-" + gi_400, MagicNumber_Hilo, 0, Lime);
               if (gi_440 < 0) {
                  Print("Error: ", GetLastError());
                  return (0);
               }
               gd_364 = FindLastSellPrice_Hilo();
               gi_444 = TRUE;
            }
         }
         if (gi_440 > 0) gi_396 = TimeCurrent() + 60.0 * (60.0 * gd_228);
         gi_428 = FALSE;
      }
   }
   gi_416 = CountTrades_Hilo();
   g_price_332 = 0;
   double ld_1244 = 0;
   for (g_pos_412 = OrdersTotal() - 1; g_pos_412 >= 0; g_pos_412--) {
      OrderSelect(g_pos_412, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo) {
         if (OrderType() == OP_BUY || OrderType() == OP_SELL) {
            g_price_332 += OrderOpenPrice() * OrderLots();
            ld_1244 += OrderLots();
         }
      }
   }
   if (gi_416 > 0) g_price_332 = NormalizeDouble(g_price_332 / ld_1244, Digits);
   if (gi_444) {
      for (g_pos_412 = OrdersTotal() - 1; g_pos_412 >= 0; g_pos_412--) {
         OrderSelect(g_pos_412, SELECT_BY_POS, MODE_TRADES);
         if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo) {
            if (OrderType() == OP_BUY) {
               g_price_284 = g_price_332 + ld_1172 * Point;
               gd_unused_300 = g_price_284;
               gd_420 = g_price_332 - g_pips_240 * Point;
               gi_380 = TRUE;
            }
         }
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo) {
            if (OrderType() == OP_SELL) {
               g_price_284 = g_price_332 - ld_1172 * Point;
               gd_unused_308 = g_price_284;
               gd_420 = g_price_332 + g_pips_240 * Point;
               gi_380 = TRUE;
            }
         }
      }
   }
   if (gi_444) {
      if (gi_380 == TRUE) {
         for (g_pos_412 = OrdersTotal() - 1; g_pos_412 >= 0; g_pos_412--) {
            OrderSelect(g_pos_412, SELECT_BY_POS, MODE_TRADES);
            if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
            if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo) {
               while (!OrderModify(OrderTicket(), g_price_332, OrderStopLoss(), g_price_284, 0, Yellow)) {
                  Sleep(1000);
                  RefreshRates();
               }
            }
            gi_444 = FALSE;
         }
      }
   }
   double ld_1252 = LotExponent;
   int li_1260 = lotdecimal;
   double ld_1264 = TakeProfit;
   bool li_1272 = gi_132;
   double ld_1276 = gd_136;
   bool bool_1284 = UseTrailingStop;
   double ld_1288 = TrailStart;
   double ld_1296 = TrailStop;
   double ld_1304 = PipStep;
   double ld_1312 = slip;
   if (MM == TRUE) {
      if (MathCeil(AccountBalance()) < 2000.0) ld_1320 = Lots;
      else ld_1320 = 0.00001 * MathCeil(AccountBalance());
   } else ld_1320 = Lots;
   if (bool_1284) TrailingAlls_15(ld_1288, ld_1296, g_price_616);
   if (gi_552) {
      if (TimeCurrent() >= gi_680) {
         CloseThisSymbolAll_15();
         Print("Closed All due to TimeOut");
      }
   }
   if (gi_676 != Time[0]) {
      gi_676 = Time[0];
      ld_1328 = CalculateProfit_15();
      if (li_1272) {
         if (ld_1328 < 0.0 && MathAbs(ld_1328) > ld_1276 / 100.0 * AccountEquityHigh_15()) {
            CloseThisSymbolAll_15();
            Print("Closed All due to Stop Out");
            gi_728 = FALSE;
         }
      }
      gi_700 = CountTrades_15();
      if (gi_700 == 0) gi_664 = FALSE;
      for (g_pos_696 = OrdersTotal() - 1; g_pos_696 >= 0; g_pos_696--) {
         OrderSelect(g_pos_696, SELECT_BY_POS, MODE_TRADES);
         if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) {
            if (OrderType() == OP_BUY) {
               gi_716 = TRUE;
               gi_720 = FALSE;
               break;
            }
         }
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) {
            if (OrderType() == OP_SELL) {
               gi_716 = FALSE;
               gi_720 = TRUE;
               break;
            }
         }
      }
      if (gi_700 > 0 && gi_700 <= MaxTrades_15) {
         RefreshRates();
         gd_640 = FindLastBuyPrice_15();
         gd_648 = FindLastSellPrice_15();
         if (gi_716 && gd_640 - Ask >= ld_1304 * Point) gi_712 = TRUE;
         if (gi_720 && Bid - gd_648 >= ld_1304 * Point) gi_712 = TRUE;
      }
      if (gi_700 < 1) {
         gi_720 = FALSE;
         gi_716 = FALSE;
         gi_712 = TRUE;
         gd_592 = AccountEquity();
      }
      if (gi_712) {
         gd_640 = FindLastBuyPrice_15();
         gd_648 = FindLastSellPrice_15();
         if (gi_720) {
            gi_684 = gi_700;
            gd_688 = NormalizeDouble(ld_1320 * MathPow(ld_1252, gi_684), li_1260);
            RefreshRates();
            gi_724 = OpenPendingOrder_15(1, gd_688, Bid, ld_1312, Ask, 0, 0, gs_668 + "-" + gi_684, g_magic_176_15, 0, HotPink);
            if (gi_724 < 0) {
               Print("Error: ", GetLastError());
               return (0);
            }
            gd_648 = FindLastSellPrice_15();
            gi_712 = FALSE;
            gi_728 = TRUE;
         } else {
            if (gi_716) {
               gi_684 = gi_700;
               gd_688 = NormalizeDouble(ld_1320 * MathPow(ld_1252, gi_684), li_1260);
               gi_724 = OpenPendingOrder_15(0, gd_688, Ask, ld_1312, Bid, 0, 0, gs_668 + "-" + gi_684, g_magic_176_15, 0, Lime);
               if (gi_724 < 0) {
                  Print("Error: ", GetLastError());
                  return (0);
               }
               gd_640 = FindLastBuyPrice_15();
               gi_712 = FALSE;
               gi_728 = TRUE;
            }
         }
      }
   }
   if (g_datetime_748 != iTime(NULL, g_timeframe_516, 0)) {
      li_1336 = OrdersTotal();
      count_1340 = 0;
      for (int li_1344 = li_1336; li_1344 >= 1; li_1344--) {
         OrderSelect(li_1344 - 1, SELECT_BY_POS, MODE_TRADES);
         if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) count_1340++;
      }
      if (li_1336 == 0 || count_1340 < 1) {
         iclose_1144 = iClose(Symbol(), 0, 2);
         iclose_1152 = iClose(Symbol(), 0, 1);
         g_bid_624 = Bid;
         g_ask_632 = Ask;
         gi_684 = gi_700;
         gd_688 = ld_1320;
         if (iclose_1144 > iclose_1152) {
            gi_724 = OpenPendingOrder_15(1, gd_688, g_bid_624, ld_1312, g_bid_624, 0, 0, gs_668 + "-" + gi_684, g_magic_176_15, 0, HotPink);
            if (gi_724 < 0) {
               Print("Error: ", GetLastError());
               return (0);
            }
            gd_640 = FindLastBuyPrice_15();
            gi_728 = TRUE;
         } else {
            gi_724 = OpenPendingOrder_15(0, gd_688, g_ask_632, ld_1312, g_ask_632, 0, 0, gs_668 + "-" + gi_684, g_magic_176_15, 0, Lime);
            if (gi_724 < 0) {
               Print("Error: ", GetLastError());
               return (0);
            }
            gd_648 = FindLastSellPrice_15();
            gi_728 = TRUE;
         }
         if (gi_724 > 0) gi_680 = TimeCurrent() + 60.0 * (60.0 * gd_556);
         gi_712 = FALSE;
      }
      g_datetime_748 = iTime(NULL, g_timeframe_516, 0);
   }
   gi_700 = CountTrades_15();
   g_price_616 = 0;
   double ld_1348 = 0;
   for (g_pos_696 = OrdersTotal() - 1; g_pos_696 >= 0; g_pos_696--) {
      OrderSelect(g_pos_696, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) {
         if (OrderType() == OP_BUY || OrderType() == OP_SELL) {
            g_price_616 += OrderOpenPrice() * OrderLots();
            ld_1348 += OrderLots();
         }
      }
   }
   if (gi_700 > 0) g_price_616 = NormalizeDouble(g_price_616 / ld_1348, Digits);
   if (gi_728) {
      for (g_pos_696 = OrdersTotal() - 1; g_pos_696 >= 0; g_pos_696--) {
         OrderSelect(g_pos_696, SELECT_BY_POS, MODE_TRADES);
         if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) {
            if (OrderType() == OP_BUY) {
               g_price_584 = g_price_616 + ld_1264 * Point;
               gd_unused_600 = g_price_584;
               gd_704 = g_price_616 - g_pips_528 * Point;
               gi_664 = TRUE;
            }
         }
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) {
            if (OrderType() == OP_SELL) {
               g_price_584 = g_price_616 - ld_1264 * Point;
               gd_unused_608 = g_price_584;
               gd_704 = g_price_616 + g_pips_528 * Point;
               gi_664 = TRUE;
            }
         }
      }
   }
   if (gi_728) {
      if (gi_664 == TRUE) {
         for (g_pos_696 = OrdersTotal() - 1; g_pos_696 >= 0; g_pos_696--) {
            OrderSelect(g_pos_696, SELECT_BY_POS, MODE_TRADES);
            if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
            if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) {
               while (!OrderModify(OrderTicket(), g_price_616, OrderStopLoss(), g_price_584, 0, Yellow)) {
                  Sleep(1000);
                  RefreshRates();
               }
            }
            gi_728 = FALSE;
         }
      }
   }
   double ld_1356 = LotExponent;
   int li_1364 = lotdecimal;
   double ld_1368 = TakeProfit;
   bool li_1376 = gi_132;
   double ld_1380 = gd_136;
   bool bool_1388 = UseTrailingStop;
   double ld_1392 = TrailStart;
   double ld_1400 = TrailStop;
   double ld_1408 = PipStep;
   double ld_1416 = slip;
   if (MM == TRUE) {
      if (MathCeil(AccountBalance()) < 2000.0) ld_1424 = Lots;
      else ld_1424 = 0.00001 * MathCeil(AccountBalance());
   } else ld_1424 = Lots;
   if (bool_1388) TrailingAlls_16(ld_1392, ld_1400, g_price_900);
   if (gi_836) {
      if (TimeCurrent() >= gi_964) {
         CloseThisSymbolAll_16();
         Print("Closed All due to TimeOut");
      }
   }
   if (gi_960 != Time[0]) {
      gi_960 = Time[0];
      ld_1432 = CalculateProfit_16();
      if (li_1376) {
         if (ld_1432 < 0.0 && MathAbs(ld_1432) > ld_1380 / 100.0 * AccountEquityHigh_16()) {
            CloseThisSymbolAll_16();
            Print("Closed All due to Stop Out");
            gi_1012 = FALSE;
         }
      }
      gi_984 = CountTrades_16();
      if (gi_984 == 0) gi_948 = FALSE;
      for (g_pos_980 = OrdersTotal() - 1; g_pos_980 >= 0; g_pos_980--) {
         OrderSelect(g_pos_980, SELECT_BY_POS, MODE_TRADES);
         if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) {
            if (OrderType() == OP_BUY) {
               gi_1000 = TRUE;
               gi_1004 = FALSE;
               break;
            }
         }
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) {
            if (OrderType() == OP_SELL) {
               gi_1000 = FALSE;
               gi_1004 = TRUE;
               break;
            }
         }
      }
      if (gi_984 > 0 && gi_984 <= MaxTrades_16) {
         RefreshRates();
         gd_924 = FindLastBuyPrice_16();
         gd_932 = FindLastSellPrice_16();
         if (gi_1000 && gd_924 - Ask >= ld_1408 * Point) gi_996 = TRUE;
         if (gi_1004 && Bid - gd_932 >= ld_1408 * Point) gi_996 = TRUE;
      }
      if (gi_984 < 1) {
         gi_1004 = FALSE;
         gi_1000 = FALSE;
         gd_876 = AccountEquity();
      }
      if (gi_996) {
         gd_924 = FindLastBuyPrice_16();
         gd_932 = FindLastSellPrice_16();
         if (gi_1004) {
            gi_968 = gi_984;
            gd_972 = NormalizeDouble(ld_1424 * MathPow(ld_1356, gi_968), li_1364);
            RefreshRates();
            gi_1008 = OpenPendingOrder_16(1, gd_972, Bid, ld_1416, Ask, 0, 0, gs_952 + "-易路提款机", g_magic_176_16, 0, HotPink);
            if (gi_1008 < 0) {
               Print("Error: ", GetLastError());
               return (0);
            }
            gd_932 = FindLastSellPrice_16();
            gi_996 = FALSE;
            gi_1012 = TRUE;
         } else {
            if (gi_1000) {
               gi_968 = gi_984;
               gd_972 = NormalizeDouble(ld_1424 * MathPow(ld_1356, gi_968), li_1364);
               gi_1008 = OpenPendingOrder_16(0, gd_972, Ask, ld_1416, Bid, 0, 0, gs_952 + "-路易提款机", g_magic_176_16, 0, Lime);
               if (gi_1008 < 0) {
                  Print("Error: ", GetLastError());
                  return (0);
               }
               gd_924 = FindLastBuyPrice_16();
               gi_996 = FALSE;
               gi_1012 = TRUE;
            }
         }
      }
   }
   if (g_datetime_1032 != iTime(NULL, g_timeframe_804, 0)) {
      li_1440 = OrdersTotal();
      count_1444 = 0;
      for (int li_1448 = li_1440; li_1448 >= 1; li_1448--) {
         OrderSelect(li_1448 - 1, SELECT_BY_POS, MODE_TRADES);
         if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) count_1444++;
      }
      if (li_1440 == 0 || count_1444 < 1) {
         iclose_1144 = iClose(Symbol(), 0, 2);
         iclose_1152 = iClose(Symbol(), 0, 1);
         g_bid_908 = Bid;
         g_ask_916 = Ask;
         gi_968 = gi_984;
         gd_972 = ld_1424;
         if (iclose_1144 > iclose_1152) {
            if (iRSI(NULL, PERIOD_H1, 14, PRICE_CLOSE, 1) > 30.0) {
               gi_1008 = OpenPendingOrder_16(1, gd_972, g_bid_908, ld_1416, g_bid_908, 0, 0, gs_952 + "-路易提款机", g_magic_176_16, 0, HotPink);
               if (gi_1008 < 0) {
                  Print("Error: ", GetLastError());
                  return (0);
               }
               gd_924 = FindLastBuyPrice_16();
               gi_1012 = TRUE;
            }
         } else {
            if (iRSI(NULL, PERIOD_H1, 14, PRICE_CLOSE, 1) < 70.0) {
               gi_1008 = OpenPendingOrder_16(0, gd_972, g_ask_916, ld_1416, g_ask_916, 0, 0, gs_952 + "-路易提款机", g_magic_176_16, 0, Lime);
               if (gi_1008 < 0) {
                  Print("Error: ", GetLastError());
                  return (0);
               }
               gd_932 = FindLastSellPrice_16();
               gi_1012 = TRUE;
            }
         }
         if (gi_1008 > 0) gi_964 = TimeCurrent() + 60.0 * (60.0 * gd_840);
         gi_996 = FALSE;
      }
      g_datetime_1032 = iTime(NULL, g_timeframe_804, 0);
   }
   gi_984 = CountTrades_16();
   g_price_900 = 0;
   double ld_1452 = 0;
   for (g_pos_980 = OrdersTotal() - 1; g_pos_980 >= 0; g_pos_980--) {
      OrderSelect(g_pos_980, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) {
         if (OrderType() == OP_BUY || OrderType() == OP_SELL) {
            g_price_900 += OrderOpenPrice() * OrderLots();
            ld_1452 += OrderLots();
         }
      }
   }
   if (gi_984 > 0) g_price_900 = NormalizeDouble(g_price_900 / ld_1452, Digits);
   if (gi_1012) {
      for (g_pos_980 = OrdersTotal() - 1; g_pos_980 >= 0; g_pos_980--) {
         OrderSelect(g_pos_980, SELECT_BY_POS, MODE_TRADES);
         if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) {
            if (OrderType() == OP_BUY) {
               g_price_868 = g_price_900 + ld_1368 * Point;
               gd_unused_884 = g_price_868;
               gd_988 = g_price_900 - g_pips_812 * Point;
               gi_948 = TRUE;
            }
         }
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) {
            if (OrderType() == OP_SELL) {
               g_price_868 = g_price_900 - ld_1368 * Point;
               gd_unused_892 = g_price_868;
               gd_988 = g_price_900 + g_pips_812 * Point;
               gi_948 = TRUE;
            }
         }
      }
   }
   if (gi_1012) {
      if (gi_948 == TRUE) {
         for (g_pos_980 = OrdersTotal() - 1; g_pos_980 >= 0; g_pos_980--) {
            OrderSelect(g_pos_980, SELECT_BY_POS, MODE_TRADES);
            if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
            if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) {
               while (!OrderModify(OrderTicket(), g_price_900, OrderStopLoss(), g_price_868, 0, Yellow)) {
                  Sleep(1000);
                  RefreshRates();
               }
            }
            gi_1012 = FALSE;
         }
      }
   }
   return (0);
}

int CountTrades_Hilo() {
   int count_0 = 0;
   for (int pos_4 = OrdersTotal() - 1; pos_4 >= 0; pos_4--) {
      OrderSelect(pos_4, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo)
         if (OrderType() == OP_SELL || OrderType() == OP_BUY) count_0++;
   }
   return (count_0);
}

void CloseThisSymbolAll_Hilo() {
   for (int pos_0 = OrdersTotal() - 1; pos_0 >= 0; pos_0--) {
      OrderSelect(pos_0, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() == Symbol()) {
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo) {
            if (OrderType() == OP_BUY) OrderClose(OrderTicket(), OrderLots(), Bid, g_slippage_272, Blue);
            if (OrderType() == OP_SELL) OrderClose(OrderTicket(), OrderLots(), Ask, g_slippage_272, Red);
         }
         Sleep(1000);
      }
   }
}

int OpenPendingOrder_Hilo(int ai_0, double a_lots_4, double ad_unused_12, int a_slippage_20, double ad_unused_24, int ai_32, int ai_36, string a_comment_40, int a_magic_48, int a_datetime_52, color a_color_56) {
   int ticket_60 = 0;
   int error_64 = 0;
   int count_68 = 0;
   int li_72 = 100;
   if(IsFixLots)
   {
      a_lots_4=FixLots;
   }
   
   switch (ai_0) {
   case 0:
      for (count_68 = 0; count_68 < li_72; count_68++) {
         RefreshRates();
         ticket_60 = OrderSend(Symbol(), OP_BUY, a_lots_4, Ask, a_slippage_20, StopLong_Hilo(Bid, ai_32), TakeLong_Hilo(Ask, ai_36), a_comment_40, a_magic_48, a_datetime_52,
            a_color_56);
         error_64 = GetLastError();
         if (error_64 == 0/* NO_ERROR */) break;
         if (!((error_64 == 4/* SERVER_BUSY */ || error_64 == 137/* BROKER_BUSY */ || error_64 == 146/* TRADE_CONTEXT_BUSY */ || error_64 == 136/* OFF_QUOTES */))) break;
         Sleep(5000);
      }
      break;
   case 1:
      for (count_68 = 0; count_68 < li_72; count_68++) {
         ticket_60 = OrderSend(Symbol(), OP_SELL, a_lots_4, Bid, a_slippage_20, StopShort_Hilo(Ask, ai_32), TakeShort_Hilo(Bid, ai_36), a_comment_40, a_magic_48, a_datetime_52,
            a_color_56);
         error_64 = GetLastError();
         if (error_64 == 0/* NO_ERROR */) break;
         if (!((error_64 == 4/* SERVER_BUSY */ || error_64 == 137/* BROKER_BUSY */ || error_64 == 146/* TRADE_CONTEXT_BUSY */ || error_64 == 136/* OFF_QUOTES */))) break;
         Sleep(5000);
      }
   }
   return (ticket_60);
}

double StopLong_Hilo(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 - ai_8 * Point);
}

double StopShort_Hilo(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 + ai_8 * Point);
}

double TakeLong_Hilo(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 + ai_8 * Point);
}

double TakeShort_Hilo(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 - ai_8 * Point);
}

double CalculateProfit_Hilo() {
   double ld_ret_0 = 0;
   for (g_pos_412 = OrdersTotal() - 1; g_pos_412 >= 0; g_pos_412--) {
      OrderSelect(g_pos_412, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo)
         if (OrderType() == OP_BUY || OrderType() == OP_SELL) ld_ret_0 += OrderProfit();
   }
   return (ld_ret_0);
}

void TrailingAlls_Hilo(int ai_0, int ai_4, double a_price_8) {
   int li_16;
   double order_stoploss_20;
   double price_28;
   if (ai_4 != 0) {
      for (int pos_36 = OrdersTotal() - 1; pos_36 >= 0; pos_36--) {
         if (OrderSelect(pos_36, SELECT_BY_POS, MODE_TRADES)) {
            if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
            if (OrderSymbol() == Symbol() || OrderMagicNumber() == MagicNumber_Hilo) {
               if (OrderType() == OP_BUY) {
                  li_16 = NormalizeDouble((Bid - a_price_8) / Point, 0);
                  if (li_16 < ai_0) continue;
                  order_stoploss_20 = OrderStopLoss();
                  price_28 = Bid - ai_4 * Point;
                  if (order_stoploss_20 == 0.0 || (order_stoploss_20 != 0.0 && price_28 > order_stoploss_20)) OrderModify(OrderTicket(), a_price_8, price_28, OrderTakeProfit(), 0, Aqua);
               }
               if (OrderType() == OP_SELL) {
                  li_16 = NormalizeDouble((a_price_8 - Ask) / Point, 0);
                  if (li_16 < ai_0) continue;
                  order_stoploss_20 = OrderStopLoss();
                  price_28 = Ask + ai_4 * Point;
                  if (order_stoploss_20 == 0.0 || (order_stoploss_20 != 0.0 && price_28 < order_stoploss_20)) OrderModify(OrderTicket(), a_price_8, price_28, OrderTakeProfit(), 0, Red);
               }
            }
            Sleep(1000);
         }
      }
   }
}

double AccountEquityHigh_Hilo() {
   if (CountTrades_Hilo() == 0) gd_448 = AccountEquity();
   if (gd_448 < gd_456) gd_448 = gd_456;
   else gd_448 = AccountEquity();
   gd_456 = AccountEquity();
   return (gd_448);
}

double FindLastBuyPrice_Hilo() {
   double order_open_price_0;
   int ticket_8;
   double ld_unused_12 = 0;
   int ticket_20 = 0;
   for (int pos_24 = OrdersTotal() - 1; pos_24 >= 0; pos_24--) {
      OrderSelect(pos_24, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo && OrderType() == OP_BUY) {
         ticket_8 = OrderTicket();
         if (ticket_8 > ticket_20) {
            order_open_price_0 = OrderOpenPrice();
            ld_unused_12 = order_open_price_0;
            ticket_20 = ticket_8;
         }
      }
   }
   return (order_open_price_0);
}

double FindLastSellPrice_Hilo() {
   double order_open_price_0;
   int ticket_8;
   double ld_unused_12 = 0;
   int ticket_20 = 0;
   for (int pos_24 = OrdersTotal() - 1; pos_24 >= 0; pos_24--) {
      OrderSelect(pos_24, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != MagicNumber_Hilo) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == MagicNumber_Hilo && OrderType() == OP_SELL) {
         ticket_8 = OrderTicket();
         if (ticket_8 > ticket_20) {
            order_open_price_0 = OrderOpenPrice();
            ld_unused_12 = order_open_price_0;
            ticket_20 = ticket_8;
         }
      }
   }
   return (order_open_price_0);
}

int CountTrades_15() {
   int count_0 = 0;
   for (int pos_4 = OrdersTotal() - 1; pos_4 >= 0; pos_4--) {
      OrderSelect(pos_4, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15)
         if (OrderType() == OP_SELL || OrderType() == OP_BUY) count_0++;
   }
   return (count_0);
}

void CloseThisSymbolAll_15() {
   for (int pos_0 = OrdersTotal() - 1; pos_0 >= 0; pos_0--) {
      OrderSelect(pos_0, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() == Symbol()) {
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15) {
            if (OrderType() == OP_BUY) OrderClose(OrderTicket(), OrderLots(), Bid, g_slippage_572, Blue);
            if (OrderType() == OP_SELL) OrderClose(OrderTicket(), OrderLots(), Ask, g_slippage_572, Red);
         }
         Sleep(1000);
      }
   }
}

int OpenPendingOrder_15(int ai_0, double a_lots_4, double ad_unused_12, int a_slippage_20, double ad_unused_24, int ai_32, int ai_36, string a_comment_40, int a_magic_48, int a_datetime_52, color a_color_56) {
   int ticket_60 = 0;
   int error_64 = 0;
   int count_68 = 0;
   int li_72 = 100;
   if(IsFixLots)
   {
      a_lots_4=FixLots;
   }
   switch (ai_0) {
   case 0:
      for (count_68 = 0; count_68 < li_72; count_68++) {
         RefreshRates();
         ticket_60 = OrderSend(Symbol(), OP_BUY, a_lots_4, Ask, a_slippage_20, StopLong_15(Bid, ai_32), TakeLong_15(Ask, ai_36), a_comment_40, a_magic_48, a_datetime_52, a_color_56);
         error_64 = GetLastError();
         if (error_64 == 0/* NO_ERROR */) break;
         if (!((error_64 == 4/* SERVER_BUSY */ || error_64 == 137/* BROKER_BUSY */ || error_64 == 146/* TRADE_CONTEXT_BUSY */ || error_64 == 136/* OFF_QUOTES */))) break;
         Sleep(5000);
      }
      break;
   case 1:
      for (count_68 = 0; count_68 < li_72; count_68++) {
         ticket_60 = OrderSend(Symbol(), OP_SELL, a_lots_4, Bid, a_slippage_20, StopShort_15(Ask, ai_32), TakeShort_15(Bid, ai_36), a_comment_40, a_magic_48, a_datetime_52,
            a_color_56);
         error_64 = GetLastError();
         if (error_64 == 0/* NO_ERROR */) break;
         if (!((error_64 == 4/* SERVER_BUSY */ || error_64 == 137/* BROKER_BUSY */ || error_64 == 146/* TRADE_CONTEXT_BUSY */ || error_64 == 136/* OFF_QUOTES */))) break;
         Sleep(5000);
      }
   }
   return (ticket_60);
}

double StopLong_15(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 - ai_8 * Point);
}

double StopShort_15(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 + ai_8 * Point);
}

double TakeLong_15(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 + ai_8 * Point);
}

double TakeShort_15(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 - ai_8 * Point);
}

double CalculateProfit_15() {
   double ld_ret_0 = 0;
   for (g_pos_696 = OrdersTotal() - 1; g_pos_696 >= 0; g_pos_696--) {
      OrderSelect(g_pos_696, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15)
         if (OrderType() == OP_BUY || OrderType() == OP_SELL) ld_ret_0 += OrderProfit();
   }
   return (ld_ret_0);
}

void TrailingAlls_15(int ai_0, int ai_4, double a_price_8) {
   int li_16;
   double order_stoploss_20;
   double price_28;
   if (ai_4 != 0) {
      for (int pos_36 = OrdersTotal() - 1; pos_36 >= 0; pos_36--) {
         if (OrderSelect(pos_36, SELECT_BY_POS, MODE_TRADES)) {
            if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
            if (OrderSymbol() == Symbol() || OrderMagicNumber() == g_magic_176_15) {
               if (OrderType() == OP_BUY) {
                  li_16 = NormalizeDouble((Bid - a_price_8) / Point, 0);
                  if (li_16 < ai_0) continue;
                  order_stoploss_20 = OrderStopLoss();
                  price_28 = Bid - ai_4 * Point;
                  if (order_stoploss_20 == 0.0 || (order_stoploss_20 != 0.0 && price_28 > order_stoploss_20)) OrderModify(OrderTicket(), a_price_8, price_28, OrderTakeProfit(), 0, Aqua);
               }
               if (OrderType() == OP_SELL) {
                  li_16 = NormalizeDouble((a_price_8 - Ask) / Point, 0);
                  if (li_16 < ai_0) continue;
                  order_stoploss_20 = OrderStopLoss();
                  price_28 = Ask + ai_4 * Point;
                  if (order_stoploss_20 == 0.0 || (order_stoploss_20 != 0.0 && price_28 < order_stoploss_20)) OrderModify(OrderTicket(), a_price_8, price_28, OrderTakeProfit(), 0, Red);
               }
            }
            Sleep(1000);
         }
      }
   }
}

double AccountEquityHigh_15() {
   if (CountTrades_15() == 0) gd_732 = AccountEquity();
   if (gd_732 < gd_740) gd_732 = gd_740;
   else gd_732 = AccountEquity();
   gd_740 = AccountEquity();
   return (gd_732);
}

double FindLastBuyPrice_15() {
   double order_open_price_0;
   int ticket_8;
   double ld_unused_12 = 0;
   int ticket_20 = 0;
   for (int pos_24 = OrdersTotal() - 1; pos_24 >= 0; pos_24--) {
      OrderSelect(pos_24, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15 && OrderType() == OP_BUY) {
         ticket_8 = OrderTicket();
         if (ticket_8 > ticket_20) {
            order_open_price_0 = OrderOpenPrice();
            ld_unused_12 = order_open_price_0;
            ticket_20 = ticket_8;
         }
      }
   }
   return (order_open_price_0);
}

double FindLastSellPrice_15() {
   double order_open_price_0;
   int ticket_8;
   double ld_unused_12 = 0;
   int ticket_20 = 0;
   for (int pos_24 = OrdersTotal() - 1; pos_24 >= 0; pos_24--) {
      OrderSelect(pos_24, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_15) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_15 && OrderType() == OP_SELL) {
         ticket_8 = OrderTicket();
         if (ticket_8 > ticket_20) {
            order_open_price_0 = OrderOpenPrice();
            ld_unused_12 = order_open_price_0;
            ticket_20 = ticket_8;
         }
      }
   }
   return (order_open_price_0);
}

int CountTrades_16() {
   int count_0 = 0;
   for (int pos_4 = OrdersTotal() - 1; pos_4 >= 0; pos_4--) {
      OrderSelect(pos_4, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16)
         if (OrderType() == OP_SELL || OrderType() == OP_BUY) count_0++;
   }
   return (count_0);
}

void CloseThisSymbolAll_16() {
   for (int pos_0 = OrdersTotal() - 1; pos_0 >= 0; pos_0--) {
      OrderSelect(pos_0, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() == Symbol()) {
         if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16) {
            if (OrderType() == OP_BUY) OrderClose(OrderTicket(), OrderLots(), Bid, g_slippage_856, Blue);
            if (OrderType() == OP_SELL) OrderClose(OrderTicket(), OrderLots(), Ask, g_slippage_856, Red);
         }
         Sleep(1000);
      }
   }
}

int OpenPendingOrder_16(int ai_0, double a_lots_4, double ad_unused_12, int a_slippage_20, double ad_unused_24, int ai_32, int ai_36, string a_comment_40, int a_magic_48, int a_datetime_52, color a_color_56) {
   int ticket_60 = 0;
   int error_64 = 0;
   int count_68 = 0;
   int li_72 = 100;
   if(IsFixLots)
   {
      a_lots_4=FixLots;
   }
   switch (ai_0) {
   case 0:
      for (count_68 = 0; count_68 < li_72; count_68++) {
         RefreshRates();
         ticket_60 = OrderSend(Symbol(), OP_BUY, a_lots_4, Ask, a_slippage_20, StopLong_16(Bid, ai_32), TakeLong_16(Ask, ai_36), a_comment_40, a_magic_48, a_datetime_52, a_color_56);
         error_64 = GetLastError();
         if (error_64 == 0/* NO_ERROR */) break;
         if (!((error_64 == 4/* SERVER_BUSY */ || error_64 == 137/* BROKER_BUSY */ || error_64 == 146/* TRADE_CONTEXT_BUSY */ || error_64 == 136/* OFF_QUOTES */))) break;
         Sleep(5000);
      }
      break;
   case 1:
      for (count_68 = 0; count_68 < li_72; count_68++) {
         ticket_60 = OrderSend(Symbol(), OP_SELL, a_lots_4, Bid, a_slippage_20, StopShort_16(Ask, ai_32), TakeShort_16(Bid, ai_36), a_comment_40, a_magic_48, a_datetime_52,
            a_color_56);
         error_64 = GetLastError();
         if (error_64 == 0/* NO_ERROR */) break;
         if (!((error_64 == 4/* SERVER_BUSY */ || error_64 == 137/* BROKER_BUSY */ || error_64 == 146/* TRADE_CONTEXT_BUSY */ || error_64 == 136/* OFF_QUOTES */))) break;
         Sleep(5000);
      }
   }
   return (ticket_60);
}

double StopLong_16(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 - ai_8 * Point);
}

double StopShort_16(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 + ai_8 * Point);
}

double TakeLong_16(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 + ai_8 * Point);
}

double TakeShort_16(double ad_0, int ai_8) {
   if (ai_8 == 0) return (0);
   return (ad_0 - ai_8 * Point);
}

double CalculateProfit_16() {
   double ld_ret_0 = 0;
   for (g_pos_980 = OrdersTotal() - 1; g_pos_980 >= 0; g_pos_980--) {
      OrderSelect(g_pos_980, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16)
         if (OrderType() == OP_BUY || OrderType() == OP_SELL) ld_ret_0 += OrderProfit();
   }
   return (ld_ret_0);
}

void TrailingAlls_16(int ai_0, int ai_4, double a_price_8) {
   int li_16;
   double order_stoploss_20;
   double price_28;
   if (ai_4 != 0) {
      for (int pos_36 = OrdersTotal() - 1; pos_36 >= 0; pos_36--) {
         if (OrderSelect(pos_36, SELECT_BY_POS, MODE_TRADES)) {
            if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
            if (OrderSymbol() == Symbol() || OrderMagicNumber() == g_magic_176_16) {
               if (OrderType() == OP_BUY) {
                  li_16 = NormalizeDouble((Bid - a_price_8) / Point, 0);
                  if (li_16 < ai_0) continue;
                  order_stoploss_20 = OrderStopLoss();
                  price_28 = Bid - ai_4 * Point;
                  if (order_stoploss_20 == 0.0 || (order_stoploss_20 != 0.0 && price_28 > order_stoploss_20)) OrderModify(OrderTicket(), a_price_8, price_28, OrderTakeProfit(), 0, Aqua);
               }
               if (OrderType() == OP_SELL) {
                  li_16 = NormalizeDouble((a_price_8 - Ask) / Point, 0);
                  if (li_16 < ai_0) continue;
                  order_stoploss_20 = OrderStopLoss();
                  price_28 = Ask + ai_4 * Point;
                  if (order_stoploss_20 == 0.0 || (order_stoploss_20 != 0.0 && price_28 < order_stoploss_20)) OrderModify(OrderTicket(), a_price_8, price_28, OrderTakeProfit(), 0, Red);
               }
            }
            Sleep(1000);
         }
      }
   }
}

double AccountEquityHigh_16() {
   if (CountTrades_16() == 0) gd_1016 = AccountEquity();
   if (gd_1016 < gd_1024) gd_1016 = gd_1024;
   else gd_1016 = AccountEquity();
   gd_1024 = AccountEquity();
   return (gd_1016);
}

double FindLastBuyPrice_16() {
   double order_open_price_0;
   int ticket_8;
   double ld_unused_12 = 0;
   int ticket_20 = 0;
   for (int pos_24 = OrdersTotal() - 1; pos_24 >= 0; pos_24--) {
      OrderSelect(pos_24, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16 && OrderType() == OP_BUY) {
         ticket_8 = OrderTicket();
         if (ticket_8 > ticket_20) {
            order_open_price_0 = OrderOpenPrice();
            ld_unused_12 = order_open_price_0;
            ticket_20 = ticket_8;
         }
      }
   }
   return (order_open_price_0);
}

double FindLastSellPrice_16() {
   double order_open_price_0;
   int ticket_8;
   double ld_unused_12 = 0;
   int ticket_20 = 0;
   for (int pos_24 = OrdersTotal() - 1; pos_24 >= 0; pos_24--) {
      OrderSelect(pos_24, SELECT_BY_POS, MODE_TRADES);
      if (OrderSymbol() != Symbol() || OrderMagicNumber() != g_magic_176_16) continue;
      if (OrderSymbol() == Symbol() && OrderMagicNumber() == g_magic_176_16 && OrderType() == OP_SELL) {
         ticket_8 = OrderTicket();
         if (ticket_8 > ticket_20) {
            order_open_price_0 = OrderOpenPrice();
            ld_unused_12 = order_open_price_0;
            ticket_20 = ticket_8;
         }
      }
   }
   return (order_open_price_0);
}