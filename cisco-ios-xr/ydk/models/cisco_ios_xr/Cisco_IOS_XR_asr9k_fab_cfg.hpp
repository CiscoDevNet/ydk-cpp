#ifndef _CISCO_IOS_XR_ASR9K_FAB_CFG_
#define _CISCO_IOS_XR_ASR9K_FAB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_fab_cfg {

class FabVqiConfig : public ydk::Entity
{
    public:
        FabVqiConfig();
        ~FabVqiConfig();

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

        class Operates; //type: FabVqiConfig::Operates

        std::shared_ptr<Cisco_IOS_XR_asr9k_fab_cfg::FabVqiConfig::Operates> operates;
        
}; // FabVqiConfig


class FabVqiConfig::Operates : public ydk::Entity
{
    public:
        Operates();
        ~Operates();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Operate; //type: FabVqiConfig::Operates::Operate

        std::vector<std::shared_ptr<Cisco_IOS_XR_asr9k_fab_cfg::FabVqiConfig::Operates::Operate> > operate;
        
}; // FabVqiConfig::Operates


class FabVqiConfig::Operates::Operate : public ydk::Entity
{
    public:
        Operate();
        ~Operate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id1; //type: string
        ydk::YLeaf id1_xr; //type: int32
        ydk::YLeaf id2; //type: int32

}; // FabVqiConfig::Operates::Operate


}
}

#endif /* _CISCO_IOS_XR_ASR9K_FAB_CFG_ */

