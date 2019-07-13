/* getdns interface STUB */

#include "config.h"

#include <cache/cache.h>

#include "vcc_dynamic_if.h"

struct VPFX(dynamic_resolver) {
	int dummy;
};

VCL_VOID
vmod_resolver__init(VRT_CTX,
    struct VPFX(dynamic_resolver) **rp, const char *vcl_name,
    VCL_BOOL set_from_os, VCL_INT parallel)
{
	(void) ctx;
	*rp = NULL;
	(void) vcl_name;
	(void) set_from_os;
	(void) parallel;
}
VCL_VOID
vmod_resolver__fini(struct VPFX(dynamic_resolver) **rp)
{
	(void) rp;
	assert(0);
}

VCL_BOOL
vmod_resolver_set_resolution_type(VRT_CTX,
    struct VPFX(dynamic_resolver) *r, VCL_ENUM type_e)
{
	(void) r;
	(void) type_e;
	return (0);
}

VCL_BOOL
vmod_resolver_clear_namespaces(VRT_CTX,
    struct VPFX(dynamic_resolver) *r)
{
	(void) r;
	return (0);
}

VCL_BOOL
vmod_resolver_add_namespace(VRT_CTX,
    struct VPFX(dynamic_resolver) *r, VCL_ENUM namespace_e)
{
	(void) r;
	(void) namespace_e;
	return (0);
}

VCL_BOOL
vmod_resolver_set_namespaces(VRT_CTX,
    struct VPFX(dynamic_resolver) *r)
{
	(void) r;
	return (0);
}

VCL_BOOL
vmod_resolver_clear_transports(VRT_CTX,
    struct VPFX(dynamic_resolver) *r)
{
	(void) r;
	return (0);
}

VCL_BOOL
vmod_resolver_add_transport(VRT_CTX,
    struct VPFX(dynamic_resolver) *r, VCL_ENUM transport_e)
{
	(void) r;
	(void) transport_e;
	return (0);
}

VCL_BOOL
vmod_resolver_set_transports(VRT_CTX,
    struct VPFX(dynamic_resolver) *r)
{
	(void) r;
	return (0);
}

VCL_BOOL
vmod_resolver_set_idle_timeout(VRT_CTX,
    struct VPFX(dynamic_resolver) *r, VCL_DURATION d)
{
	(void) r;
	(void) d;
	return (0);
}

VCL_BOOL
vmod_resolver_set_limit_outstanding_queries(VRT_CTX,
    struct VPFX(dynamic_resolver) *r, VCL_INT limit)
{
	(void) r;
	(void) limit;
	return (0);
}

VCL_BOOL
vmod_resolver_set_timeout(VRT_CTX,
    struct VPFX(dynamic_resolver) *r, VCL_DURATION d)
{
	(void) r;
	(void) d;
	return (0);
}

VCL_BOOL
vmod_resolver_set_follow_redirects(VRT_CTX,
    struct VPFX(dynamic_resolver) *r, VCL_ENUM redirects_e)
{
	(void) r;
	(void) redirects_e;
	return (0);
}
