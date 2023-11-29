/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "E2AP-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_CriticalityDiagnostics_IE_Item_H_
#define	_CriticalityDiagnostics_IE_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Criticality.h"
#include "ProtocolIE-ID.h"
#include "TypeOfError.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CriticalityDiagnostics-IE-Item */
typedef struct CriticalityDiagnostics_IE_Item {
	Criticality_t	 iECriticality;
	ProtocolIE_ID_t	 iE_ID;
	TypeOfError_t	 typeOfError;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_IE_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CriticalityDiagnostics_IE_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_CriticalityDiagnostics_IE_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_CriticalityDiagnostics_IE_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CriticalityDiagnostics_IE_Item_H_ */
#include "asn_internal.h"
