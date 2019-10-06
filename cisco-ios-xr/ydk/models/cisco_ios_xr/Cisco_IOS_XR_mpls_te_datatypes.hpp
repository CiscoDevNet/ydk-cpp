#ifndef _CISCO_IOS_XR_MPLS_TE_DATATYPES_
#define _CISCO_IOS_XR_MPLS_TE_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_datatypes {

class SrPrepend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none_type;
        static const ydk::Enum::YLeaf next_label;
        static const ydk::Enum::YLeaf bgp_n_hop;

        static int get_enum_value(const std::string & name) {
            if (name == "none-type") return 0;
            if (name == "next-label") return 1;
            if (name == "bgp-n-hop") return 2;
            return -1;
        }
};

class MplsTeBandwidthLimit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unlimited;
        static const ydk::Enum::YLeaf limited;

        static int get_enum_value(const std::string & name) {
            if (name == "unlimited") return 64;
            if (name == "limited") return 128;
            return -1;
        }
};

class MplsTeBandwidthPool : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any_pool;
        static const ydk::Enum::YLeaf sub_pool;

        static int get_enum_value(const std::string & name) {
            if (name == "any-pool") return 0;
            if (name == "sub-pool") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "not-used") return 0;
            if (name == "static") return 1;
            if (name == "lsp") return 2;
            if (name == "unassigned") return 3;
            if (name == "auto-backup") return 4;
            if (name == "auto-mesh") return 5;
            if (name == "xro") return 6;
            if (name == "p2mp-te") return 7;
            if (name == "otn-pp") return 8;
            if (name == "p2p-te") return 9;
            return -1;
        }
};

class MplsTeSwitchingCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf psc1;
        static const ydk::Enum::YLeaf lsc;
        static const ydk::Enum::YLeaf fsc;

        static int get_enum_value(const std::string & name) {
            if (name == "psc1") return 1;
            if (name == "lsc") return 150;
            if (name == "fsc") return 200;
            return -1;
        }
};

class MplsTeBfdSessionDownAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf re_setup;

        static int get_enum_value(const std::string & name) {
            if (name == "re-setup") return 1;
            return -1;
        }
};

class MplsTeBackupBandwidthClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class0;
        static const ydk::Enum::YLeaf class1;
        static const ydk::Enum::YLeaf any_class;

        static int get_enum_value(const std::string & name) {
            if (name == "class0") return 0;
            if (name == "class1") return 1;
            if (name == "any-class") return 9;
            return -1;
        }
};

class MplsTeLogFrrProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frr_active_primary;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf frr_ready_primary;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "frr-active-primary") return 1;
            if (name == "backup") return 256;
            if (name == "frr-ready-primary") return 512;
            if (name == "primary") return 513;
            if (name == "all") return 769;
            return -1;
        }
};

class MplsTeTunnelAffinity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf include;
        static const ydk::Enum::YLeaf include_strict;
        static const ydk::Enum::YLeaf exclude;
        static const ydk::Enum::YLeaf exclude_all;
        static const ydk::Enum::YLeaf ignore;

        static int get_enum_value(const std::string & name) {
            if (name == "include") return 1;
            if (name == "include-strict") return 2;
            if (name == "exclude") return 3;
            if (name == "exclude-all") return 4;
            if (name == "ignore") return 5;
            return -1;
        }
};

class MplsTePathOptionProperty : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lockdown;
        static const ydk::Enum::YLeaf verbatim;
        static const ydk::Enum::YLeaf pce;
        static const ydk::Enum::YLeaf segment_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "lockdown") return 1;
            if (name == "verbatim") return 4;
            if (name == "pce") return 8;
            if (name == "segment-routing") return 16;
            return -1;
        }
};

class MplsTePathSelectionInvalidationTimerExpire : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel_action_tear;
        static const ydk::Enum::YLeaf tunnel_action_drop;

        static int get_enum_value(const std::string & name) {
            if (name == "tunnel-action-tear") return 1;
            if (name == "tunnel-action-drop") return 2;
            return -1;
        }
};

class MplsTeOtnApsProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1plus1_unidir_no_aps;
        static const ydk::Enum::YLeaf Y_1plus1_unidir_aps;
        static const ydk::Enum::YLeaf Y_1plus1_bdir_aps;

        static int get_enum_value(const std::string & name) {
            if (name == "1plus1-unidir-no-aps") return 4;
            if (name == "1plus1-unidir-aps") return 8;
            if (name == "1plus1-bdir-aps") return 16;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "ctype-null") return 0;
            if (name == "ctype-ipv4") return 1;
            if (name == "ctype-ipv4-p2p-tunnel") return 7;
            if (name == "ctype-ipv6-p2p-tunnel") return 8;
            if (name == "ctype-ipv4-uni") return 9;
            if (name == "ctype-ipv4-p2mp-tunnel") return 13;
            if (name == "ctype-ipv6-p2mp-tunnel") return 14;
            return -1;
        }
};

class MplsTeAffinityValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hex_value;
        static const ydk::Enum::YLeaf bit_position;

        static int get_enum_value(const std::string & name) {
            if (name == "hex-value") return 1;
            if (name == "bit-position") return 2;
            return -1;
        }
};

class MplsTeOtnSncMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snc_n;
        static const ydk::Enum::YLeaf snc_i;
        static const ydk::Enum::YLeaf snc_s;

        static int get_enum_value(const std::string & name) {
            if (name == "snc-n") return 1;
            if (name == "snc-i") return 2;
            if (name == "snc-s") return 3;
            return -1;
        }
};

class MplsTePathSelectionSegmentRoutingAdjacencyProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf adj_unprotected;
        static const ydk::Enum::YLeaf adj_protected;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "adj-unprotected") return 1;
            if (name == "adj-protected") return 2;
            return -1;
        }
};

class MplsTeIgpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospf;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "isis") return 1;
            if (name == "ospf") return 2;
            return -1;
        }
};

class MplsTePathSelectionTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf min_fill;
        static const ydk::Enum::YLeaf max_fill;
        static const ydk::Enum::YLeaf random;

        static int get_enum_value(const std::string & name) {
            if (name == "min-fill") return 1;
            if (name == "max-fill") return 2;
            if (name == "random") return 3;
            return -1;
        }
};

class MplsTeSigNameOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf address;
        static const ydk::Enum::YLeaf name;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "address") return 1;
            if (name == "name") return 2;
            return -1;
        }
};

class PathInvalidationAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tear;
        static const ydk::Enum::YLeaf drop;

        static int get_enum_value(const std::string & name) {
            if (name == "tear") return 1;
            if (name == "drop") return 2;
            return -1;
        }
};

class MplsTeAutorouteMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf constant;

        static int get_enum_value(const std::string & name) {
            if (name == "relative") return 1;
            if (name == "absolute") return 2;
            if (name == "constant") return 3;
            return -1;
        }
};

class MplsTesrlgExclude : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mandatory;
        static const ydk::Enum::YLeaf preferred;
        static const ydk::Enum::YLeaf weighted;

        static int get_enum_value(const std::string & name) {
            if (name == "mandatory") return 1;
            if (name == "preferred") return 2;
            if (name == "weighted") return 3;
            return -1;
        }
};

class MplsTeBackupBandwidthPool : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any_pool;
        static const ydk::Enum::YLeaf global_pool;
        static const ydk::Enum::YLeaf sub_pool;

        static int get_enum_value(const std::string & name) {
            if (name == "any-pool") return 1;
            if (name == "global-pool") return 2;
            if (name == "sub-pool") return 4;
            return -1;
        }
};

class MplsTePathSelectionMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;
        static const ydk::Enum::YLeaf delay;

        static int get_enum_value(const std::string & name) {
            if (name == "igp") return 1;
            if (name == "te") return 2;
            if (name == "delay") return 4;
            return -1;
        }
};

class MplsTePathOptionProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf protecting;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 0;
            if (name == "protecting") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "dynamic") return 1;
            if (name == "explicit-name") return 3;
            if (name == "explicit-number") return 4;
            if (name == "no-ero") return 5;
            if (name == "sr") return 6;
            return -1;
        }
};

class BfdReversePath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bfd_reverse_path_binding_label;

        static int get_enum_value(const std::string & name) {
            if (name == "bfd-reverse-path-binding-label") return 1;
            return -1;
        }
};

class MplsTeOtnApsRestorationStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf keep_failed_lsp;
        static const ydk::Enum::YLeaf delete_failed_lsp;

        static int get_enum_value(const std::string & name) {
            if (name == "keep-failed-lsp") return 1;
            if (name == "delete-failed-lsp") return 2;
            return -1;
        }
};

class MplsTeBandwidthDste : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard_dste;
        static const ydk::Enum::YLeaf pre_standard_dste;

        static int get_enum_value(const std::string & name) {
            if (name == "standard-dste") return 0;
            if (name == "pre-standard-dste") return 1;
            return -1;
        }
};

class MplsTePathDiversityConformance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf best_effort;

        static int get_enum_value(const std::string & name) {
            if (name == "strict") return 0;
            if (name == "best-effort") return 1;
            return -1;
        }
};

class MplsTeOtnApsProtectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf revertive;
        static const ydk::Enum::YLeaf non_revertive;

        static int get_enum_value(const std::string & name) {
            if (name == "revertive") return 1;
            if (name == "non-revertive") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_DATATYPES_ */

