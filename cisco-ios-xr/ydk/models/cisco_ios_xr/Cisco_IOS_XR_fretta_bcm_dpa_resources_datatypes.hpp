#ifndef _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_DATATYPES_
#define _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_resources_datatypes {

class DpaTable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf test_if;
        static const ydk::Enum::YLeaf test_nhg;
        static const ydk::Enum::YLeaf test_nh;
        static const ydk::Enum::YLeaf test_rt;
        static const ydk::Enum::YLeaf test_dynhg;
        static const ydk::Enum::YLeaf test_ip_punt_policy;
        static const ydk::Enum::YLeaf test_punt;
        static const ydk::Enum::YLeaf test_punt_policy_stats;
        static const ydk::Enum::YLeaf test_async_update;
        static const ydk::Enum::YLeaf test_ddel_q;
        static const ydk::Enum::YLeaf bdbvi;
        static const ydk::Enum::YLeaf sys;
        static const ydk::Enum::YLeaf npu;
        static const ydk::Enum::YLeaf npuhwid;
        static const ydk::Enum::YLeaf l1_port;
        static const ydk::Enum::YLeaf l2_port;
        static const ydk::Enum::YLeaf l2intf;
        static const ydk::Enum::YLeaf mplspwe_port;
        static const ydk::Enum::YLeaf mhpwe_port;
        static const ydk::Enum::YLeaf l2xc;
        static const ydk::Enum::YLeaf l2vpnstats;
        static const ydk::Enum::YLeaf l1_ports_tats;
        static const ydk::Enum::YLeaf l3intf;
        static const ydk::Enum::YLeaf l3intfrxstats;
        static const ydk::Enum::YLeaf ip_route;
        static const ydk::Enum::YLeaf ip6_route;
        static const ydk::Enum::YLeaf punt_policy_stats;
        static const ydk::Enum::YLeaf ip_punt_policy;
        static const ydk::Enum::YLeaf ip6_punt_policy;
        static const ydk::Enum::YLeaf isis_punt_policy;
        static const ydk::Enum::YLeaf ipnh_group;
        static const ydk::Enum::YLeaf ip6nh_group;
        static const ydk::Enum::YLeaf ipnh;
        static const ydk::Enum::YLeaf ip6nh;
        static const ydk::Enum::YLeaf ipvrf;
        static const ydk::Enum::YLeaf mplsnh;
        static const ydk::Enum::YLeaf mpls_label;
        static const ydk::Enum::YLeaf dnx_trap;
        static const ydk::Enum::YLeaf punt;
        static const ydk::Enum::YLeaf punt_police_r;
        static const ydk::Enum::YLeaf punt_lpts_police_r;
        static const ydk::Enum::YLeaf punt_stats;
        static const ydk::Enum::YLeaf tm_port;
        static const ydk::Enum::YLeaf span_session;
        static const ydk::Enum::YLeaf police_rstats;
        static const ydk::Enum::YLeaf tm_ports_tats;
        static const ydk::Enum::YLeaf l3intftxstats;
        static const ydk::Enum::YLeaf mplstetxstats;
        static const ydk::Enum::YLeaf mplslblstats;
        static const ydk::Enum::YLeaf police_r;
        static const ydk::Enum::YLeaf l2intfrxstats;
        static const ydk::Enum::YLeaf l2intftxstats;
        static const ydk::Enum::YLeaf dnx_pbr_tt_ipv4;
        static const ydk::Enum::YLeaf dnx_pbr_tt_ipv6;
        static const ydk::Enum::YLeaf bfdhwoff;
        static const ydk::Enum::YLeaf global;
        static const ydk::Enum::YLeaf lag_port;
        static const ydk::Enum::YLeaf qos_profile;
        static const ydk::Enum::YLeaf tmrate_profile;
        static const ydk::Enum::YLeaf dnx_port_range;
        static const ydk::Enum::YLeaf ipacl;
        static const ydk::Enum::YLeaf ip6acl;
        static const ydk::Enum::YLeaf sched_tree;
        static const ydk::Enum::YLeaf tmcos;
        static const ydk::Enum::YLeaf statsagg;
        static const ydk::Enum::YLeaf nhprotect;
        static const ydk::Enum::YLeaf sampler;
        static const ydk::Enum::YLeaf l2qos;
        static const ydk::Enum::YLeaf peer_qos;
        static const ydk::Enum::YLeaf ipqos;
        static const ydk::Enum::YLeaf ip6qos;
        static const ydk::Enum::YLeaf mplsqos;
        static const ydk::Enum::YLeaf qosid;
        static const ydk::Enum::YLeaf extlif;
        static const ydk::Enum::YLeaf elif;
        static const ydk::Enum::YLeaf ingaclstats;
        static const ydk::Enum::YLeaf egraclstats;
        static const ydk::Enum::YLeaf edpl;
        static const ydk::Enum::YLeaf cfmmaid;
        static const ydk::Enum::YLeaf cfmdefmps;
        static const ydk::Enum::YLeaf cfmofflmep;
        static const ydk::Enum::YLeaf cfmoffrmep;
        static const ydk::Enum::YLeaf cfmnonoff;
        static const ydk::Enum::YLeaf cfmhwoffrxstats;
        static const ydk::Enum::YLeaf ipmc_route;
        static const ydk::Enum::YLeaf l2ipmc_route;
        static const ydk::Enum::YLeaf ipmco_list;
        static const ydk::Enum::YLeaf l2mco_list;
        static const ydk::Enum::YLeaf ipmc_merge_do_list;
        static const ydk::Enum::YLeaf sgfgid_list;
        static const ydk::Enum::YLeaf meshmc;
        static const ydk::Enum::YLeaf l2_bridge;
        static const ydk::Enum::YLeaf l2_bridge_port;
        static const ydk::Enum::YLeaf l2_bridge_mac;
        static const ydk::Enum::YLeaf l2brmac;
        static const ydk::Enum::YLeaf ip_tunnel_decap;
        static const ydk::Enum::YLeaf l2vlan_range;
        static const ydk::Enum::YLeaf ip_tunnel_encap;
        static const ydk::Enum::YLeaf rawget;
        static const ydk::Enum::YLeaf ip6mc_route;
        static const ydk::Enum::YLeaf l2evpnact_remote_peer_id;
        static const ydk::Enum::YLeaf l2evpnact_local_shl;
        static const ydk::Enum::YLeaf l2evpnact_remote_shl;
        static const ydk::Enum::YLeaf evpn_iml_range;
        static const ydk::Enum::YLeaf l2_bridge_o_list;
        static const ydk::Enum::YLeaf l2acl;
        static const ydk::Enum::YLeaf l2evpn_nh;
        static const ydk::Enum::YLeaf l2_bridge_port_sc;
        static const ydk::Enum::YLeaf l3intfmctxstats;
        static const ydk::Enum::YLeaf tidl_sample;
        static const ydk::Enum::YLeaf tidl_ref_sample;
        static const ydk::Enum::YLeaf ipacl_prefix;
        static const ydk::Enum::YLeaf ip6acl_prefix;
        static const ydk::Enum::YLeaf ipacl_port;
        static const ydk::Enum::YLeaf scaleacl;
        static const ydk::Enum::YLeaf ipmcf_hop;
        static const ydk::Enum::YLeaf bundle_swoff;
        static const ydk::Enum::YLeaf mcidswoff;
        static const ydk::Enum::YLeaf dest_map;
        static const ydk::Enum::YLeaf l2_bridge_port_pw;
        static const ydk::Enum::YLeaf l2evpnact_local_shlstats;
        static const ydk::Enum::YLeaf test_hidden;
        static const ydk::Enum::YLeaf test_local;
        static const ydk::Enum::YLeaf test_repeated;
        static const ydk::Enum::YLeaf limd;
        static const ydk::Enum::YLeaf litap;
        static const ydk::Enum::YLeaf test_xtf;
        static const ydk::Enum::YLeaf ipmcrxstats;

};


}
}

#endif /* _CISCO_IOS_XR_FRETTA_BCM_DPA_RESOURCES_DATATYPES_ */

