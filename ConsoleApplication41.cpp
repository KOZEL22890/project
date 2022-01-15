
#include <stdlib.h> 
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    int counter = 0, x = 8, y = 8, level = 0;
    char you = 32, idk = 32;
    while (idk != 'Q') {
        char map[17][17] = {
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 45, 45,45, 45,45, 45,45, 45,45, 45,45, 45,45, 45,45,45,45 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 45, 45,45, 45,45, 45,45, 45,45, 45,45, 45,45, 45,45, 45,45 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 },
        { 32, 32,32, 32,32, 124,32, 32,32, 32,32, 124,32, 32,32,32,32 }
        };
        if (level == 0) {//выбор уровня
            cout << "select level:";
            cin >> level;
        }//какой сейчас уровень
        if (level == 1) {
            counter = 0, x = 8, y = 8;
            for (int i = 0; counter < 540; i++) {//управление
                if (_kbhit()) {
                    you = _getch();
                    if (you == 'w' && y != 2 || you == 'W' && y != 2) {
                        map[y][x] = 32;
                        y -= 6;
                    }
                    else if (you == 's' && y != 14 || you == 'S' && y != 14) {
                        map[y][x] = 32;
                        y += 6;
                    }
                    else if (you == 'd' && x != 14 || you == 'D' && x != 14) {
                        map[y][x] = 32;
                        x += 6;
                    }
                    else if (you == 'a' && x != 2 || you == 'A' && x != 2) {
                        map[y][x] = 32;
                        x -= 6;
                    }
                    else {
                        continue;
                    }
                }
                map[y][x] = 5;
                //горизонтальные лазеры
                //верхний лазер
                if (counter == 25||counter==223 || counter == 289 || counter == 421 || counter == 487) {
                    map[0][i] = 45; map[4][i] = 45;
                }
                if (counter == 33 || counter == 231 || counter == 297 || counter == 429 || counter == 492) {
                    map[1][i] = 45; map[3][i] = 45;
                    map[0][i] = 32; map[4][i] = 32;
                    map[0][5] = 124; map[4][5] = 124;
                    map[0][11] = 124; map[4][11] = 124;
                }
                if (counter == 41|| counter == 239 || counter == 305 || counter == 437 || counter == 497) {
                    map[2][i] = 45;
                }
                if (counter == 49|| counter == 247 || counter == 313 || counter == 445 || counter == 502) {
                    map[1][i] = 32; map[3][i] = 32; map[2][i] = 32;
                    map[1][5] = 124; map[2][5] = 124; map[3][5] = 124;
                    map[1][11] = 124; map[2][11] = 124; map[3][11] = 124;
                }

                //центральный лазер


                if (counter == 57|| counter == 223||counter==256 || counter == 454 || counter == 503) {
                    map[6][i] = 45; map[10][i] = 45;
                }
                if (counter == 66|| counter == 231 || counter == 264 || counter == 462 || counter == 508) {
                    map[7][i] = 45; map[9][i] = 45;
                    map[6][i] = 32; map[10][i] = 32;
                    map[6][5] = 124; map[10][5] = 124;
                    map[6][11] = 124; map[10][11] = 124;
                }
                if (counter == 74 || counter == 239 || counter == 272 || counter == 470 || counter == 513) {
                    map[8][i] = 45;
                }
                if (counter == 82 || counter == 247 || counter == 280 || counter == 478 || counter == 518) {
                    map[7][i] = 32; map[8][i] = 32; map[9][i] = 32;
                    map[7][5] = 124; map[8][5] = 124; map[9][5] = 124;
                    map[7][11] = 124; map[8][11] = 124; map[9][11] = 124;
                }

                //нижний лазер

                if (counter == 91||counter == 256 || counter == 289 || counter == 421 || counter == 519) {
                    map[12][i] = 45; map[16][i] = 45;
                }
                if (counter == 99 || counter == 264 || counter == 297 || counter == 429 || counter == 524) {
                    map[13][i] = 45; map[15][i] = 45;
                    map[12][i] = 32; map[16][i] = 32;
                    map[12][5] = 124; map[16][5] = 124;
                    map[12][11] = 124; map[16][11] = 124;
                }
                if (counter == 107 || counter == 272||counter == 305 || counter == 437 || counter == 529) {
                    map[14][i] = 45;
                }
                if (counter == 115 || counter == 280 || counter == 313 || counter == 445 || counter == 534) {
                    map[13][i] = 32; map[14][i] = 32; map[15][i] = 32;
                    map[13][5] = 124; map[14][5] = 124; map[15][5] = 124;
                    map[13][11] = 124; map[14][11] = 124; map[15][11] = 124;
                }



                //вертикальные лазеры
                //левый лазер



                if (counter == 124 || counter == 322 || counter == 388 || counter == 421) {
                    map[i][0] = 124; map[i][4] = 124;
                }
                if (counter == 132 || counter == 330 || counter == 396 || counter == 429) {
                    map[i][1] = 124; map[i][3] = 124;
                    map[i][0] = 32; map[i][4] = 32;
                    map[5][0] = 45; map[5][4] = 45;
                    map[11][0] = 45; map[11][4] = 45;
                }
                if (counter == 140 || counter == 338 || counter == 404 || counter == 437) {
                    map[i][2] = 124;
                }
                if (counter == 148 || counter == 346 || counter == 412 || counter == 445) {
                    map[i][1] = 32; map[i][3] = 32; map[i][2] = 32;
                    map[5][1] = 45; map[5][2] = 45; map[5][3] = 45;
                    map[11][1] = 45; map[11][2] = 45; map[11][3] = 45;
                }

                //центральный лазер

                if (counter == 157 || counter == 322 || counter == 355 || counter == 454) {
                    map[i][6] = 124; map[i][10] = 124;
                }
                if (counter == 165 || counter == 330 || counter == 363 || counter == 462) {
                    map[i][7] = 124; map[i][9] = 124;
                    map[i][6] = 32; map[i][10] = 32;
                    map[5][6] = 45; map[5][10] = 45;
                    map[11][6] = 45; map[11][10] = 45;
                }
                if (counter == 173 || counter == 338 || counter == 371 || counter == 470) {
                    map[i][8] = 124;
                }
                if (counter == 181 || counter == 346 || counter == 379 || counter == 478) {
                    map[i][7] = 32; map[i][8] = 32; map[i][9] = 32;
                    map[5][7] = 45; map[5][8] = 45; map[5][9] = 45;
                    map[11][7] = 45; map[11][8] = 45; map[11][9] = 45;
                }

                //правый лазер


                if (counter == 190 || counter == 355 || counter == 388 || counter == 421) {
                    map[i][12] = 124; map[i][16] = 124;
                }
                if (counter == 198 || counter == 363 || counter == 396 || counter == 429) {
                    map[i][13] = 124; map[i][15] = 124;
                    map[i][12] = 32; map[i][16] = 32;
                    map[5][12] = 45; map[5][16] = 45;
                    map[11][12] = 45; map[11][16] = 45;
                }
                if (counter == 206 || counter == 371 || counter == 404 || counter == 437) {
                    map[i][14] = 124;
                }
                if (counter == 214 || counter == 379 || counter == 412 || counter == 445) {
                    map[i][13] = 32; map[i][14] = 32; map[i][15] = 32;
                    map[5][13] = 45; map[5][14] = 45; map[5][15] = 45;
                    map[11][13] = 45; map[11][14] = 45; map[11][15] = 45;
                }



                //отрисовка поля
                cout << map[i][0] << map[i][1] << map[i][2] << map[i][3] << map[i][4] << map[i][5] << map[i][6] << map[i][7] << map[i][8] << map[i][9] << map[i][10] << map[i][11] << map[i][12] << map[i][13] << map[i][14] << map[i][15] << map[i][16] << endl;

                if (i == 16) {//очищение консоли
                    i = -1;
                    counter++;
                    system("cls");
                    if (map[y + 1][x] == 124 || map[y][x + 1] == 45) {//смерть
                        cout << endl << endl << endl << endl << endl << endl << "                  GAME OVER"
                            << endl << endl << endl << endl << "                 R to restart, Q to exit" << endl;
                        idk = _getch();
                        if (idk == 'R' || idk == 'r')level = 1;
                        if (idk == 'Q' || idk == 'q')return 0;
                        break;
                    }
                }
                //оповещение о том, что ты прошел уровень
                if (counter == 540)cout << "YOU BEAT THE LEVEL 1, GOOD JOB!" << endl;
                level = 0;
            }
        }//определение уровня
        else if (level == 2) {
            counter = 0, x = 8, y = 8;
            for (int i = 0; counter < 500; i++) {//управление
                if (_kbhit()) {
                    you = _getch();
                    if (you == 'w' && y == 2 || you == 'W' && y == 2) {
                        map[y][x] = 32;
                        y += 12;
                    }
                    else if (you == 'w' && y != 2 || you == 'W' && y != 2) {
                        map[y][x] = 32;
                        y -= 6;
                    }
                    else if (you == 's' && y == 14 || you == 'S' && y == 14) {
                        map[y][x] = 32;
                        y -= 12;
                    }
                    else if (you == 's' && y != 14 || you == 'S' && y != 14) {
                        map[y][x] = 32;
                        y += 6;
                    }
                    else if (you == 'd' && x == 14 || you == 'D' && x == 14) {
                        map[y][x] = 32;
                        x -= 12;
                    }
                    else if (you == 'd' && x != 14 || you == 'D' && x != 14) {
                        map[y][x] = 32;
                        x += 6;
                    }
                    else if (you == 'a' && x == 2 || you == 'A' && x == 2) {
                        map[y][x] = 32;
                        x += 12;
                    }
                    else if (you == 'a' && x != 2 || you == 'A' && x != 2) {
                        map[y][x] = 32;
                        x -= 6;
                    }
                    else {
                        continue;
                    }
                }
                //горизонтальные лазеры
                //верхний лазер
                map[y][x] = 5;
                if (counter == 25 || counter == 157 || counter == 400) {
                    map[0][i] = 45; map[4][i] = 45;
                }
                if (counter == 32 || counter == 164 || counter == 407) {
                    map[1][i] = 45; map[3][i] = 45;
                    map[0][i] = 32; map[4][i] = 32;
                    map[0][5] = 124; map[4][5] = 124;
                    map[0][11] = 124; map[4][11] = 124;
                }
                if (counter == 39 || counter == 171 || counter == 414) {
                    map[2][i] = 45;
                }
                if (counter == 46 || counter == 210 || counter == 421) {
                    map[1][i] = 32; map[3][i] = 32; map[2][i] = 32;
                    map[1][5] = 124; map[2][5] = 124; map[3][5] = 124;
                    map[1][11] = 124; map[2][11] = 124; map[3][11] = 124;
                }

                //центральный лазер


                if (counter == 69 || counter == 135 || counter == 172 || counter == 414) {
                    map[6][i] = 45; map[10][i] = 45;
                }
                if (counter == 76 || counter == 142 || counter == 179 || counter == 421) {
                    map[7][i] = 45; map[9][i] = 45;
                    map[6][i] = 32; map[10][i] = 32;
                    map[6][5] = 124; map[10][5] = 124;
                    map[6][11] = 124; map[10][11] = 124;
                }
                if (counter == 83 || counter == 149 || counter == 186 || counter == 428) {
                    map[8][i] = 45;
                }
                if (counter == 90 || counter == 156 || counter == 210 || counter == 435) {
                    map[7][i] = 32; map[8][i] = 32; map[9][i] = 32;
                    map[7][5] = 124; map[8][5] = 124; map[9][5] = 124;
                    map[7][11] = 124; map[8][11] = 124; map[9][11] = 124;
                }

                //нижний лазер

                if (counter == 69 || counter == 113 || counter == 428) {
                    map[12][i] = 45; map[16][i] = 45;
                }
                if (counter == 76 || counter == 120 || counter == 435) {
                    map[13][i] = 45; map[15][i] = 45;
                    map[12][i] = 32; map[16][i] = 32;
                    map[12][5] = 124; map[16][5] = 124;
                    map[12][11] = 124; map[16][11] = 124;
                }
                if (counter == 83 || counter == 127 || counter == 442) {
                    map[14][i] = 45;
                }
                if (counter == 90 || counter == 134 || counter == 449) {
                    map[13][i] = 32; map[14][i] = 32; map[15][i] = 32;
                    map[13][5] = 124; map[14][5] = 124; map[15][5] = 124;
                    map[13][11] = 124; map[14][11] = 124; map[15][11] = 124;
                }


                //вертикальные лазеры
                //левый лазер



                if (counter == 47|| counter == 91 || counter == 250 || counter == 316) {
                    map[i][0] = 124; map[i][4] = 124;
                }
                if (counter == 54 || counter == 98 || counter == 257 || counter == 323) {
                    map[i][1] = 124; map[i][3] = 124;
                    map[i][0] = 32; map[i][4] = 32;
                    map[5][0] = 45; map[5][4] = 45;
                    map[11][0] = 45; map[11][4] = 45;
                }
                if (counter == 61 || counter == 105 || counter == 264 || counter == 330) {
                    map[i][2] = 124;
                }
                if (counter == 68 || counter == 112 || counter == 271 || counter == 337) {
                    map[i][1] = 32; map[i][3] = 32; map[i][2] = 32;
                    map[5][1] = 45; map[5][2] = 45; map[5][3] = 45;
                    map[11][1] = 45; map[11][2] = 45; map[11][3] = 45;
                }

                //центральный лазер

                if (counter == 25 || counter == 113 || counter == 157 || counter == 230) {
                    map[i][6] = 124; map[i][10] = 124;
                }
                if (counter == 32 || counter == 120 || counter == 186 || counter == 164 ||counter == 237) {
                    map[i][7] = 124; map[i][9] = 124;
                    map[i][6] = 32; map[i][10] = 32;
                    map[5][6] = 45; map[5][10] = 45;
                    map[11][6] = 45; map[11][10] = 45;
                }
                if (counter == 39 || counter == 127 || counter == 186 || counter == 171||counter == 244) {
                    map[i][8] = 124;
                }
                if (counter == 46 || counter == 134 || counter == 210|| counter == 370) {
                    map[i][7] = 32; map[i][8] = 32; map[i][9] = 32;
                    map[5][7] = 45; map[5][8] = 45; map[5][9] = 45;
                    map[11][7] = 45; map[11][8] = 45; map[11][9] = 45;
                }

                //правый лазер

                if (counter == 47 || counter == 135 || counter == 272 || counter == 294 || counter == 330) {
                    map[i][12] = 124; map[i][16] = 124;
                }
                if (counter == 54 || counter == 142 || counter == 186 || counter == 150 || counter == 279 || counter == 301 || counter == 337) {
                    map[i][13] = 124; map[i][15] = 124;
                    map[i][12] = 32; map[i][16] = 32;
                    map[5][12] = 45; map[5][16] = 45;
                    map[11][12] = 45; map[11][16] = 45;
                }
                if (counter == 61 || counter == 149 || counter == 186 || counter == 150 || counter == 286 || counter == 308 || counter == 344) {
                    map[i][14] = 124;
                }
                if (counter == 68 || counter == 210 || counter == 293 || counter == 315 || counter == 351) {
                    map[i][13] = 32; map[i][14] = 32; map[i][15] = 32;
                    map[5][13] = 45; map[5][14] = 45; map[5][15] = 45;
                    map[11][13] = 45; map[11][14] = 45; map[11][15] = 45;
                }



                //отрисовка поля
                cout << map[i][0] << map[i][1] << map[i][2] << map[i][3] << map[i][4] << map[i][5] << map[i][6] << map[i][7] << map[i][8] << map[i][9] << map[i][10] << map[i][11] << map[i][12] << map[i][13] << map[i][14] << map[i][15] << map[i][16] << endl;

                if (i == 16) {//очищение консоли
                    i = -1;
                    counter++;
                    system("cls");
                    if (map[y + 1][x] == 124 || map[y][x + 1] == 45) {//смерть
                        cout << endl << endl << endl << endl << endl << endl << "                  GAME OVER"
                            << endl << endl << endl << endl << "                 R to restart, Q to exit" << endl;
                        if (counter == 264|| counter == 265)cout << "                  try press A" << endl;
                        if (counter == 286|| counter == 287)cout << "                  try press D" << endl;
                        level = 0;
                      
                            idk=_getch();
                            if (idk == 'R' || idk == 'r')level = 2;
                            if (idk == 'Q' || idk == 'q')return 0;
                            else idk = 32;
                       
                        break;
                    }
                }//оповещение о прохождении уровня
                if (counter == 500)cout << "YOU BEAT THE LEVEL 2,WELL DONE!(i cant make levels longer, sorry)" << endl;
                level = 0;
            }
        }
    }
} 

