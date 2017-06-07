#ifndef _CISCO_IOS_XR_IEDGE4710_CFG_
#define _CISCO_IOS_XR_IEDGE4710_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_cfg {

class SubscriberManager : public Entity
{
    public:
        SubscriberManager();
        ~SubscriberManager();

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

        class Accounting; //type: SubscriberManager::Accounting
        class Srg; //type: SubscriberManager::Srg

        std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager::Srg> srg;
        
}; // SubscriberManager


class SubscriberManager::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SendStop; //type: SubscriberManager::Accounting::SendStop
        class Interim; //type: SubscriberManager::Accounting::Interim

        std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager::Accounting::Interim> interim;
        std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager::Accounting::SendStop> send_stop;
        
}; // SubscriberManager::Accounting


class SubscriberManager::Accounting::SendStop : public Entity
{
    public:
        SendStop();
        ~SendStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf setup_failure; //type: string

}; // SubscriberManager::Accounting::SendStop


class SubscriberManager::Accounting::Interim : public Entity
{
    public:
        Interim();
        ~Interim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Variation; //type: SubscriberManager::Accounting::Interim::Variation

        std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager::Accounting::Interim::Variation> variation;
        
}; // SubscriberManager::Accounting::Interim


class SubscriberManager::Accounting::Interim::Variation : public Entity
{
    public:
        Variation();
        ~Variation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum_percentage_variation; //type: uint32

}; // SubscriberManager::Accounting::Interim::Variation


class SubscriberManager::Srg : public Entity
{
    public:
        Srg();
        ~Srg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync_account_session_id; //type: empty

}; // SubscriberManager::Srg

class SubscriberFeaturette : public Entity
{
    public:
        SubscriberFeaturette();
        ~SubscriberFeaturette();

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

        class IdentityChange; //type: SubscriberFeaturette::IdentityChange

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberFeaturette::IdentityChange> > identity_change;
        
}; // SubscriberFeaturette


class SubscriberFeaturette::IdentityChange : public Entity
{
    public:
        IdentityChange();
        ~IdentityChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identity_change; //type: string
        YLeaf enable; //type: int32

}; // SubscriberFeaturette::IdentityChange

class IedgeLicenseManager : public Entity
{
    public:
        IedgeLicenseManager();
        ~IedgeLicenseManager();

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

        class Node; //type: IedgeLicenseManager::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::IedgeLicenseManager::Node> > node;
        
}; // IedgeLicenseManager


class IedgeLicenseManager::Node : public Entity
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
        YLeaf session_limit; //type: int32
        YLeaf session_threshold; //type: int32

}; // IedgeLicenseManager::Node

class SubManager : public Entity
{
    public:
        SubManager();
        ~SubManager();

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

        class Location; //type: SubManager::Location

        std::vector<std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubManager::Location> > location;
        
}; // SubManager


class SubManager::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location1; //type: string
        YLeaf history; //type: empty
        class Trace; //type: SubManager::Location::Trace

        std::shared_ptr<Cisco_IOS_XR_iedge4710_cfg::SubManager::Location::Trace> trace;
        
}; // SubManager::Location


class SubManager::Location::Trace : public Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trace_level; //type: int32

}; // SubManager::Location::Trace


}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_CFG_ */

