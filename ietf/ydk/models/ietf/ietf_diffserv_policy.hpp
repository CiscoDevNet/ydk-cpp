#ifndef _IETF_DIFFSERV_POLICY_
#define _IETF_DIFFSERV_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace ietf_diffserv_policy {

class ActionTypeIdentity : public virtual Identity
{
    public:
        ActionTypeIdentity();
        ~ActionTypeIdentity();


}; // ActionTypeIdentity

class Policies : public Entity
{
    public:
        Policies();
        ~Policies();

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

        class PolicyEntry; //type: Policies::PolicyEntry

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry> > policy_entry;
        
}; // Policies


class Policies::PolicyEntry : public Entity
{
    public:
        PolicyEntry();
        ~PolicyEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy_name; //type: string
        YLeaf policy_descr; //type: string
        class ClassifierEntry; //type: Policies::PolicyEntry::ClassifierEntry

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry> > classifier_entry;
        
}; // Policies::PolicyEntry


class Policies::PolicyEntry::ClassifierEntry : public Entity
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
        YLeaf classifier_entry_inline; //type: boolean
        YLeaf classifier_entry_filter_oper; //type: ClassifierEntryFilterOperationTypeIdentity
        class FilterEntry; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry
        class ClassifierActionEntryCfg; //type: Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg> > classifier_action_entry_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry> > filter_entry;
        
}; // Policies::PolicyEntry::ClassifierEntry


class Policies::PolicyEntry::ClassifierEntry::FilterEntry : public Entity
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
        class DscpCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg
        class SourceIpAddressCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg
        class DestinationIpAddressCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg
        class SourcePortCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg
        class DestinationPortCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg
        class ProtocolCfg; //type: Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg

        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg> > destination_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg> > destination_port_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg> > dscp_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg> > protocol_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg> > source_ip_address_cfg;
        std::vector<std::shared_ptr<ietf_diffserv_policy::Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg> > source_port_cfg;
        
}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg : public Entity
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

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::DscpCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg : public Entity
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

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourceIpAddressCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg : public Entity
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

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationIpAddressCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg : public Entity
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

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::SourcePortCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg : public Entity
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

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::DestinationPortCfg


class Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg : public Entity
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

}; // Policies::PolicyEntry::ClassifierEntry::FilterEntry::ProtocolCfg


class Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg : public Entity
{
    public:
        ClassifierActionEntryCfg();
        ~ClassifierActionEntryCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_type; //type: ActionTypeIdentity

}; // Policies::PolicyEntry::ClassifierEntry::ClassifierActionEntryCfg


}
}

#endif /* _IETF_DIFFSERV_POLICY_ */

