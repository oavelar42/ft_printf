#include "ft_printf.h"

/*int	main()
{
	int do_printf;
	int do_ft_printf;


/////////////////////////////////
//  NO SPECIFIERS
/////////////////////////////////

	printf("\n");
	do_printf = printf("Texto Texto TEXTO \t TEeeeeeeeeeeeeeeeeeee  x      toooo");
	printf("\n");
	do_ft_printf = ft_printf("Texto Texto TEXTO \t TEeeeeeeeeeeeeeeeeeee  x      toooo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("T");
	printf("\n");
	do_ft_printf = ft_printf("T");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf(" ");
	printf("\n");
	do_ft_printf = ft_printf(" ");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("");
	printf("\n");
	do_ft_printf = ft_printf("");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////
//		% PERCENTAGE TESTS
/////////////////////////////////

	printf("\n");
	do_printf = printf("%");
	printf("\n");
	do_ft_printf = ft_printf("%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%%");
	printf("\n");
	do_ft_printf = ft_printf("%%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH WIDTH)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5%");
	printf("\n");
	do_ft_printf = ft_printf("%5%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%55%BBBBB");
	printf("\n");
	do_ft_printf = ft_printf("%55%BBBBB");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH MINUS)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-5%");
	printf("\n");
	do_ft_printf = ft_printf("%-5%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-112%");
	printf("\n");
	do_ft_printf = ft_printf("%-112%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-112%%");
	printf("\n");
	do_ft_printf = ft_printf("%-112%%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%--39%");
	printf("\n");
	do_ft_printf = ft_printf("%--39%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////
//		% PERCENTAGE TESTS (WITH ZEROS)
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-05%");
	printf("\n");
	do_ft_printf = ft_printf("%-05%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0125%");
	printf("\n");
	do_ft_printf = ft_printf("%0125%");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/
/*
int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////
//			C CHAR TESTS
/////////////////////////////////

	printf("\n");
	do_printf = printf("%c", 'a');
	printf("\n");
	do_ft_printf = ft_printf("%c", 'a');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d <-- Isto esta certo. Isto marca 31, porque o (char)27 apaga tudo do printf anterior que era 31.\n", do_ft_printf);
	do_printf = printf("Yu%c", 'p');
	printf("\n");

////////////////////////////////////
//		C CHAR TESTS (COM WIDTH)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%1c%1c%1c%1c%1c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%1c%1c%1c%1c%1c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2c%2c%2c%2c%2c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%2c%2c%2c%2c%2c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5c%c%1c%123c%c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%5c%c%1c%123c%c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////
//		C CHAR TESTS (COM MINUS)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%-1c%-1c%-1c%-1c%-1c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%-1c%-1c%-1c%-1c%-1c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("asd%-1c%-2c%-3c%-4casd%-5c", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("asd%-1c%-2c%-3c%-4casd%-5c", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-1c%2c%-3c%4c%-5c%", 't','i','a','g','o');
	printf("\n");
	do_ft_printf = ft_printf("%-1c%2c%-3c%4c%-5c%", 't','i','a','g','o');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////
//		C CHAR TESTS (COM NULLS)
///////////////////////////////////

	printf("\n");
	do_printf = printf("%c", '\0');
	printf("\n");
	do_ft_printf = ft_printf("%c", '\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%c%c%c",'\0','\0','\0');
	printf("\n");
	do_ft_printf = ft_printf("%c%c%c",'\0','\0','\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5c", '\0');
	printf("\n");
	do_ft_printf = ft_printf("%5c", '\0');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5c,%12c", '\0', 'a');
	printf("\n");
	do_ft_printf = ft_printf("%-5c,%12c", '\0', 'a');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}


int	main()
{
	int do_printf;
	int do_ft_printf;

////////////////////////////////////
//			S STRING TESTS
///////////////////////////////////


	printf("\n");
	do_printf = printf("%s","Olahh");
	printf("\n");
	do_ft_printf = ft_printf("%s","Olahh");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("hello, %s.", "gavin");
	printf("\n");
	do_ft_printf = ft_printf("hello, %s.", "gavin");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%s%s", "hello ", "world");
	printf("\n");
	do_ft_printf = ft_printf("%s%s", "hello ", "world");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %s is empty", "");
	printf("\n");
	do_ft_printf = ft_printf("this %s is empty", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %s is empty %s%s, really%s?", "", " ", "what?", "");
	printf("\n");
	do_ft_printf = ft_printf("this %s is empty %s%s, really%s?", "", " ", "what?", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////
//			S STRING TESTS (COM WIDTH)
////////////////////////////////////////

	printf("\n");
	do_printf = printf("%32s", "abc");
	printf("\n");
	do_ft_printf = ft_printf("%32s", "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3s", "abc");
	printf("\n");
	do_ft_printf = ft_printf("%3s", "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %5s is empty %1s%12s, really%s?", "", " ", "what?", "");
	printf("\n");
	do_ft_printf = ft_printf("this %5s is empty %1s%12s, really%s?", "", " ", "what?", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////
//			S STRING TESTS (COM MINUS)
////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-5s", "goes over");
	printf("\n");
	do_ft_printf = ft_printf("%-5s", "goes over");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-10s", "goes over");
	printf("\n");
	do_ft_printf = ft_printf("%-10s", "goes over");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2s", "");
	printf("\n");
	do_ft_printf = ft_printf("%-2s", "");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5s%-12s", "teste ", "testado");
	printf("\n");
	do_ft_printf = ft_printf("%5s%-12s", "teste ", "testado");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM PRECISION)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.2s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.2s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.0s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.04s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.04s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.06s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.06s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.s", "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5s%7sAH-%-2s%5c", "yo", "boi", "no", 'y');
	printf("\n");
	do_ft_printf = ft_printf("%.5s%7sAH-%-2s%5c", "yo", "boi", "no", 'y');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%7.5s", "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%7.5s", "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-6.5s", "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-6.5s", "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM NULL)
//////////////////////////////////////////////

	printf("\n");
	do_printf = printf("hello, %s.", NULL);
	printf("\n");
	do_ft_printf = ft_printf("hello, %s.", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%32s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%32s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-16s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%-16s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-1s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%-1s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.0s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.6s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.6s", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%3.6s", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////
//			S STRING TESTS (COM STAR)
//////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%*s", 12, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%*s", 12, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", 2, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%*s", 2, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 32, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 32, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 5, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 5, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", 4, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", 4, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*s", 3, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%.*s", 3, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", -32, "abc");
	printf("\n");
	do_ft_printf = ft_printf("%*s", -32, "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*s", -32, "abc");
	printf("\n");
	do_ft_printf = ft_printf("%-*s", -32, "abc");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*s", -3, "hello");
	printf("\n");
	do_ft_printf = ft_printf("%*s", -3, "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*s", -3, "hello");
	printf("\n");
	do_ft_printf = ft_printf("%.*s", -3, "hello");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-*.*s", -7, -3, "yolo");
	printf("\n");
	do_ft_printf = ft_printf("%-*.*s", -7, -3, "yolo");
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}

int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////
//				P POINTERS TESTS
//////////////////////////////////////////////


	static char	a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;

	printf("\n");
	do_printf = printf("%p",&a01);
	printf("\n");
	do_ft_printf = ft_printf("%p",&a01);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////
		printf("P POINTERS TESTS (COM NULL)\n");
//////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%p", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%p", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3p", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%.3p", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
			printf("P POINTERS TESTS (COM POINTERS)\n");
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%6p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%6p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.012p", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%.012p", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%9.4p\n", 1234);
	printf("\n");
	do_ft_printf = ft_printf("%9.4p\n", 1234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5p", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.5p", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//				P POINTERS TESTS (COM WIDTH)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%14p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%14p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p%3p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//				P POINTERS TESTS (COM MINUS)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-15p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	do_ft_printf = ft_printf("%-15p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%n", 10);
	printf("\n");
	do_ft_printf = ft_printf("%n", 10);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}

int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////////////////////
//				D INTEGER TESTS
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%d", 50000454);
	printf("\n");
	do_ft_printf = ft_printf("%d", 50000454);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d ola, %d", -50000454, 0);
	printf("\n");
	do_ft_printf = ft_printf("%d ola, %d", -50000454, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//   			D INTEGER TESTS (COM MAX)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", 2147483647+1);
	printf("\n");
	do_ft_printf = ft_printf("%d", 2147483647+1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%d", -2147483678);
	printf("\n");
	do_ft_printf = ft_printf("%d", -2147483678);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			D INTEGER TESTS (COM WIDTH)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2d", 33);
	printf("\n");
	do_ft_printf = ft_printf("%2d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%4d", -14);
	printf("\n");
	do_ft_printf = ft_printf("%4d", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM PRECISION)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.5d", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2d", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.2d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.6d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.2d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1d", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.1d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5d", -2372);
	printf("\n");
	do_ft_printf = ft_printf("%.5d", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%02d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%02d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%03d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%01d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%01d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%00d", 43);
	printf("\n");
	do_ft_printf = ft_printf("%00d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%07d", -54);
	printf("\n");
	do_ft_printf = ft_printf("%07d", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%02d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%06d", -4825);
	printf("\n");
	do_ft_printf = ft_printf("%06d", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM WIDTH E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM MINUS E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO, WIDTH E PRECISION)
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%08.5d", -34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5d", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.5d", -34);
	printf("\n");
	do_ft_printf = ft_printf("%05.5d", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%03.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////
//     		 D INTEGER TESTS (COM ZERO, WIDTH, MENOS E PRECISION)
////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 D INTEGER TESTS (ZERO POINT ZERO)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



///////////////////////////////////////////////////
//     		 D INTEGER TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*d", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*d", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*d", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*d", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*d", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*d", -6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*d", -6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*d", -7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*d", -7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
*/
int	main()
{
	int do_printf;
	int do_ft_printf;

	printf("----------teste--------\n");
	do_printf = printf("%.*d", -1, 0);
	printf("\n");
	do_ft_printf = ft_printf("%.*d", -1, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}
/*
int	main()
{
	int do_printf;
	int do_ft_printf;

///////////////////////////////////////////////////
//     		 I INTEGER TESTS
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%i", 50000454);
	printf("\n");
	do_ft_printf = ft_printf("%i", 50000454);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i ola, %i", -50000454, 0);
	printf("\n");
	do_ft_printf = ft_printf("%i ola, %i", -50000454, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM MAX)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 2147483647+1);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647+1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", -2147483678);
	printf("\n");
	do_ft_printf = ft_printf("%i", -2147483678);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM WIDTH)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%2i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%4i", -14);
	printf("\n");
	do_ft_printf = ft_printf("%4i", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM PRECISION)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.5i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.6i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.1i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5i", -2372);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%02i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%03i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%01i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%01i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%00i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%00i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%07i", -54);
	printf("\n");
	do_ft_printf = ft_printf("%07i", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%06i", -4825);
	printf("\n");
	do_ft_printf = ft_printf("%06i", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM WIDTH E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM MINUS E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH E PRECISION)
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%08.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%05.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%03.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH, MENOS E PRECISION)
////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (ZERO POINT ZERO)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*i", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", -6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", -6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", -7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", -7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}

int	main()
{
	int do_printf;
	int do_ft_printf;

///////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS
//////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%u", -2);
	printf("\n");
	do_ft_printf = ft_printf("%u", -2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 3);
	printf("\n");
	do_ft_printf = ft_printf("%u", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%u", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%u", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM WIDTH)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%7u", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7u", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%6u", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%6u", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%11u", -94827);
	printf("\n");
	do_ft_printf = ft_printf("%11u", -94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM MINUS)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-7u", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7u", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4u", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%-4u", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%.5u", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5u", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6u", 13862);
	printf("\n");
	do_ft_printf = ft_printf("%.6u", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM ZEROS)
//////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05u", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05u", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%011u", -533);
	printf("\n");
	do_ft_printf = ft_printf("%011u", -533);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM WIDTH PRECISION)
//////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM MINUS, WIDTH, PRECISION)
////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-20.20u", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%-20.20u", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO)
////////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.3u", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3u", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%03.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO, MINUS, WIDTH)
////////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5u", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5u", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.3u", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.3u", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3u", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3u", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (COM PRECISION, ZERO, MINUS, WIDTH)
////////////////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.u", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.u", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////
//     		 U UNSIGNED INTEGERS TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*u", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*u", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*u", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*u", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*u", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*u", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*u", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*u", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*u", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("this %x number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %x number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %x number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %x number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", 3);
	printf("\n");
	do_ft_printf = ft_printf("%x", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", 4294967293u);
	printf("\n");
	do_ft_printf = ft_printf("%x", 4294967293u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x", -51);
	printf("\n");
	do_ft_printf = ft_printf("%x", -51);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH E MINUS)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2x", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%2x", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5x", -52625);
	printf("\n");
	do_ft_printf = ft_printf("%-5x", -52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4x", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%-4x", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM LOWER PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05x", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05x", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03x", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%03x", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3x", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3x", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION MINUS)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION ZERO)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%08.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%02.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM WIDTH PRECISION ZERO MINUS)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS (COM ZERO PRECISION)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*x", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*x", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*x", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*x", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*x", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*x", 20, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*x", 20, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////
//     		 X HEXADECIMAL UPPER
/////////////////////////////////////////

	printf("\n");
	do_printf = printf("this %X number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %X number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %X number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %X number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", 3);
	printf("\n");
	do_ft_printf = ft_printf("%X", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", 4294967293u);
	printf("\n");
	do_ft_printf = ft_printf("%X", 4294967293u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%X", -51);
	printf("\n");
	do_ft_printf = ft_printf("%X", -51);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH E MINUS)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2X", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%2X", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%-7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5X", -52625);
	printf("\n");
	do_ft_printf = ft_printf("%-5X", -52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-4X", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%-4X", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM LOWER PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05X", 43);
	printf("\n");
	do_ft_printf = ft_printf("%05X", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



	printf("\n");
	do_printf = printf("%03X", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%03X", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%03X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


///////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION)
///////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.3X", -6983);
	printf("\n");
	do_ft_printf = ft_printf("%3.3X", -6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION MINUS)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION ZERO)
//////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%08.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%08.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%02.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%08.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%08.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM WIDTH PRECISION ZERO MINUS)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%0-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////////
//     		 X HEXADECIMAL UPPER (COM ZERO PRECISION)
//////////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////
//     		 x HEXADECIMAL LOWERS TESTS (STAR TEST)
/////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*X", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*X", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*X", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 6, 3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 6, 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*X", 7, 54);
	printf("\n");
	do_ft_printf = ft_printf("%0*X", 7, 54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*X", 20, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*X", 20, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       + Flags On Digits
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%+d", 55);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", -55);
	printf("\n");
	do_ft_printf = ft_printf("%+d", -55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+d", -2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+d", -2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", 234);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4d", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.4d", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.4d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.1d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.1d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", -1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3d", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5d", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+5d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+1d", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+1d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+24d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+24d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.2d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+3.2d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.3d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+2.3d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%+8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-12.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%+-12.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3d", 8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3d", 8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       + Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%+i", 55);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", -55);
	printf("\n");
	do_ft_printf = ft_printf("%+i", -55);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+i", -2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+i", -2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", 234);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4i", 446);
	printf("\n");
	do_ft_printf = ft_printf("%+.4i", 446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.4i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.4i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.1i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.1i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", -1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0i", 1);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3i", -446);
	printf("\n");
	do_ft_printf = ft_printf("%+.3i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5i", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+5i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+1i", 35);
	printf("\n");
	do_ft_printf = ft_printf("%+1i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+24i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%+24i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



	printf("\n");
	do_printf = printf("%+.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.2i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+3.2i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.3i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+2.3i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+8.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+2.2i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+2.2i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%+8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-12.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%+-12.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+3.3i", 8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+3.3i", 8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("%0+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       ' ' Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this % d number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 3);
	printf("\n");
	do_ft_printf = ft_printf("% d", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", -1);
	printf("\n");
	do_ft_printf = ft_printf("% d", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % d number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % d number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% d", (int)(-2147483678));
	printf("\n");
	do_ft_printf = ft_printf("% d", (int)(-2147483678));
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% 7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7d", -14);
	printf("\n");
	do_ft_printf = ft_printf("% 7d", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 3d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 5d", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% 5d", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 6d", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% 6d", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -7d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -7d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", -33);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", -33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5d", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% -5d", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5d", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% -5d", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", 94827);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4d", -2464);
	printf("\n");
	do_ft_printf = ft_printf("% -4d", -2464);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .5d", 2);
	printf("\n");
	do_ft_printf = ft_printf("% .5d", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .6d", -3);
	printf("\n");
	do_ft_printf = ft_printf("% .6d", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% .3d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4d", 5263);
	printf("\n");
	do_ft_printf = ft_printf("% .4d", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4d", -2372);
	printf("\n");
	do_ft_printf = ft_printf("% .4d", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d", 13862);
	printf("\n");
	do_ft_printf = ft_printf("% .3d", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3d",-23646);
	printf("\n");
	do_ft_printf = ft_printf("% .3d",-23646);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 05d", 43);
	printf("\n");
	do_ft_printf = ft_printf("% 05d", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 07d", -54);
	printf("\n");
	do_ft_printf = ft_printf("% 07d", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 03d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03d", 634);
	printf("\n");
	do_ft_printf = ft_printf("% 03d", 634);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04d", -532);
	printf("\n");
	do_ft_printf = ft_printf("% 04d", -532);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04d", -4825);
	printf("\n");
	do_ft_printf = ft_printf("% 04d", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% -10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 010.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 010.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


	printf("\n");
	do_printf = printf("% 0-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////
// 			       ' ' Flags On Integer
/////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this % i number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 3);
	printf("\n");
	do_ft_printf = ft_printf("% i", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", -1);
	printf("\n");
	do_ft_printf = ft_printf("% i", -1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", -267);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", -267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this % i number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this % i number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% i", (int)(-2147483678));
	printf("\n");
	do_ft_printf = ft_printf("% i", (int)(-2147483678));
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% 7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 7i", -14);
	printf("\n");
	do_ft_printf = ft_printf("% 7i", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 3i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 5i", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% 5i", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 6i", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% 6i", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 33);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", -33);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", -33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5i", 52625);
	printf("\n");
	do_ft_printf = ft_printf("% -5i", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -5i", -2562);
	printf("\n");
	do_ft_printf = ft_printf("% -5i", -2562);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", 94827);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -4i", -2464);
	printf("\n");
	do_ft_printf = ft_printf("% -4i", -2464);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .5i", 2);
	printf("\n");
	do_ft_printf = ft_printf("% .5i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .6i", -3);
	printf("\n");
	do_ft_printf = ft_printf("% .6i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% .3i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4i", 5263);
	printf("\n");
	do_ft_printf = ft_printf("% .4i", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .4i", -2372);
	printf("\n");
	do_ft_printf = ft_printf("% .4i", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i", 13862);
	printf("\n");
	do_ft_printf = ft_printf("% .3i", 13862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% .3i",-23646);
	printf("\n");
	do_ft_printf = ft_printf("% .3i",-23646);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 05i", 43);
	printf("\n");
	do_ft_printf = ft_printf("% 05i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 07i", -54);
	printf("\n");
	do_ft_printf = ft_printf("% 07i", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 03i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03i", 634);
	printf("\n");
	do_ft_printf = ft_printf("% 03i", 634);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04i", -532);
	printf("\n");
	do_ft_printf = ft_printf("% 04i", -532);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 04i", -4825);
	printf("\n");
	do_ft_printf = ft_printf("% 04i", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% -10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% -8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% -8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% -3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% -3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% -3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 010.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 010.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 08.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 08.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 03.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 03.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 03.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			       '#' Hash on Hexadecimal Lower
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this %#x number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %#x number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %#x number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %#x number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#x", 3);
	printf("\n");
	do_ft_printf = ft_printf("%#x", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#x", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%#x", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5x", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#5x", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2x", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%#2x", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-7x", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#-7x", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5x", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#-5x", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-4x", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%#-4x", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.5x", 21);
	printf("\n");
	do_ft_printf = ft_printf("%#.5x", 21);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.3x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.4x", 5263);
	printf("\n");
	do_ft_printf = ft_printf("%#.4x", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3x", 938862);
	printf("\n");
	do_ft_printf = ft_printf("%#.3x", 938862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.0x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#05x", 43);
	printf("\n");
	do_ft_printf = ft_printf("%#05x", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#03x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03x", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%#03x", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#08.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#02.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#02.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#03.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5x", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5x", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5x", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5x", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.3x", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.3x", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-2.7x", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#0-2.7x", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-3.3x", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#0-3.3x", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			       '#' Hash on Hexadecimal Upper
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this %#X number", 17);
	printf("\n");
	do_ft_printf = ft_printf("this %#X number", 17);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %#X number", 0);
	printf("\n");
	do_ft_printf = ft_printf("this %#X number", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#X", 3);
	printf("\n");
	do_ft_printf = ft_printf("%#X", 3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#X", 4294967295u);
	printf("\n");
	do_ft_printf = ft_printf("%#X", 4294967295u);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5X", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#5X", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2X", 94827);
	printf("\n");
	do_ft_printf = ft_printf("%#2X", 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-7X", 33);
	printf("\n");
	do_ft_printf = ft_printf("%#-7X", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5X", 52625);
	printf("\n");
	do_ft_printf = ft_printf("%#-5X", 52625);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-4X", 9648627);
	printf("\n");
	do_ft_printf = ft_printf("%#-4X", 9648627);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.5X", 21);
	printf("\n");
	do_ft_printf = ft_printf("%#.5X", 21);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.3X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.4X", 5263);
	printf("\n");
	do_ft_printf = ft_printf("%#.4X", 5263);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.3X", 938862);
	printf("\n");
	do_ft_printf = ft_printf("%#.3X", 938862);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.0X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#05X", 43);
	printf("\n");
	do_ft_printf = ft_printf("%#05X", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#03X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03X", 698334);
	printf("\n");
	do_ft_printf = ft_printf("%#03X", 698334);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#08.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#08.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#08.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#02.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#02.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#03.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#03.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5X", 34);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5X", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.5X", 0);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.5X", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-8.3X", 8375);
	printf("\n");
	do_ft_printf = ft_printf("%#0-8.3X", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-2.7X", 3267);
	printf("\n");
	do_ft_printf = ft_printf("%#0-2.7X", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#0-3.3X", 6983);
	printf("\n");
	do_ft_printf = ft_printf("%#0-3.3X", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			      		'# +' FLAGS TESTS
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("% +d", 5);
	printf("\n");
	do_ft_printf = ft_printf("% +d", 5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +d", -7);
	printf("\n");
	do_ft_printf = ft_printf("% +d", -7);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +5d", 35);
	printf("\n");
	do_ft_printf = ft_printf("% +5d", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +7d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +7d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +24d", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +24d", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7d", 234);
	printf("\n");
	do_ft_printf = ft_printf("% +.7d", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7d", -446);
	printf("\n");
	do_ft_printf = ft_printf("% +.7d", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.3d", 3723);
	printf("\n");
	do_ft_printf = ft_printf("% +.3d", 3723);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +05d", 432);
	printf("\n");
	do_ft_printf = ft_printf("% +05d", 432);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +04d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +04d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.0d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.0d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.d", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5d", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5d", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-10.5d", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-10.5d", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5d", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5d", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3d", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3d", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3d", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3d", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7d", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7d", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7d", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7d", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3d", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3d", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3d", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3d", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
// 			      		'# +' FLAGS TESTS
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("% +i", 5);
	printf("\n");
	do_ft_printf = ft_printf("% +i", 5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +i", -7);
	printf("\n");
	do_ft_printf = ft_printf("% +i", -7);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +5i", 35);
	printf("\n");
	do_ft_printf = ft_printf("% +5i", 35);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +7i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +7i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +24i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("% +24i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7i", 234);
	printf("\n");
	do_ft_printf = ft_printf("% +.7i", 234);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.7i", -446);
	printf("\n");
	do_ft_printf = ft_printf("% +.7i", -446);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +.3i", 3723);
	printf("\n");
	do_ft_printf = ft_printf("% +.3i", 3723);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +05i", 432);
	printf("\n");
	do_ft_printf = ft_printf("% +05i", 432);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +04i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +04i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+-5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%+-5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% +-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% +-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% +-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% +-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3i", 8375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3i", 8375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-8.3i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-8.3i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7i", 3267);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7i", 3267);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3i", 6983);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3i", 6983);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% 0+-3.3i", -8462);
	printf("\n");
	do_ft_printf = ft_printf("% 0+-3.3i", -8462);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;


	static char 		ch_pos_1 = 100, ch_neg_1 = -87;
	static short		sh_pos_1 = 3047, sh_neg_1 = -8875;
	static int			i_pos_1 = 878023;
	static long			l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
	static long long	ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
	static long			lmax	= 9223372036854775807;
	static long			lmin	= -9223372036854775807;
	static long long	llmax = 9223372036854775807;
	static long long	llmin = -9223372036854775807ll;


//////////////////////////////////////////////////////////////
// 			      		  'hh' FLAGS TESTS
//	   				        D DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hhd", (char)45);
	printf("\n");
	do_ft_printf = ft_printf("%hhd", (char)45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhd", (char)-45);
	printf("\n");
	do_ft_printf = ft_printf("%hhd", (char)-45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhd", ch_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hhd", ch_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhd", ch_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%hhd", ch_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhd and %hhd", (char)127, (char)128);
	printf("\n");
	do_ft_printf = ft_printf("%hhd and %hhd", (char)127, (char)128);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hhd", (char)45);
	printf("\n");
	do_ft_printf = ft_printf("% hhd", (char)45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hhd", ch_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("% hhd", ch_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'h' FLAGS TESTS
//	   				        D DIGIT TEST
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%hd", (short)385);
	printf("\n");
	do_ft_printf = ft_printf("%hd", (short)385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hd", (short)-385);
	printf("\n");
	do_ft_printf = ft_printf("%hd", (short)-385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hd", sh_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hd", sh_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hd", sh_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%hd", sh_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hd", (short)32767);
	printf("\n");
	do_ft_printf = ft_printf("%hd", (short)32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hd", (short)-32767);
	printf("\n");
	do_ft_printf = ft_printf("%hd", (short)-32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hd", (short)385);
	printf("\n");
	do_ft_printf = ft_printf("% hd", (short)385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hd", (short)-385);
	printf("\n");
	do_ft_printf = ft_printf("% hd", (short)-385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hd", sh_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("% hd", sh_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hdasd", sh_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("% hdasd", sh_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hd", (short)32767);
	printf("\n");
	do_ft_printf = ft_printf("% hd", (short)32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hd", (short)-32767);
	printf("\n");
	do_ft_printf = ft_printf("% hd", (short)-32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'll' FLAGS TESTS
//	   				        D DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%lld", (long long)43);
	printf("\n");
	do_ft_printf = ft_printf("%lld", (long long)43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", (long long)-43);
	printf("\n");
	do_ft_printf = ft_printf("%lld", (long long)-43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", llmax);
	printf("\n");
	do_ft_printf = ft_printf("%lld", llmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", ll_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%lld", ll_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", ll_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%lld", ll_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", 522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%lld", 522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", -522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%lld", -522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", llmin);
	printf("\n");
	do_ft_printf = ft_printf("%lld", llmin);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lld", 9223372036854775807ll);
	printf("\n");
	do_ft_printf = ft_printf("%lld", 9223372036854775807ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37lld", 522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%37lld", 522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-37lld", -522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%-37lld", -522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% lld", (long long)43);
	printf("\n");
	do_ft_printf = ft_printf("% lld", (long long)43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% lld", (long long)-43);
	printf("\n");
	do_ft_printf = ft_printf("% lld", (long long)-43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'l' FLAGS TESTS
//	   				        D DIGIT TEST
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%ld", (long)32);
	printf("\n");
	do_ft_printf = ft_printf("%ld", (long)32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", (long)-32);
	printf("\n");
	do_ft_printf = ft_printf("%ld", (long)-32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", l_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%ld", l_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", lmax);
	printf("\n");
	do_ft_printf = ft_printf("%ld", lmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", l_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%ld", l_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", 22337203685477);
	printf("\n");
	do_ft_printf = ft_printf("%ld", 22337203685477);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", -22337203685477);
	printf("\n");
	do_ft_printf = ft_printf("%ld", -22337203685477);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", 9223372036854775807l);
	printf("\n");
	do_ft_printf = ft_printf("%ld", 9223372036854775807l);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%ld", lmin);
	printf("\n");
	do_ft_printf = ft_printf("%ld", lmin);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037ld", 22337203685477l);
	printf("\n");
	do_ft_printf = ft_printf("%037ld", 22337203685477l);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% ld", (long)32);
	printf("\n");
	do_ft_printf = ft_printf("% ld", (long)32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% ld", (long)-32);
	printf("\n");
	do_ft_printf = ft_printf("% ld", (long)-32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% lld", llmin);
	printf("\n");
	do_ft_printf = ft_printf("% lld", llmin);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;


	static char 		ch_pos_1 = 100, ch_neg_1 = -87;
	static short		sh_pos_1 = 3047, sh_neg_1 = -8875;
	static int			i_pos_1 = 878023;
	static long			l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
	static long long	ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
	static long			lmax	= 9223372036854775807;
	static long			lmin	= -9223372036854775807;
	static long long	llmax = 9223372036854775807;
	static long long	llmin = -9223372036854775807ll;


//////////////////////////////////////////////////////////////
// 			      		  'hh' FLAGS TESTS
//	   				        I DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hhi", (char)45);
	printf("\n");
	do_ft_printf = ft_printf("%hhi", (char)45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhi", (char)-45);
	printf("\n");
	do_ft_printf = ft_printf("%hhi", (char)-45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhi", ch_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hhi", ch_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhi", ch_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%hhi", ch_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhi and %hhi", (char)127, (char)128);
	printf("\n");
	do_ft_printf = ft_printf("%hhi and %hhi", (char)127, (char)128);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hhi", (char)45);
	printf("\n");
	do_ft_printf = ft_printf("% hhi", (char)45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hhi", ch_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("% hhi", ch_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'h' FLAGS TESTS
//	   				        I DIGIT TEST
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%hi", (short)385);
	printf("\n");
	do_ft_printf = ft_printf("%hi", (short)385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hi", (short)-385);
	printf("\n");
	do_ft_printf = ft_printf("%hi", (short)-385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hi", sh_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hi", sh_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hi", sh_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%hi", sh_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hi", (short)32767);
	printf("\n");
	do_ft_printf = ft_printf("%hi", (short)32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hi", (short)-32767);
	printf("\n");
	do_ft_printf = ft_printf("%hi", (short)-32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hi", (short)385);
	printf("\n");
	do_ft_printf = ft_printf("% hi", (short)385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hi", (short)-385);
	printf("\n");
	do_ft_printf = ft_printf("% hi", (short)-385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hi", sh_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("% hi", sh_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hiasi", sh_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("% hiasi", sh_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hi", (short)32767);
	printf("\n");
	do_ft_printf = ft_printf("% hi", (short)32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% hi", (short)-32767);
	printf("\n");
	do_ft_printf = ft_printf("% hi", (short)-32767);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'll' FLAGS TESTS
//	   				        I DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%lli", (long long)43);
	printf("\n");
	do_ft_printf = ft_printf("%lli", (long long)43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", (long long)-43);
	printf("\n");
	do_ft_printf = ft_printf("%lli", (long long)-43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", llmax);
	printf("\n");
	do_ft_printf = ft_printf("%lli", llmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", ll_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%lli", ll_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", ll_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%lli", ll_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", 522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%lli", 522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", -522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%lli", -522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", llmin);
	printf("\n");
	do_ft_printf = ft_printf("%lli", llmin);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lli", 9223372036854775807ll);
	printf("\n");
	do_ft_printf = ft_printf("%lli", 9223372036854775807ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37lli", 522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%37lli", 522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-37lli", -522337203685470ll);
	printf("\n");
	do_ft_printf = ft_printf("%-37lli", -522337203685470ll);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% lli", (long long)43);
	printf("\n");
	do_ft_printf = ft_printf("% lli", (long long)43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% lli", (long long)-43);
	printf("\n");
	do_ft_printf = ft_printf("% lli", (long long)-43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'l' FLAGS TESTS
//	   				        I DIGIT TEST
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%li", (long)32);
	printf("\n");
	do_ft_printf = ft_printf("%li", (long)32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", (long)-32);
	printf("\n");
	do_ft_printf = ft_printf("%li", (long)-32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", l_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%li", l_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", lmax);
	printf("\n");
	do_ft_printf = ft_printf("%li", lmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", l_neg_1);
	printf("\n");
	do_ft_printf = ft_printf("%li", l_neg_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", 22337203685477);
	printf("\n");
	do_ft_printf = ft_printf("%li", 22337203685477);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", -22337203685477);
	printf("\n");
	do_ft_printf = ft_printf("%li", -22337203685477);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", 9223372036854775807l);
	printf("\n");
	do_ft_printf = ft_printf("%li", 9223372036854775807l);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%li", lmin);
	printf("\n");
	do_ft_printf = ft_printf("%li", lmin);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037li", 22337203685477l);
	printf("\n");
	do_ft_printf = ft_printf("%037li", 22337203685477l);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% li", (long)32);
	printf("\n");
	do_ft_printf = ft_printf("% li", (long)32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% li", (long)-32);
	printf("\n");
	do_ft_printf = ft_printf("% li", (long)-32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("% lli", llmin);
	printf("\n");
	do_ft_printf = ft_printf("% lli", llmin);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{

	int do_printf;
	int do_ft_printf;


	static unsigned char 		uch_pos_1 = 100;
	static unsigned short		ush_pos_1 = 3047;
	static unsigned int		ui_pos_1 = 878023;
	static unsigned long		ul_pos_1 = 22337203685477;
	static unsigned long long	ull_pos_1 = 22337203685477;
	static unsigned long long  ullmax = 9223372036854775807;
	static unsigned long  		ulmax = 9223372036854775807;

//////////////////////////////////////////////////////////////
// 			      		  'hh' FLAGS TESTS
//	   				     U UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hhu", (unsigned char)45);
	printf("\n");
	do_ft_printf = ft_printf("%hhu", (unsigned char)45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhu", uch_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hhu", uch_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhu", (unsigned char)255);
	printf("\n");
	do_ft_printf = ft_printf("%hhu", (unsigned char)255);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhu", (unsigned char)255);
	printf("\n");
	do_ft_printf = ft_printf("%hhu", (unsigned char)255);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhu", -255);
	printf("\n");
	do_ft_printf = ft_printf("%hhu", -255);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhu", -251235);
	printf("\n");
	do_ft_printf = ft_printf("%hhu", -251235);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'h' FLAGS TESTS
//	   				     U UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hu", (unsigned short)385);
	printf("\n");
	do_ft_printf = ft_printf("%hu", (unsigned short)385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hu", -251235);
	printf("\n");
	do_ft_printf = ft_printf("%hu", -251235);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hu", ush_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hu", ush_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hu", (unsigned short)65535);
	printf("\n");
	do_ft_printf = ft_printf("%hu", (unsigned short)65535);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hu",-1);
	printf("\n");
	do_ft_printf = ft_printf("%hu",-1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'll' FLAGS TESTS
//	   				     U UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%llu", (unsigned long long)43);
	printf("\n");
	do_ft_printf = ft_printf("%llu", (unsigned long long)43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llu", ull_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%llu", ull_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llu", 522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%llu", 522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llu", ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%llu", ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llu", ullmax + 1);
	printf("\n");
	do_ft_printf = ft_printf("%llu", ullmax + 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llu", ullmax + ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%llu", ullmax + ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37llu", 522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%37llu", 522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'l' FLAGS TESTS
//	   				     U UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%lu", (unsigned long)32);
	printf("\n");
	do_ft_printf = ft_printf("%lu", (unsigned long)32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lu", ul_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%lu", ul_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lu", 22337203685477ul);
	printf("\n");
	do_ft_printf = ft_printf("%lu", 22337203685477ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lu", ulmax);
	printf("\n");
	do_ft_printf = ft_printf("%lu", ulmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037lu", 22337203685477ul);
	printf("\n");
	do_ft_printf = ft_printf("%037lu", 22337203685477ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

	static unsigned char 		uch_pos_1 = 100;
	static unsigned short		ush_pos_1 = 3047;
	static unsigned int		ui_pos_1 = 878023;
	static unsigned long		ul_pos_1 = 22337203685477;
	static unsigned long long	ull_pos_1 = 22337203685477;
	static unsigned long long  ullmax = 9223372036854775807;
	static unsigned long  		ulmax = 9223372036854775807;

//////////////////////////////////////////////////////////////
// 			      		  'hh' FLAGS TESTS
//	   				     x UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hhx", (unsigned char)45);
	printf("\n");
	do_ft_printf = ft_printf("%hhx", (unsigned char)45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhx", uch_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hhx", uch_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhx", (unsigned char)255);
	printf("\n");
	do_ft_printf = ft_printf("%hhx", (unsigned char)255);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhx", 8275);
	printf("\n");
	do_ft_printf = ft_printf("%hhx", 8275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhx", -8275);
	printf("\n");
	do_ft_printf = ft_printf("%hhx", -8275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhx", -2131238275);
	printf("\n");
	do_ft_printf = ft_printf("%hhx", -2131238275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhx", (unsigned short)213123242348275);
	printf("\n");
	do_ft_printf = ft_printf("%hhx", (unsigned short)213123242348275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		   'h' FLAGS TESTS
//	   				     x UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hx", (unsigned short)213123242348275);
	printf("\n");
	do_ft_printf = ft_printf("%hx", (unsigned short)213123242348275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hx", (unsigned short)385);
	printf("\n");
	do_ft_printf = ft_printf("%hx", (unsigned short)385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hx", ush_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hx", ush_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hx", (unsigned short)65535);
	printf("\n");
	do_ft_printf = ft_printf("%hx", (unsigned short)65535);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hx", -65535);
	printf("\n");
	do_ft_printf = ft_printf("%hx", -65535);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////////////////////
// 			      		   'll' FLAGS TESTS
//	   				     x UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%llx", (long long)43);
	printf("\n");
	do_ft_printf = ft_printf("%llx", (long long)43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llx", ull_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%llx", ull_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llx", (long long)125125);
	printf("\n");
	do_ft_printf = ft_printf("%llx", (long long)125125);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llx", 522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%llx", 522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llx", -522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%llx", -522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llx", ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%llx", ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37llx", 522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%37llx", 522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37llx", ullmax + ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%37llx", ullmax + ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37llx", ullmax - ullmax - ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%37llx", ullmax - ullmax - ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////////////////////
// 			      		   'l' FLAGS TESTS
//	   				     x UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%lx", (unsigned long)32);
	printf("\n");
	do_ft_printf = ft_printf("%lx", (unsigned long)32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lx", ul_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%lx", ul_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lx", 22337203685477ul);
	printf("\n");
	do_ft_printf = ft_printf("%lx", 22337203685477ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lx", ulmax);
	printf("\n");
	do_ft_printf = ft_printf("%lx", ulmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037lx", 22337203685477ul);
	printf("\n");
	do_ft_printf = ft_printf("%037lx", 22337203685477ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037lx", 22337203685477ul + 40540540540540540ul);
	printf("\n");
	do_ft_printf = ft_printf("%037lx", 22337203685477ul + 40540540540540540ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037lx", 22337203685477ul - 40540540540540540ul);
	printf("\n");
	do_ft_printf = ft_printf("%037lx", 22337203685477ul - 40540540540540540ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lx", -5125125125125215);
	printf("\n");
	do_ft_printf = ft_printf("%lx", -5125125125125215);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

	static unsigned char 		uch_pos_1 = 100;
	static unsigned short		ush_pos_1 = 3047;
	static unsigned int		ui_pos_1 = 878023;
	static unsigned long		ul_pos_1 = 22337203685477;
	static unsigned long long	ull_pos_1 = 22337203685477;
	static unsigned long long  ullmax = 9223372036854775807;
	static unsigned long  		ulmax = 9223372036854775807;

//////////////////////////////////////////////////////////////
// 			      		  'hh' FLAGS TESTS
//	   				     X UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hhX", (unsigned char)45);
	printf("\n");
	do_ft_printf = ft_printf("%hhX", (unsigned char)45);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhX", uch_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hhX", uch_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhX", (unsigned char)255);
	printf("\n");
	do_ft_printf = ft_printf("%hhX", (unsigned char)255);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhX", 8275);
	printf("\n");
	do_ft_printf = ft_printf("%hhX", 8275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhX", -8275);
	printf("\n");
	do_ft_printf = ft_printf("%hhX", -8275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhX", -2131238275);
	printf("\n");
	do_ft_printf = ft_printf("%hhX", -2131238275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhX", (unsigned short)213123242348275);
	printf("\n");
	do_ft_printf = ft_printf("%hhX", (unsigned short)213123242348275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		   'h' FLAGS TESTS
//	   				     X UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%hX", (unsigned short)213123242348275);
	printf("\n");
	do_ft_printf = ft_printf("%hX", (unsigned short)213123242348275);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hX", (unsigned short)385);
	printf("\n");
	do_ft_printf = ft_printf("%hX", (unsigned short)385);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hX", ush_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%hX", ush_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hX", (unsigned short)65535);
	printf("\n");
	do_ft_printf = ft_printf("%hX", (unsigned short)65535);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hX", -65535);
	printf("\n");
	do_ft_printf = ft_printf("%hX", -65535);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////////////////////
// 			      		   'll' FLAGS TESTS
//	   				     X UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%llX", (long long)43);
	printf("\n");
	do_ft_printf = ft_printf("%llX", (long long)43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llX", ull_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%llX", ull_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llX", (long long)125125);
	printf("\n");
	do_ft_printf = ft_printf("%llX", (long long)125125);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llX", 522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%llX", 522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llX", -522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%llX", -522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llX", ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%llX", ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37llX", 522337203685470ull);
	printf("\n");
	do_ft_printf = ft_printf("%37llX", 522337203685470ull);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37llX", ullmax + ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%37llX", ullmax + ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%37llX", ullmax - ullmax - ullmax);
	printf("\n");
	do_ft_printf = ft_printf("%37llX", ullmax - ullmax - ullmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

//////////////////////////////////////////////////////////////
// 			      		   'l' FLAGS TESTS
//	   				     X UNSIGN DIGIT TEST
/////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%lX", (unsigned long)32);
	printf("\n");
	do_ft_printf = ft_printf("%lX", (unsigned long)32);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lX", ul_pos_1);
	printf("\n");
	do_ft_printf = ft_printf("%lX", ul_pos_1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lX", 22337203685477ul);
	printf("\n");
	do_ft_printf = ft_printf("%lX", 22337203685477ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lX", ulmax);
	printf("\n");
	do_ft_printf = ft_printf("%lX", ulmax);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037lX", 22337203685477ul);
	printf("\n");
	do_ft_printf = ft_printf("%037lX", 22337203685477ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037lX", 22337203685477ul + 40540540540540540ul);
	printf("\n");
	do_ft_printf = ft_printf("%037lX", 22337203685477ul + 40540540540540540ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%037lX", 22337203685477ul - 40540540540540540ul);
	printf("\n");
	do_ft_printf = ft_printf("%037lX", 22337203685477ul - 40540540540540540ul);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lX", -5125125125125215);
	printf("\n");
	do_ft_printf = ft_printf("%lX", -5125125125125215);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/












// %[flags][width][.precision][length][specifier]

/*int	main()
{
	int do_printf;
	int do_ft_printf;

//////////////////////////////////////////////////////////////
//	   				      n FORMAT TEST
/////////////////////////////////////////////////////////////

	int n;
	int m;
	int a;
	int b;

	printf("\n");
	do_printf = printf("pftt%nest", &n);
	printf("\n-->%d", n);
	printf("\n");
	do_ft_printf = ft_printf("pftt%nest", &a);
	printf("\n-->%d", a);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pfttest%n", &n);
	printf("\n-->%d", n);
	printf("\n");
	do_ft_printf = ft_printf("pfttest%n", &a);
	printf("\n-->%d", a);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%npfttest", &n);
	printf("\n-->%d", n);
	printf("\n");
	do_ft_printf = ft_printf("%npfttest", &a);
	printf("\n-->%d", a);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("  %n pf%nttest", &n, &m);
	printf("\n-->%d", n);
	printf("\n-->%d", m);
	printf("\n");
	do_ft_printf = ft_printf("  %n pf%nttest", &a, &b);
	printf("\n-->%d", a);
	printf("\n-->%d", b);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("  %n p%sf%nttest", &n, "teste", &m);
	printf("\n-->%d", n);
	printf("\n-->%d", m);
	printf("\n");
	do_ft_printf = ft_printf("  %n p%sf%nttest", &a, "teste", &b);
	printf("\n-->%d", a);
	printf("\n-->%d", b);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("  %n p%sf%ntte%-2.15dst", &n, "teste", &m, 5123);
	printf("\n-->%d", n);
	printf("\n-->%d", m);
	printf("\n");
	do_ft_printf = ft_printf("  %n p%sf%ntte%-2.15dst", &a, "teste", &b, 5123);
	printf("\n-->%d", a);
	printf("\n-->%d", b);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%x  %n p%sf%ntte%-2.15dst",123123, &n, "teste", &m, 5123);
	printf("\n-->%d", n);
	printf("\n-->%d", m);
	printf("\n");
	do_ft_printf = ft_printf("%x  %n p%sf%ntte%-2.15dst",123123, &a, "teste", &b, 5123);
	printf("\n-->%d", a);
	printf("\n-->%d", b);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'hh' FLAGS TESTS
//	   				       n FORMAT TEST
/////////////////////////////////////////////////////////////

	signed char hhn;
	signed char hhm;
	signed char hha;
	signed char hhb;

	printf("\n");
	do_printf = printf("pftt%hhnest", &hhn);
	printf("\n-->%d", hhn);
	printf("\n");
	do_ft_printf = ft_printf("pftt%hhnest", &hha);
	printf("\n-->%d", hha);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pftwqeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeet%hhnest", &hhn);
	printf("\n-->%d", hhn);
	printf("\n");
	do_ft_printf = ft_printf("pftwqeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeet%hhnest", &hha);
	printf("\n-->%d", hha);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hhnpftt%hhnest", &hhn, &hhm);
	printf("\n-->%d", hhn);
	printf("\n-->%d", hhm);
	printf("\n");
	do_ft_printf = ft_printf("%hhnpftt%hhnest", &hha, &hhb);
	printf("\n-->%d", hha);
	printf("\n-->%d", hhb);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'h' FLAGS TESTS
//	   				       n FORMAT TEST
/////////////////////////////////////////////////////////////

	short int hn;
	short int hm;
	short int ha;
	short int hb;



	printf("\n");
	do_printf = printf("pftt%hnest", &hn);
	printf("\n-->%d", hn);
	printf("\n");
	do_ft_printf = ft_printf("pftt%hnest", &ha);
	printf("\n-->%d", ha);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pftt%hnest", &hn);
	printf("\n-->%d", hn);
	printf("\n");
	do_ft_printf = ft_printf("pftt%hnest", &ha);
	printf("\n-->%d", ha);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pftwqeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeet%hnest", &hn);
	printf("\n-->%d", hn);
	printf("\n");
	do_ft_printf = ft_printf("pftwqeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeet%hnest", &ha);
	printf("\n-->%d", ha);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%hnpftt%hnest", &hn, &hm);
	printf("\n-->%d", hn);
	printf("\n-->%d", hm);
	printf("\n");
	do_ft_printf = ft_printf("%hnpftt%hnest", &ha, &hb);
	printf("\n-->%d", ha);
	printf("\n-->%d", hb);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'll' FLAGS TESTS
//	   				       n FORMAT TEST
/////////////////////////////////////////////////////////////


	long long int lln;
	long long int llm;
	long long int lla;
	long long int llb;

	printf("\n");
	do_printf = printf("pftt%llnest", &lln);
	printf("\n-->%lld", lln);
	printf("\n");
	do_ft_printf = ft_printf("pftt%llnest", &lla);
	printf("\n-->%lld", lla);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%llnpftt%llnest", &lln, &llm);
	printf("\n-->%lld", lln);
	printf("\n-->%lld", llm);
	printf("\n");
	do_ft_printf = ft_printf("%llnpftt%llnest", &lla, &llb);
	printf("\n-->%lld", lla);
	printf("\n-->%lld", llb);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


//////////////////////////////////////////////////////////////
// 			      		  'l' FLAGS TESTS
//	   				       n FORMAT TEST
/////////////////////////////////////////////////////////////

	long int ln;
	long int lm;
	long int la;
	long int lb;

	printf("\n");
	do_printf = printf("pftt%lnest", &ln);
	printf("\n-->%ld", ln);
	printf("\n");
	do_ft_printf = ft_printf("pftt%lnest", &la);
	printf("\n-->%ld", la);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lnpftt%lnest", &ln, &lm);
	printf("\n-->%ld", ln);
	printf("\n-->%ld", lm);
	printf("\n");
	do_ft_printf = ft_printf("%lnpftt%lnest", &la, &lb);
	printf("\n-->%ld", la);
	printf("\n-->%ld", lb);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pft%5ntest", &ln);
	printf("\n-->%ld", ln);
	printf("\n");
	do_ft_printf = ft_printf("pft%5ntest", &la);
	printf("\n-->%ld", la);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pft%5.5ntest", &n);
	printf("\n-->%ld", ln);
	printf("\n");
	do_ft_printf = ft_printf("pft%5.5ntest", &n);
	printf("\n-->%ld", la);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pft%*.ntest%d", 5, &n, 123);
	printf("\n-->%ld", ln);
	printf("\n");
	do_ft_printf = ft_printf("pft%*.ntest%d", 5, &n, 123);
	printf("\n-->%ld", la);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("pft%*.*ntest%d", 5, 5, &n, 123);
	printf("\n-->%ld", ln);
	printf("\n");
	do_ft_printf = ft_printf("pft%*.*ntest%d", 5, 5, &n, 123);
	printf("\n-->%ld", la);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////////////////////
//  			   f FLOAT TESTS
//				    normal tests
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("this %f float", 1.9999999);
	printf("\n");
	do_ft_printf = ft_printf("this %f float", 1.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 7.5);
	printf("\n");
	do_ft_printf = ft_printf("%f", 7.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 8.5);
	printf("\n");
	do_ft_printf = ft_printf("%f", 8.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 0.00202);
	printf("\n");
	do_ft_printf = ft_printf("%f", 0.00202);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 1.0);
	printf("\n");
	do_ft_printf = ft_printf("%f", 1.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -3.85);
	printf("\n");
	do_ft_printf = ft_printf("%f", -3.85);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -958.125);
	printf("\n");
	do_ft_printf = ft_printf("%f", -958.125);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -0.00032);
	printf("\n");
	do_ft_printf = ft_printf("%f", -0.00032);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 0.000001);
	printf("\n");
	do_ft_printf = ft_printf("%f", 0.000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -0.000001);
	printf("\n");
	do_ft_printf = ft_printf("%f", -0.000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 9873.000001);
	printf("\n");
	do_ft_printf = ft_printf("%f", 9873.000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 9871231233.9897890001);
	printf("\n");
	do_ft_printf = ft_printf("%f", 9871231233.9897890001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 9223372036854775806.9223372036854775806);
	printf("\n");
	do_ft_printf = ft_printf("%f", 9223372036854775806.9223372036854775806);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -9223372036854775806.9223372036854775806);
	printf("\n");
	do_ft_printf = ft_printf("%f", -9223372036854775806.9223372036854775806);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 999.999999);
	printf("\n");
	do_ft_printf = ft_printf("%f", 999.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -99.999999);
	printf("\n");
	do_ft_printf = ft_printf("%f", -99.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 23.375094499);
	printf("\n");
	do_ft_printf = ft_printf("%f", 23.375094499);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -985.765426499);
	printf("\n");
	do_ft_printf = ft_printf("%f", -985.765426499);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//				    rounded tests
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%f", 0.0894255);
	printf("\n");
	do_ft_printf = ft_printf("%f", 0.0894255);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 573.92);
	printf("\n");
	do_ft_printf = ft_printf("%f", 573.92);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 0.000039);
	printf("\n");
	do_ft_printf = ft_printf("%f", 0.000039);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -7.00036);
	printf("\n");
	do_ft_printf = ft_printf("%f", -7.00036);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%f", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%f", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -56.2012685);
	printf("\n");
	do_ft_printf = ft_printf("%f", -56.2012685);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 43.4399999);
	printf("\n");
	do_ft_printf = ft_printf("%f", 43.4399999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -5.0299999);
	printf("\n");
	do_ft_printf = ft_printf("%f", -5.0299999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 43.43999949);
	printf("\n");
	do_ft_printf = ft_printf("%f", 43.43999949);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -5.02999949);
	printf("\n");
	do_ft_printf = ft_printf("%f", -5.02999949);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 1.99999949);
	printf("\n");
	do_ft_printf = ft_printf("%f", 1.99999949);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -0.99999949);
	printf("\n");
	do_ft_printf = ft_printf("%f", -0.99999949);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 3.9999999);
	printf("\n");
	do_ft_printf = ft_printf("%f", 3.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -5.9999999);
	printf("\n");
	do_ft_printf = ft_printf("%f", -5.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 0.999999999999);
	printf("\n");
	do_ft_printf = ft_printf("%f", 0.999999999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -0.999999999999);
	printf("\n");
	do_ft_printf = ft_printf("%f", -0.999999999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -0.98888888);
	printf("\n");
	do_ft_printf = ft_printf("%f", -0.98888888);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", -0.5);
	printf("\n");
	do_ft_printf = ft_printf("%f", -0.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%f", 0.5);
	printf("\n");
	do_ft_printf = ft_printf("%f", 0.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		      precision 0 tests
/////////////////////////////////////////////////
printf("\nPRECISION 0");
printf("\nPRECISION 0");
printf("\nPRECISION 0");
printf("\nPRECISION 0\n");

	printf("\n");
	do_printf = printf("%.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


	printf("\n");
	do_printf = printf("%.0f%.0f", 0.0, 2.2);
	printf("\n");
	do_ft_printf = ft_printf("%.0f%.0f", 0.0, 2.2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %.0f float", 1.6);
	printf("\n");
	do_ft_printf = ft_printf("this %.0f float", 1.6);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 7.4);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 7.4);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 7.6);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 7.6);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -7.6);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -7.6);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -7.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -7.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -7.4);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -7.4);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 7.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 7.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 0.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 0.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -0.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -0.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 0.6);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 0.6);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -0.6);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -0.6);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 0.50000001);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 0.50000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -0.50000001);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -0.50000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 1.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 2.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 2.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 3.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 3.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 100.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 100.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -101.5);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -101.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -958.125);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -958.125);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", -7.00036);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", -7.00036);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 573.924);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 573.924);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 573.994);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 573.994);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0f", 574.994);
	printf("\n");
	do_ft_printf = ft_printf("%.0f", 574.994);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		      precision 1 tests
/////////////////////////////////////////////////

	printf("\nPRECISION 1");
	printf("\nPRECISION 1");
	printf("\nPRECISION 1");
	printf("\nPRECISION 1\n");

	printf("\n");
	do_printf = printf("%.1f", 574.994);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 574.994);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %.1f float", 1.5);
	printf("\n");
	do_ft_printf = ft_printf("this %.1f float", 1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 7.5);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 7.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", -7.5);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", -7.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", -6.5);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", -6.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 6.5);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 6.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", -1.5);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", -1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 1.0);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 1.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", -3.85);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", -3.85);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 573.924);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 573.924);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", -958.125);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", -958.125);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 23.051);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 23.051);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 23.050);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 23.050);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 24.151);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 24.151);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", 24.150);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", 24.150);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1f", -0.00032);
	printf("\n");
	do_ft_printf = ft_printf("%.1f", -0.00032);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		      precision 3 tests
/////////////////////////////////////////////////

	printf("\nPRECISION 3");
	printf("\nPRECISION 3");
	printf("\nPRECISION 3");
	printf("\nPRECISION 3\n");

	printf("\n");
	do_printf = printf("%.3f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %.3f float", 1.5);
	printf("\n");
	do_ft_printf = ft_printf("this %.3f float", 1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3f", 7.5);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", 7.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3f", 1.0);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", 1.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3f", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3f", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3f", 0.000039);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", 0.000039);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.3f", -7.00036);
	printf("\n");
	do_ft_printf = ft_printf("%.3f", -7.00036);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		      precision 7 tests
/////////////////////////////////////////////////

	printf("\nPRECISION 7");
	printf("\nPRECISION 7");
	printf("\nPRECISION 7");
	printf("\nPRECISION 7\n");

	printf("\n");
	do_printf = printf("%.7f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %.7f float", 1.5);
	printf("\n");
	do_ft_printf = ft_printf("this %.7f float", 1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", -958.125);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", -958.125);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", -7.00036);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", -7.00036);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 0.0000001);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 0.0000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 999.9999999);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 999.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", -99.9999999);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", -99.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 9873.000001);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 9873.000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", -0.999999);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", -0.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", -0.999999);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", -0.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  precision 7 rounding tests
/////////////////////////////////////////////////

	printf("\nPRECISION 7 rounding");
	printf("\nPRECISION 7 rounding");
	printf("\nPRECISION 7 rounding");
	printf("\nPRECISION 7 rounding\n");

	printf("\n");
	do_printf = printf("%.7f", 23.375094499);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 23.375094499);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", -985.765426499);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", -985.765426499);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 43.4399999);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 43.4399999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 43.43999949);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 43.43999949);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 1.99999949);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 1.99999949);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 3.9999999);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 3.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7f", 4.99999999);
	printf("\n");
	do_ft_printf = ft_printf("%.7f", 4.99999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  precision 8 rounding tests
/////////////////////////////////////////////////

	printf("\nPRECISION 8");
	printf("\nPRECISION 8");
	printf("\nPRECISION 8");
	printf("\nPRECISION 8\n");

	printf("\n");
	do_printf = printf("%.8f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("this %.8f float", 1.5);
	printf("\n");
	do_ft_printf = ft_printf("this %.8f float", 1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.8f", 573.924);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 573.924);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.8f", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.8f", 0.00000039);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 0.00000039);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.8f", 9873.000001);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 9873.000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.8f", 999.9999999);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 999.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.8f", 999.99999999);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 999.99999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.8f", 999.999999999);
	printf("\n");
	do_ft_printf = ft_printf("%.8f", 999.999999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  precision 10 rounding tests
/////////////////////////////////////////////////

	printf("\nPRECISION 10");
	printf("\nPRECISION 10");
	printf("\nPRECISION 10");
	printf("\nPRECISION 10\n");

	printf("\n");
	do_printf = printf("%.10f", 999.9999999999);
	printf("\n");
	do_ft_printf = ft_printf("%.10f", 999.9999999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.10f", 0.0000000001);
	printf("\n");
	do_ft_printf = ft_printf("%.10f", 0.0000000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.10f", 999999999999.9999999999);
	printf("\n");
	do_ft_printf = ft_printf("%.10f", 999999999999.9999999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.10f", -999999999999.9999999999);
	printf("\n");
	do_ft_printf = ft_printf("%.10f", -999999999999.9999999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.10f", -999999999999.99999999999999999);
	printf("\n");
	do_ft_printf = ft_printf("%.10f", -999999999999.99999999999999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  precision 11 rounding tests
/////////////////////////////////////////////////

	printf("\nPRECISION 11");
	printf("\nPRECISION 11");
	printf("\nPRECISION 11");
	printf("\nPRECISION 11\n");

	printf("\n");
	do_printf = printf("%.11f", 1.025978541236587568);
	printf("\n");
	do_ft_printf = ft_printf("%.11f", 1.025978541236587568);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.11f", 99.999999999990000000);
	printf("\n");
	do_ft_printf = ft_printf("%.11f", 99.999999999990000000);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  precision 12 rounding tests
/////////////////////////////////////////////////

	printf("\nPRECISION 12");
	printf("\nPRECISION 12");
	printf("\nPRECISION 12");
	printf("\nPRECISION 12\n");

	printf("\n");
	do_printf = printf("%.12f", 99.999999999990000000);
	printf("\n");
	do_ft_printf = ft_printf("%.12f", 99.999999999990000000);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.12f", 1.025978548534310421);
	printf("\n");
	do_ft_printf = ft_printf("%.12f", 1.025978548534310421);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.12f", 0.000000000001000000);
	printf("\n");
	do_ft_printf = ft_printf("%.12f", 0.000000000001000000);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  precision 15 rounding tests
/////////////////////////////////////////////////

	printf("\nPRECISION 15");
	printf("\nPRECISION 15");
	printf("\nPRECISION 15");
	printf("\nPRECISION 15\n");

	printf("\n");
	do_printf = printf("%.15f", 1.025978548534310421);
	printf("\n");
	do_ft_printf = ft_printf("%.15f", 1.025978548534310421);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.15f", 0.999999999999999000);
	printf("\n");
	do_ft_printf = ft_printf("%.15f", 0.999999999999999000);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  		 # Flag Test
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%#.0f", 0.8);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 0.8);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.1f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%#.1f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", 7.4);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 7.4);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.1f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%#.1f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", -7.4);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", -7.4);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.1f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%#.1f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", 1.5);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", 1.6);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 1.6);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", 0.6);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 0.6);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", 0.5);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 0.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#.0f", 2131230.5);
	printf("\n");
	do_ft_printf = ft_printf("%#.0f", 2131230.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//	   		  		 + Flag Test
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%+.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0f", -2.0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0f", -2.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%+.3f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%+.3f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0f", 7.4);
	printf("\n");
	do_ft_printf = ft_printf("%+.0f", 7.4);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.3f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%+.3f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0fand%+.0f", -7.4, 23.4);
	printf("\n");
	do_ft_printf = ft_printf("%+.0fand%+.0f", -7.4, 23.4);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0f and %+.0f", -7.4, 23.4);
	printf("\n");
	do_ft_printf = ft_printf("%+.0f and %+.0f", -7.4, 23.4);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
// 		  		   Width Flag Test
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%5.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.3f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%5.3f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.3f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%5.3f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.0f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%5.0f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.1f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%5.1f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.3f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%5.3f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.6f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%5.6f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.6f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%5.6f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%9.6f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%9.6f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.6f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%10.6f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
// 		  		   Zero Flag Test
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%05.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%05.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%05.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.0f", -0.5);
	printf("\n");
	do_ft_printf = ft_printf("%05.0f", -0.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.3f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%05.3f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.6f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%05.6f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.3f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%05.3f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%012.3f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%012.3f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%012.1f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%012.1f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%012.0f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%012.0f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02.0f", 10101.0);
	printf("\n");
	do_ft_printf = ft_printf("%02.0f", 10101.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%025.0f", 10101.0);
	printf("\n");
	do_ft_printf = ft_printf("%025.0f", 10101.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%015.8f", 10101.0);
	printf("\n");
	do_ft_printf = ft_printf("%015.8f", 10101.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%015.8f", 10101.6199999999);
	printf("\n");
	do_ft_printf = ft_printf("%015.8f", 10101.6199999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%015f", 10101.6199999999);
	printf("\n");
	do_ft_printf = ft_printf("%015f", 10101.6199999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03f", 2.1);
	printf("\n");
	do_ft_printf = ft_printf("%03f", 2.1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//  			    f FLOAT TESTS
// 		  		   - Flag Test
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-5.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.6f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-5.6f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.6f", -7.123123);
	printf("\n");
	do_ft_printf = ft_printf("%-5.6f", -7.123123);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-11.6f", -7.123123);
	printf("\n");
	do_ft_printf = ft_printf("%-11.6f", -7.123123);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-10.6f", -7.123123);
	printf("\n");
	do_ft_printf = ft_printf("%-10.6f", -7.123123);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-9.6f", -7.123123);
	printf("\n");
	do_ft_printf = ft_printf("%-9.6f", -7.123123);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.6f", -7.123123);
	printf("\n");
	do_ft_printf = ft_printf("%-8.6f", -7.123123);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

/////////////////////////////////////////////////
//  			    f FLOAT TESTS
// 		  		  - and 0 Flag Test
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%-05.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%-05.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);



	printf("\n");
	do_printf = printf("%-05.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%-05.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-05.3f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%-05.3f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-05.1f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-05.1f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-05.6f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-05.6f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-05.6f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-05.6f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-05.6f", 1237.1231233);
	printf("\n");
	do_ft_printf = ft_printf("%-05.6f", 1237.1231233);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//  field width and zero padding and left justify Flag Test
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-5.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%0-5.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-5.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%0-5.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-5.3f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%0-5.3f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-5.3f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%0-5.3f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-5.6f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%0-5.6f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//  field width and zero padding and left justify Flag Test and #
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%#-5.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.0f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.0f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%#-5.3f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%#-5.3f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//  			    f FLOAT TESTS
//  		  Testes que me deram errado
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%+-05.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%+-05.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-+5.0f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-+5.0f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-+5.3f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-+5.3f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-+5.0f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-+5.0f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-+5.3f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-+5.3f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-+5.6f", -7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-+5.6f", -7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%- 5.0f", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%- 5.0f", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%- 5.0f", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%- 5.0f", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%- 5.0f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%- 5.0f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%- 5.1f", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%- 5.1f", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*f", -3, 3.1415926535);
	printf("\n");
	do_ft_printf = ft_printf("%.*f", -3, 3.1415926535);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////////////////////
//  			   s STRING TESTS
//				    l Test
/////////////////////////////////////////////////

	wchar_t wc[3] = L"@@";

	printf("\n");
	do_printf = printf("%ls", wc);
	printf("\n");
	do_ft_printf = ft_printf("%ls", wc);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	wchar_t wca[6] = L"aNcD";

	printf("\n");
	do_printf = printf("%ls", wca);
	printf("\n");
	do_ft_printf = ft_printf("%ls", wca);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	wchar_t wcad[2] = L"x";

	printf("\n");
	do_printf = printf("%5ls", wcad);
	printf("\n");
	do_ft_printf = ft_printf("%5ls", wcad);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5ls", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%5ls", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%123ls", NULL);
	printf("\n");
	do_ft_printf = ft_printf("%123ls", NULL);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	wchar_t wcadd[2] = L"";

	printf("\n");
	do_printf = printf("%ls", wcadd);
	printf("\n");
	do_ft_printf = ft_printf("%ls", wcadd);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	wchar_t wcaddd[2] = L"";

	printf("\n");
	do_printf = printf("%-5ls", wcaddd);
	printf("\n");
	do_ft_printf = ft_printf("%-5ls", wcaddd);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////////////////////
//  			   c CHAR TESTS
//				    l Test
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%lc", 'a');
	printf("\n");
	do_ft_printf = ft_printf("%lc", 'a');
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lc", 123);
	printf("\n");
	do_ft_printf = ft_printf("%lc", 123);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lc", 1);
	printf("\n");
	do_ft_printf = ft_printf("%lc", 1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lc", 555);
	printf("\n");
	do_ft_printf = ft_printf("%lc", 555);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lc %lc", 555, 11);
	printf("\n");
	do_ft_printf = ft_printf("%lc %lc", 555, 11);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%lc %lc", 22, -11);
	printf("\n");
	do_ft_printf = ft_printf("%lc %lc", 22, -11);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/

/*int	main()
{
	int do_printf;
	int do_ft_printf;

/////////////////////////////////////////////////
//  		   e EXPONENT TESTS
//
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("this %e scientific notation", 1.5);
	printf("\n");
	do_ft_printf = ft_printf("this %e scientific notation", 1.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 7.5);
	printf("\n");
	do_ft_printf = ft_printf("%e", 7.5);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%e", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -0.0);
	printf("\n");
	do_ft_printf = ft_printf("%e", -0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 1.0);
	printf("\n");
	do_ft_printf = ft_printf("%e", 1.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -3.85);
	printf("\n");
	do_ft_printf = ft_printf("%e", -3.85);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 573.924);
	printf("\n");
	do_ft_printf = ft_printf("%e", 573.924);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -958.125);
	printf("\n");
	do_ft_printf = ft_printf("%e", -958.125);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 23.00041);
	printf("\n");
	do_ft_printf = ft_printf("%e", 23.00041);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 0.000039);
	printf("\n");
	do_ft_printf = ft_printf("%e", 0.000039);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -7.00036);
	printf("\n");
	do_ft_printf = ft_printf("%e", -7.00036);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -0.00032);
	printf("\n");
	do_ft_printf = ft_printf("%e", -0.00032);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 9873.000001);
	printf("\n");
	do_ft_printf = ft_printf("%e", 9873.000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 999.999999);
	printf("\n");
	do_ft_printf = ft_printf("%e", 999.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -99.999999);
	printf("\n");
	do_ft_printf = ft_printf("%e", -99.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 0.999999);
	printf("\n");
	do_ft_printf = ft_printf("%e", 0.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -0.999999);
	printf("\n");
	do_ft_printf = ft_printf("%e", -0.999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 23.375094499);
	printf("\n");
	do_ft_printf = ft_printf("%e", 23.375094499);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", -985.765426499);
	printf("\n");
	do_ft_printf = ft_printf("%e", -985.765426499);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%e", 3.9999999);
	printf("\n");
	do_ft_printf = ft_printf("%e", 3.9999999);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.10e", 0.0000000001);
	printf("\n");
	do_ft_printf = ft_printf("%.10e", 0.0000000001);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*e", -3, 3.1415926535);
	printf("\n");
	do_ft_printf = ft_printf("%.*e", -3, 3.1415926535);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1e", -0.00032);
	printf("\n");
	do_ft_printf = ft_printf("%.1e", -0.00032);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.7e", 0.0000039);
	printf("\n");
	do_ft_printf = ft_printf("%.7e", 0.0000039);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0e", 7.3);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0e", 7.3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%+.0e", 0.0);
	printf("\n");
	do_ft_printf = ft_printf("%+.0e", 0.0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);
}*/



// TODO
// Desististe do 'e'.


//gcc -fsanitize=address *.c sources/*.c libft/*.c


