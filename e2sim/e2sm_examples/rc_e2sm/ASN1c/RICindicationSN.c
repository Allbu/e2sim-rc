/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v02.02.03.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "RICindicationSN.h"

int
RICindicationSN_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_RICindicationSN_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_RICindicationSN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RICindicationSN = {
	"RICindicationSN",
	"RICindicationSN",
	&asn_OP_NativeInteger,
	asn_DEF_RICindicationSN_tags_1,
	sizeof(asn_DEF_RICindicationSN_tags_1)
		/sizeof(asn_DEF_RICindicationSN_tags_1[0]), /* 1 */
	asn_DEF_RICindicationSN_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICindicationSN_tags_1)
		/sizeof(asn_DEF_RICindicationSN_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RICindicationSN_constr_1, RICindicationSN_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};
