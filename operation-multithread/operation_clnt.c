/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "operation.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

enum clnt_stat 
soma_1(operandos *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, SOMA,
		(xdrproc_t) xdr_operandos, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
sub_1(operandos *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, SUB,
		(xdrproc_t) xdr_operandos, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
divisao_1(operandos *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, DIVISAO,
		(xdrproc_t) xdr_operandos, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
mult_1(operandos *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, MULT,
		(xdrproc_t) xdr_operandos, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}
