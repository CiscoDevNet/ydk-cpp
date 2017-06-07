#ifndef _CISCO_IOS_XR_IPV6_MA_OPER_
#define _CISCO_IOS_XR_IPV6_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ma_oper {

class Ipv6Network : public Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: Ipv6Network::Nodes

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes> nodes;
        
}; // Ipv6Network


class Ipv6Network::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Ipv6Network::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node> > node;
        
}; // Ipv6Network::Nodes


class Ipv6Network::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class InterfaceData; //type: Ipv6Network::Nodes::Node::InterfaceData

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData> interface_data;
        
}; // Ipv6Network::Nodes::Node


class Ipv6Network::Nodes::Node::InterfaceData : public Entity
{
    public:
        InterfaceData();
        ~InterfaceData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrfs; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs
        class Summary; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs> vrfs;
        
}; // Ipv6Network::Nodes::Node::InterfaceData


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf> > vrf;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Briefs; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs
        class GlobalDetails; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails
        class GlobalBriefs; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs
        class Details; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs> briefs;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details> details;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs> global_briefs;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails> global_details;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs : public Entity
{
    public:
        Briefs();
        ~Briefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Brief; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief> > brief;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf line_state; //type: Ipv6MaIfLineStateEnum
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address> > address;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress> link_local_address;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails : public Entity
{
    public:
        GlobalDetails();
        ~GlobalDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GlobalDetail; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail> > global_detail;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail : public Entity
{
    public:
        GlobalDetail();
        ~GlobalDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf line_state; //type: Ipv6MaIfLineStateEnum
        YLeaf mtu; //type: uint32
        YLeaf operation_state; //type: Ipv6MaOperStateEnum
        YLeaf is_icmp_unreach_enabled; //type: boolean
        YLeaf rg_id_exists; //type: boolean
        YLeaf mlacp_active; //type: boolean
        YLeaf flow_tag_src; //type: boolean
        YLeaf flow_tag_dst; //type: boolean
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress
        class AccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList
        class MultiAccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList
        class Rpf; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf
        class BgpPa; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa
        class Utime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime
        class IdbUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime
        class CapsUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime
        class FwdEnUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime
        class FwdDisUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime
        class MulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address
        class ClientMulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList> access_control_list;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address> > address;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa> bgp_pa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime> caps_utime;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup> > client_multicast_group;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime> fwd_dis_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime> idb_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress> link_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList> multi_access_control_list;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup> > multicast_group;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf> rpf;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime> utime;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList : public Entity
{
    public:
        AccessControlList();
        ~AccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_bound; //type: string
        YLeaf out_bound; //type: string
        YLeaf common_in_bound; //type: string
        YLeaf common_out_bound; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList : public Entity
{
    public:
        MultiAccessControlList();
        ~MultiAccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList inbound; //type: list of  string
        YLeafList outbound; //type: list of  string
        YLeafList common; //type: list of  string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf allow_default_route; //type: boolean
        YLeaf allow_self_ping; //type: boolean
        YLeaf mode; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa : public Entity
{
    public:
        BgpPa();
        ~BgpPa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input
        class Output; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output> output;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: uint32
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: uint32
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime : public Entity
{
    public:
        Utime();
        ~Utime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime : public Entity
{
    public:
        IdbUtime();
        ~IdbUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime : public Entity
{
    public:
        CapsUtime();
        ~CapsUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime : public Entity
{
    public:
        FwdEnUtime();
        ~FwdEnUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime : public Entity
{
    public:
        FwdDisUtime();
        ~FwdDisUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup : public Entity
{
    public:
        MulticastGroup();
        ~MulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup : public Entity
{
    public:
        ClientMulticastGroup();
        ~ClientMulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs : public Entity
{
    public:
        GlobalBriefs();
        ~GlobalBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GlobalBrief; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief> > global_brief;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief : public Entity
{
    public:
        GlobalBrief();
        ~GlobalBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf line_state; //type: Ipv6MaIfLineStateEnum
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address> > address;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress> link_local_address;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details : public Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Detail; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail> > detail;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf line_state; //type: Ipv6MaIfLineStateEnum
        YLeaf mtu; //type: uint32
        YLeaf operation_state; //type: Ipv6MaOperStateEnum
        YLeaf is_icmp_unreach_enabled; //type: boolean
        YLeaf rg_id_exists; //type: boolean
        YLeaf mlacp_active; //type: boolean
        YLeaf flow_tag_src; //type: boolean
        YLeaf flow_tag_dst; //type: boolean
        class LinkLocalAddress; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress
        class AccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList
        class MultiAccessControlList; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList
        class Rpf; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf
        class BgpPa; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa
        class Utime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime
        class IdbUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime
        class CapsUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime
        class FwdEnUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime
        class FwdDisUtime; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime
        class MulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup
        class Address; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address
        class ClientMulticastGroup; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList> access_control_list;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address> > address;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa> bgp_pa;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime> caps_utime;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup> > client_multicast_group;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime> fwd_dis_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime> idb_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress> link_local_address;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList> multi_access_control_list;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup> > multicast_group;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf> rpf;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime> utime;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList : public Entity
{
    public:
        AccessControlList();
        ~AccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_bound; //type: string
        YLeaf out_bound; //type: string
        YLeaf common_in_bound; //type: string
        YLeaf common_out_bound; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList : public Entity
{
    public:
        MultiAccessControlList();
        ~MultiAccessControlList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList inbound; //type: list of  string
        YLeafList outbound; //type: list of  string
        YLeafList common; //type: list of  string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf allow_default_route; //type: boolean
        YLeaf allow_self_ping; //type: boolean
        YLeaf mode; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa : public Entity
{
    public:
        BgpPa();
        ~BgpPa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input
        class Output; //type: Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output> output;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: uint32
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: uint32
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime : public Entity
{
    public:
        Utime();
        ~Utime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime : public Entity
{
    public:
        IdbUtime();
        ~IdbUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime : public Entity
{
    public:
        CapsUtime();
        ~CapsUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime : public Entity
{
    public:
        FwdEnUtime();
        ~FwdEnUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime : public Entity
{
    public:
        FwdDisUtime();
        ~FwdDisUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup : public Entity
{
    public:
        MulticastGroup();
        ~MulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf address_state; //type: Ipv6MaIfAddrStateEnum
        YLeaf is_anycast; //type: boolean
        YLeaf route_tag; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address


class Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup : public Entity
{
    public:
        ClientMulticastGroup();
        ~ClientMulticastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup


class Ipv6Network::Nodes::Node::InterfaceData::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_up_down_basecaps_up; //type: uint32
        class IfUpUp; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp
        class IfUpDown; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown
        class IfDownDown; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown
        class IfShutdownDown; //type: Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown

        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown> if_down_down;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown> if_shutdown_down;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown> if_up_down;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp> if_up_up;
        
}; // Ipv6Network::Nodes::Node::InterfaceData::Summary


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp : public Entity
{
    public:
        IfUpUp();
        ~IfUpUp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_assigned; //type: uint32
        YLeaf ip_unnumbered; //type: uint32
        YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown : public Entity
{
    public:
        IfUpDown();
        ~IfUpDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_assigned; //type: uint32
        YLeaf ip_unnumbered; //type: uint32
        YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown : public Entity
{
    public:
        IfDownDown();
        ~IfDownDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_assigned; //type: uint32
        YLeaf ip_unnumbered; //type: uint32
        YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown


class Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown : public Entity
{
    public:
        IfShutdownDown();
        ~IfShutdownDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_assigned; //type: uint32
        YLeaf ip_unnumbered; //type: uint32
        YLeaf ip_unassigned; //type: uint32

}; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown

class Ipv6MaOperStateEnum : public Enum
{
    public:
        static const Enum::YLeaf oper_up;
        static const Enum::YLeaf oper_down;

};

class Ipv6MaIfLineStateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf error;

};

class Ipv6MaIfAddrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf deprecated;
        static const Enum::YLeaf duplicate;
        static const Enum::YLeaf inaccessible;
        static const Enum::YLeaf tentative;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_MA_OPER_ */

