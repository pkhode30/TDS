/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "factorial.h"

void fact_prog_1(char *host, int num)
{
	CLIENT *clnt;
	int *result_1;
	number factorial_1_arg;

#ifndef DEBUG
	clnt = clnt_create(host, FACT_PROG, FACT_VERS, "udp");
	if (clnt == NULL)
	{
		clnt_pcreateerror(host);
		exit(1);
	}
#endif /* DEBUG */

	// MY CODE START

	factorial_1_arg.num = num;
	result_1 = factorial_1(&factorial_1_arg, clnt);
	if (result_1 == (int *)NULL)
	{
		clnt_perror(clnt, "call failed");
	}
	else if (*result_1 == -1)
	{
		printf("Error! Factorial of a negative number doesn't exist.\n");
	}
	else
	{
		printf("Factorial of the given number: %d\n", *result_1);
	}

	// MY CODE END

#ifndef DEBUG
	clnt_destroy(clnt);
#endif /* DEBUG */
}

int main(int argc, char *argv[])
{
	char *host;

	// argument check for factorial program
	if (argc < 3)
	{
		printf("usage: %s server_host NUMBER\n", argv[0]);
		exit(1);
	}
	host = argv[1];

	// function call changed for factorial
	fact_prog_1(host, atoi(argv[2]));
	exit(0);
}
