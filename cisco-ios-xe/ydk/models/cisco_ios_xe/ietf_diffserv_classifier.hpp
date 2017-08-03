#ifndef _IETF_DIFFSERV_CLASSIFIER_
#define _IETF_DIFFSERV_CLASSIFIER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ietf_diffserv_classifier {

class FilterType : public virtual ydk::Identity
{
    public:
        FilterType();
        ~FilterType();


}; // FilterType

class ClassifierEntryFilterOperationType : public virtual ydk::Identity
{
    public:
        ClassifierEntryFilterOperationType();
        ~ClassifierEntryFilterOperationType();


}; // ClassifierEntryFilterOperationType

class Classifiers : public ydk::Entity
{
    public:
        Classifiers();
        ~Classifiers();

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

        class ClassifierEntry; //type: Classifiers::ClassifierEntry

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry> > classifier_entry;
        
}; // Classifiers


class Classifiers::ClassifierEntry : public ydk::Entity
{
    public:
        ClassifierEntry();
        ~ClassifierEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf classifier_entry_name; //type: string
        ydk::YLeaf classifier_entry_descr; //type: string
        ydk::YLeaf classifier_entry_filter_operation; //type: ClassifierEntryFilterOperationType
        ydk::YLeaf classifier_entry_type; //type: ClassType
        class FilterEntry; //type: Classifiers::ClassifierEntry::FilterEntry

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry> > filter_entry;
        
}; // Classifiers::ClassifierEntry


class Classifiers::ClassifierEntry::FilterEntry : public ydk::Entity
{
    public:
        FilterEntry();
        ~FilterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter_type; //type: FilterType
        ydk::YLeaf filter_logical_not; //type: boolean
        class DscpCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DscpCfg
        class SourceIpAddressCfg; //type: Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg
        class DestinationIpAddressCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg
        class SourcePortCfg; //type: Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg
        class DestinationPortCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg
        class ProtocolCfg; //type: Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg
        class CosCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::CosCfgs
        class CosInnerCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs
        class Ipv4AclNameCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs
        class Ipv6AclNameCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs
        class Ipv4AclCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs
        class Ipv6AclCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs
        class InputInterfaceCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs
        class SrcMacCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs
        class DstMacCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs
        class ProtocolNameCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs
        class MplsExpTopCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs
        class MplsExpImpCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs
        class PktLenCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs
        class Prec; //type: Classifiers::ClassifierEntry::FilterEntry::Prec
        class QosGroupCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs
        class VlanCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::VlanCfgs
        class VlanInnerCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs
        class AtmClpCfg; //type: Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg
        class AtmVciCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs
        class DeiCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DeiCfg
        class DeiInnerCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg
        class FlowIpCfg; //type: Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg
        class FlowRecordCfg; //type: Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg
        class FrDeCfg; //type: Classifiers::ClassifierEntry::FilterEntry::FrDeCfg
        class FrDlciCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs
        class WlanUserPriorityCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs
        class DiscardClassCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs
        class ClassMapCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs
        class MetadataCfg; //type: Classifiers::ClassifierEntry::FilterEntry::MetadataCfg
        class ApplicationCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs
        class SecurityGroup; //type: Classifiers::ClassifierEntry::FilterEntry::SecurityGroup
        class IpRtpCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs
        class VplsCfg; //type: Classifiers::ClassifierEntry::FilterEntry::VplsCfg

        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs> application_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg> atm_clp_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs> atm_vci_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs> class_map_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::CosCfgs> cos_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs> cos_inner_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DeiCfg> dei_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg> dei_inner_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg> > destination_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg> > destination_port_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs> discard_class_cfgs;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DscpCfg> > dscp_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs> dst_mac_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg> flow_ip_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg> flow_record_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::FrDeCfg> fr_de_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs> fr_dlci_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs> input_interface_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs> ip_rtp_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs> ipv4_acl_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs> ipv4_acl_name_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs> ipv6_acl_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs> ipv6_acl_name_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::MetadataCfg> metadata_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs> mpls_exp_imp_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs> mpls_exp_top_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs> pkt_len_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Prec> prec;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg> > protocol_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs> protocol_name_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs> qos_group_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SecurityGroup> security_group;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg> > source_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg> > source_port_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs> src_mac_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::VlanCfgs> vlan_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs> vlan_inner_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::VplsCfg> vpls_cfg;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs> wlan_user_priority_cfgs;
        
}; // Classifiers::ClassifierEntry::FilterEntry


class Classifiers::ClassifierEntry::FilterEntry::DscpCfg : public ydk::Entity
{
    public:
        DscpCfg();
        ~DscpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_min; //type: uint8
        ydk::YLeaf dscp_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::DscpCfg


class Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg : public ydk::Entity
{
    public:
        SourceIpAddressCfg();
        ~SourceIpAddressCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_ip_addr; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg


class Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg : public ydk::Entity
{
    public:
        DestinationIpAddressCfg();
        ~DestinationIpAddressCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_ip_addr; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg


class Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg : public ydk::Entity
{
    public:
        SourcePortCfg();
        ~SourcePortCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_port_min; //type: uint16
        ydk::YLeaf source_port_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg


class Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg : public ydk::Entity
{
    public:
        DestinationPortCfg();
        ~DestinationPortCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_port_min; //type: uint16
        ydk::YLeaf destination_port_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg


class Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg : public ydk::Entity
{
    public:
        ProtocolCfg();
        ~ProtocolCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_min; //type: uint8
        ydk::YLeaf protocol_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg


class Classifiers::ClassifierEntry::FilterEntry::CosCfgs : public ydk::Entity
{
    public:
        CosCfgs();
        ~CosCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosCfg; //type: Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg> > cos_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::CosCfgs


class Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg : public ydk::Entity
{
    public:
        CosCfg();
        ~CosCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_min; //type: uint8
        ydk::YLeaf cos_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::CosCfgs::CosCfg


class Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs : public ydk::Entity
{
    public:
        CosInnerCfgs();
        ~CosInnerCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosInnerCfg; //type: Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg> > cos_inner_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs


class Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg : public ydk::Entity
{
    public:
        CosInnerCfg();
        ~CosInnerCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos_min; //type: uint8
        ydk::YLeaf cos_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::CosInnerCfgs::CosInnerCfg


class Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs : public ydk::Entity
{
    public:
        Ipv4AclNameCfgs();
        ~Ipv4AclNameCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AclNameCfg; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg> > ipv4_acl_name_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs


class Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg : public ydk::Entity
{
    public:
        Ipv4AclNameCfg();
        ~Ipv4AclNameCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_acl_name; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::Ipv4AclNameCfgs::Ipv4AclNameCfg


class Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs : public ydk::Entity
{
    public:
        Ipv6AclNameCfgs();
        ~Ipv6AclNameCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6AclNameCfg; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg> > ipv6_acl_name_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs


class Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg : public ydk::Entity
{
    public:
        Ipv6AclNameCfg();
        ~Ipv6AclNameCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_acl_name; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::Ipv6AclNameCfgs::Ipv6AclNameCfg


class Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs : public ydk::Entity
{
    public:
        Ipv4AclCfgs();
        ~Ipv4AclCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AclCfg; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg> > ipv4_acl_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs


class Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg : public ydk::Entity
{
    public:
        Ipv4AclCfg();
        ~Ipv4AclCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_acl; //type: uint32

}; // Classifiers::ClassifierEntry::FilterEntry::Ipv4AclCfgs::Ipv4AclCfg


class Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs : public ydk::Entity
{
    public:
        Ipv6AclCfgs();
        ~Ipv6AclCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6AclCfg; //type: Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg> > ipv6_acl_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs


class Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg : public ydk::Entity
{
    public:
        Ipv6AclCfg();
        ~Ipv6AclCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_acl; //type: uint32

}; // Classifiers::ClassifierEntry::FilterEntry::Ipv6AclCfgs::Ipv6AclCfg


class Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs : public ydk::Entity
{
    public:
        InputInterfaceCfgs();
        ~InputInterfaceCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InputInterfaceCfg; //type: Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg> > input_interface_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs


class Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg : public ydk::Entity
{
    public:
        InputInterfaceCfg();
        ~InputInterfaceCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_name; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::InputInterfaceCfgs::InputInterfaceCfg


class Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs : public ydk::Entity
{
    public:
        SrcMacCfgs();
        ~SrcMacCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrcMacCfg; //type: Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg> > src_mac_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs


class Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg : public ydk::Entity
{
    public:
        SrcMacCfg();
        ~SrcMacCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf mac_mask; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::SrcMacCfgs::SrcMacCfg


class Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs : public ydk::Entity
{
    public:
        DstMacCfgs();
        ~DstMacCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DstMacCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg> > dst_mac_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs


class Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg : public ydk::Entity
{
    public:
        DstMacCfg();
        ~DstMacCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf mac_mask; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::DstMacCfgs::DstMacCfg


class Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs : public ydk::Entity
{
    public:
        ProtocolNameCfgs();
        ~ProtocolNameCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolNameCfg; //type: Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg> > protocol_name_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs


class Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg : public ydk::Entity
{
    public:
        ProtocolNameCfg();
        ~ProtocolNameCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::ProtocolNameCfgs::ProtocolNameCfg


class Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs : public ydk::Entity
{
    public:
        MplsExpTopCfgs();
        ~MplsExpTopCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsExpTopCfg; //type: Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg> > mpls_exp_top_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs


class Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg : public ydk::Entity
{
    public:
        MplsExpTopCfg();
        ~MplsExpTopCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp_min; //type: uint8
        ydk::YLeaf exp_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::MplsExpTopCfgs::MplsExpTopCfg


class Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs : public ydk::Entity
{
    public:
        MplsExpImpCfgs();
        ~MplsExpImpCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsExpImpCfg; //type: Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg> > mpls_exp_imp_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs


class Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg : public ydk::Entity
{
    public:
        MplsExpImpCfg();
        ~MplsExpImpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp_min; //type: uint8
        ydk::YLeaf exp_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::MplsExpImpCfgs::MplsExpImpCfg


class Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs : public ydk::Entity
{
    public:
        PktLenCfgs();
        ~PktLenCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PktLenCfg; //type: Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg> > pkt_len_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs


class Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg : public ydk::Entity
{
    public:
        PktLenCfg();
        ~PktLenCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_pkt_len; //type: uint16
        ydk::YLeaf max_pkt_len; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::PktLenCfgs::PktLenCfg


class Classifiers::ClassifierEntry::FilterEntry::Prec : public ydk::Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrecValCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs
        class PrecAttrCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs

        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs> prec_attr_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs> prec_val_cfgs;
        
}; // Classifiers::ClassifierEntry::FilterEntry::Prec


class Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs : public ydk::Entity
{
    public:
        PrecValCfgs();
        ~PrecValCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrecValCfg; //type: Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg> > prec_val_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs


class Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg : public ydk::Entity
{
    public:
        PrecValCfg();
        ~PrecValCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec_val; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::Prec::PrecValCfgs::PrecValCfg


class Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs : public ydk::Entity
{
    public:
        PrecAttrCfgs();
        ~PrecAttrCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrecAttrCfg; //type: Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg> > prec_attr_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs


class Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg : public ydk::Entity
{
    public:
        PrecAttrCfg();
        ~PrecAttrCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec_attr; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::Prec::PrecAttrCfgs::PrecAttrCfg


class Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs : public ydk::Entity
{
    public:
        QosGroupCfgs();
        ~QosGroupCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosGroupCfg; //type: Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg> > qos_group_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs


class Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg : public ydk::Entity
{
    public:
        QosGroupCfg();
        ~QosGroupCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_group_min; //type: uint16
        ydk::YLeaf qos_group_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::QosGroupCfgs::QosGroupCfg


class Classifiers::ClassifierEntry::FilterEntry::VlanCfgs : public ydk::Entity
{
    public:
        VlanCfgs();
        ~VlanCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanCfg; //type: Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg> > vlan_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::VlanCfgs


class Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg : public ydk::Entity
{
    public:
        VlanCfg();
        ~VlanCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_min; //type: uint16
        ydk::YLeaf vlan_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::VlanCfgs::VlanCfg


class Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs : public ydk::Entity
{
    public:
        VlanInnerCfgs();
        ~VlanInnerCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanInnerCfg; //type: Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg> > vlan_inner_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs


class Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg : public ydk::Entity
{
    public:
        VlanInnerCfg();
        ~VlanInnerCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_min; //type: uint16
        ydk::YLeaf vlan_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::VlanInnerCfgs::VlanInnerCfg


class Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg : public ydk::Entity
{
    public:
        AtmClpCfg();
        ~AtmClpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_clp; //type: empty

}; // Classifiers::ClassifierEntry::FilterEntry::AtmClpCfg


class Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs : public ydk::Entity
{
    public:
        AtmVciCfgs();
        ~AtmVciCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AtmVciCfg; //type: Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg> > atm_vci_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs


class Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg : public ydk::Entity
{
    public:
        AtmVciCfg();
        ~AtmVciCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_vci_min; //type: uint16
        ydk::YLeaf atm_vci_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::AtmVciCfgs::AtmVciCfg


class Classifiers::ClassifierEntry::FilterEntry::DeiCfg : public ydk::Entity
{
    public:
        DeiCfg();
        ~DeiCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dei_cfg; //type: boolean

}; // Classifiers::ClassifierEntry::FilterEntry::DeiCfg


class Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg : public ydk::Entity
{
    public:
        DeiInnerCfg();
        ~DeiInnerCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dei_cfg; //type: boolean

}; // Classifiers::ClassifierEntry::FilterEntry::DeiInnerCfg


class Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg : public ydk::Entity
{
    public:
        FlowIpCfg();
        ~FlowIpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_src_ip; //type: string
        ydk::YLeaf flow_dst_ip; //type: string
        ydk::YLeaf protocol; //type: IpVersion
        ydk::YLeaf src_port; //type: uint16
        ydk::YLeaf dst_port; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::FlowIpCfg


class Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg : public ydk::Entity
{
    public:
        FlowRecordCfg();
        ~FlowRecordCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_record_name; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::FlowRecordCfg


class Classifiers::ClassifierEntry::FilterEntry::FrDeCfg : public ydk::Entity
{
    public:
        FrDeCfg();
        ~FrDeCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_de_val; //type: empty

}; // Classifiers::ClassifierEntry::FilterEntry::FrDeCfg


class Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs : public ydk::Entity
{
    public:
        FrDlciCfgs();
        ~FrDlciCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrDlciCfg; //type: Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg> > fr_dlci_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs


class Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg : public ydk::Entity
{
    public:
        FrDlciCfg();
        ~FrDlciCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dlci_min; //type: uint16
        ydk::YLeaf dlci_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::FrDlciCfgs::FrDlciCfg


class Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs : public ydk::Entity
{
    public:
        WlanUserPriorityCfgs();
        ~WlanUserPriorityCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class WlanUserPriorityCfg; //type: Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg> > wlan_user_priority_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs


class Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg : public ydk::Entity
{
    public:
        WlanUserPriorityCfg();
        ~WlanUserPriorityCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wlan_prio_min; //type: uint8
        ydk::YLeaf wlan_prio_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::WlanUserPriorityCfgs::WlanUserPriorityCfg


class Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs : public ydk::Entity
{
    public:
        DiscardClassCfgs();
        ~DiscardClassCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiscardClassCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg> > discard_class_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs


class Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg : public ydk::Entity
{
    public:
        DiscardClassCfg();
        ~DiscardClassCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discard_class; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::DiscardClassCfgs::DiscardClassCfg


class Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs : public ydk::Entity
{
    public:
        ClassMapCfgs();
        ~ClassMapCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassMapCfg; //type: Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg> > class_map_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs


class Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg : public ydk::Entity
{
    public:
        ClassMapCfg();
        ~ClassMapCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_map_name; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::ClassMapCfgs::ClassMapCfg


class Classifiers::ClassifierEntry::FilterEntry::MetadataCfg : public ydk::Entity
{
    public:
        MetadataCfg();
        ~MetadataCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cac; //type: Cac
        ydk::YLeaf called_uri; //type: string
        ydk::YLeaf calling_uri; //type: string
        ydk::YLeaf device_model; //type: string
        ydk::YLeaf global_session_id; //type: string
        ydk::YLeaf multi_party_session_id; //type: string
        class Cac;

}; // Classifiers::ClassifierEntry::FilterEntry::MetadataCfg


class Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs : public ydk::Entity
{
    public:
        ApplicationCfgs();
        ~ApplicationCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationCfg; //type: Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg> > application_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs


class Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg : public ydk::Entity
{
    public:
        ApplicationCfg();
        ~ApplicationCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application_name; //type: string
        ydk::YLeaf application_cfg; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::ApplicationCfgs::ApplicationCfg


class Classifiers::ClassifierEntry::FilterEntry::SecurityGroup : public ydk::Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecurityGroupNameCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs
        class SecurityGroupTagCfgs; //type: Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs

        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs> security_group_name_cfgs;
        std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs> security_group_tag_cfgs;
        
}; // Classifiers::ClassifierEntry::FilterEntry::SecurityGroup


class Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs : public ydk::Entity
{
    public:
        SecurityGroupNameCfgs();
        ~SecurityGroupNameCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecurityGroupNameCfg; //type: Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg> > security_group_name_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs


class Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg : public ydk::Entity
{
    public:
        SecurityGroupNameCfg();
        ~SecurityGroupNameCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_dst; //type: SrcDst
        ydk::YLeaf security_name; //type: string
        class SrcDst;

}; // Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg


class Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs : public ydk::Entity
{
    public:
        SecurityGroupTagCfgs();
        ~SecurityGroupTagCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecurityGroupTagCfg; //type: Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg> > security_group_tag_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs


class Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg : public ydk::Entity
{
    public:
        SecurityGroupTagCfg();
        ~SecurityGroupTagCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupTagCfgs::SecurityGroupTagCfg


class Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs : public ydk::Entity
{
    public:
        IpRtpCfgs();
        ~IpRtpCfgs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpRtpCfg; //type: Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg> > ip_rtp_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs


class Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg : public ydk::Entity
{
    public:
        IpRtpCfg();
        ~IpRtpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf starting_port_number; //type: uint16
        ydk::YLeaf port_range; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::IpRtpCfgs::IpRtpCfg


class Classifiers::ClassifierEntry::FilterEntry::VplsCfg : public ydk::Entity
{
    public:
        VplsCfg();
        ~VplsCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        ydk::YLeaf known; //type: empty
        ydk::YLeaf unknown; //type: empty
        ydk::YLeaf multicast; //type: empty

}; // Classifiers::ClassifierEntry::FilterEntry::VplsCfg

class Protocol : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Protocol();
        ~Protocol();


}; // Protocol

class MatchAllFilter : public ietf_diffserv_classifier::ClassifierEntryFilterOperationType, virtual ydk::Identity
{
    public:
        MatchAllFilter();
        ~MatchAllFilter();


}; // MatchAllFilter

class DestinationPort : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DestinationPort();
        ~DestinationPort();


}; // DestinationPort

class Dscp : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Dscp();
        ~Dscp();


}; // Dscp

class SourcePort : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SourcePort();
        ~SourcePort();


}; // SourcePort

class DestinationIpAddress : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DestinationIpAddress();
        ~DestinationIpAddress();


}; // DestinationIpAddress

class MatchAnyFilter : public ietf_diffserv_classifier::ClassifierEntryFilterOperationType, virtual ydk::Identity
{
    public:
        MatchAnyFilter();
        ~MatchAnyFilter();


}; // MatchAnyFilter

class SourceIpAddress : public ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SourceIpAddress();
        ~SourceIpAddress();


}; // SourceIpAddress

class Classifiers::ClassifierEntry::FilterEntry::MetadataCfg::Cac : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf addmitted;
        static const ydk::Enum::YLeaf un_addmitted;

};

class Classifiers::ClassifierEntry::FilterEntry::SecurityGroup::SecurityGroupNameCfgs::SecurityGroupNameCfg::SrcDst : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf source;
        static const ydk::Enum::YLeaf destination;

};


}
}

#endif /* _IETF_DIFFSERV_CLASSIFIER_ */

