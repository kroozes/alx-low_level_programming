#include <stdio.h>                              /**                                              * main - entry point                            * @sizeof: size of type                         *                                               * Description: To check size of char, int, long * int, long long int and float types.           */                                             int main(void)                                  {                                                       char a;                                         int b;                                          int c;
        int d;                                          float e;                                                                                        printf("size of a char: %ld byte(s)\n", sizeof(a));
        printf("size of an int: %ld byte(s)\n", sizeof(b));
	printf("size of a long int: %ld byte(s)\n", sizeof(c));
	printf("size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("size of a float: %ld byte(s)\n",sizeof(a));
	return 0;
}
