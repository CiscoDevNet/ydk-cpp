#ifndef _CISCO_IOS_XR_MPLS_TE_DATATYPES_
#define _CISCO_IOS_XR_MPLS_TE_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_datatypes {


class SrPrependEnum : public Enum
{
    public:
        static const Enum::Value none_type;
        static const Enum::Value next_label;
        static const Enum::Value bgp_n_hop;

};

class MplsTeBandwidthLimitEnum : public Enum
{
    public:
        static const Enum::Value unlimited;
        static const Enum::Value limited;

};

class MplsTeBandwidthPoolEnum : public Enum
{
    public:
        static const Enum::Value any_pool;
        static const Enum::Value sub_pool;

};

class MplsTeAttrSetEnum : public Enum
{
    public:
        static const Enum::Value not_used;
        static const Enum::Value static_;
        static const Enum::Value lsp;
        static const Enum::Value unassigned;
        static const Enum::Value auto_backup;
        static const Enum::Value auto_mesh;
        static const Enum::Value xro;
        static const Enum::Value p2mp_te;
        static const Enum::Value otn_pp;
        static const Enum::Value p2p_te;

};

class MplsTeSwitchingCapEnum : public Enum
{
    public:
        static const Enum::Value psc1;
        static const Enum::Value lsc;
        static const Enum::Value fsc;

};

class MplsTeBfdSessionDownActionEnum : public Enum
{
    public:
        static const Enum::Value re_setup;

};

class MplsTeBackupBandwidthClassEnum : public Enum
{
    public:
        static const Enum::Value class0;
        static const Enum::Value class1;
        static const Enum::Value any_class;

};

class MplsTeLogFrrProtectionEnum : public Enum
{
    public:
        static const Enum::Value frr_active_primary;
        static const Enum::Value backup;
        static const Enum::Value frr_ready_primary;
        static const Enum::Value primary;
        static const Enum::Value all;

};

class MplsTeTunnelAffinityEnum : public Enum
{
    public:
        static const Enum::Value include;
        static const Enum::Value include_strict;
        static const Enum::Value exclude;
        static const Enum::Value exclude_all;
        static const Enum::Value ignore;

};

class MplsTePathOptionPropertyEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value lockdown;
        static const Enum::Value verbatim;
        static const Enum::Value pce;
        static const Enum::Value segment_routing;

};

class MplsTePathSelectionInvalidationTimerExpireEnum : public Enum
{
    public:
        static const Enum::Value tunnel_action_tear;
        static const Enum::Value tunnel_action_drop;

};

class MplsTeOtnApsProtectionEnum : public Enum
{
    public:
        static const Enum::Value Y_1plus1_unidir_no_aps;
        static const Enum::Value Y_1plus1_unidir_aps;
        static const Enum::Value Y_1plus1_bdir_aps;

};

class CtypeEnum : public Enum
{
    public:
        static const Enum::Value ctype_null;
        static const Enum::Value ctype_ipv4;
        static const Enum::Value ctype_ipv4_p2p_tunnel;
        static const Enum::Value ctype_ipv6_p2p_tunnel;
        static const Enum::Value ctype_ipv4_uni;
        static const Enum::Value ctype_ipv4_p2mp_tunnel;
        static const Enum::Value ctype_ipv6_p2mp_tunnel;

};

class MplsTeAffinityValueEnum : public Enum
{
    public:
        static const Enum::Value hex_value;
        static const Enum::Value bit_position;

};

class MplsTeBandwidthDsteEnum : public Enum
{
    public:
        static const Enum::Value standard_dste;
        static const Enum::Value pre_standard_dste;

};

class MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum : public Enum
{
    public:
        static const Enum::Value not_set;
        static const Enum::Value adj_unprotected;
        static const Enum::Value adj_protected;

};

class MplsTeIgpProtocolEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value isis;
        static const Enum::Value ospf;

};

class MplsTePathSelectionTiebreakerEnum : public Enum
{
    public:
        static const Enum::Value min_fill;
        static const Enum::Value max_fill;
        static const Enum::Value random;

};

class MplsTeSigNameOptionEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value address;
        static const Enum::Value name;

};

class PathInvalidationActionEnum : public Enum
{
    public:
        static const Enum::Value tear;
        static const Enum::Value drop;

};

class MplsTeAutorouteMetricEnum : public Enum
{
    public:
        static const Enum::Value relative;
        static const Enum::Value absolute;
        static const Enum::Value constant;

};

class MplsTesrlgExcludeEnum : public Enum
{
    public:
        static const Enum::Value mandatory;
        static const Enum::Value preferred;
        static const Enum::Value weighted;

};

class MplsTeBackupBandwidthPoolEnum : public Enum
{
    public:
        static const Enum::Value any_pool;
        static const Enum::Value global_pool;
        static const Enum::Value sub_pool;

};

class MplsTePathSelectionMetricEnum : public Enum
{
    public:
        static const Enum::Value igp;
        static const Enum::Value te;
        static const Enum::Value delay;

};

class MplsTePathOptionProtectionEnum : public Enum
{
    public:
        static const Enum::Value active;
        static const Enum::Value protecting;

};

class MplsTePathOptionEnum : public Enum
{
    public:
        static const Enum::Value not_set;
        static const Enum::Value dynamic;
        static const Enum::Value explicit_name;
        static const Enum::Value explicit_number;
        static const Enum::Value no_ero;
        static const Enum::Value sr;

};

class BfdReversePathEnum : public Enum
{
    public:
        static const Enum::Value bfd_reverse_path_binding_label;

};

class MplsTeOtnApsRestorationStyleEnum : public Enum
{
    public:
        static const Enum::Value keep_failed_lsp;
        static const Enum::Value delete_failed_lsp;

};

class MplsTeOtnSncModeEnum : public Enum
{
    public:
        static const Enum::Value snc_n;
        static const Enum::Value snc_i;
        static const Enum::Value snc_s;

};

class MplsTePathDiversityConformanceEnum : public Enum
{
    public:
        static const Enum::Value strict;
        static const Enum::Value best_effort;

};

class MplsTeOtnApsProtectionModeEnum : public Enum
{
    public:
        static const Enum::Value revertive;
        static const Enum::Value non_revertive;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_DATATYPES_ */

