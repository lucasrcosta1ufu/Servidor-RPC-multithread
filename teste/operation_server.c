/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "operation.h"

bool_t
soma_1_svc(operandos *argp, int *result, struct svc_req *rqstp)
{

	printf("Recebi um chamado: soma %d %d\n", argp->a, argp->b);
	*result = argp->a + argp->b;
	return(TRUE);
}

bool_t
sub_1_svc(operandos *argp, int *result, struct svc_req *rqstp)
{
	printf("Recebi um chamado: sub %d %d\n", argp->a, argp->b);
	*result = argp->a - argp->b;

	return(TRUE);
}

bool_t
divisao_1_svc(operandos *argp, int *result, struct svc_req *rqstp)
{
	printf("Recebi um chamado: div %d %d\n", argp->a, argp->b);
	*result = argp->a / argp->b;

	return(TRUE);
}

bool_t
mult_1_svc(operandos *argp, int *result, struct svc_req *rqstp)
{
	printf("Recebi um chamado: mult %d %d\n", argp->a, argp->b);
	*result = argp->a * argp->b;

	return(TRUE);
}

int
operation_prog_1_freeresult (SVCXPRT *transp, xdrproc_t xdr_result, caddr_t result)
{
	xdr_free (xdr_result, result);

	/*
	 * Insert additional freeing code here, if needed
	 */

	return 1;
}
