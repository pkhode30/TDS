/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "chatapp.h"

char **
chat_1_svc(data *argp, struct svc_req *rqstp)
{
	static char *result;

	result = argp->msg;

	printf("Client message: %s\n", result);

	return &result;
}
