#ifndef _IETF_DIFFSERV_CLASSIFIER_
#define _IETF_DIFFSERV_CLASSIFIER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ietf_diffserv_classifier {

class FilterTypeIdentity : public virtual Identity
{
    public:
        FilterTypeIdentity();
        ~FilterTypeIdentity();


}; // FilterTypeIdentity

class ClassifierEntryFilterOperationTypeIdentity : public virtual Identity
{
    public:
        ClassifierEntryFilterOperationTypeIdentity();
        ~ClassifierEntryFilterOperationTypeIdentity();


}; // ClassifierEntryFilterOperationTypeIdentity

class Classifiers : public Entity
{
    public:
        Classifiers();
        ~Classifiers();

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

        class ClassifierEntry; //type: Classifiers::ClassifierEntry

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry> > classifier_entry;
        
}; // Classifiers


class Classifiers::ClassifierEntry : public Entity
{
    public:
        ClassifierEntry();
        ~ClassifierEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf classifier_entry_name; //type: string
        YLeaf classifier_entry_descr; //type: string
        YLeaf classifier_entry_filter_operation; //type: ClassifierEntryFilterOperationTypeIdentity
        class FilterEntry; //type: Classifiers::ClassifierEntry::FilterEntry

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry> > filter_entry;
        
}; // Classifiers::ClassifierEntry


class Classifiers::ClassifierEntry::FilterEntry : public Entity
{
    public:
        FilterEntry();
        ~FilterEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filter_type; //type: FilterTypeIdentity
        YLeaf filter_logical_not; //type: boolean
        class DscpCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DscpCfg
        class SourceIpAddressCfg; //type: Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg
        class DestinationIpAddressCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg
        class SourcePortCfg; //type: Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg
        class DestinationPortCfg; //type: Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg
        class ProtocolCfg; //type: Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg

        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg> > destination_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg> > destination_port_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::DscpCfg> > dscp_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg> > protocol_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg> > source_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_classifier::Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg> > source_port_cfg;
        
}; // Classifiers::ClassifierEntry::FilterEntry


class Classifiers::ClassifierEntry::FilterEntry::DscpCfg : public Entity
{
    public:
        DscpCfg();
        ~DscpCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp_min; //type: uint8
        YLeaf dscp_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::DscpCfg


class Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg : public Entity
{
    public:
        SourceIpAddressCfg();
        ~SourceIpAddressCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_ip_addr; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::SourceIpAddressCfg


class Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg : public Entity
{
    public:
        DestinationIpAddressCfg();
        ~DestinationIpAddressCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_ip_addr; //type: string

}; // Classifiers::ClassifierEntry::FilterEntry::DestinationIpAddressCfg


class Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg : public Entity
{
    public:
        SourcePortCfg();
        ~SourcePortCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_port_min; //type: uint16
        YLeaf source_port_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::SourcePortCfg


class Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg : public Entity
{
    public:
        DestinationPortCfg();
        ~DestinationPortCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_port_min; //type: uint16
        YLeaf destination_port_max; //type: uint16

}; // Classifiers::ClassifierEntry::FilterEntry::DestinationPortCfg


class Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg : public Entity
{
    public:
        ProtocolCfg();
        ~ProtocolCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_min; //type: uint8
        YLeaf protocol_max; //type: uint8

}; // Classifiers::ClassifierEntry::FilterEntry::ProtocolCfg

class DestinationPortIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        DestinationPortIdentity();
        ~DestinationPortIdentity();


}; // DestinationPortIdentity

class ProtocolIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        ProtocolIdentity();
        ~ProtocolIdentity();


}; // ProtocolIdentity

class DestinationIpAddressIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        DestinationIpAddressIdentity();
        ~DestinationIpAddressIdentity();


}; // DestinationIpAddressIdentity

class DscpIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        DscpIdentity();
        ~DscpIdentity();


}; // DscpIdentity

class MatchAllFilterIdentity : public ietf_diffserv_classifier::ClassifierEntryFilterOperationTypeIdentity, virtual Identity
{
    public:
        MatchAllFilterIdentity();
        ~MatchAllFilterIdentity();


}; // MatchAllFilterIdentity

class SourceIpAddressIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        SourceIpAddressIdentity();
        ~SourceIpAddressIdentity();


}; // SourceIpAddressIdentity

class MatchAnyFilterIdentity : public ietf_diffserv_classifier::ClassifierEntryFilterOperationTypeIdentity, virtual Identity
{
    public:
        MatchAnyFilterIdentity();
        ~MatchAnyFilterIdentity();


}; // MatchAnyFilterIdentity

class SourcePortIdentity : public ietf_diffserv_classifier::FilterTypeIdentity, virtual Identity
{
    public:
        SourcePortIdentity();
        ~SourcePortIdentity();


}; // SourcePortIdentity


}
}

#endif /* _IETF_DIFFSERV_CLASSIFIER_ */

