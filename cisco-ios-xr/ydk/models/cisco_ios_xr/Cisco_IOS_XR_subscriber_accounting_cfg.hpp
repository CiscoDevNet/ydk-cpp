#ifndef _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_accounting_cfg {

class SubscriberAccounting : public ydk::Entity
{
    public:
        SubscriberAccounting();
        ~SubscriberAccounting();

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

        class PrepaidConfigurations; //type: SubscriberAccounting::PrepaidConfigurations

        std::shared_ptr<Cisco_IOS_XR_subscriber_accounting_cfg::SubscriberAccounting::PrepaidConfigurations> prepaid_configurations;
        
}; // SubscriberAccounting


class SubscriberAccounting::PrepaidConfigurations : public ydk::Entity
{
    public:
        PrepaidConfigurations();
        ~PrepaidConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrepaidConfiguration; //type: SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_accounting_cfg::SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration> > prepaid_configuration;
        
}; // SubscriberAccounting::PrepaidConfigurations


class SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration : public ydk::Entity
{
    public:
        PrepaidConfiguration();
        ~PrepaidConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prepaid_config_name; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf volume_threshold; //type: int32
        ydk::YLeaf accounting_method_list; //type: string
        ydk::YLeaf time_hold; //type: int32
        ydk::YLeaf author_method_list; //type: string
        ydk::YLeaf traffic_direction; //type: string
        ydk::YLeaf time_threshold; //type: int32
        ydk::YLeaf time_valid; //type: int32

}; // SubscriberAccounting::PrepaidConfigurations::PrepaidConfiguration


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_ACCOUNTING_CFG_ */

