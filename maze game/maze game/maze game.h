#pragma once
#include "resource.h"

//definitii constante
#define SQUARESIZE 30
#define MAX_TABLE_SIZE 20
#define WHITE_STONE RGB(255,255,255)
#define BLACK_STONE RGB(0,0,0)
#define REF_POINT RGB(50,50,50)
#define REF_POINT_SIZE 2
#define MAX_MOVES_ALLOWED 1024
#define ALIVE 1
#define DEAD 0

typedef struct {
	int stone_xpos;
	int stone_ypos;
	COLORREF stone_color;
}stone_pos;

typedef struct {
	int status;  
	int members[255][2]; //primul e index=numarul memmbrului in grup, si apoi 1=x, 2=y
	int member_count;
	int group_color;
	int liberties;
}group;

