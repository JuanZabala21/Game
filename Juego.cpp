# include <windows.h>
# include <iostream>
# include <conio.h>

#define IZQUIERDA 75
#define DERECHA   77 

char avion_l1[]={' ',' ',' ', '*',' ',' ',' ',0};        
char avion_l2[]={' ',' ','*', '*','*',' ',' ',0};
char avion_l3[]={' ','*',' ', '*',' ','*',' ',0};

char explocion_l1[]={' ',' ','*','*',' ',' ',' ',0};      
char explocion_l2[]={' ','*','*','*','*',' ',' ',0};
char explocion_l3[]={' ',' ','*','*',' ',' ',' ',0};

char explocion_r1[]={'*',' ','*','*',' ','*',' ',0};       
char explocion_r2[]={' ','*','*','*','*',' ',' ',0};
char explocion_r3[]={'*',' ','*','*',' ','*',' ',0};

char borrar_avion[]={' ',' ',' ',' ',' ',' ',' ',0};

int Numero_vidas = 3;
int Corazones = 3;
int ix = 40; 
int iy = 19;

int y = 8 , x = 12; 
int yy = 12 , xx = 17;
int x1 = 58 , y1 = 6;
int x2 = 70 , y2 = 9; 

int i,v; 

int repeticion = 0 , nivel = 1; 
bool condicion = false; 

void gotoxy(int x, int y){
	HANDLE hCon; 
	COORD dwPos; 
	
	dwPos.X = x;
	dwPos.Y = y; 
	
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
	
}

void vidas(int vi){
	gotoxy(2,1); printf("VIDAS %d",vi);
	
} 

void Barra_salud(int n){
	gotoxy(72,1); printf("");
	gotoxy(73,1); printf("");
	gotoxy(74,1); printf("");
	
	for(v = 0 ; v < n; v++){
		
		gotoxy(72+v,1);
		printf("%c",3);
	}
}

void Explocion(void){
	gotoxy(ix,iy); puts(explocion_l1); 
	gotoxy(ix,iy+1); puts(explocion_l2); 
	gotoxy(ix,iy+2); puts(explocion_l3); 
	
	Sleep(380);
	
	gotoxy(ix,iy); puts(explocion_r1); 
	gotoxy(ix,iy+1); puts(explocion_r2); 
	gotoxy(ix,iy+2); puts(explocion_r3); 
	
	Sleep(380);
	
    gotoxy(ix,iy); puts(avion_l1); 
	gotoxy(ix,iy+1); puts(avion_l2); 
	gotoxy(ix,iy+2); puts(avion_l3); 
}

void Jugar(void){


gotoxy(x,y); printf("c",2);
gotoxy(xx,yy); printf("c",2);
gotoxy(x1,y1); printf("c",2);
gotoxy(x2,y2); printf("c",2);

Sleep(70); 

gotoxy(x,y); printf(" ");
gotoxy(xx,yy); printf(" ");
gotoxy(x1,y1); printf(" ");
gotoxy(x2,y2); printf(" ");

if (y > 20) 
{
	y = 4; 
	x = (rand() % 70) +6; 
	 
}
if(yy > 20) {
	
	yy = 4; 
	xx = (rand() % 70) +6;
	
}
if(y1 > 20) {
	
	y1 = 4; 
	x1 = (rand() % 70) +6;
	
}
if(y2 > 20) {
	
	y2 = 4; 
	x2 = (rand() % 70) +6;
	
}

y++; 
yy++; 
y1++;
y2++;


}



int main(){
	
	vidas(3);
	Barra_salud(3);
	Jugar();
	Explocion();
	getch();
	
}

//https://www.youtube.com/watch?v=hYYc-SfkiZk


