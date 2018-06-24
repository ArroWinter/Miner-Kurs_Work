#define CTEST_MAIN

#include <ctest.h>
#include "kursor.h"
#include "arrays.h"
#include "starter.h"

#include <ctest.h>

CTEST(kursor, False_flag_check)
{
	char b[3][3],temp;
	int a[3][3],c,z,p;
  
	b[0][0]='P';
	b[0][1]=' ';
	b[1][0]=' ';
	b[0][2]=' ';
	b[2][0]=' ';
	b[1][2]='P';
	b[2][1]=' ';
	b[1][1]='X';
	b[2][2]=' ';
	
	temp= ' ';
	
	a[0][0]='9';
	a[0][1]='0';
	a[1][0]='1';
	a[0][2]='0';
	a[2][0]='1';
	a[1][2]='2';
	a[2][1]='3';
	a[1][1]='9';
	a[2][2]='4';
	
	c=1;
	z=1;
	p=3;
	
	int result=Check_Flags(a,b,z,c,p,temp,flags);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(kursor, True_flag_check)
{
	char b[3][3],temp;
	int a[3][3],c,z,p;
  
	b[0][0]='P';
	b[0][1]=' ';
	b[1][0]=' ';
	b[0][2]=' ';
	b[2][0]=' ';
	b[1][2]='P';
	b[2][1]=' ';
	b[1][1]='X';
	b[2][2]=' ';
	
	temp= ' ';
	
	a[0][0]='9';
	a[0][1]='0';
	a[1][0]='1';
	a[0][2]='0';
	a[2][0]='1';
	a[1][2]='9';
	a[2][1]='3';
	a[1][1]='0';
	a[2][2]='4';
	
	c=1;
	z=1;
	p=3;
	
	int result=Check_Flags(a,b,z,c,p,temp,flags);
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}


