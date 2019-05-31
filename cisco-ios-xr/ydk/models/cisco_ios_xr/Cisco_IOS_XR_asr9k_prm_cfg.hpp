#ifndef _CISCO_IOS_XR_ASR9K_PRM_CFG_
#define _CISCO_IOS_XR_ASR9K_PRM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_prm_cfg {

class HardwareModuleQosMode : public ydk::Entity
{
    public:
        HardwareModuleQosMode();
        ~HardwareModuleQosMode();

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

        class Nodes; //type: HardwareModuleQosMode::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleQosMode::Nodes> nodes;
        
}; // HardwareModuleQosMode


class HardwareModuleQosMode::Nodes : public ydk::Entity
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

        class Node; //type: HardwareModuleQosMode::Nodes::Node

        ydk::YList node;
        
}; // HardwareModuleQosMode::Nodes


class HardwareModuleQosMode::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf child_shaping_disable; //type: empty
        ydk::YLeaf lowburst_enable; //type: empty

}; // HardwareModuleQosMode::Nodes::Node

class HardwareModuleProcessor : public ydk::Entity
{
    public:
        HardwareModuleProcessor();
        ~HardwareModuleProcessor();

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

        class Nodes; //type: HardwareModuleProcessor::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleProcessor::Nodes> nodes;
        
}; // HardwareModuleProcessor


class HardwareModuleProcessor::Nodes : public ydk::Entity
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

        class Node; //type: HardwareModuleProcessor::Nodes::Node

        ydk::YList node;
        
}; // HardwareModuleProcessor::Nodes


class HardwareModuleProcessor::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf mode; //type: PrmProcessorConfig

}; // HardwareModuleProcessor::Nodes::Node

class HardwareModuleTcpMssAdjust : public ydk::Entity
{
    public:
        HardwareModuleTcpMssAdjust();
        ~HardwareModuleTcpMssAdjust();

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

        class Nodes; //type: HardwareModuleTcpMssAdjust::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes> nodes;
        
}; // HardwareModuleTcpMssAdjust


class HardwareModuleTcpMssAdjust::Nodes : public ydk::Entity
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

        class Node; //type: HardwareModuleTcpMssAdjust::Nodes::Node

        ydk::YList node;
        
}; // HardwareModuleTcpMssAdjust::Nodes


class HardwareModuleTcpMssAdjust::Nodes::Node : public ydk::Entity
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
        class Nps; //type: HardwareModuleTcpMssAdjust::Nodes::Node::Nps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust::Nodes::Node::Nps> nps;
        
}; // HardwareModuleTcpMssAdjust::Nodes::Node


class HardwareModuleTcpMssAdjust::Nodes::Node::Nps : public ydk::Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Np; //type: HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np

        ydk::YList np;
        
}; // HardwareModuleTcpMssAdjust::Nodes::Node::Nps


class HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np : public ydk::Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf np_id; //type: uint32
        ydk::YLeaf adjust_value; //type: uint32

}; // HardwareModuleTcpMssAdjust::Nodes::Node::Nps::Np

class HardwareModuleTcam : public ydk::Entity
{
    public:
        HardwareModuleTcam();
        ~HardwareModuleTcam();

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

        ydk::YLeaf global_profile; //type: PrmTcamProfile
        class Nodes; //type: HardwareModuleTcam::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcam::Nodes> nodes;
        
}; // HardwareModuleTcam


class HardwareModuleTcam::Nodes : public ydk::Entity
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

        class Node; //type: HardwareModuleTcam::Nodes::Node

        ydk::YList node;
        
}; // HardwareModuleTcam::Nodes


class HardwareModuleTcam::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf profile; //type: PrmTcamProfile

}; // HardwareModuleTcam::Nodes::Node

class HardwareModuleProfile : public ydk::Entity
{
    public:
        HardwareModuleProfile();
        ~HardwareModuleProfile();

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

        ydk::YLeaf feature; //type: AdminPrmConfigFeatureProfile
        ydk::YLeaf scale_active; //type: AdminPrmConfigScaleProfile
        ydk::YLeaf package_bundle; //type: AdminPrmConfigPackageBundle
        ydk::YLeaf feature_active; //type: AdminPrmConfigFeatureProfile
        ydk::YLeaf scale; //type: AdminPrmConfigScaleProfile
        class Nodes; //type: HardwareModuleProfile::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleProfile::Nodes> nodes;
        
}; // HardwareModuleProfile


class HardwareModuleProfile::Nodes : public ydk::Entity
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

        class Node; //type: HardwareModuleProfile::Nodes::Node

        ydk::YList node;
        
}; // HardwareModuleProfile::Nodes


class HardwareModuleProfile::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf tcam_partition; //type: AdminPrmConfigTcamPartProfile
        ydk::YLeaf internal_tcam_partition; //type: AdminPrmConfigInternalTcamPartProfile

}; // HardwareModuleProfile::Nodes::Node

class HardwareModuleEfd : public ydk::Entity
{
    public:
        HardwareModuleEfd();
        ~HardwareModuleEfd();

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

        class NodeAll; //type: HardwareModuleEfd::NodeAll
        class Nodes; //type: HardwareModuleEfd::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll> node_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes> nodes;
        
}; // HardwareModuleEfd


class HardwareModuleEfd::NodeAll : public ydk::Entity
{
    public:
        NodeAll();
        ~NodeAll();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mode; //type: Asr9kEfdMode
        class VlanPriorityMask; //type: HardwareModuleEfd::NodeAll::VlanPriorityMask
        class IpPrecedence; //type: HardwareModuleEfd::NodeAll::IpPrecedence
        class VlanCos; //type: HardwareModuleEfd::NodeAll::VlanCos
        class IpPriorityMask; //type: HardwareModuleEfd::NodeAll::IpPriorityMask
        class MplsPriorityMask; //type: HardwareModuleEfd::NodeAll::MplsPriorityMask
        class MplsExp; //type: HardwareModuleEfd::NodeAll::MplsExp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::VlanPriorityMask> vlan_priority_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::IpPrecedence> ip_precedence; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::VlanCos> vlan_cos; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::IpPriorityMask> ip_priority_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::MplsPriorityMask> mpls_priority_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::NodeAll::MplsExp> mpls_exp; // presence node
        
}; // HardwareModuleEfd::NodeAll


class HardwareModuleEfd::NodeAll::VlanPriorityMask : public ydk::Entity
{
    public:
        VlanPriorityMask();
        ~VlanPriorityMask();

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

        ydk::YLeaf prec0; //type: uint32
        ydk::YLeaf prec1; //type: uint32
        ydk::YLeaf prec2; //type: uint32
        ydk::YLeaf prec3; //type: uint32
        ydk::YLeaf prec4; //type: uint32
        ydk::YLeaf prec5; //type: uint32
        ydk::YLeaf prec6; //type: uint32
        ydk::YLeaf prec7; //type: uint32

}; // HardwareModuleEfd::NodeAll::VlanPriorityMask


class HardwareModuleEfd::NodeAll::IpPrecedence : public ydk::Entity
{
    public:
        IpPrecedence();
        ~IpPrecedence();

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

        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf operation_; //type: Asr9kEfdOperation

}; // HardwareModuleEfd::NodeAll::IpPrecedence


class HardwareModuleEfd::NodeAll::VlanCos : public ydk::Entity
{
    public:
        VlanCos();
        ~VlanCos();

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

        ydk::YLeaf cos; //type: uint32
        ydk::YLeaf operation_; //type: Asr9kEfdOperation

}; // HardwareModuleEfd::NodeAll::VlanCos


class HardwareModuleEfd::NodeAll::IpPriorityMask : public ydk::Entity
{
    public:
        IpPriorityMask();
        ~IpPriorityMask();

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

        ydk::YLeaf prec0; //type: uint32
        ydk::YLeaf prec1; //type: uint32
        ydk::YLeaf prec2; //type: uint32
        ydk::YLeaf prec3; //type: uint32
        ydk::YLeaf prec4; //type: uint32
        ydk::YLeaf prec5; //type: uint32
        ydk::YLeaf prec6; //type: uint32
        ydk::YLeaf prec7; //type: uint32

}; // HardwareModuleEfd::NodeAll::IpPriorityMask


class HardwareModuleEfd::NodeAll::MplsPriorityMask : public ydk::Entity
{
    public:
        MplsPriorityMask();
        ~MplsPriorityMask();

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

        ydk::YLeaf prec0; //type: uint32
        ydk::YLeaf prec1; //type: uint32
        ydk::YLeaf prec2; //type: uint32
        ydk::YLeaf prec3; //type: uint32
        ydk::YLeaf prec4; //type: uint32
        ydk::YLeaf prec5; //type: uint32
        ydk::YLeaf prec6; //type: uint32
        ydk::YLeaf prec7; //type: uint32

}; // HardwareModuleEfd::NodeAll::MplsPriorityMask


class HardwareModuleEfd::NodeAll::MplsExp : public ydk::Entity
{
    public:
        MplsExp();
        ~MplsExp();

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

        ydk::YLeaf exp; //type: uint32
        ydk::YLeaf operation_; //type: Asr9kEfdOperation

}; // HardwareModuleEfd::NodeAll::MplsExp


class HardwareModuleEfd::Nodes : public ydk::Entity
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

        class Node; //type: HardwareModuleEfd::Nodes::Node

        ydk::YList node;
        
}; // HardwareModuleEfd::Nodes


class HardwareModuleEfd::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf mode; //type: Asr9kEfdMode
        class VlanPriorityMask; //type: HardwareModuleEfd::Nodes::Node::VlanPriorityMask
        class IpPrecedence; //type: HardwareModuleEfd::Nodes::Node::IpPrecedence
        class VlanCos; //type: HardwareModuleEfd::Nodes::Node::VlanCos
        class IpPriorityMask; //type: HardwareModuleEfd::Nodes::Node::IpPriorityMask
        class MplsPriorityMask; //type: HardwareModuleEfd::Nodes::Node::MplsPriorityMask
        class MplsExp; //type: HardwareModuleEfd::Nodes::Node::MplsExp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::VlanPriorityMask> vlan_priority_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::IpPrecedence> ip_precedence; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::VlanCos> vlan_cos; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::IpPriorityMask> ip_priority_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::MplsPriorityMask> mpls_priority_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd::Nodes::Node::MplsExp> mpls_exp; // presence node
        
}; // HardwareModuleEfd::Nodes::Node


class HardwareModuleEfd::Nodes::Node::VlanPriorityMask : public ydk::Entity
{
    public:
        VlanPriorityMask();
        ~VlanPriorityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec0; //type: uint32
        ydk::YLeaf prec1; //type: uint32
        ydk::YLeaf prec2; //type: uint32
        ydk::YLeaf prec3; //type: uint32
        ydk::YLeaf prec4; //type: uint32
        ydk::YLeaf prec5; //type: uint32
        ydk::YLeaf prec6; //type: uint32
        ydk::YLeaf prec7; //type: uint32

}; // HardwareModuleEfd::Nodes::Node::VlanPriorityMask


class HardwareModuleEfd::Nodes::Node::IpPrecedence : public ydk::Entity
{
    public:
        IpPrecedence();
        ~IpPrecedence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf operation_; //type: Asr9kEfdOperation

}; // HardwareModuleEfd::Nodes::Node::IpPrecedence


class HardwareModuleEfd::Nodes::Node::VlanCos : public ydk::Entity
{
    public:
        VlanCos();
        ~VlanCos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos; //type: uint32
        ydk::YLeaf operation_; //type: Asr9kEfdOperation

}; // HardwareModuleEfd::Nodes::Node::VlanCos


class HardwareModuleEfd::Nodes::Node::IpPriorityMask : public ydk::Entity
{
    public:
        IpPriorityMask();
        ~IpPriorityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec0; //type: uint32
        ydk::YLeaf prec1; //type: uint32
        ydk::YLeaf prec2; //type: uint32
        ydk::YLeaf prec3; //type: uint32
        ydk::YLeaf prec4; //type: uint32
        ydk::YLeaf prec5; //type: uint32
        ydk::YLeaf prec6; //type: uint32
        ydk::YLeaf prec7; //type: uint32

}; // HardwareModuleEfd::Nodes::Node::IpPriorityMask


class HardwareModuleEfd::Nodes::Node::MplsPriorityMask : public ydk::Entity
{
    public:
        MplsPriorityMask();
        ~MplsPriorityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prec0; //type: uint32
        ydk::YLeaf prec1; //type: uint32
        ydk::YLeaf prec2; //type: uint32
        ydk::YLeaf prec3; //type: uint32
        ydk::YLeaf prec4; //type: uint32
        ydk::YLeaf prec5; //type: uint32
        ydk::YLeaf prec6; //type: uint32
        ydk::YLeaf prec7; //type: uint32

}; // HardwareModuleEfd::Nodes::Node::MplsPriorityMask


class HardwareModuleEfd::Nodes::Node::MplsExp : public ydk::Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp; //type: uint32
        ydk::YLeaf operation_; //type: Asr9kEfdOperation

}; // HardwareModuleEfd::Nodes::Node::MplsExp

class HardwareModuleAllQosMode : public ydk::Entity
{
    public:
        HardwareModuleAllQosMode();
        ~HardwareModuleAllQosMode();

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

        ydk::YLeaf per_priority_buffer_limit; //type: empty
        ydk::YLeaf ingress_queue; //type: empty
        ydk::YLeaf aggregate_bundle_mode; //type: empty
        ydk::YLeaf bundle_aggregate_policer_mode; //type: empty
        ydk::YLeaf wred_buffer_mode; //type: empty

}; // HardwareModuleAllQosMode

class AdminPrmConfigInternalTcamPartProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf to_default;
        static const ydk::Enum::YLeaf to_profile_se1;

};

class AdminPrmConfigPackageBundle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf services;

};

class AdminPrmConfigTcamPartProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf ods2_30_ods8_70;
        static const ydk::Enum::YLeaf ods2_40_ods8_60;
        static const ydk::Enum::YLeaf ods2_50_ods8_50;
        static const ydk::Enum::YLeaf ods2_70_ods8_30;

};

class AdminPrmConfigFeatureProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf l2;

};

class PrmProcessorConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mode_default;
        static const ydk::Enum::YLeaf mode_full;

};

class Asr9kEfdOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf less_than;
        static const ydk::Enum::YLeaf greater_than_or_equal;

};

class Asr9kEfdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf only_outer_encap;
        static const ydk::Enum::YLeaf include_inner_encap;

};

class AdminPrmConfigScaleProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf l2;
        static const ydk::Enum::YLeaf l3;
        static const ydk::Enum::YLeaf l3xl;
        static const ydk::Enum::YLeaf bng;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf sat;
        static const ydk::Enum::YLeaf sfp;

};

class PrmTcamProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf profile0;
        static const ydk::Enum::YLeaf profile1;
        static const ydk::Enum::YLeaf profile2;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_PRM_CFG_ */

