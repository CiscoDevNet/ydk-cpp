#ifndef _CISCO_IOS_XR_MPLS_TE_DATATYPES_
#define _CISCO_IOS_XR_MPLS_TE_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_datatypes {

class MplsTesrlgExclude : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf preferred;
        static const ydk::Enum::YLeaf weighted;

};

class MplsTeAffinityValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hex_value;
        static const ydk::Enum::YLeaf bit_position;

};

class SrPrepend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none_type;
        static const ydk::Enum::YLeaf next_label;
        static const ydk::Enum::YLeaf bgp_n_hop;

};

class MplsTePathSelectionTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf min_fill;
        static const ydk::Enum::YLeaf max_fill;
        static const ydk::Enum::YLeaf random;

};

class MplsTeOtnApsProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1plus1_unidir_no_aps;
        static const ydk::Enum::YLeaf Y_1plus1_unidir_aps;
        static const ydk::Enum::YLeaf Y_1plus1_bdir_aps;

};

class MplsTePathOptionProperty : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lockdown;
        static const ydk::Enum::YLeaf verbatim;
        static const ydk::Enum::YLeaf pce;
        static const ydk::Enum::YLeaf segment_routing;

};

class MplsTeTunnelAffinity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf include;
        static const ydk::Enum::YLeaf include_strict;
        static const ydk::Enum::YLeaf exclude;
        static const ydk::Enum::YLeaf exclude_all;
        static const ydk::Enum::YLeaf ignore;

};

class MplsTeSwitchingCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf psc1;
        static const ydk::Enum::YLeaf lsc;
        static const ydk::Enum::YLeaf fsc;

};

class MplsTeOtnApsProtectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf revertive;
        static const ydk::Enum::YLeaf non_revertive;

};

class MplsTeBfdSessionDownAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf re_setup;

};

class MplsTeLogFrrProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frr_active_primary;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf frr_ready_primary;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf all;

};

class MplsTeAutorouteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf constant;

};

class MplsTeBackupBandwidthPool : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any_pool;
        static const ydk::Enum::YLeaf global_pool;
        static const ydk::Enum::YLeaf sub_pool;

};

class MplsTeOtnSncMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snc_n;
        static const ydk::Enum::YLeaf snc_i;
        static const ydk::Enum::YLeaf snc_s;

};

class BfdReversePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_reverse_path_binding_label;

};

class MplsTePathSelectionMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;
        static const ydk::Enum::YLeaf delay;

};

class MplsTePathOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_name;
        static const ydk::Enum::YLeaf explicit_number;
        static const ydk::Enum::YLeaf no_ero;
        static const ydk::Enum::YLeaf sr;

};

class MplsTeBandwidthPool : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any_pool;
        static const ydk::Enum::YLeaf sub_pool;

};

class MplsTeBandwidthDste : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard_dste;
        static const ydk::Enum::YLeaf pre_standard_dste;

};

class MplsTePathSelectionInvalidationTimerExpire : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_action_tear;
        static const ydk::Enum::YLeaf tunnel_action_drop;

};

class Ctype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ctype_null;
        static const ydk::Enum::YLeaf ctype_ipv4;
        static const ydk::Enum::YLeaf ctype_ipv4_p2p_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv6_p2p_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv4_uni;
        static const ydk::Enum::YLeaf ctype_ipv4_p2mp_tunnel;
        static const ydk::Enum::YLeaf ctype_ipv6_p2mp_tunnel;

};

class MplsTePathDiversityConformance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf best_effort;

};

class MplsTeBackupBandwidthClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class0;
        static const ydk::Enum::YLeaf class1;
        static const ydk::Enum::YLeaf any_class;

};

class MplsTeAttrSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_used;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf lsp;
        static const ydk::Enum::YLeaf unassigned;
        static const ydk::Enum::YLeaf auto_backup;
        static const ydk::Enum::YLeaf auto_mesh;
        static const ydk::Enum::YLeaf xro;
        static const ydk::Enum::YLeaf p2mp_te;
        static const ydk::Enum::YLeaf otn_pp;
        static const ydk::Enum::YLeaf p2p_te;

};

class MplsTeOtnApsRestorationStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf keep_failed_lsp;
        static const ydk::Enum::YLeaf delete_failed_lsp;

};

class MplsTePathSelectionSegmentRoutingAdjacencyProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf adj_unprotected;
        static const ydk::Enum::YLeaf adj_protected;

};

class MplsTePathOptionProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf protecting;

};

class MplsTeSigNameOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf name;

};

class MplsTeBandwidthLimit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unlimited;
        static const ydk::Enum::YLeaf limited;

};

class PathInvalidationAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tear;
        static const ydk::Enum::YLeaf drop;

};

class MplsTeIgpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_DATATYPES_ */

