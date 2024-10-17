#include <linux/version.h>
#define IP_SET_COMPAT_HEADERS
#include <linux/netfilter/ipset/ip_set_compat.h>
#include <linux/netfilter/ipset/pfxlen.h>

/* Prefixlen maps for fast conversions, by Jan Engelhardt. */

#ifdef E
#undef E
#endif

#define PREFIXES_MAP						\
	E(0x00000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0x80000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xC0000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xE0000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xF0000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xF8000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFC000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFE000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFF000000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFF800000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFC00000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFE00000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFF00000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFF80000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFC0000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFE0000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFF0000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFF8000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFC000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFE000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFF000, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFF800, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFC00, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFE00, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFF00, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFF80, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFC0, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFE0, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFF0, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFF8, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFC, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0x80000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xC0000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xE0000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xF0000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xF8000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFC000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFE000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFF000000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFF800000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFC00000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFE00000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFF00000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFF80000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFC0000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFE0000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFF0000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFF8000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFC000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFE000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFF000, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFF800, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFC00, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFE00, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFF00, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFF80, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFC0, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFE0, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFF0, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFF8, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFC, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFE, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0x80000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xC0000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xE0000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xF0000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xF8000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFC000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFE000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFF000000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFF800000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFC00000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFE00000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFF00000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFF80000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFC0000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFE0000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFF0000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFF8000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFC000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFE000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFF000, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFF800, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFC00, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFE00, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF00, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF80, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFC0, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFE0, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF0, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF8, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFC, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFE, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF8000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFC000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFE000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFF000000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFF800000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFC00000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFE00000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFF00000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFF80000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFC0000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFE0000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFF0000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFF8000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFC000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFE000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFF000),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFF800),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFC00),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFE00),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF00),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF80),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFC0),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFE0),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF0),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFF8),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFC),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFE),	\
	E(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF),

#define E(a, b, c, d) \
	{.ip6 = { \
		htonl(a), htonl(b), \
		htonl(c), htonl(d), \
	} }

/* This table works for both IPv4 and IPv6;
 * just use prefixlen_netmask_map[prefixlength].ip.
 */
const union nf_inet_addr ip_set_netmask_map[] = {
	PREFIXES_MAP
};
EXPORT_SYMBOL_GPL(ip_set_netmask_map);

#undef  E
#define E(a, b, c, d)					\
	{.ip6 = { (__force __be32)a, (__force __be32)b,	\
		  (__force __be32)c, (__force __be32)d,	\
	} }

/* This table works for both IPv4 and IPv6;
 * just use prefixlen_hostmask_map[prefixlength].ip.
 */
const union nf_inet_addr ip_set_hostmask_map[] = {
	PREFIXES_MAP
};
EXPORT_SYMBOL_GPL(ip_set_hostmask_map);

/* Find the largest network which matches the range from left, in host order. */
u32
ip_set_range_to_cidr(u32 from, u32 to, u8 *cidr)
{
	u32 last;
	u8 i;

	for (i = 1; i < 32; i++) {
		if ((from & ip_set_hostmask(i)) != from)
			continue;
		last = from | ~ip_set_hostmask(i);
		if (!after(last, to)) {
			*cidr = i;
			return last;
		}
	}
	*cidr = 32;
	return from;
}
EXPORT_SYMBOL_GPL(ip_set_range_to_cidr);
