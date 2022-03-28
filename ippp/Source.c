#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct {
	int*** ippp;
	int** ipp;
	int* ip;
	int i;
} p;


int main(int ac, char**av)
{
	p.ippp = &p.ipp;
	p.ipp = &p.ip;
	p.ip = &p.i;
	p.i = 0x55555555;

	return EXIT_SUCCESS;
}