#include <stdio.h>
int main()
{
	char array[10][10]={"Rhivani", "Payal", "Sakshi"};
	char (*p)[10]=array; 
	for (int i=0;i<3;i++)
	{
	printf("%s\n", p[i]);  //rhivani payal sakshi
	}


	for (int i=0;i<3;i++)
	{
	printf("%s\n", *(p+i));  //rhivani payal sakshi
	}


	for (int i=0;i<3;i++)
	{
	printf("%s\n", *(&p[0]+i));  //rhivani payal sakshi
	}
	

	for (int i=0;i<3;i++)    //row
	{
		for(int j=0;j<7;j++)  //column
		{

	printf("%c\t",p[i][j]);  //r h i v a n i
				 //p a y a l
				 //s a k s h i
		}
		printf("\n");
	}

	return 0;
}

/*	 0	1	2	3	4	5	6	7	
 *
   0	s	h	i	v	a	n	i
 *
 * 1	p	a	y	a	l
 *
 * 2	s	a	k	s	h	i*/
