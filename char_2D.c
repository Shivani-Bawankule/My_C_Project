#include <stdio.h>
int main()
{
	char array[10][10]={"Rhivani", "Payal", "Sakshi"};
	printf("%s\n", array[0]);  //rhivani 
	printf("%s\n", array[1]);  //payal 
	printf("%s\n", array[2]);  //sakshi 
	printf("%s\n", *(array));  //Rhivani    
	printf("%s\n", *(&(array[0])));  //Rhivani    
	printf("%s\n", *(array+1));  //Payal    
	printf("%s\n", *((&array[0])+1));  //Payal    
	printf("%s\n", *(array+2));  //Sakshi   
	printf("%s\n", *((&array[0])+2));  //Sakshi   
	printf("%c\n", **(array));  //R   0th element ka 0th character 
	printf("%c\n", *(array[2]));  //s  2th element ka 0th character 
	printf("%c\n", array[1][0]);  //p 1st element ka 0th character
	return 0;
}

/*	 0	1	2	3	4	5	6	7	
 *
   0	s	h	i	v	a	n	i
 *
 * 1	p	a	y	a	l
 *
 * 2	s	a	k	s	h	i*/
