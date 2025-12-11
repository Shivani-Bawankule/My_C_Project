#include <stdio.h>
int main()
{
	char array[10][10]={"Rhivani", "Payal", "Sakshi"};
	char (*p)[10]=array; 
	printf("%s\n", p[0]);  //rhivani 
	printf("%s\n", p[1]);  //payal 
	printf("%s\n", p[2]);  //sakshi 
	printf("%s\n", *(p));  //Rhivani    
	printf("%s\n", *(&(p[0])));  //Rhivani    
	printf("%s\n", *(p+1));  //Payal    
	printf("%s\n", *((&p[0])+1));  //Payal    
	printf("%s\n", *(p+2));  //Sakshi   
	printf("%s\n", *((&p[0])+2));  //Sakshi   
	printf("%c\n", **(p));  //R   0th element ka 0th character 
	printf("%c\n", *(p[2]));  //s  2th element ka 0th character 
	printf("%c\n", p[1][0]);  //p 1st element ka 0th character
	return 0;
}

/*	 0	1	2	3	4	5	6	7	
 *
   0	s	h	i	v	a	n	i
 *
 * 1	p	a	y	a	l
 *
 * 2	s	a	k	s	h	i*/
