#ifndef _CISCO_IOS_XR_CONFIG_VALID_CCV_CFG_
#define _CISCO_IOS_XR_CONFIG_VALID_CCV_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_valid_ccv_cfg {

class Configurationvalidation : public ydk::Entity
{
    public:
        Configurationvalidation();
        ~Configurationvalidation();

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

        ydk::YLeaf enable; //type: empty
        class FailureTypeActions; //type: Configurationvalidation::FailureTypeActions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_config_valid_ccv_cfg::Configurationvalidation::FailureTypeActions> failure_type_actions;
        
}; // Configurationvalidation


class Configurationvalidation::FailureTypeActions : public ydk::Entity
{
    public:
        FailureTypeActions();
        ~FailureTypeActions();

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

        class FailureTypeAction; //type: Configurationvalidation::FailureTypeActions::FailureTypeAction

        ydk::YList failure_type_action;
        
}; // Configurationvalidation::FailureTypeActions


class Configurationvalidation::FailureTypeActions::FailureTypeAction : public ydk::Entity
{
    public:
        FailureTypeAction();
        ~FailureTypeAction();

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

        ydk::YLeaf failure; //type: Failure
        ydk::YLeaf action; //type: FailureAction

}; // Configurationvalidation::FailureTypeActions::FailureTypeAction

class Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unsupported;

};

class FailureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report;

};


}
}

#endif /* _CISCO_IOS_XR_CONFIG_VALID_CCV_CFG_ */

