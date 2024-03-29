/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CHATAPP_H_RPCGEN
#define _CHATAPP_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct data {
	char msg[80];
};
typedef struct data data;

#define CHATAPP_PROG 0x23452111
#define CHATAPP_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define chat 1
extern  char ** chat_1(data *, CLIENT *);
extern  char ** chat_1_svc(data *, struct svc_req *);
extern int chatapp_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define chat 1
extern  char ** chat_1();
extern  char ** chat_1_svc();
extern int chatapp_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_data (XDR *, data*);

#else /* K&R C */
extern bool_t xdr_data ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CHATAPP_H_RPCGEN */
