#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printboard(char a[3][3]);
void complayer(char a[3][3]);
int gamfin(char a[3][3]);
int winchecker(char a[3][3]);

int main () {
	char a[3][3]={{0}};
	for (int x=0;x<3;++x) {
		for (int y=0;y<3;++y){
			a[x][y]='.';
		}
	}
	printboard(a);
	char ans='y';
	int result=-1;
	while (ans=='y' || ans=='Y') {
		while (result!=1 || result!=2 || result!=3) {
		int r,c;
		printf("Enter the row : \n");
		scanf("%d",&r);
		if (r<=0 || r>=4) {printf("ERROR:out of range\n"); goto l;}
		printf("Enter the column : \n");
		scanf("%d",&c);
		if (c<=0 || c>=4) {printf("ERROR:out of range\n"); goto l;}
		if (a[r-1][c-1]=='#' || a[r-1][c-1]=='@') {printf("ERROR: illegal move\n"); goto l;}
		else a[r-1][c-1]='#';
		if (gamfin(a)) {printf("GAME OVER\n"); printboard(a); result=3; break;}
		complayer(a);
		result=winchecker(a);
		if (result!=0) {
			if (result==1) {printf("YOU WIN!!\n"); printboard(a); break;}
			if (result==2) {printf("YOU LOSE!!\n"); printboard(a); break;}
			
		}
		printboard(a);
		l:
		printf("Play the next move\n");
		continue;
		}
	printf("Do you want to continue (y/n) ");
	scanf("\n%c",&ans);
	}

}

void printboard(char a[3][3]) {
	printf("%2c |%2c |%2c\n",a[0][0],a[0][1],a[0][2]);
	printf("==========\n");
	printf("%2c |%2c |%2c\n",a[1][0],a[1][1],a[1][2]);
	printf("==========\n");
	printf("%2c |%2c |%2c\n",a[2][0],a[2][1],a[2][2]);
	
}

void complayer(char a[3][3]) {
	srand(time(NULL));
	int f=rand()%3;
	int g=rand()%3;
	while (a[f][g]=='#'|| a[f][g]=='@') {
		f=rand()%3;
		g=rand()%3;
	}
	a[f][g]='@';
}

int gamfin(char a[3][3]) {
	for (int x=0;x<3;++x) {
		for (int y=0;y<3;++y) {
			if ( a[x][y]=='.') {return 0; goto g;}
		}
	}
	return 1;
	g:
}

int winchecker (char a[3][3]) {
	for (int x=0;x<3;++x) {
		if (a[x][1]==a[x][2] && a[x][2]==a[x][0]) {
			if (a[x][1]=='#') goto o;
			else if (a[x][1]=='@') goto p;
		}
		
		if (a[1][x]==a[2][x] && a[2][x]==a[0][x]) {
			if (a[1][x]=='#') goto o;
			else if (a[1][x]=='@') goto p;
		}
	}
	
	if (a[0][0]==a[1][1] && a[1][1]==a[2][2]) {
		if (a[1][1]=='#') goto o;
		else if (a[1][1]=='@') goto p;
	}
	
	if (a[0][2]==a[1][1] && a[1][1]==a[2][0]) {
		if (a[1][1]=='#') goto o;
		else if (a[1][1]=='@') goto p;
	}
	return 0;
	o: return 1;
	p: return 2;
}
