#ifndef _IETF_DIFFSERV_CLASSIFIER_
#define _IETF_DIFFSERV_CLASSIFIER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry> > classifier_entry;
        
}; // Classifiers


class Classifiers::ClassifierEntry : public ydk::Entity
{
    public:
        ClassifierEntry();
        ~ClassifierEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf classifier_entry_name; //type: string
        ydk::YLeaf classifier_entry_descr; //type: string
        ydk::YLeaf classifier_entry_filter_operation; //type: ClassifierEntryFilterOperationType
        class FilterEntry; //type: Classifiers::ClassifierEntry::FilterEntry

        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry> > filter_entry;
        
}; // Classifiers::ClassifierEntry


class Classifiers::ClassifierEntry::FilterEntry : public ydk::Entity
{
    public:
        FilterEntry();
        ~FilterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DscpCfg> > dscp_cfg;
        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg> > source_ip_address_cfg;
        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg> > destination_ip_address_cfg;
        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg> > source_port_cfg;
        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg> > destination_port_cfg;
        std::vector<std::shared_ptr<ietf::ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg> > protocol_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry


class Classifiers::ClassifierEntry::FilterEntry::DscpCfg : public ydk::Entity
{
    public:
        DscpCfg();
        ~DscpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_min; //type: uint8
        ydk::YLeaf protocol_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg

class Dscp : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Dscp();
        ~Dscp();


}; // Dscp

class SourceIpAddress : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SourceIpAddress();
        ~SourceIpAddress();


}; // SourceIpAddress

class DestinationIpAddress : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DestinationIpAddress();
        ~DestinationIpAddress();


}; // DestinationIpAddress

class SourcePort : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        SourcePort();
        ~SourcePort();


}; // SourcePort

class DestinationPort : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        DestinationPort();
        ~DestinationPort();


}; // DestinationPort

class Protocol : public ietf::ietf_diffserv_classifier::FilterType, virtual ydk::Identity
{
    public:
        Protocol();
        ~Protocol();


}; // Protocol

class MatchAnyFilter : public ietf::ietf_diffserv_classifier::ClassifierEntryFilterOperationType, virtual ydk::Identity
{
    public:
        MatchAnyFilter();
        ~MatchAnyFilter();


}; // MatchAnyFilter

class MatchAllFilter : public ietf::ietf_diffserv_classifier::ClassifierEntryFilterOperationType, virtual ydk::Identity
{
    public:
        MatchAllFilter();
        ~MatchAllFilter();


}; // MatchAllFilter


}
}

#endif /* _IETF_DIFFSERV_CLASSIFIER_ */

