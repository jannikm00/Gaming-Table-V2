//Zeichnet nur den Start Bildschrim, keine weitere Funktion

void start_screen() {
  for (int i = 0; i < MAXLED; i++) {  //Home Rot
    if (i == 1064 || i == 1281 || i == 1263 || i == 265 || i == 1988 || i == 1939 || i == 1892 || i == 1941 || i == 1033 || i == 1032 || i == 1031 || i == 985 || i == 984 || i == 983 || i == 937 || i == 936 || i == 935 || i == 889 || i == 888 || i == 887 || i == 841 || i == 840 || i == 839 || i == 793 || i == 792 || i == 791 || i == 744 || i == 696 || i == 648 || i == 1178 || i == 1177 || i == 1176 || i == 1175 || i == 1174 || i == 1130 || i == 1129 || i == 1128 || i == 1127 || i == 1126 || i == 1082 || i == 1081 || i == 1080 || i == 1079 || i == 1078 || i == 1271 || i == 1270 || i == 1223 || i == 1222 || i == 1274 || i == 1273 || i == 1226 || i == 1225 || i == 1323 || i == 1322 || i == 1318 || i == 1317 || i == 1269 || i == 1268 || i == 1267 || i == 1277 || i == 1276 || i == 1275 || i == 1233 || i == 1232 || i == 1231 || i == 1230 || i == 1229 || i == 1219 || i == 1218 || i == 1217 || i == 1216 || i == 1215 || i == 1184 || i == 1183 || i == 1135 || i == 1169 || i == 1168 || i == 1121 || i == 1329 || i == 1328 || i == 1376 || i == 1375 || i == 1374 || i == 1422 || i == 1421 || i == 1420 || i == 1419 || i == 1418 || i == 1417 || i == 1416 || i == 1415 || i == 1414 || i == 1413 || i == 1412 || i == 1411 || i == 1410 || i == 1362 || i == 1361 || i == 1360 || i == 1312 || i == 1311 || i == 1467 || i == 1466 || i == 1465 || i == 1464 || i == 1463 || i == 1462 || i == 1461) {
      led.setPixelColor(i - 1, led.Color(255, 0, 0));
    }
  }
  for (int i = 0; i < MAXLED; i++) {  //Home Weiß
    if (i == 1208 || i == 1207 || i == 1206 || i == 1205 || i == 1204 || i == 1203 || i == 1202 || i == 1157 || i == 1109 || i == 1107 || i == 1059 || i == 1016 || i == 1015 || i == 1014 || i == 1013 || i == 1012 || i == 1011 || i == 1010 || i == 918 || i == 869 || i == 820 || i == 776 || i == 775 || i == 774 || i == 773 || i == 772 || i == 771 || i == 724 || i == 677 || i == 630 || i == 107 || i == 813 || i == 2076 || i == 812 || i == 811 || i == 810 || i == 809 || i == 808 || i == 807 || i == 860 || i == 907 || i == 954 || i == 764 || i == 715 || i == 666 || i == 2045 || i == 2044 || i == 2043 || i == 2042 || i == 2041 || i == 2040 || i == 2039 || i == 2038 || i == 2037 || i == 2036 || i == 2035 || i == 1853 || i == 1852 || i == 1851 || i == 1850 || i == 1849 || i == 1848 || i == 1847 || i == 1846 || i == 1845 || i == 1844 || i == 1843 || i == 1994 || i == 1946 || i == 1898 || i == 1990 || i == 1942 || i == 1894 || i == 1798 || i == 1750 || i == 1702 || i == 1802 || i == 1754 || i == 1706 || i == 2182 || i == 2134 || i == 2086 || i == 2186 || i == 2138 || i == 2090 || i == 2028 || i == 1980 || i == 1932 || i == 1884 || i == 1836 || i == 1788 || i == 2027 || i == 1978 || i == 1929 || i == 2029 || i == 1982 || i == 1935 || i == 395 || i == 347 || i == 299 || i == 251 || i == 203 || i == 155 || i == 154 || i == 201 || i == 248 || i == 156 || i == 205 || i == 254 || i == 79 || i == 78 || i == 77 || i == 76 || i == 75 || i == 74 || i == 73 || i == 72 || i == 71 || i == 70 || i == 69 || i == 68 || i == 67 || i == 66 || i == 65 || i == 64 || i == 63 || i == 62 || i == 163 || i == 162 || i == 115 || i == 114 || i == 167 || i == 166 || i == 119 || i == 118) {
      led.setPixelColor(i - 1, led.Color(brght * 0.5, brght * 0.5, brght * 0.5));
    }
  }
  for (int i = 0; i < MAXLED; i++) {  //Home Blau
    if (i == 1991 || i == 1993 || i == 1897 || i == 1944 || i == 1895 || i == 354 || i == 306) {
      led.setPixelColor(i - 1, led.Color(0, 0, 255));
    }
  }
  for (int i = 0; i < MAXLED; i++) {  //Home räder auto
    if (i == 163 || i == 162 || i == 115 || i == 114 || i == 167 || i == 119 || i == 166 || i == 118) {
      led.setPixelColor(i - 1, led.Color(brght, brght, brght));
    }
  }
  for (int i = 0; i < MAXLED; i++) {  //Home Gelb
    if (i == 257 || i == 1191 || i == 1143 || i == 1095 || i == 1050 || i == 1049 || i == 1048 || i == 1242 || i == 1241 || i == 1240 || i == 1195 || i == 1147 || i == 1099) {
      led.setPixelColor(i - 1, led.Color(255, 255, 0));
    }
  }
  for (int i = 0; i < MAXLED; i++) {  //Home dimm Gelb
    if (i == 1194 || i == 1193 || i == 1192 || i == 1146 || i == 1145 || i == 1144 || i == 1098 || i == 1097 || i == 1096) {
      led.setPixelColor(i - 1, led.Color(100, 100, 0));
    }
  }
  for (int i = 0; i < MAXLED; i++) {  //Home Grün
    if (i == 359 || i == 358 || i == 357 || i == 356 || i == 355 || i == 311 || i == 310 || i == 309 || i == 308 || i == 307 || i == 263 || i == 262 || i == 261 || i == 260 || i == 259 || i == 215 || i == 214 || i == 213 || i == 212 || i == 211 || i == 258 || i == 210 || i == 209 || i == 312 || i == 264 || i == 216 || i == 217) {
      led.setPixelColor(i - 1, led.Color(0, 255, 0));
    }
  }
  for (int i = 0; i < MAXLED; i++) {  //Home strasse weiß
    if (i == 79 || i == 78 || i == 77 || i == 76 || i == 75 || i == 74 || i == 73 || i == 72 || i == 71 || i == 70 || i == 69 || i == 68 || i == 67 || i == 66 || i == 65 || i == 64 || i == 63 || i == 62 || i == 61) {
      led.setPixelColor(i - 1, led.Color(255, 255, 255));
    }
  }
  led.show();
}
