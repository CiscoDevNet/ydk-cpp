#ifndef _CISCO_IOS_XR_IPV4_IO_OPER_
#define _CISCO_IOS_XR_IPV4_IO_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ipv4_io_oper {

class Ipv4Network : public Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

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

        class Nodes; //type: Ipv4Network::Nodes
        class Interfaces; //type: Ipv4Network::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes> nodes;
        
}; // Ipv4Network


class Ipv4Network::Nodes : public Entity
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

        class Node; //type: Ipv4Network::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node> > node;
        
}; // Ipv4Network::Nodes


class Ipv4Network::Nodes::Node : public Entity
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
        class InterfaceData; //type: Ipv4Network::Nodes::Node::InterfaceData
        class Statistics; //type: Ipv4Network::Nodes::Node::Statistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData> interface_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics> statistics;
        
}; // Ipv4Network::Nodes::Node


class Ipv4Network::Nodes::Node::InterfaceData : public Entity
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

        class Vrfs; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs
        class Summary; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs> vrfs;
        
}; // Ipv4Network::Nodes::Node::InterfaceData


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs : public Entity
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

        class Vrf; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf> > vrf;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf : public Entity
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
        class Briefs; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs
        class Details; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs> briefs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details> details;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs : public Entity
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

        class Brief; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief> > brief;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief : public Entity
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
        YLeaf primary_address; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf line_state; //type: Ipv4MaOperLineStateEnum

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details : public Entity
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

        class Detail; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail> > detail;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail : public Entity
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
        YLeaf primary_address; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf line_state; //type: Ipv4MaOperLineStateEnum
        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf unreachable; //type: boolean
        YLeaf redirect; //type: boolean
        YLeaf direct_broadcast; //type: boolean
        YLeaf mask_reply; //type: boolean
        YLeaf rg_id_exists; //type: boolean
        YLeaf mlacp_active; //type: boolean
        YLeaf unnumbered_interface_name; //type: string
        YLeaf proxy_arp_disabled; //type: boolean
        YLeaf flow_tag_src; //type: boolean
        YLeaf flow_tag_dst; //type: boolean
        class Acl; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl
        class MultiAcl; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl
        class HelperAddress; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress
        class Rpf; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf
        class BgpPa; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa
        class PubUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime
        class IdbUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime
        class CapsUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime
        class FwdEnUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime
        class FwdDisUtime; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime
        class MulticastGroup; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup
        class SecondaryAddress; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl> acl;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa> bgp_pa;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime> caps_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime> fwd_dis_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress> helper_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime> idb_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl> multi_acl;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup> > multicast_group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime> pub_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf> rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress> > secondary_address;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inbound; //type: string
        YLeaf outbound; //type: string
        YLeaf common_in_bound; //type: string
        YLeaf common_out_bound; //type: string

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl : public Entity
{
    public:
        MultiAcl();
        ~MultiAcl();

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

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address_array; //type: list of  string

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf : public Entity
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
        YLeaf mode; //type: RpfModeEnum

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa : public Entity
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

        class Input; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input
        class Output; //type: Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output> output;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input : public Entity
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

        YLeaf enable; //type: boolean
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output : public Entity
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

        YLeaf enable; //type: boolean
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime : public Entity
{
    public:
        PubUtime();
        ~PubUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime : public Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime : public Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime : public Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime : public Entity
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


}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup : public Entity
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

        YLeaf group_address; //type: string

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup


class Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress : public Entity
{
    public:
        SecondaryAddress();
        ~SecondaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32

}; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress


class Ipv4Network::Nodes::Node::InterfaceData::Summary : public Entity
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
        class IfUpUp; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp
        class IfUpDown; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown
        class IfDownDown; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown
        class IfShutdownDown; //type: Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown> if_down_down;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown> if_shutdown_down;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown> if_up_down;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp> if_up_up;
        
}; // Ipv4Network::Nodes::Node::InterfaceData::Summary


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp : public Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown : public Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown : public Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown


class Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown : public Entity
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

}; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown


class Ipv4Network::Nodes::Node::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Traffic; //type: Ipv4Network::Nodes::Node::Statistics::Traffic

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic> traffic;
        
}; // Ipv4Network::Nodes::Node::Statistics


class Ipv4Network::Nodes::Node::Statistics::Traffic : public Entity
{
    public:
        Traffic();
        ~Traffic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Stats; //type: Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats
        class IcmpStats; //type: Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats> icmp_stats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats> ipv4_stats;
        
}; // Ipv4Network::Nodes::Node::Statistics::Traffic


class Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats : public Entity
{
    public:
        Ipv4Stats();
        ~Ipv4Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input_packets; //type: uint32
        YLeaf received_packets; //type: uint32
        YLeaf format_errors; //type: uint32
        YLeaf bad_hop_count; //type: uint32
        YLeaf bad_source_address; //type: uint32
        YLeaf bad_header; //type: uint32
        YLeaf no_protocol; //type: uint32
        YLeaf no_gateway; //type: uint32
        YLeaf reassemble_input; //type: uint32
        YLeaf reassembled; //type: uint32
        YLeaf reassemble_timeout; //type: uint32
        YLeaf reassemble_max_drop; //type: uint32
        YLeaf reassemble_failed; //type: uint32
        YLeaf options_present; //type: uint32
        YLeaf bad_option; //type: uint32
        YLeaf unknown_option; //type: uint32
        YLeaf bad_security_option; //type: uint32
        YLeaf basic_security_option; //type: uint32
        YLeaf extended_security_option; //type: uint32
        YLeaf cipso_option; //type: uint32
        YLeaf strict_source_route_option; //type: uint32
        YLeaf loose_source_route_option; //type: uint32
        YLeaf record_route_option; //type: uint32
        YLeaf sid_option; //type: uint32
        YLeaf timestamp_option; //type: uint32
        YLeaf router_alert_option; //type: uint32
        YLeaf noop_option; //type: uint32
        YLeaf end_option; //type: uint32
        YLeaf packets_output; //type: uint32
        YLeaf packets_forwarded; //type: uint32
        YLeaf packets_fragmented; //type: uint32
        YLeaf fragment_count; //type: uint32
        YLeaf encapsulation_failed; //type: uint32
        YLeaf no_router; //type: uint32
        YLeaf packet_too_big; //type: uint32
        YLeaf multicast_in; //type: uint32
        YLeaf multicast_out; //type: uint32
        YLeaf broadcast_in; //type: uint32
        YLeaf broadcast_out; //type: uint32
        YLeaf lisp_v4_encap; //type: uint32
        YLeaf lisp_v4_decap; //type: uint32
        YLeaf lisp_v6_encap; //type: uint32
        YLeaf lisp_v6_decap; //type: uint32
        YLeaf lisp_encap_error; //type: uint32
        YLeaf lisp_decap_error; //type: uint32

}; // Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats


class Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats : public Entity
{
    public:
        IcmpStats();
        ~IcmpStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf received; //type: uint32
        YLeaf checksum_error; //type: uint32
        YLeaf unknown; //type: uint32
        YLeaf output; //type: uint32
        YLeaf admin_unreachable_sent; //type: uint32
        YLeaf network_unreachable_sent; //type: uint32
        YLeaf host_unreachable_sent; //type: uint32
        YLeaf protocol_unreachable_sent; //type: uint32
        YLeaf port_unreachable_sent; //type: uint32
        YLeaf fragment_unreachable_sent; //type: uint32
        YLeaf admin_unreachable_received; //type: uint32
        YLeaf network_unreachable_received; //type: uint32
        YLeaf host_unreachable_received; //type: uint32
        YLeaf protocol_unreachable_received; //type: uint32
        YLeaf port_unreachable_received; //type: uint32
        YLeaf fragment_unreachable_received; //type: uint32
        YLeaf hopcount_sent; //type: uint32
        YLeaf reassembly_sent; //type: uint32
        YLeaf hopcount_received; //type: uint32
        YLeaf reassebly_received; //type: uint32
        YLeaf param_error_received; //type: uint32
        YLeaf param_error_send; //type: uint32
        YLeaf echo_request_sent; //type: uint32
        YLeaf echo_request_received; //type: uint32
        YLeaf echo_reply_sent; //type: uint32
        YLeaf echo_reply_received; //type: uint32
        YLeaf mask_request_sent; //type: uint32
        YLeaf mask_request_received; //type: uint32
        YLeaf mask_reply_sent; //type: uint32
        YLeaf mask_reply_received; //type: uint32
        YLeaf source_quench_received; //type: uint32
        YLeaf redirect_received; //type: uint32
        YLeaf redirect_send; //type: uint32
        YLeaf timestamp_received; //type: uint32
        YLeaf timestamp_reply_received; //type: uint32
        YLeaf router_advert_received; //type: uint32
        YLeaf router_solicit_received; //type: uint32

}; // Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats


class Ipv4Network::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Ipv4Network::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface> > interface;
        
}; // Ipv4Network::Interfaces


class Ipv4Network::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Vrfs; //type: Ipv4Network::Interfaces::Interface::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs> vrfs;
        
}; // Ipv4Network::Interfaces::Interface


class Ipv4Network::Interfaces::Interface::Vrfs : public Entity
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

        class Vrf; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf> > vrf;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf : public Entity
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
        class Detail; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail
        class Brief; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail> detail;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail : public Entity
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

        YLeaf primary_address; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf line_state; //type: Ipv4MaOperLineStateEnum
        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32
        YLeaf mtu; //type: uint32
        YLeaf unreachable; //type: boolean
        YLeaf redirect; //type: boolean
        YLeaf direct_broadcast; //type: boolean
        YLeaf mask_reply; //type: boolean
        YLeaf rg_id_exists; //type: boolean
        YLeaf mlacp_active; //type: boolean
        YLeaf unnumbered_interface_name; //type: string
        YLeaf proxy_arp_disabled; //type: boolean
        YLeaf flow_tag_src; //type: boolean
        YLeaf flow_tag_dst; //type: boolean
        class Acl; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl
        class MultiAcl; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl
        class HelperAddress; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress
        class Rpf; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf
        class BgpPa; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa
        class PubUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime
        class IdbUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime
        class CapsUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime
        class FwdEnUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime
        class FwdDisUtime; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime
        class MulticastGroup; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup
        class SecondaryAddress; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl> acl;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa> bgp_pa;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime> caps_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime> fwd_dis_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime> fwd_en_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress> helper_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime> idb_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl> multi_acl;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup> > multicast_group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime> pub_utime;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf> rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress> > secondary_address;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inbound; //type: string
        YLeaf outbound; //type: string
        YLeaf common_in_bound; //type: string
        YLeaf common_out_bound; //type: string

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl : public Entity
{
    public:
        MultiAcl();
        ~MultiAcl();

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

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList address_array; //type: list of  string

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf : public Entity
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
        YLeaf mode; //type: RpfModeEnum

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa : public Entity
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

        class Input; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input
        class Output; //type: Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output

        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output> output;
        
}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input : public Entity
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

        YLeaf enable; //type: boolean
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output : public Entity
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

        YLeaf enable; //type: boolean
        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime : public Entity
{
    public:
        PubUtime();
        ~PubUtime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime : public Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime : public Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime : public Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime : public Entity
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


}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup : public Entity
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

        YLeaf group_address; //type: string

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress : public Entity
{
    public:
        SecondaryAddress();
        ~SecondaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf route_tag; //type: uint32

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress


class Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief : public Entity
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

        YLeaf primary_address; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf line_state; //type: Ipv4MaOperLineStateEnum

}; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief

class RpfModeEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf loose;

};

class Ipv4MaOperLineStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf shutdown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IO_OPER_ */

