/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_E2SM_RC_ControlMessage_Format2_ControlAction_Item_H_
#define	_E2SM_RC_ControlMessage_Format2_ControlAction_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RIC-ControlAction-ID.h"
#include "E2SM-RC-ControlMessage-Format1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-RC-ControlMessage-Format2-ControlAction-Item */
typedef struct E2SM_RC_ControlMessage_Format2_ControlAction_Item {
	RIC_ControlAction_ID_t	 ric_ControlAction_ID;
	E2SM_RC_ControlMessage_Format1_t	 ranP_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_ControlMessage_Format2_ControlAction_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ControlMessage_Format2_ControlAction_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_ControlMessage_Format2_ControlAction_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_RC_ControlMessage_Format2_ControlAction_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_ControlMessage_Format2_ControlAction_Item_H_ */
#include "asn_internal.h"
