#ifndef _CISCO_IOS_XR_MPLS_TE_DATATYPES_
#define _CISCO_IOS_XR_MPLS_TE_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_datatypes {

class SrPrependEnum : public Enum
{
    public:
        static const Enum::YLeaf none_type;
        static const Enum::YLeaf next_label;
        static const Enum::YLeaf bgp_n_hop;

};

class MplsTeBandwidthLimitEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;
        static const Enum::YLeaf limited;

};

class MplsTeBandwidthPoolEnum : public Enum
{
    public:
        static const Enum::YLeaf any_pool;
        static const Enum::YLeaf sub_pool;

};

class MplsTeAttrSetEnum : public Enum
{
    public:
        static const Enum::YLeaf not_used;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf lsp;
        static const Enum::YLeaf unassigned;
        static const Enum::YLeaf auto_backup;
        static const Enum::YLeaf auto_mesh;
        static const Enum::YLeaf xro;
        static const Enum::YLeaf p2mp_te;
        static const Enum::YLeaf otn_pp;
        static const Enum::YLeaf p2p_te;

};

class MplsTeSwitchingCapEnum : public Enum
{
    public:
        static const Enum::YLeaf psc1;
        static const Enum::YLeaf lsc;
        static const Enum::YLeaf fsc;

};

class MplsTeBfdSessionDownActionEnum : public Enum
{
    public:
        static const Enum::YLeaf re_setup;

};

class MplsTeBackupBandwidthClassEnum : public Enum
{
    public:
        static const Enum::YLeaf class0;
        static const Enum::YLeaf class1;
        static const Enum::YLeaf any_class;

};

class MplsTeLogFrrProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf frr_active_primary;
        static const Enum::YLeaf backup;
        static const Enum::YLeaf frr_ready_primary;
        static const Enum::YLeaf primary;
        static const Enum::YLeaf all;

};

class MplsTeTunnelAffinityEnum : public Enum
{
    public:
        static const Enum::YLeaf include;
        static const Enum::YLeaf include_strict;
        static const Enum::YLeaf exclude;
        static const Enum::YLeaf exclude_all;
        static const Enum::YLeaf ignore;

};

class MplsTePathOptionPropertyEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf lockdown;
        static const Enum::YLeaf verbatim;
        static const Enum::YLeaf pce;
        static const Enum::YLeaf segment_routing;

};

class MplsTePathSelectionInvalidationTimerExpireEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_action_tear;
        static const Enum::YLeaf tunnel_action_drop;

};

class MplsTeOtnApsProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1plus1_unidir_no_aps;
        static const Enum::YLeaf Y_1plus1_unidir_aps;
        static const Enum::YLeaf Y_1plus1_bdir_aps;

};

class CtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ctype_null;
        static const Enum::YLeaf ctype_ipv4;
        static const Enum::YLeaf ctype_ipv4_p2p_tunnel;
        static const Enum::YLeaf ctype_ipv6_p2p_tunnel;
        static const Enum::YLeaf ctype_ipv4_uni;
        static const Enum::YLeaf ctype_ipv4_p2mp_tunnel;
        static const Enum::YLeaf ctype_ipv6_p2mp_tunnel;

};

class MplsTeAffinityValueEnum : public Enum
{
    public:
        static const Enum::YLeaf hex_value;
        static const Enum::YLeaf bit_position;

};

class MplsTeOtnSncModeEnum : public Enum
{
    public:
        static const Enum::YLeaf snc_n;
        static const Enum::YLeaf snc_i;
        static const Enum::YLeaf snc_s;

};

class MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf adj_unprotected;
        static const Enum::YLeaf adj_protected;

};

class MplsTeIgpProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospf;

};

class MplsTePathSelectionTiebreakerEnum : public Enum
{
    public:
        static const Enum::YLeaf min_fill;
        static const Enum::YLeaf max_fill;
        static const Enum::YLeaf random;

};

class MplsTeSigNameOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf address;
        static const Enum::YLeaf name;

};

class PathInvalidationActionEnum : public Enum
{
    public:
        static const Enum::YLeaf tear;
        static const Enum::YLeaf drop;

};

class MplsTeAutorouteMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf relative;
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf constant;

};

class MplsTesrlgExcludeEnum : public Enum
{
    public:
        static const Enum::YLeaf mandatory;
        static const Enum::YLeaf preferred;
        static const Enum::YLeaf weighted;

};

class MplsTeBackupBandwidthPoolEnum : public Enum
{
    public:
        static const Enum::YLeaf any_pool;
        static const Enum::YLeaf global_pool;
        static const Enum::YLeaf sub_pool;

};

class MplsTePathSelectionMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf te;
        static const Enum::YLeaf delay;

};

class MplsTePathOptionProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf protecting;

};

class MplsTePathOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf explicit_name;
        static const Enum::YLeaf explicit_number;
        static const Enum::YLeaf no_ero;
        static const Enum::YLeaf sr;

};

class BfdReversePathEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_reverse_path_binding_label;

};

class MplsTeOtnApsRestorationStyleEnum : public Enum
{
    public:
        static const Enum::YLeaf keep_failed_lsp;
        static const Enum::YLeaf delete_failed_lsp;

};

class MplsTeBandwidthDsteEnum : public Enum
{
    public:
        static const Enum::YLeaf standard_dste;
        static const Enum::YLeaf pre_standard_dste;

};

class MplsTePathDiversityConformanceEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf best_effort;

};

class MplsTeOtnApsProtectionModeEnum : public Enum
{
    public:
        static const Enum::YLeaf revertive;
        static const Enum::YLeaf non_revertive;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_DATATYPES_ */

