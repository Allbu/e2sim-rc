/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item.h"

#include "E2SM-RC-ControlOutcome-Format2-RANP-Item.h"
static int
memb_ranP_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 65535)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ranP_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ranP_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ranP_List_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ranP_List_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ranP_List_specs_3 = {
	sizeof(struct E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item__ranP_List),
	offsetof(struct E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item__ranP_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ranP_List_3 = {
	"ranP-List",
	"ranP-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ranP_List_tags_3,
	sizeof(asn_DEF_ranP_List_tags_3)
		/sizeof(asn_DEF_ranP_List_tags_3[0]) - 1, /* 1 */
	asn_DEF_ranP_List_tags_3,	/* Same as above */
	sizeof(asn_DEF_ranP_List_tags_3)
		/sizeof(asn_DEF_ranP_List_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_ranP_List_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_ranP_List_3,
	1,	/* Single element */
	&asn_SPC_ranP_List_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item, ric_ControlAction_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_ControlAction_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-ControlAction-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item, ranP_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ranP_List_3,
		0,
		{ 0, &asn_PER_memb_ranP_List_constr_3,  memb_ranP_List_constraint_1 },
		0, 0, /* No default value */
		"ranP-List"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-ControlAction-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ranP-List */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_specs_1 = {
	sizeof(struct E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item),
	offsetof(struct E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item, _asn_ctx),
	asn_MAP_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item = {
	"E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item",
	"E2SM-RC-ControlOutcome-Format2-ControlOutcome-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tags_1,
	sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_RC_ControlOutcome_Format2_ControlOutcome_Item_specs_1	/* Additional specs */
};

