#ifndef _CISCO_IOS_XR_L2VPN_OPER_1_
#define _CISCO_IOS_XR_L2VPN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo : public Entity
{
    public:
        BviInfo();
        ~BviInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bvi_ifh; //type: string
        YLeaf bvi_xid; //type: uint32
        YLeaf bvi_name; //type: string
        YLeaf bvi_shg_id; //type: uint32
        YLeaf irb_plat_data_len; //type: uint32
        YLeaf irb_plat_data; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::BviInfo


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo : public Entity
{
    public:
        P2MppwInfo();
        ~P2MppwInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ptree_type; //type: L2VpnPtreeEnum
        YLeaf lsm_id; //type: uint32
        YLeaf p2mp_te_interface; //type: string
        YLeaf parent_nh_valid; //type: boolean
        YLeaf parent_nh_bound; //type: boolean
        YLeaf local_label; //type: uint32

        class ParentNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop> parent_next_hop;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop : public Entity
{
    public:
        ParentNextHop();
        ~ParentNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop


class L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibBridgeDomains::L2FibBridgeDomain::P2MppwInfo::ParentNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibMstpSummaries : public Entity
{
    public:
        L2FibMstpSummaries();
        ~L2FibMstpSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2FibMstpSummary; //type: L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary> > l2fib_mstp_summary;


}; // L2VpnForwarding::Nodes::Node::L2FibMstpSummaries


class L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary : public Entity
{
    public:
        L2FibMstpSummary();
        ~L2FibMstpSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf parent_interface; //type: string
        YLeaf msti; //type: int32
        YLeaf parent_interface_xr; //type: string
        YLeaf msti_xr; //type: uint32
        YLeaf state; //type: uint32
        YLeaf bridge_port_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary


class L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMstpSummaries::L2FibMstpSummary::Base


class L2VpnForwarding::Nodes::Node::L2FibResourceAvailability : public Entity
{
    public:
        L2FibResourceAvailability();
        ~L2FibResourceAvailability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf overall_out_of_resource_mode; //type: uint32
        YLeaf hardware_resource_mode_information; //type: string
        YLeafList hardware_resource_mode; //type: list of  uint32

        class ShmResource; //type: L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource> shm_resource;


}; // L2VpnForwarding::Nodes::Node::L2FibResourceAvailability


class L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource : public Entity
{
    public:
        ShmResource();
        ~ShmResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf oout_of_resource_mode; //type: uint32
        YLeaf maximum_available; //type: uint64
        YLeaf average_available; //type: uint64
        YLeaf average_utility; //type: uint64



}; // L2VpnForwarding::Nodes::Node::L2FibResourceAvailability::ShmResource


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses : public Entity
{
    public:
        L2FibmacHardwareEgresses();
        ~L2FibmacHardwareEgresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2FibmacHardwareEgress; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress> > l2fibmac_hardware_egress;


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress : public Entity
{
    public:
        L2FibmacHardwareEgress();
        ~L2FibmacHardwareEgress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf group_name; //type: string
        YLeaf name; //type: string
        YLeaf platform_is_hw_learn; //type: uint8
        YLeaf node_id; //type: string
        YLeaf bridge_domain_name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf bmac_configured; //type: boolean
        YLeaf vni_l3_flag; //type: boolean
        YLeaf pbb_bmac; //type: string
        YLeaf l3_encapsulationvlan_id; //type: uint16
        YLeaf next_hop_valid; //type: boolean
        YLeaf peer_vtep_ip; //type: string
        YLeaf flag_extension; //type: uint16
        YLeaf vni; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base
        class Segment; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment
        class EvpnCtx; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx> evpn_ctx;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment> segment;


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Base


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment : public Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni> vni;


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Ac


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb : public Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pbb


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xcid; //type: uint32
        YLeaf parent_if; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Vni


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn : public Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Evpn


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint64
        YLeaf next_hop_address; //type: string
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum



}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::Segment::Pw


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx : public Entity
{
    public:
        EvpnCtx();
        ~EvpnCtx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibBridgeMacEvpnCtxEnum
        YLeaf esi_id; //type: uint16
        YLeaf local_label; //type: uint32
        YLeaf bp_ifh; //type: string

        class McastOle; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle> mcast_ole;


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle : public Entity
{
    public:
        McastOle();
        ~McastOle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_ipv6_addr; //type: string
        YLeaf mcast_label; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::EvpnCtx::McastOle


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop


class L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibmacHardwareEgresses::L2FibmacHardwareEgress::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S : public Entity
{
    public:
        L2FibxConL2Tpv2S();
        ~L2FibxConL2Tpv2S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2FibxConL2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2> > l2fibx_con_l2tpv2;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2 : public Entity
{
    public:
        L2FibxConL2Tpv2();
        ~L2FibxConL2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf xcon_name; //type: string
        YLeaf bound; //type: boolean
        YLeaf switching_type; //type: MgmtL2FibSwitchingEnum

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base
        class Segment1; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1
        class Segment2; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1> segment1;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2> segment2;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1 : public Entity
{
    public:
        Segment1();
        ~Segment1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn
        class MonitorSession; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni> vni;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string
        YLeaf sub_interface_handle; //type: string
        YLeaf attachment_circuit_id; //type: uint32
        YLeaf attachment_circuit_mtu; //type: uint16
        YLeaf actype; //type: uint8
        YLeaf inter_working_mode; //type: uint8
        YLeaf adjacency_valid; //type: boolean
        YLeaf adjacency_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf ip_inter_working_mac; //type: string
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_object_id; //type: uint64
        YLeaf evpn_internal_label; //type: uint32
        YLeaf fxc_next_hop_valid; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop> fxc_next_hop;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop : public Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb : public Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bound; //type: boolean
        YLeaf forward_class; //type: uint8
        YLeaf core_pbb_evpn_enabled; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion> pbb_union;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion : public Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_type; //type: MgmtL2FibBridgeEnum

        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core> core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge> edge;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge : public Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_configured; //type: boolean
        YLeaf mac; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core : public Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srcip; //type: string
        YLeaf mcastip; //type: string
        YLeaf bound; //type: boolean
        YLeaf parent_if; //type: string
        YLeaf encap; //type: uint32
        YLeaf udp_port; //type: uint32
        YLeaf source_vtep_if; //type: string
        YLeaf any_cast_ip; //type: string
        YLeaf anycast_mcast_ip; //type: string
        YLeaf vx_lan_mode; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn : public Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bound; //type: boolean
        YLeaf evi; //type: uint32
        YLeaf forward_class; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession : public Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xcid; //type: uint32
        YLeaf session_name; //type: string
        YLeaf hardware_information; //type: string
        YLeaf bound; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::MonitorSession::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint64
        YLeaf signal_capability_flags; //type: uint32
        YLeaf context; //type: uint16
        YLeaf sequence_resync_threshold; //type: uint16
        YLeaf bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        YLeaf backup_configured; //type: boolean
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf pw_load_balance_type; //type: L2FibLoadBalEnum
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf global_id; //type: uint32
        YLeaf ac_id; //type: uint32
        YLeaf forward_class; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion : public Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::Mpls> mpls;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_flags; //type: uint8
        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf rem_udp_port; //type: uint16
        YLeaf xconnect_id; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf source_address; //type: string

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32
        YLeaf secondary_cookie_size; //type: uint8
        YLeaf secondary_cookie_low_value; //type: uint32
        YLeaf secondary_cookie_high_value; //type: uint32
        YLeaf session_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire : public Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_next_hop; //type: string
        YLeaf backup_pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf backup_pseudo_wire_id; //type: uint32
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf bound; //type: boolean
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum

        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire::Atom> atom;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment1::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2 : public Entity
{
    public:
        Segment2();
        ~Segment2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac
        class Bp; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp
        class Fxs; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp> bp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs> fxs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw> pw;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string
        YLeaf sub_interface_handle; //type: string
        YLeaf attachment_circuit_id; //type: uint32
        YLeaf attachment_circuit_mtu; //type: uint16
        YLeaf actype; //type: uint8
        YLeaf inter_working_mode; //type: uint8
        YLeaf adjacency_valid; //type: boolean
        YLeaf adjacency_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf ip_inter_working_mac; //type: string
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_object_id; //type: uint64
        YLeaf evpn_internal_label; //type: uint32
        YLeaf fxc_next_hop_valid; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop> fxc_next_hop;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop : public Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp : public Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bridge_id; //type: uint32
        YLeaf shg_id; //type: uint32
        YLeaf msti_pointer; //type: uint32
        YLeaf segment_type; //type: uint8
        YLeaf mvrp_sequence_number; //type: uint16
        YLeaf learn_key; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper
        class P2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::P2Mp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper> oper;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::P2Mp> p2mp;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper : public Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64

        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation> operational_information;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation : public Entity
{
    public:
        OperationalInformation();
        ~OperationalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mtu; //type: uint32
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_limit; //type: uint32
        YLeaf number_of_macs; //type: uint32
        YLeaf admin_disabled; //type: boolean
        YLeaf flooding_disabled; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_limit_action; //type: MgmtL2FibMacLimitActionEnum
        YLeaf mac_learning_disabled; //type: boolean
        YLeaf mac_port_down_flush_disabled; //type: boolean
        YLeaf mac_limit_notification_type; //type: MgmtL2FibMacLimitNotifyEnum
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf mac_secure_action; //type: MgmtL2FibMacSecActionEnum
        YLeaf is_mac_secure_accept_shutdown; //type: boolean
        YLeaf mac_aging_type; //type: boolean
        YLeaf storm_control_unicast_enabled; //type: boolean
        YLeaf storm_control_broadcast_enabled; //type: boolean
        YLeaf storm_control_multicast_enabled; //type: boolean
        YLeaf storm_control_unicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_broadcast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf storm_control_multicast_rate_unit; //type: L2FibStormControlRateUnitEnum
        YLeaf dhcp_enabled; //type: boolean
        YLeaf dhcp_trusted; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_addr_validation_ipv4_enabled; //type: boolean
        YLeaf is_dai_addr_validation_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validation_destination_mac_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_ipsg_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_vpls_flood_optimization_enabled; //type: boolean
        YLeaf igmp_snoop_enabled; //type: boolean
        YLeaf igmp_snoop_profile_enabled; //type: boolean
        YLeaf igmp_flood_forward_enabled; //type: boolean
        YLeaf igmp_mroute_port_enabled; //type: boolean
        YLeaf igmp_route_guard_enabled; //type: boolean
        YLeaf mld_snoop_enabled; //type: boolean
        YLeaf mld_snoop_profile_enabled; //type: boolean
        YLeaf mld_flood_forward_enabled; //type: boolean
        YLeaf mld_mroute_port_enabled; //type: boolean
        YLeaf mld_route_guard_enabled; //type: boolean
        YLeaf stp_participating; //type: boolean
        YLeaf bvi_configured; //type: boolean
        YLeaf is_bvi_up; //type: boolean
        YLeaf is_vni_enabled; //type: boolean
        YLeaf is_evpn_enabled; //type: boolean
        YLeaf unknown_unicast_flooding_disabled; //type: boolean
        YLeaf host_routing_enabled; //type: boolean
        YLeaf is_pbbevpn_enabled; //type: boolean
        YLeaf is_swmac_learning; //type: boolean
        YLeaf is_evpn_flow_label; //type: boolean
        YLeaf is_evpn_cw_disable; //type: boolean
        YLeaf msti; //type: uint32
        YLeaf is_p2mp_pw_enabled; //type: boolean
        YLeaf is_igmp_snoop_enabled; //type: boolean
        YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean

        class Feature; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature> > feature;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature : public Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf feature_type; //type: L2FibFeatureEnum

        class Dhcp; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp
        class Igmp; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp
        class Mld; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld> mld;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Dhcp


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Igmp


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld : public Entity
{
    public:
        Mld();
        ~Mld();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_name; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::Oper::OperationalInformation::Feature::Mld


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::P2Mp : public Entity
{
    public:
        P2Mp();
        ~P2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ptree_type; //type: L2VpnPtreeEnum
        YLeaf lsm_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf p2mp_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string
        YLeaf ptree_owner_lmrib; //type: boolean



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Bp::P2Mp


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs : public Entity
{
    public:
        Fxs();
        ~Fxs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fxs_id; //type: uint32
        YLeaf segment_type; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Fxs::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint64
        YLeaf signal_capability_flags; //type: uint32
        YLeaf context; //type: uint16
        YLeaf sequence_resync_threshold; //type: uint16
        YLeaf bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        YLeaf backup_configured; //type: boolean
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf pw_load_balance_type; //type: L2FibLoadBalEnum
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf global_id; //type: uint32
        YLeaf ac_id; //type: uint32
        YLeaf forward_class; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion> pseudo_wire_union;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion : public Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::Mpls> mpls;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_flags; //type: uint8
        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf rem_udp_port; //type: uint16
        YLeaf xconnect_id; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf source_address; //type: string

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32
        YLeaf secondary_cookie_size; //type: uint8
        YLeaf secondary_cookie_low_value; //type: uint32
        YLeaf secondary_cookie_high_value; //type: uint32
        YLeaf session_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire : public Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_next_hop; //type: string
        YLeaf backup_pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf backup_pseudo_wire_id; //type: uint32
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf bound; //type: boolean
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum

        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire::Atom> atom;


}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibxConL2Tpv2S::L2FibxConL2Tpv2::Segment2::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S : public Entity
{
    public:
        L2FibMrouteIpv6S();
        ~L2FibMrouteIpv6S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2FibMrouteIpv6; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6> > l2fib_mroute_ipv6;


}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6 : public Entity
{
    public:
        L2FibMrouteIpv6();
        ~L2FibMrouteIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: string
        YLeaf group; //type: string
        YLeaf bd_group_name; //type: string
        YLeaf bd_name; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf xid_count; //type: uint16
        YLeaf platform_data_length; //type: uint8
        YLeaf platform_data; //type: string
        YLeaf hardware_information; //type: string
        YLeaf bridge_domain_name; //type: string

        class MulticastBaseInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation
        class SourcePrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix
        class DestinationPrefix; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix
        class ForwardStats; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats
        class IrbInfo; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix> destination_prefix;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats> forward_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo> irb_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation> multicast_base_information;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix> source_prefix;


}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation : public Entity
{
    public:
        MulticastBaseInformation();
        ~MulticastBaseInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::MulticastBaseInformation


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix : public Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::SourcePrefix


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix : public Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf proto; //type: uint8
        YLeaf prefix_length; //type: uint16
        YLeaf prefix; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::DestinationPrefix


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats : public Entity
{
    public:
        ForwardStats();
        ~ForwardStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat> forward_stat;


}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat : public Entity
{
    public:
        ForwardStat();
        ~ForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibStatsDataEnum

        class Mulicast; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast> mulicast;


}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast : public Entity
{
    public:
        Mulicast();
        ~Mulicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat
        class ReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat
        class Punt; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt
        class Drop; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop
        class MulticastCoreForwardStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat
        class CoreReceivedStat; //type: L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat> core_received_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop> drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat> multicast_core_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat> multicast_forward_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt> punt;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat> received_stat;


}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat : public Entity
{
    public:
        MulticastForwardStat();
        ~MulticastForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat : public Entity
{
    public:
        ReceivedStat();
        ~ReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::ReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt : public Entity
{
    public:
        Punt();
        ~Punt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Punt


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop : public Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::Drop


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat : public Entity
{
    public:
        MulticastCoreForwardStat();
        ~MulticastCoreForwardStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat : public Entity
{
    public:
        CoreReceivedStat();
        ~CoreReceivedStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat


class L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo : public Entity
{
    public:
        IrbInfo();
        ~IrbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mxid_ac_interface_handle; //type: string
        YLeaf mxid_pw_id; //type: uint32
        YLeaf mxid_next_hop_address; //type: string
        YLeaf irb_plat_data_len; //type: uint16
        YLeafList irb_plat_data; //type: list of  uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMrouteIpv6S::L2FibMrouteIpv6::IrbInfo


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons : public Entity
{
    public:
        L2FibMonSessXCons();
        ~L2FibMonSessXCons();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class L2FibMonSessXCon; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon> > l2fib_mon_sess_x_con;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon : public Entity
{
    public:
        L2FibMonSessXCon();
        ~L2FibMonSessXCon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor_session_name; //type: string
        YLeaf xcon_name; //type: string
        YLeaf bound; //type: boolean
        YLeaf switching_type; //type: MgmtL2FibSwitchingEnum

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base
        class Segment1; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1
        class Segment2; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1> segment1;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2> segment2;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1 : public Entity
{
    public:
        Segment1();
        ~Segment1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac
        class Pbb; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb
        class Vni; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni
        class Evpn; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn
        class MonitorSession; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn> evpn;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession> monitor_session;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw> pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni> vni;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string
        YLeaf sub_interface_handle; //type: string
        YLeaf attachment_circuit_id; //type: uint32
        YLeaf attachment_circuit_mtu; //type: uint16
        YLeaf actype; //type: uint8
        YLeaf inter_working_mode; //type: uint8
        YLeaf adjacency_valid; //type: boolean
        YLeaf adjacency_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf ip_inter_working_mac; //type: string
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_object_id; //type: uint64
        YLeaf evpn_internal_label; //type: uint32
        YLeaf fxc_next_hop_valid; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop> fxc_next_hop;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop : public Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb : public Entity
{
    public:
        Pbb();
        ~Pbb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bound; //type: boolean
        YLeaf forward_class; //type: uint8
        YLeaf core_pbb_evpn_enabled; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base
        class PbbUnion; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion> pbb_union;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion : public Entity
{
    public:
        PbbUnion();
        ~PbbUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_type; //type: MgmtL2FibBridgeEnum

        class Edge; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge
        class Core; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core> core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge> edge;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge : public Entity
{
    public:
        Edge();
        ~Edge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_configured; //type: boolean
        YLeaf mac; //type: string



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Edge


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core : public Entity
{
    public:
        Core();
        ~Core();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vlan_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pbb::PbbUnion::Core


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf srcip; //type: string
        YLeaf mcastip; //type: string
        YLeaf bound; //type: boolean
        YLeaf parent_if; //type: string
        YLeaf encap; //type: uint32
        YLeaf udp_port; //type: uint32
        YLeaf source_vtep_if; //type: string
        YLeaf any_cast_ip; //type: string
        YLeaf anycast_mcast_ip; //type: string
        YLeaf vx_lan_mode; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Vni::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn : public Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bound; //type: boolean
        YLeaf evi; //type: uint32
        YLeaf forward_class; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Evpn::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession : public Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xcid; //type: uint32
        YLeaf session_name; //type: string
        YLeaf hardware_information; //type: string
        YLeaf bound; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::MonitorSession::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint64
        YLeaf signal_capability_flags; //type: uint32
        YLeaf context; //type: uint16
        YLeaf sequence_resync_threshold; //type: uint16
        YLeaf bound; //type: boolean
        YLeaf next_hop_valid; //type: boolean
        YLeaf backup_configured; //type: boolean
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf pw_load_balance_type; //type: L2FibLoadBalEnum
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum
        YLeaf global_id; //type: uint32
        YLeaf ac_id; //type: uint32
        YLeaf forward_class; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base
        class NextHop; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop
        class PseudoWireUnion; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion
        class BackupPseudoWire; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire> backup_pseudo_wire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion> pseudo_wire_union;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::NextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion : public Entity
{
    public:
        PseudoWireUnion();
        ~PseudoWireUnion();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Mpls; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls
        class L2Tp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp
        class L2Tpv2; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2
        class L2TpIpv6Ts; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts> l2tp_ipv6_ts;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2> l2tpv2;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls> mpls;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::Mpls


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tp::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2 : public Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_flags; //type: uint8
        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf rem_udp_port; //type: uint16
        YLeaf xconnect_id; //type: uint32
        YLeaf next_hop_address; //type: string
        YLeaf source_address; //type: string

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf tunnel_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2Tpv2::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts : public Entity
{
    public:
        L2TpIpv6Ts();
        ~L2TpIpv6Ts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tos_val; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf path_mtu; //type: uint16
        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string

        class Local; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local
        class Remote; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local> local;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote> remote;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32
        YLeaf secondary_cookie_size; //type: uint8
        YLeaf secondary_cookie_low_value; //type: uint32
        YLeaf secondary_cookie_high_value; //type: uint32
        YLeaf session_id; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Local


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: uint32
        YLeaf cookie_size; //type: uint8
        YLeaf cookie_low_value; //type: uint32
        YLeaf cookie_high_value; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::PseudoWireUnion::L2TpIpv6Ts::Remote


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire : public Entity
{
    public:
        BackupPseudoWire();
        ~BackupPseudoWire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf backup_next_hop; //type: string
        YLeaf backup_pseudo_wire_id_type; //type: L2FibPwIdEnum
        YLeaf backup_pseudo_wire_id; //type: uint32
        YLeaf redundancy_role; //type: L2FibPwRedundancyRoleEnum
        YLeaf active; //type: boolean
        YLeaf bound; //type: boolean
        YLeaf pw_flow_label_tx; //type: boolean
        YLeaf grouping_supported; //type: boolean
        YLeaf group_id; //type: uint32
        YLeaf group_state; //type: L2FibGroupStateEnum

        class Atom; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom> atom;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_label; //type: uint32
        YLeaf pw_local_label; //type: uint32
        YLeaf pw_tunnel_interface; //type: uint32
        YLeaf pw_xcid; //type: uint32



}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment1::Pw::BackupPseudoWire::Atom


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2 : public Entity
{
    public:
        Segment2();
        ~Segment2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: MgmtL2FibDataEnum

        class Ac; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac
        class Bp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp
        class Fxs; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs
        class Pw; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac> ac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp> bp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Fxs> fxs;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Pw> pw;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac : public Entity
{
    public:
        Ac();
        ~Ac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string
        YLeaf sub_interface_handle; //type: string
        YLeaf attachment_circuit_id; //type: uint32
        YLeaf attachment_circuit_mtu; //type: uint16
        YLeaf actype; //type: uint8
        YLeaf inter_working_mode; //type: uint8
        YLeaf adjacency_valid; //type: boolean
        YLeaf adjacency_address; //type: string
        YLeaf bound; //type: boolean
        YLeaf ip_inter_working_mac; //type: string
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_object_id; //type: uint64
        YLeaf evpn_internal_label; //type: uint32
        YLeaf fxc_next_hop_valid; //type: boolean

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base
        class FxcNextHop; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop> fxc_next_hop;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop : public Entity
{
    public:
        FxcNextHop();
        ~FxcNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf next_hop_internal_label; //type: uint32
        YLeaf plaformt_data_valid; //type: boolean
        YLeaf platform_data_length; //type: uint32
        YLeaf children_count; //type: uint32

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base> base;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Ac::FxcNextHop::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp : public Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bridge_id; //type: uint32
        YLeaf shg_id; //type: uint32
        YLeaf msti_pointer; //type: uint32
        YLeaf segment_type; //type: uint8
        YLeaf mvrp_sequence_number; //type: uint16
        YLeaf learn_key; //type: uint8

        class Base; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base
        class Oper; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper
        class P2Mp; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper> oper;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::P2Mp> p2mp;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Base


class L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper : public Entity
{
    public:
        Oper();
        ~Oper();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64

        class OperationalInformation; //type: L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper::OperationalInformation> operational_information;


}; // L2VpnForwarding::Nodes::Node::L2FibMonSessXCons::L2FibMonSessXCon::Segment2::Bp::Oper


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_1_ */

