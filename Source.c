#define _CRT_SECURE_NO_DEPRECATE  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_speed(int v_old) {
	if (v_old == 0)
		v_old = (rand() % 101) + 350;
	else v_old = v_old + (rand() % 26) - 5;
	return v_old;
}

int main() {

	int  v_bezec1, v_bezec2, v_bezec3, v_bezec4, d_bezec1, d_bezec2, d_bezec3, d_bezec4, v_old1, v_old2, v_old3, v_old4, prek1, prek2, prek3, prek4, cas;
	d_bezec1 = 0; d_bezec2 = 0; d_bezec3 = 0; d_bezec4 = 0; prek1 = 0; prek2 = 0; prek3 = 0; prek4 = 0; v_old1 = 0; v_old2 = 0; v_old3 = 0; v_old4 = 0; cas = 0;
	srand(time(NULL));
	printf("START \n");


	while(d_bezec1 < 40000 && d_bezec2 < 40000 && d_bezec3 < 40000 && d_bezec4 < 40000) {
		v_bezec1 = get_speed(v_old1);
		d_bezec1 = d_bezec1 + v_bezec1;
		printf("Bezec c.1 zrychlil/spomalil o %d; cm/s ,jeho aktualna rychlost je %d cm/s a odbehol %d metrov\n", v_bezec1 - v_old1, v_bezec1, d_bezec1 / 100);
		v_old1 = v_bezec1;

		v_bezec2 = get_speed(v_old2);
		d_bezec2 = d_bezec2 + v_bezec2;
		printf("Bezec c.2 zrychlil/spomalil o %d; cm/s ,jeho aktualna rychlost je %d cm/s a odbehol %d metrov\n", v_bezec2 - v_old2, v_bezec2, d_bezec2 / 100);
		v_old2 = v_bezec2;

		v_bezec3 = get_speed(v_old3);
		d_bezec3 = d_bezec3 + v_bezec3;
		printf("Bezec c.3 zrychlil/spomalil o %d; cm/s ,jeho aktualna rychlost je %d cm/s a odbehol %d metrov\n", v_bezec3 - v_old3, v_bezec3, d_bezec3 / 100);
		v_old3 = v_bezec3;

		v_bezec4 = get_speed(v_old4);
		d_bezec4 = d_bezec4 + v_bezec4;
		printf("Bezec c.4 zrychlil/spomalil o %d; cm/s ,jeho aktualna rychlost je %d cm/s a odbehol %d metrov\n", v_bezec4 - v_old4, v_bezec4, d_bezec4 / 100);
		v_old4 = v_bezec4;
		printf("-----------------------------------------------------------------------------------------------------------------------\n");

		if (d_bezec1 > 0 && d_bezec1 % 10 == 0) {
			v_old1 = 0;
			printf("Bezec c.1 narazil do prekazky \n");
			prek1++;
		}

		if (d_bezec2 > 0 && d_bezec2 % 5000 == 0) {
			v_old2 = 0;
			printf("Bezec c.2 narazil do prekazky \n");
			prek2++;
		}
		if (d_bezec3 > 0 && d_bezec3 % 5000 == 0) {
			v_old3 = 0;
			printf("Bezec c.3 narazil do prekazky \n");
			prek3++;
		}
		if (d_bezec4 > 0 && d_bezec4 % 5000 == 0) {
			v_old4 = 0;
			printf("Bezec c.4 narazil do prekazky \n");
			prek4++;
		}
		cas++;

	}
	if (d_bezec1 > 40000) {
		printf("Vitazom sa stava bezec c.1 s casom %d s, narazil %d krat. ", cas / 2, prek1);	}
	if (d_bezec2 > 40000) {
		printf("Vitazom sa stava bezec c.2 s casom %d s, narazil %d krat. ", cas / 2, prek2);	}
	if (d_bezec3 > 40000) {
		printf("Vitazom sa stava bezec c.3 s casom %d s, narazil %d krat. ", cas / 2, prek3);	}
	if (d_bezec4 > 40000) {
		printf("Vitazom sa stava bezec c.4 s casom %d s, narazil %d krat. ", cas / 2, prek4);	}

	getchar();
}