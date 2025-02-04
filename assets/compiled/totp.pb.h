/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PB_TOTP_TOTP_PB_H_INCLUDED
#define PB_PB_TOTP_TOTP_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _PB_TOTP_TotpKey { 
    char *key; 
    uint32_t keyId; 
} PB_TOTP_TotpKey;

typedef struct _PB_TOTP_getKeyIdsResponse { 
    uint32_t keysAmount; 
    uint32_t *keyIds; 
} PB_TOTP_getKeyIdsResponse;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define PB_TOTP_TotpKey_init_default             {NULL, 0}
#define PB_TOTP_getKeyIdsResponse_init_default   {0, NULL}
#define PB_TOTP_TotpKey_init_zero                {NULL, 0}
#define PB_TOTP_getKeyIdsResponse_init_zero      {0, NULL}

/* Field tags (for use in manual encoding/decoding) */
#define PB_TOTP_TotpKey_key_tag                  1
#define PB_TOTP_TotpKey_keyId_tag                2
#define PB_TOTP_getKeyIdsResponse_keysAmount_tag 1
#define PB_TOTP_getKeyIdsResponse_keyIds_tag     2

/* Struct field encoding specification for nanopb */
#define PB_TOTP_TotpKey_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, STRING,   key,               1) \
X(a, STATIC,   SINGULAR, UINT32,   keyId,             2)
#define PB_TOTP_TotpKey_CALLBACK NULL
#define PB_TOTP_TotpKey_DEFAULT NULL

#define PB_TOTP_getKeyIdsResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   keysAmount,        1) \
X(a, POINTER,  SINGULAR, UINT32,   keyIds,            2)
#define PB_TOTP_getKeyIdsResponse_CALLBACK NULL
#define PB_TOTP_getKeyIdsResponse_DEFAULT NULL

extern const pb_msgdesc_t PB_TOTP_TotpKey_msg;
extern const pb_msgdesc_t PB_TOTP_getKeyIdsResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define PB_TOTP_TotpKey_fields &PB_TOTP_TotpKey_msg
#define PB_TOTP_getKeyIdsResponse_fields &PB_TOTP_getKeyIdsResponse_msg

/* Maximum encoded size of messages (where known) */
/* PB_TOTP_TotpKey_size depends on runtime parameters */
/* PB_TOTP_getKeyIdsResponse_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
