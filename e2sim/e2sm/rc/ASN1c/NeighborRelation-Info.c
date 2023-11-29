/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "NeighborRelation-Info.h"

asn_TYPE_member_t asn_MBR_NeighborRelation_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborRelation_Info, servingCellPCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ServingCell_PCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellPCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborRelation_Info, servingCellARFCN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ServingCell_ARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingCellARFCN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborRelation_Info, neighborCell_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighborCell_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighborCell-List"
		},
};
static const ber_tlv_tag_t asn_DEF_NeighborRelation_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighborRelation_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingCellPCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* servingCellARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* neighborCell-List */
};
asn_SEQUENCE_specifics_t asn_SPC_NeighborRelation_Info_specs_1 = {
	sizeof(struct NeighborRelation_Info),
	offsetof(struct NeighborRelation_Info, _asn_ctx),
	asn_MAP_NeighborRelation_Info_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NeighborRelation_Info = {
	"NeighborRelation-Info",
	"NeighborRelation-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_NeighborRelation_Info_tags_1,
	sizeof(asn_DEF_NeighborRelation_Info_tags_1)
		/sizeof(asn_DEF_NeighborRelation_Info_tags_1[0]), /* 1 */
	asn_DEF_NeighborRelation_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighborRelation_Info_tags_1)
		/sizeof(asn_DEF_NeighborRelation_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NeighborRelation_Info_1,
	3,	/* Elements count */
	&asn_SPC_NeighborRelation_Info_specs_1	/* Additional specs */
};

