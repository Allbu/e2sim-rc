/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "TriggerType-Choice-L2state.h"

asn_TYPE_member_t asn_MBR_TriggerType_Choice_L2state_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TriggerType_Choice_L2state, associatedL2variables),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_Testing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedL2variables"
		},
};
static const ber_tlv_tag_t asn_DEF_TriggerType_Choice_L2state_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TriggerType_Choice_L2state_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* associatedL2variables */
};
asn_SEQUENCE_specifics_t asn_SPC_TriggerType_Choice_L2state_specs_1 = {
	sizeof(struct TriggerType_Choice_L2state),
	offsetof(struct TriggerType_Choice_L2state, _asn_ctx),
	asn_MAP_TriggerType_Choice_L2state_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TriggerType_Choice_L2state = {
	"TriggerType-Choice-L2state",
	"TriggerType-Choice-L2state",
	&asn_OP_SEQUENCE,
	asn_DEF_TriggerType_Choice_L2state_tags_1,
	sizeof(asn_DEF_TriggerType_Choice_L2state_tags_1)
		/sizeof(asn_DEF_TriggerType_Choice_L2state_tags_1[0]), /* 1 */
	asn_DEF_TriggerType_Choice_L2state_tags_1,	/* Same as above */
	sizeof(asn_DEF_TriggerType_Choice_L2state_tags_1)
		/sizeof(asn_DEF_TriggerType_Choice_L2state_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TriggerType_Choice_L2state_1,
	1,	/* Elements count */
	&asn_SPC_TriggerType_Choice_L2state_specs_1	/* Additional specs */
};

