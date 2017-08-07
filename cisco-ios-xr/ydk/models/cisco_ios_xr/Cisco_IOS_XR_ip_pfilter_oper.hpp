#ifndef _CISCO_IOS_XR_IP_PFILTER_OPER_
#define _CISCO_IOS_XR_IP_PFILTER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_pfilter_oper {

class PfilterMa : public ydk::Entity
{
    public:
        PfilterMa();
        ~PfilterMa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: PfilterMa::Nodes

        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes> nodes;
        
}; // PfilterMa


class PfilterMa::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: PfilterMa::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node> > node;
        
}; // PfilterMa::Nodes


class PfilterMa::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class Process; //type: PfilterMa::Nodes::Node::Process

        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process> process;
        
}; // PfilterMa::Nodes::Node


class PfilterMa::Nodes::Node::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6; //type: PfilterMa::Nodes::Node::Process::Ipv6
        class Ipv4; //type: PfilterMa::Nodes::Node::Process::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6> ipv6;
        
}; // PfilterMa::Nodes::Node::Process


class PfilterMa::Nodes::Node::Process::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AclInfoTable; //type: PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable

        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable> acl_info_table;
        
}; // PfilterMa::Nodes::Node::Process::Ipv6


class PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable : public ydk::Entity
{
    public:
        AclInfoTable();
        ~AclInfoTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceInfos; //type: PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos

        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos> interface_infos;
        
}; // PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable


class PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos : public ydk::Entity
{
    public:
        InterfaceInfos();
        ~InterfaceInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceInfo; //type: PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo> > interface_info;
        
}; // PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos


class PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo : public ydk::Entity
{
    public:
        InterfaceInfo();
        ~InterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf acl_info; //type: string

}; // PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo


class PfilterMa::Nodes::Node::Process::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AclInfoTable; //type: PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable

        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable> acl_info_table;
        
}; // PfilterMa::Nodes::Node::Process::Ipv4


class PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable : public ydk::Entity
{
    public:
        AclInfoTable();
        ~AclInfoTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceInfos; //type: PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos

        std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos> interface_infos;
        
}; // PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable


class PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos : public ydk::Entity
{
    public:
        InterfaceInfos();
        ~InterfaceInfos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceInfo; //type: PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo> > interface_info;
        
}; // PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos


class PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo : public ydk::Entity
{
    public:
        InterfaceInfo();
        ~InterfaceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf acl_info; //type: string

}; // PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo


}
}

#endif /* _CISCO_IOS_XR_IP_PFILTER_OPER_ */

