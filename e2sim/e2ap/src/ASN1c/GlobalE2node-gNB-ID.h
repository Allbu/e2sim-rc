/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "E2AP-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_GlobalE2node_gNB_ID_H_
#define	_GlobalE2node_gNB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GlobalgNB-ID.h"
#include "GNB-CU-UP-ID.h"
#include "GNB-DU-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GlobalenGNB_ID;

/* GlobalE2node-gNB-ID */
typedef struct GlobalE2node_gNB_ID {
	GlobalgNB_ID_t	 global_gNB_ID;
	struct GlobalenGNB_ID	*global_en_gNB_ID;	/* OPTIONAL */
	GNB_CU_UP_ID_t	*gNB_CU_UP_ID;	/* OPTIONAL */
	GNB_DU_ID_t	*gNB_DU_ID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalE2node_gNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalE2node_gNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalE2node_gNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalE2node_gNB_ID_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalE2node_gNB_ID_H_ */
#include "asn_internal.h"
