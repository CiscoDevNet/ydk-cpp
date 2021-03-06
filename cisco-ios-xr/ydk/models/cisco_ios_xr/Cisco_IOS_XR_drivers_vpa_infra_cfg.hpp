#ifndef _CISCO_IOS_XR_DRIVERS_VPA_INFRA_CFG_
#define _CISCO_IOS_XR_DRIVERS_VPA_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_vpa_infra_cfg {

class HardwareModule : public ydk::Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

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

        class Logging; //type: HardwareModule::Logging
        class Nodes; //type: HardwareModule::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_vpa_infra_cfg::HardwareModule::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_drivers_vpa_infra_cfg::HardwareModule::Nodes> nodes;
        
}; // HardwareModule


class HardwareModule::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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


}; // HardwareModule::Logging


class HardwareModule::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: HardwareModule::Nodes::Node

        ydk::YList node;
        
}; // HardwareModule::Nodes


class HardwareModule::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf card_type; //type: HwModuleSpaPhysicalInterface
        ydk::YLeaf mode; //type: HwModuleSpaPhysicalMode
        ydk::YLeaf shutdown; //type: HwModuleShutdownPowerMode

}; // HardwareModule::Nodes::Node

class HwModuleSpaPhysicalMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cem;

        static int get_enum_value(const std::string & name) {
            if (name == "cem") return 1;
            return -1;
        }
};

class HwModuleShutdownPowerMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unpowered;
        static const ydk::Enum::YLeaf powered;

        static int get_enum_value(const std::string & name) {
            if (name == "unpowered") return 1;
            if (name == "powered") return 2;
            return -1;
        }
};

class HwModuleSpaPhysicalInterface : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf t3;
        static const ydk::Enum::YLeaf e3;
        static const ydk::Enum::YLeaf t1;
        static const ydk::Enum::YLeaf e1;
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

        static int get_enum_value(const std::string & name) {
            if (name == "t3") return 1;
            if (name == "e3") return 2;
            if (name == "t1") return 3;
            if (name == "e1") return 4;
            if (name == "sonet") return 5;
            if (name == "sdh") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_VPA_INFRA_CFG_ */

