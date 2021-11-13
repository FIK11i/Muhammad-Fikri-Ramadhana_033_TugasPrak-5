//Progam 26 : Progam tukar menggunakan fungsi dengan parameter reference
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void tukar(int *px, int *py);
main(){
	int a,b;
	system("cls");
	a=80;
	b=11;
	printf("Nilai Sebelum Pemanggilan Fungsi \n");
	printf("a = %i b = %i \n",a,b);
	tukar(&a,&b);
	printf("Nilai Setelah Pemanggilan Fungsi \n");
	printf("a = %i b = %i \n",a,b);
	getch();
}
void tukar(int *px,int *py)
{
	int z;
	z=*px;
	*px=*py;
	*py=z;
	printf("Nilai Diakhir Fungsi \n");
	printf("px = %i py = %i \n",*px,*py);
}
