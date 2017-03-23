#ifndef _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_subscriber_accounting_cfg {

class SubscriberAccounting : public Entity
{
    public:
        SubscriberAccounting();
        ~SubscriberAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class PrepaidConfigurations; //type: SubscriberAccounting::PrepaidConfigurations

        std::shared_ptr<Cisco_IOS_XR_subscriber_accounting_cfg::SubscriberAccounting::PrepaidConfigurations> prepaid_configurations;


}; // SubscriberAccounting


class SubscriberAccounting::PrepaidConfigurations : public Entity
{
    public:
        PrepaidConfigurations();
        ~PrepaidConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrepaidConfiguration; //type: SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_accounting_cfg::SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration> > prepaid_configuration;


}; // SubscriberAccounting::PrepaidConfigurations


class SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration : public Entity
{
    public:
        PrepaidConfiguration();
        ~PrepaidConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prepaid_config_name; //type: string
        YLeaf password; //type: string
        YLeaf volume_threshold; //type: int32
        YLeaf accounting_method_list; //type: string
        YLeaf time_hold; //type: int32
        YLeaf author_method_list; //type: string
        YLeaf traffic_direction; //type: string
        YLeaf time_threshold; //type: int32
        YLeaf time_valid; //type: int32



}; // SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_CFG_ */

