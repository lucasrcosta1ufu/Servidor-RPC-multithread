/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _OPERATION_H_RPCGEN
#define _OPERATION_H_RPCGEN

#include <rpc/rpc.h>

#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif


struct operandos {
	int a;
	int b;
};
typedef struct operandos operandos;

#define OPERATION_PROG 0x20000001
#define OPERATION_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define SOMA 1
extern  enum clnt_stat soma_1(operandos *, int *, CLIENT *);
extern  bool_t soma_1_svc(operandos *, int *, struct svc_req *);
#define SUB 2
extern  enum clnt_stat sub_1(operandos *, int *, CLIENT *);
extern  bool_t sub_1_svc(operandos *, int *, struct svc_req *);
#define DIVISAO 3
extern  enum clnt_stat divisao_1(operandos *, int *, CLIENT *);
extern  bool_t divisao_1_svc(operandos *, int *, struct svc_req *);
#define MULT 4
extern  enum clnt_stat mult_1(operandos *, int *, CLIENT *);
extern  bool_t mult_1_svc(operandos *, int *, struct svc_req *);
extern int operation_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SOMA 1
extern  enum clnt_stat soma_1();
extern  bool_t soma_1_svc();
#define SUB 2
extern  enum clnt_stat sub_1();
extern  bool_t sub_1_svc();
#define DIVISAO 3
extern  enum clnt_stat divisao_1();
extern  bool_t divisao_1_svc();
#define MULT 4
extern  enum clnt_stat mult_1();
extern  bool_t mult_1_svc();
extern int operation_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_operandos (XDR *, operandos*);

#else /* K&R C */
extern bool_t xdr_operandos ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_OPERATION_H_RPCGEN */