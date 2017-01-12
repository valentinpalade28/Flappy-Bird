using namespace std;

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <fstream>

extern ifstream fin;
extern ofstream gin;

extern char c[30][21];
extern int n[30][21],t,k,bt,birdx,birdy,seconds,minutes,score,minutes,seconds,highscore;
extern time_t startTime,endTime;
extern bool err;

void menu();
void game();
void screen();
void bird();
void pipes();
bool gameover();
void endgame();
void checkscore();
void color(int coloCode);
