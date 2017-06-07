#ifndef _CISCO_IOS_XR_INFRA_XTC_OPER_1_
#define _CISCO_IOS_XR_INFRA_XTC_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_xtc_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_xtc_oper {


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class Pce::TopologyNodes::TopologyNode::Ipv6Link : public Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_ipv6_address; //type: string
        YLeaf remote_ipv6_address; //type: string
        YLeaf igp_metric; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf maximum_link_bandwidth; //type: uint64
        YLeaf max_reservable_bandwidth; //type: uint64
        class LocalIgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid> > adjacency_sid;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_identifier; //type: uint64
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_id; //type: PceIgpInfoIdEnum
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf> ospf;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation> > srgb_information;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_identifier; //type: uint64
        class Igp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_id; //type: PceIgpInfoIdEnum
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start; //type: uint32
        YLeaf size; //type: uint32
        class IgpSrgb; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_id; //type: PceIgpInfoIdEnum
        class Isis; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf level; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf area; //type: uint32

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_type; //type: SidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf domain_identifier; //type: uint64
        YLeaf rflag; //type: boolean
        YLeaf nflag; //type: boolean
        YLeaf pflag; //type: boolean
        YLeaf eflag; //type: boolean
        YLeaf vflag; //type: boolean
        YLeaf lflag; //type: boolean
        class SidPrefix; //type: Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class Pce::PrefixInfos : public Entity
{
    public:
        PrefixInfos();
        ~PrefixInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixInfo; //type: Pce::PrefixInfos::PrefixInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo> > prefix_info;
        
}; // Pce::PrefixInfos


class Pce::PrefixInfos::PrefixInfo : public Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_identifier; //type: int32
        YLeaf node_identifier_xr; //type: uint32
        class NodeProtocolIdentifier; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: Pce::PrefixInfos::PrefixInfo::Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::Address> > address;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;
        
}; // Pce::PrefixInfos::PrefixInfo


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        YLeaf ipv4bgp_router_id_set; //type: boolean
        YLeaf ipv4bgp_router_id; //type: string
        YLeaf ipv4te_router_id_set; //type: boolean
        YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation> > srgb_information;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_identifier; //type: uint64
        class Igp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_id; //type: PceIgpInfoIdEnum
        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf level; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf area; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation : public Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start; //type: uint32
        YLeaf size; //type: uint32
        class IgpSrgb; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb : public Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf igp_id; //type: PceIgpInfoIdEnum
        class Isis; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;
        
}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_id; //type: string
        YLeaf level; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf area; //type: uint32

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string

}; // Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class Pce::PrefixInfos::PrefixInfo::Address : public Entity
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

        YLeaf af_name; //type: PceAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Pce::PrefixInfos::PrefixInfo::Address


class Pce::LspSummary : public Entity
{
    public:
        LspSummary();
        ~LspSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllLsPs; //type: Pce::LspSummary::AllLsPs
        class PeerLsPsInfo; //type: Pce::LspSummary::PeerLsPsInfo

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::AllLsPs> all_ls_ps;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo> > peer_ls_ps_info;
        
}; // Pce::LspSummary


class Pce::LspSummary::AllLsPs : public Entity
{
    public:
        AllLsPs();
        ~AllLsPs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_ls_ps; //type: uint32
        YLeaf up_ls_ps; //type: uint32
        YLeaf admin_up_ls_ps; //type: uint32
        YLeaf sr_ls_ps; //type: uint32
        YLeaf rsvp_ls_ps; //type: uint32

}; // Pce::LspSummary::AllLsPs


class Pce::LspSummary::PeerLsPsInfo : public Entity
{
    public:
        PeerLsPsInfo();
        ~PeerLsPsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        class LspSummary_; //type: Pce::LspSummary::PeerLsPsInfo::LspSummary_

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::LspSummary::PeerLsPsInfo::LspSummary_> lsp_summary;
        
}; // Pce::LspSummary::PeerLsPsInfo


class Pce::LspSummary::PeerLsPsInfo::LspSummary_ : public Entity
{
    public:
        LspSummary_();
        ~LspSummary_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_ls_ps; //type: uint32
        YLeaf up_ls_ps; //type: uint32
        YLeaf admin_up_ls_ps; //type: uint32
        YLeaf sr_ls_ps; //type: uint32
        YLeaf rsvp_ls_ps; //type: uint32

}; // Pce::LspSummary::PeerLsPsInfo::LspSummary_


class Pce::PeerInfos : public Entity
{
    public:
        PeerInfos();
        ~PeerInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PeerInfo; //type: Pce::PeerInfos::PeerInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo> > peer_info;
        
}; // Pce::PeerInfos


class Pce::PeerInfos::PeerInfo : public Entity
{
    public:
        PeerInfo();
        ~PeerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf peer_address_xr; //type: string
        YLeaf peer_protocol; //type: PceProtoEnum
        class BriefPcepInformation; //type: Pce::PeerInfos::PeerInfo::BriefPcepInformation

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::PeerInfos::PeerInfo::BriefPcepInformation> brief_pcep_information;
        
}; // Pce::PeerInfos::PeerInfo


class Pce::PeerInfos::PeerInfo::BriefPcepInformation : public Entity
{
    public:
        BriefPcepInformation();
        ~BriefPcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcep_state; //type: PcepStateEnum
        YLeaf stateful; //type: boolean
        YLeaf capability_update; //type: boolean
        YLeaf capability_instantiate; //type: boolean
        YLeaf capability_segment_routing; //type: boolean
        YLeaf capability_triggered_sync; //type: boolean
        YLeaf capability_db_version; //type: boolean
        YLeaf capability_delta_sync; //type: boolean

}; // Pce::PeerInfos::PeerInfo::BriefPcepInformation


class Pce::TunnelDetailInfos : public Entity
{
    public:
        TunnelDetailInfos();
        ~TunnelDetailInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TunnelDetailInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo> > tunnel_detail_info;
        
}; // Pce::TunnelDetailInfos


class Pce::TunnelDetailInfos::TunnelDetailInfo : public Entity
{
    public:
        TunnelDetailInfo();
        ~TunnelDetailInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf plsp_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf pcc_address; //type: string
        YLeaf tunnel_name_xr; //type: string
        class PrivateLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation
        class DetailLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation> > detail_lsp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation> private_lsp_information;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation : public Entity
{
    public:
        PrivateLspInformation();
        ~PrivateLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EventBuffer; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer> > event_buffer;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer : public Entity
{
    public:
        EventBuffer();
        ~EventBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_message; //type: string
        YLeaf time_stamp; //type: uint32

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation : public Entity
{
    public:
        DetailLspInformation();
        ~DetailLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf signaled_bandwidth_specified; //type: boolean
        YLeaf signaled_bandwidth; //type: uint64
        YLeaf actual_bandwidth_specified; //type: boolean
        YLeaf actual_bandwidth; //type: uint64
        YLeaf lsp_role; //type: uint32
        YLeaf computing_pce; //type: uint32
        YLeaf sub_delegated_pce; //type: string
        YLeaf state_sync_pce; //type: string
        YLeaf reporting_pcc_address; //type: string
        YLeafList srlg_info; //type: list of  uint32
        class BriefLspInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation
        class ErOs; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs
        class LsppcepInformation; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation
        class LspAssociationInfo; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo
        class LspAttributes; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes
        class Rro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation> brief_lsp_information;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs> er_os;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo> lsp_association_info;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes> lsp_attributes;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation> lsppcep_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro> > rro;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation : public Entity
{
    public:
        BriefLspInformation();
        ~BriefLspInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf lspid; //type: uint32
        YLeaf binding_sid; //type: uint32
        YLeaf lsp_setup_type; //type: LspSetupEnum
        YLeaf operational_state; //type: PcepLspStateEnum
        YLeaf administrative_state; //type: LspStateEnum

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs : public Entity
{
    public:
        ErOs();
        ~ErOs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reported_metric_type; //type: uint32
        YLeaf reported_metric_value; //type: uint32
        YLeaf computed_metric_type; //type: uint32
        YLeaf computed_metric_value; //type: uint32
        YLeaf computed_hop_list_time; //type: uint32
        class ReportedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath
        class ReportedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath
        class ComputedRsvpPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath
        class ComputedSrPath; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath> > computed_rsvp_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath> > computed_sr_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath> > reported_rsvp_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath> > reported_sr_path;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath : public Entity
{
    public:
        ReportedRsvpPath();
        ~ReportedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hop_address; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath : public Entity
{
    public:
        ReportedSrPath();
        ~ReportedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath : public Entity
{
    public:
        ComputedRsvpPath();
        ~ComputedRsvpPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hop_address; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath : public Entity
{
    public:
        ComputedSrPath();
        ~ComputedSrPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation : public Entity
{
    public:
        LsppcepInformation();
        ~LsppcepInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcepid; //type: uint32
        YLeaf pcep_flag_d; //type: boolean
        YLeaf pcep_flag_s; //type: boolean
        YLeaf pcep_flag_r; //type: boolean
        YLeaf pcep_flag_a; //type: boolean
        YLeaf pcep_flag_o; //type: uint8
        class RsvpError; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError> rsvp_error;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError : public Entity
{
    public:
        RsvpError();
        ~RsvpError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_address; //type: string
        YLeaf error_flags; //type: uint8
        YLeaf error_code; //type: uint8
        YLeaf error_value; //type: uint16

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo : public Entity
{
    public:
        LspAssociationInfo();
        ~LspAssociationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf association_type; //type: uint32
        YLeaf association_id; //type: uint32
        YLeaf association_source; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes : public Entity
{
    public:
        LspAttributes();
        ~LspAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf affinity_exclude_any; //type: uint32
        YLeaf affinity_include_any; //type: uint32
        YLeaf affinity_include_all; //type: uint32
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf local_protection; //type: boolean

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rro_type; //type: PceRroEnum
        YLeaf ipv4_address; //type: string
        YLeaf mpls_label; //type: uint32
        YLeaf flags; //type: uint8
        class SrRro; //type: Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_oper::Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro> sr_rro;
        
}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro


class Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro : public Entity
{
    public:
        SrRro();
        ~SrRro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_type; //type: PceSrSidEnum
        YLeaf mpls_label; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf remote_addr; //type: string

}; // Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_OPER_1_ */

