#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_0_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_oper {

class PolicyManager : public ydk::Entity
{
    public:
        PolicyManager();
        ~PolicyManager();

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

        class Global; //type: PolicyManager::Global
        class Nodes; //type: PolicyManager::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Nodes> nodes;
        
}; // PolicyManager


class PolicyManager::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        class PolicyMapAppliedTypes; //type: PolicyManager::Global::PolicyMapAppliedTypes
        class TransientPolicyMapTargetsTypes; //type: PolicyManager::Global::TransientPolicyMapTargetsTypes
        class TransientPolicyMapAppliedTypes; //type: PolicyManager::Global::TransientPolicyMapAppliedTypes
        class TargetPolicyMapTypes; //type: PolicyManager::Global::TargetPolicyMapTypes
        class ClassMap; //type: PolicyManager::Global::ClassMap
        class PolicyMap; //type: PolicyManager::Global::PolicyMap
        class Summary; //type: PolicyManager::Global::Summary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes> policy_map_applied_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapTargetsTypes> transient_policy_map_targets_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TransientPolicyMapAppliedTypes> transient_policy_map_applied_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::TargetPolicyMapTypes> target_policy_map_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::ClassMap> class_map;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMap> policy_map;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::Summary> summary;
        
}; // PolicyManager::Global


class PolicyManager::Global::PolicyMapAppliedTypes : public ydk::Entity
{
    public:
        PolicyMapAppliedTypes();
        ~PolicyMapAppliedTypes();

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

        class PolicyMapAppliedType; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType

        ydk::YList policy_map_applied_type;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType : public ydk::Entity
{
    public:
        PolicyMapAppliedType();
        ~PolicyMapAppliedType();

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

        ydk::YLeaf type; //type: PolicymgrPolicyMap
        class IfNames; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames> if_names;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames : public ydk::Entity
{
    public:
        IfNames();
        ~IfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName

        ydk::YList if_name;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName : public ydk::Entity
{
    public:
        IfName();
        ~IfName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class Input; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input
        class Output; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output> output;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail> detail;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf parent_pmap_name; //type: string
        ydk::YLeaf pmap_type; //type: PolicyMapTypeEn
        ydk::YLeafList subscriber_grp; //type: list of  string
        class Pmaps; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps
        class PmapVarList; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::PmapVarList

        ydk::YList pmaps;
        ydk::YList pmap_var_list;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps : public ydk::Entity
{
    public:
        Pmaps();
        ~Pmaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMapBg; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg

        ydk::YList policy_map_bg;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg : public ydk::Entity
{
    public:
        PolicyMapBg();
        ~PolicyMapBg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: PolicyMapTypeEn
        ydk::YLeaf description; //type: string
        class PmapVarList; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList
        class EventInfop; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList> pmap_var_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop> event_infop;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList : public ydk::Entity
{
    public:
        PmapVarList();
        ~PmapVarList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PmapVarListArr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr

        ydk::YList pmap_var_list_arr;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr : public ydk::Entity
{
    public:
        PmapVarListArr();
        ~PmapVarListArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        class Val; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val> val;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val : public ydk::Entity
{
    public:
        Val();
        ~Val();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PlmgrVarTypeEn
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf uint8_val; //type: uint8
        ydk::YLeaf uint16_val; //type: uint16
        ydk::YLeaf uint32_val; //type: uint32
        ydk::YLeaf param_uint32_val; //type: uint32
        ydk::YLeaf dscp_val; //type: uint8
        ydk::YLeaf prec_val; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop : public ydk::Entity
{
    public:
        EventInfop();
        ~EventInfop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyEventInfoBg; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg

        ydk::YList policy_event_info_bg;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg : public ydk::Entity
{
    public:
        PolicyEventInfoBg();
        ~PolicyEventInfoBg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: PeventTypeEn
        ydk::YLeaf cond_eval; //type: PeventCondEvalEn
        class ClassInfop; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop> class_infop;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop : public ydk::Entity
{
    public:
        ClassInfop();
        ~ClassInfop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyClassInfoBg; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg

        ydk::YList policy_class_info_bg;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg : public ydk::Entity
{
    public:
        PolicyClassInfoBg();
        ~PolicyClassInfoBg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_class_hd; //type: uint32
        ydk::YLeaf seq; //type: uint32
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf ctype; //type: ClassMapTypeEn
        ydk::YLeaf num_actions; //type: uint16
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf exe_strat; //type: PclassExecStratEn
        class ClEncode; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode
        class ClmpP; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP
        class ActInfop; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode> cl_encode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP> clmp_p;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop> act_infop;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode : public ydk::Entity
{
    public:
        ClEncode();
        ~ClEncode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enc; //type: PolicyObjEncEn
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf hd; //type: uint64
        ydk::YLeaf idx; //type: uint8
        class InlineCmap; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap> inline_cmap;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap : public ydk::Entity
{
    public:
        InlineCmap();
        ~InlineCmap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: ClassMapModeEn
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf match_count; //type: uint32
        class MatchInfop; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop> match_infop;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop : public ydk::Entity
{
    public:
        MatchInfop();
        ~MatchInfop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassMatchInfoSt; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt

        ydk::YList class_match_info_st;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt : public ydk::Entity
{
    public:
        ClassMatchInfoSt();
        ~ClassMatchInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: uint32
        class MatchData; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData> match_data;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData : public ydk::Entity
{
    public:
        MatchData();
        ~MatchData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MatchTypeEn
        ydk::YLeaf mpls_top_eos; //type: uint8
        ydk::YLeaf fragment_type; //type: uint8
        ydk::YLeaf authen_status; //type: MatchAuthenStatusEn
        ydk::YLeaf mlp_negotiated; //type: MatchMlpNegotiatedEn
        class Ipv4Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public ydk::Entity
{
    public:
        Ipv4Dscp();
        ~Ipv4Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public ydk::Entity
{
    public:
        Ipv6Dscp();
        ~Ipv6Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public ydk::Entity
{
    public:
        Ipv4Prec();
        ~Ipv4Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public ydk::Entity
{
    public:
        Ipv6Prec();
        ~Ipv6Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public ydk::Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass : public ydk::Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup : public ydk::Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto : public ydk::Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4 : public ydk::Entity
{
    public:
        IcmpV4();
        ~IcmpV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf code; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6 : public ydk::Entity
{
    public:
        IcmpV6();
        ~IcmpV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf code; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen : public ydk::Entity
{
    public:
        Ipv4PacketLen();
        ~Ipv4PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen : public ydk::Entity
{
    public:
        Ipv6PacketLen();
        ~Ipv6PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen : public ydk::Entity
{
    public:
        PacketLen();
        ~PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag : public ydk::Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag : public ydk::Entity
{
    public:
        TcpFlag();
        ~TcpFlag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf match_any; //type: boolean

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type : public ydk::Entity
{
    public:
        Icmpv4Type();
        ~Icmpv4Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code : public ydk::Entity
{
    public:
        Icmpv4Code();
        ~Icmpv4Code();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type : public ydk::Entity
{
    public:
        Icmpv6Type();
        ~Icmpv6Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code : public ydk::Entity
{
    public:
        Icmpv6Code();
        ~Icmpv6Code();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp : public ydk::Entity
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

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp : public ydk::Entity
{
    public:
        MplsExpImp();
        ~MplsExpImp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl : public ydk::Entity
{
    public:
        MplsDispIpv4Acl();
        ~MplsDispIpv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl : public ydk::Entity
{
    public:
        MplsDispIpv6Acl();
        ~MplsDispIpv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel : public ydk::Entity
{
    public:
        MplsTopLabel();
        ~MplsTopLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint32RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray

        ydk::YList uint32_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray : public ydk::Entity
{
    public:
        Uint32RngArray();
        ~Uint32RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos : public ydk::Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Cos


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr : public ydk::Entity
{
    public:
        CosInr();
        ~CosInr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CosInr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei : public ydk::Entity
{
    public:
        Dei();
        ~Dei();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_value; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dei


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr : public ydk::Entity
{
    public:
        DeiInr();
        ~DeiInr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_value; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanIdArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray

        ydk::YList vlan_id_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray : public ydk::Entity
{
    public:
        VlanIdArray();
        ~VlanIdArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16
        ydk::YLeaf mask; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr : public ydk::Entity
{
    public:
        VlanInr();
        ~VlanInr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci : public ydk::Entity
{
    public:
        FrDlci();
        ~FrDlci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac : public ydk::Entity
{
    public:
        SrcMac();
        ~SrcMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac_addr; //type: list of  uint16
        ydk::YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac : public ydk::Entity
{
    public:
        DstMac();
        ~DstMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac_addr; //type: list of  uint16
        ydk::YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstMac


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp : public ydk::Entity
{
    public:
        AtmClp();
        ~AtmClp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe : public ydk::Entity
{
    public:
        FrDe();
        ~FrDe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FrDe


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl : public ydk::Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl : public ydk::Entity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl : public ydk::Entity
{
    public:
        EtherServiceAcl();
        ~EtherServiceAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId : public ydk::Entity
{
    public:
        AvailId();
        ~AvailId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AvailId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType : public ydk::Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::MediaType


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol : public ydk::Entity
{
    public:
        SubsProtocol();
        ~SubsProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis : public ydk::Entity
{
    public:
        Dnis();
        ~Dnis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Dnis


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex : public ydk::Entity
{
    public:
        DnisRegex();
        ~DnisRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray

        ydk::YList domain_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray : public ydk::Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf format_name; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex : public ydk::Entity
{
    public:
        DomainRegex();
        ~DomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomainArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray

        ydk::YList domain_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray : public ydk::Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf format_name; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort : public ydk::Entity
{
    public:
        NasPort();
        ~NasPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NasPortArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray

        ydk::YList nas_port_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray : public ydk::Entity
{
    public:
        NasPortArray();
        ~NasPortArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_id; //type: MatchNasPortSubIdEn
        ydk::YLeaf operator_; //type: MatchLogicalOperatorEn
        ydk::YLeaf value_; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName : public ydk::Entity
{
    public:
        ServiceName();
        ~ServiceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex : public ydk::Entity
{
    public:
        ServiceNameRegex();
        ~ServiceNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4 : public ydk::Entity
{
    public:
        SrcAddrIpv4();
        ~SrcAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray

        ydk::YList ipv4_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray : public ydk::Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4 : public ydk::Entity
{
    public:
        DstAddrIpv4();
        ~DstAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray

        ydk::YList ipv4_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray : public ydk::Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6 : public ydk::Entity
{
    public:
        SrcAddrIpv6();
        ~SrcAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray

        ydk::YList ipv6_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray : public ydk::Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6 : public ydk::Entity
{
    public:
        DstAddrIpv6();
        ~DstAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray

        ydk::YList ipv6_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray : public ydk::Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf mask; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac : public ydk::Entity
{
    public:
        SrcAddrMac();
        ~SrcAddrMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacAddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray

        ydk::YList mac_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray : public ydk::Entity
{
    public:
        MacAddrArray();
        ~MacAddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac_addr; //type: list of  uint16
        ydk::YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Timer


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp : public ydk::Entity
{
    public:
        TimerRegexp();
        ~TimerRegexp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName : public ydk::Entity
{
    public:
        TunnelName();
        ~TunnelName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex : public ydk::Entity
{
    public:
        TunnelNameRegex();
        ~TunnelNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName : public ydk::Entity
{
    public:
        UserName();
        ~UserName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserName


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex : public ydk::Entity
{
    public:
        UserNameRegex();
        ~UserNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername : public ydk::Entity
{
    public:
        AuthUsername();
        ~AuthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex : public ydk::Entity
{
    public:
        AuthUsernameRegex();
        ~AuthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername : public ydk::Entity
{
    public:
        UnauthUsername();
        ~UnauthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex : public ydk::Entity
{
    public:
        UnauthUsernameRegex();
        ~UnauthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain : public ydk::Entity
{
    public:
        AuthDomain();
        ~AuthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex : public ydk::Entity
{
    public:
        AuthDomainRegex();
        ~AuthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain : public ydk::Entity
{
    public:
        UnauthDomain();
        ~UnauthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex : public ydk::Entity
{
    public:
        UnauthDomainRegex();
        ~UnauthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId : public ydk::Entity
{
    public:
        VendorId();
        ~VendorId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex : public ydk::Entity
{
    public:
        VendorIdRegex();
        ~VendorIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface : public ydk::Entity
{
    public:
        InputInterface();
        ~InputInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl : public ydk::Entity
{
    public:
        InputIntfhdl();
        ~InputIntfhdl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint64_array; //type: list of  uint64

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype : public ydk::Entity
{
    public:
        Ethertype();
        ~Ethertype();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData : public ydk::Entity
{
    public:
        FlowKeyData();
        ~FlowKeyData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_count; //type: uint16
        ydk::YLeaf idle_timeout; //type: uint16
        class FlowKeys; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys> flow_keys;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys : public ydk::Entity
{
    public:
        FlowKeys();
        ~FlowKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keys; //type: string
        ydk::YLeaf num; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId : public ydk::Entity
{
    public:
        DhcpClientId();
        ~DhcpClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex : public ydk::Entity
{
    public:
        DhcpClientIdRegex();
        ~DhcpClientIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex : public ydk::Entity
{
    public:
        CircuitIdRegex();
        ~CircuitIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex : public ydk::Entity
{
    public:
        RemoteIdRegex();
        ~RemoteIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort : public ydk::Entity
{
    public:
        SrcPort();
        ~SrcPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort : public ydk::Entity
{
    public:
        DstPort();
        ~DstPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint16RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray

        ydk::YList uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray : public ydk::Entity
{
    public:
        Uint16RngArray();
        ~Uint16RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP : public ydk::Entity
{
    public:
        ClmpP();
        ~ClmpP();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassMapBg; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg

        ydk::YList class_map_bg;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg : public ydk::Entity
{
    public:
        ClassMapBg();
        ~ClassMapBg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: ClassMapTypeEn
        ydk::YLeaf mode; //type: ClassMapModeEn
        ydk::YLeaf description; //type: string
        class MatchInfop; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop> match_infop;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop : public ydk::Entity
{
    public:
        MatchInfop();
        ~MatchInfop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassMatchInfoSt; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt

        ydk::YList class_match_info_st;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt : public ydk::Entity
{
    public:
        ClassMatchInfoSt();
        ~ClassMatchInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: uint32
        class MatchData; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData> match_data;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData : public ydk::Entity
{
    public:
        MatchData();
        ~MatchData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MatchTypeEn
        ydk::YLeaf mpls_top_eos; //type: uint8
        ydk::YLeaf fragment_type; //type: uint8
        ydk::YLeaf authen_status; //type: MatchAuthenStatusEn
        ydk::YLeaf mlp_negotiated; //type: MatchMlpNegotiatedEn
        class Ipv4Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public ydk::Entity
{
    public:
        Ipv4Dscp();
        ~Ipv4Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public ydk::Entity
{
    public:
        Ipv6Dscp();
        ~Ipv6Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Uint8RngArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray

        ydk::YList uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray : public ydk::Entity
{
    public:
        Uint8RngArray();
        ~Uint8RngArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint8
        ydk::YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8RngArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public ydk::Entity
{
    public:
        Ipv4Prec();
        ~Ipv4Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public ydk::Entity
{
    public:
        Ipv6Prec();
        ~Ipv6Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public ydk::Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec

class MatchTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_type_none;
        static const ydk::Enum::YLeaf match_type_ipv4_dscp;
        static const ydk::Enum::YLeaf match_type_ipv4_prec;
        static const ydk::Enum::YLeaf match_type_ipv6_dscp;
        static const ydk::Enum::YLeaf match_type_packet_length;
        static const ydk::Enum::YLeaf match_type_ipv4_packet_length;
        static const ydk::Enum::YLeaf match_type_ipv6_packet_length;
        static const ydk::Enum::YLeaf match_type_flow_tag;
        static const ydk::Enum::YLeaf match_type_icmpv4_type;
        static const ydk::Enum::YLeaf match_type_icmpv4_code;
        static const ydk::Enum::YLeaf match_type_icmpv6_type;
        static const ydk::Enum::YLeaf match_type_icmpv6_code;
        static const ydk::Enum::YLeaf match_type_ipv6_prec;
        static const ydk::Enum::YLeaf match_type_fragment_type;
        static const ydk::Enum::YLeaf match_type_tcp_flag;
        static const ydk::Enum::YLeaf match_type_dscp;
        static const ydk::Enum::YLeaf match_type_prec;
        static const ydk::Enum::YLeaf match_type_proto;
        static const ydk::Enum::YLeaf match_type_proto_icmpv4;
        static const ydk::Enum::YLeaf match_type_proto_icmpv6;
        static const ydk::Enum::YLeaf match_type_mpls_exp_top;
        static const ydk::Enum::YLeaf match_type_mpls_exp_imp;
        static const ydk::Enum::YLeaf match_type_mpls_disp_ipv4_acl;
        static const ydk::Enum::YLeaf match_type_mpls_disp_ipv6_acl;
        static const ydk::Enum::YLeaf match_type_mpls_topmost_eos;
        static const ydk::Enum::YLeaf match_type_mpls_topmost_label;
        static const ydk::Enum::YLeaf match_type_cos;
        static const ydk::Enum::YLeaf match_type_cos_inner;
        static const ydk::Enum::YLeaf match_type_dei;
        static const ydk::Enum::YLeaf match_type_dei_inner;
        static const ydk::Enum::YLeaf match_type_vlan;
        static const ydk::Enum::YLeaf match_type_vlan_inner;
        static const ydk::Enum::YLeaf match_type_fr_dlci;
        static const ydk::Enum::YLeaf match_type_src_mac;
        static const ydk::Enum::YLeaf match_type_dst_mac;
        static const ydk::Enum::YLeaf match_type_atm_oam;
        static const ydk::Enum::YLeaf match_type_atm_clp;
        static const ydk::Enum::YLeaf match_type_fr_de;
        static const ydk::Enum::YLeaf match_type_qos_grp;
        static const ydk::Enum::YLeaf match_type_traffic_class;
        static const ydk::Enum::YLeaf match_type_disc_cls;
        static const ydk::Enum::YLeaf match_type_vpls_known;
        static const ydk::Enum::YLeaf match_type_vpls_unknown;
        static const ydk::Enum::YLeaf match_type_vpls_mcast;
        static const ydk::Enum::YLeaf match_type_vpls_bcast;
        static const ydk::Enum::YLeaf match_type_vpls_control;
        static const ydk::Enum::YLeaf match_type_ipv4_acl;
        static const ydk::Enum::YLeaf match_type_ipv6_acl;
        static const ydk::Enum::YLeaf match_type_flow_key;
        static const ydk::Enum::YLeaf match_type_avail_id;
        static const ydk::Enum::YLeaf match_type_authen_status;
        static const ydk::Enum::YLeaf match_type_media;
        static const ydk::Enum::YLeaf match_type_mlp_negotiated;
        static const ydk::Enum::YLeaf match_type_subs_protocol;
        static const ydk::Enum::YLeaf match_type_dnis;
        static const ydk::Enum::YLeaf match_type_dnis_regexp;
        static const ydk::Enum::YLeaf match_type_domain;
        static const ydk::Enum::YLeaf match_type_domain_regexp;
        static const ydk::Enum::YLeaf match_type_nas_port;
        static const ydk::Enum::YLeaf match_type_service_name;
        static const ydk::Enum::YLeaf match_type_service_name_regexp;
        static const ydk::Enum::YLeaf match_type_src_addr_ipv4;
        static const ydk::Enum::YLeaf match_type_dst_addr_ipv4;
        static const ydk::Enum::YLeaf match_type_src_addr_ipv6;
        static const ydk::Enum::YLeaf match_type_dst_addr_ipv6;
        static const ydk::Enum::YLeaf match_type_src_addr_mac;
        static const ydk::Enum::YLeaf match_type_src_port;
        static const ydk::Enum::YLeaf match_type_dst_port;
        static const ydk::Enum::YLeaf match_type_timer;
        static const ydk::Enum::YLeaf match_type_timer_regexp;
        static const ydk::Enum::YLeaf match_type_tunnel_name;
        static const ydk::Enum::YLeaf match_type_tunnel_name_regexp;
        static const ydk::Enum::YLeaf match_type_user_name;
        static const ydk::Enum::YLeaf match_type_user_name_regexp;
        static const ydk::Enum::YLeaf match_type_auth_user_name;
        static const ydk::Enum::YLeaf match_type_auth_user_name_regexp;
        static const ydk::Enum::YLeaf match_type_unauth_user_name;
        static const ydk::Enum::YLeaf match_type_unauth_user_name_regexp;
        static const ydk::Enum::YLeaf match_type_no_user_name;
        static const ydk::Enum::YLeaf match_type_auth_domain;
        static const ydk::Enum::YLeaf match_type_auth_domain_regexp;
        static const ydk::Enum::YLeaf match_type_unauth_domain;
        static const ydk::Enum::YLeaf match_type_unauth_domain_regexp;
        static const ydk::Enum::YLeaf match_type_vendor_id;
        static const ydk::Enum::YLeaf match_type_vendor_id_regexp;
        static const ydk::Enum::YLeaf match_type_access_interface;
        static const ydk::Enum::YLeaf match_type_input_interface;
        static const ydk::Enum::YLeaf match_type_input_interface_hdl;
        static const ydk::Enum::YLeaf match_type_ether_type;
        static const ydk::Enum::YLeaf match_type_dhcp_client_id;
        static const ydk::Enum::YLeaf match_type_dhcp_client_id_regexp;
        static const ydk::Enum::YLeaf match_type_circuit_id;
        static const ydk::Enum::YLeaf match_type_circuit_id_regexp;
        static const ydk::Enum::YLeaf match_type_remote_id;
        static const ydk::Enum::YLeaf match_type_remote_id_regexp;
        static const ydk::Enum::YLeaf match_type_cac_admit_local;
        static const ydk::Enum::YLeaf match_type_cac_unadmit_local;
        static const ydk::Enum::YLeaf match_type_any_internal;
        static const ydk::Enum::YLeaf match_type_ethernet_service_s_acl;
        static const ydk::Enum::YLeaf match_type_ptrs;
        static const ydk::Enum::YLeaf match_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-type-none") return 0;
            if (name == "match-type-ipv4-dscp") return 1;
            if (name == "match-type-ipv4-prec") return 2;
            if (name == "match-type-ipv6-dscp") return 3;
            if (name == "match-type-packet-length") return 4;
            if (name == "match-type-ipv4-packet-length") return 5;
            if (name == "match-type-ipv6-packet-length") return 6;
            if (name == "match-type-flow-tag") return 7;
            if (name == "match-type-icmpv4-type") return 8;
            if (name == "match-type-icmpv4-code") return 9;
            if (name == "match-type-icmpv6-type") return 10;
            if (name == "match-type-icmpv6-code") return 11;
            if (name == "match-type-ipv6-prec") return 12;
            if (name == "match-type-fragment-type") return 13;
            if (name == "match-type-tcp-flag") return 14;
            if (name == "match-type-dscp") return 15;
            if (name == "match-type-prec") return 16;
            if (name == "match-type-proto") return 17;
            if (name == "match-type-proto-icmpv4") return 18;
            if (name == "match-type-proto-icmpv6") return 19;
            if (name == "match-type-mpls-exp-top") return 20;
            if (name == "match-type-mpls-exp-imp") return 21;
            if (name == "match-type-mpls-disp-ipv4-acl") return 22;
            if (name == "match-type-mpls-disp-ipv6-acl") return 23;
            if (name == "match-type-mpls-topmost-eos") return 24;
            if (name == "match-type-mpls-topmost-label") return 25;
            if (name == "match-type-cos") return 26;
            if (name == "match-type-cos-inner") return 27;
            if (name == "match-type-dei") return 28;
            if (name == "match-type-dei-inner") return 29;
            if (name == "match-type-vlan") return 30;
            if (name == "match-type-vlan-inner") return 31;
            if (name == "match-type-fr-dlci") return 32;
            if (name == "match-type-src-mac") return 33;
            if (name == "match-type-dst-mac") return 34;
            if (name == "match-type-atm-oam") return 35;
            if (name == "match-type-atm-clp") return 36;
            if (name == "match-type-fr-de") return 37;
            if (name == "match-type-qos-grp") return 38;
            if (name == "match-type-traffic-class") return 39;
            if (name == "match-type-disc-cls") return 40;
            if (name == "match-type-vpls-known") return 41;
            if (name == "match-type-vpls-unknown") return 42;
            if (name == "match-type-vpls-mcast") return 43;
            if (name == "match-type-vpls-bcast") return 44;
            if (name == "match-type-vpls-control") return 45;
            if (name == "match-type-ipv4-acl") return 46;
            if (name == "match-type-ipv6-acl") return 47;
            if (name == "match-type-flow-key") return 48;
            if (name == "match-type-avail-id") return 49;
            if (name == "match-type-authen-status") return 50;
            if (name == "match-type-media") return 51;
            if (name == "match-type-mlp-negotiated") return 52;
            if (name == "match-type-subs-protocol") return 53;
            if (name == "match-type-dnis") return 54;
            if (name == "match-type-dnis-regexp") return 55;
            if (name == "match-type-domain") return 56;
            if (name == "match-type-domain-regexp") return 57;
            if (name == "match-type-nas-port") return 58;
            if (name == "match-type-service-name") return 59;
            if (name == "match-type-service-name-regexp") return 60;
            if (name == "match-type-src-addr-ipv4") return 61;
            if (name == "match-type-dst-addr-ipv4") return 62;
            if (name == "match-type-src-addr-ipv6") return 63;
            if (name == "match-type-dst-addr-ipv6") return 64;
            if (name == "match-type-src-addr-mac") return 65;
            if (name == "match-type-src-port") return 66;
            if (name == "match-type-dst-port") return 67;
            if (name == "match-type-timer") return 68;
            if (name == "match-type-timer-regexp") return 69;
            if (name == "match-type-tunnel-name") return 70;
            if (name == "match-type-tunnel-name-regexp") return 71;
            if (name == "match-type-user-name") return 72;
            if (name == "match-type-user-name-regexp") return 73;
            if (name == "match-type-auth-user-name") return 74;
            if (name == "match-type-auth-user-name-regexp") return 75;
            if (name == "match-type-unauth-user-name") return 76;
            if (name == "match-type-unauth-user-name-regexp") return 77;
            if (name == "match-type-no-user-name") return 78;
            if (name == "match-type-auth-domain") return 79;
            if (name == "match-type-auth-domain-regexp") return 80;
            if (name == "match-type-unauth-domain") return 81;
            if (name == "match-type-unauth-domain-regexp") return 82;
            if (name == "match-type-vendor-id") return 83;
            if (name == "match-type-vendor-id-regexp") return 84;
            if (name == "match-type-access-interface") return 85;
            if (name == "match-type-input-interface") return 86;
            if (name == "match-type-input-interface-hdl") return 87;
            if (name == "match-type-ether-type") return 88;
            if (name == "match-type-dhcp-client-id") return 89;
            if (name == "match-type-dhcp-client-id-regexp") return 90;
            if (name == "match-type-circuit-id") return 91;
            if (name == "match-type-circuit-id-regexp") return 92;
            if (name == "match-type-remote-id") return 93;
            if (name == "match-type-remote-id-regexp") return 94;
            if (name == "match-type-cac-admit-local") return 95;
            if (name == "match-type-cac-unadmit-local") return 96;
            if (name == "match-type-any-internal") return 97;
            if (name == "match-type-ethernet-service-s-acl") return 98;
            if (name == "match-type-ptrs") return 99;
            if (name == "match-type-max") return 100;
            return -1;
        }
};

class PlmgrVarTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plmgr_var_type_class_name;
        static const ydk::Enum::YLeaf plmgr_var_type_uint8;
        static const ydk::Enum::YLeaf plmgr_var_type_uint16;
        static const ydk::Enum::YLeaf plmgr_var_type_uint32;
        static const ydk::Enum::YLeaf plmgr_var_type_param_uint32;
        static const ydk::Enum::YLeaf plmgr_var_type_dscp;
        static const ydk::Enum::YLeaf plmgr_var_type_prec;
        static const ydk::Enum::YLeaf plmgr_var_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "plmgr-var-type-class-name") return 0;
            if (name == "plmgr-var-type-uint8") return 1;
            if (name == "plmgr-var-type-uint16") return 2;
            if (name == "plmgr-var-type-uint32") return 3;
            if (name == "plmgr-var-type-param-uint32") return 4;
            if (name == "plmgr-var-type-dscp") return 5;
            if (name == "plmgr-var-type-prec") return 6;
            if (name == "plmgr-var-type-max") return 7;
            return -1;
        }
};

class CacFlowActnTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cac_flow_actn_type_local;
        static const ydk::Enum::YLeaf cac_flow_actn_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "cac-flow-actn-type-local") return 0;
            if (name == "cac-flow-actn-type-max") return 1;
            return -1;
        }
};

class PolicyActionEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_action_none;
        static const ydk::Enum::YLeaf policy_action_unspecified;
        static const ydk::Enum::YLeaf policy_action_mark;
        static const ydk::Enum::YLeaf policy_action_mark2;
        static const ydk::Enum::YLeaf policy_action_wred;
        static const ydk::Enum::YLeaf policy_action_encap_seq;
        static const ydk::Enum::YLeaf policy_action_priority;
        static const ydk::Enum::YLeaf policy_action_iphc;
        static const ydk::Enum::YLeaf policy_action_bw_remaining;
        static const ydk::Enum::YLeaf policy_action_min_bw;
        static const ydk::Enum::YLeaf policy_action_authenticate_aaa;
        static const ydk::Enum::YLeaf policy_action_collect_id;
        static const ydk::Enum::YLeaf policy_action_disconnect;
        static const ydk::Enum::YLeaf policy_action_set_timer;
        static const ydk::Enum::YLeaf policy_action_stop_timer;
        static const ydk::Enum::YLeaf policy_action_query_ancp;
        static const ydk::Enum::YLeaf policy_action_accounting_aaa_list;
        static const ydk::Enum::YLeaf policy_action_prepaid_config;
        static const ydk::Enum::YLeaf policy_action_timeout_idle;
        static const ydk::Enum::YLeaf policy_action_proxy_aaa;
        static const ydk::Enum::YLeaf policy_action_template_activate;
        static const ydk::Enum::YLeaf policy_action_template_deactivate;
        static const ydk::Enum::YLeaf policy_action_decode_identifier;
        static const ydk::Enum::YLeaf policy_action_q_limit;
        static const ydk::Enum::YLeaf policy_action_authorize_id;
        static const ydk::Enum::YLeaf policy_action_accounting_event_aaa_list;
        static const ydk::Enum::YLeaf policy_action_afmon_react;
        static const ydk::Enum::YLeaf policy_action_httpr;
        static const ydk::Enum::YLeaf policy_action_pbr_transmit;
        static const ydk::Enum::YLeaf policy_action_pbr_drop;
        static const ydk::Enum::YLeaf policy_action_punt;
        static const ydk::Enum::YLeaf policy_action_copy;
        static const ydk::Enum::YLeaf policy_action_sfrag;
        static const ydk::Enum::YLeaf policy_action_monitor;
        static const ydk::Enum::YLeaf policy_action_redirect;
        static const ydk::Enum::YLeaf policy_action_ipv4_nh;
        static const ydk::Enum::YLeaf policy_action_ipv6_nh;
        static const ydk::Enum::YLeaf policy_action_vlan_pop;
        static const ydk::Enum::YLeaf policy_action_pbr_next_hop;
        static const ydk::Enum::YLeaf policy_action_decap_gre;
        static const ydk::Enum::YLeaf policy_action_output_interface;
        static const ydk::Enum::YLeaf policy_action_service_function_path;
        static const ydk::Enum::YLeaf policy_action_ptrs;
        static const ydk::Enum::YLeaf policy_action_police;
        static const ydk::Enum::YLeaf policy_action_shape;
        static const ydk::Enum::YLeaf policy_action_serv_pol;
        static const ydk::Enum::YLeaf policy_action_cac;
        static const ydk::Enum::YLeaf policy_action_afmon_flow_parm;
        static const ydk::Enum::YLeaf policy_action_afmon_ipcbr_metric;
        static const ydk::Enum::YLeaf policy_action_afmon_rtp_metric;
        static const ydk::Enum::YLeaf policy_action_afmon_rtp_mmr_metric;
        static const ydk::Enum::YLeaf policy_action_afmon_rtp_j2k_metric;
        static const ydk::Enum::YLeaf policy_action_afmon_rtp_voice_metric;
        static const ydk::Enum::YLeaf policy_action_afmon_mdi_metric;
        static const ydk::Enum::YLeaf policy_action_afmon_mdi_rtp_metric;
        static const ydk::Enum::YLeaf policy_action_afmon_fmm;
        static const ydk::Enum::YLeaf policy_action_pfc;
        static const ydk::Enum::YLeaf policy_action_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-action-none") return 0;
            if (name == "policy-action-unspecified") return 1;
            if (name == "policy-action-mark") return 2;
            if (name == "policy-action-mark2") return 3;
            if (name == "policy-action-wred") return 4;
            if (name == "policy-action-encap-seq") return 5;
            if (name == "policy-action-priority") return 6;
            if (name == "policy-action-iphc") return 7;
            if (name == "policy-action-bw-remaining") return 8;
            if (name == "policy-action-min-bw") return 9;
            if (name == "policy-action-authenticate-aaa") return 10;
            if (name == "policy-action-collect-id") return 11;
            if (name == "policy-action-disconnect") return 12;
            if (name == "policy-action-set-timer") return 13;
            if (name == "policy-action-stop-timer") return 14;
            if (name == "policy-action-query-ancp") return 15;
            if (name == "policy-action-accounting-aaa-list") return 16;
            if (name == "policy-action-prepaid-config") return 17;
            if (name == "policy-action-timeout-idle") return 18;
            if (name == "policy-action-proxy-aaa") return 19;
            if (name == "policy-action-template-activate") return 20;
            if (name == "policy-action-template-deactivate") return 21;
            if (name == "policy-action-decode-identifier") return 22;
            if (name == "policy-action-q-limit") return 23;
            if (name == "policy-action-authorize-id") return 24;
            if (name == "policy-action-accounting-event-aaa-list") return 25;
            if (name == "policy-action-afmon-react") return 26;
            if (name == "policy-action-httpr") return 27;
            if (name == "policy-action-pbr-transmit") return 28;
            if (name == "policy-action-pbr-drop") return 29;
            if (name == "policy-action-punt") return 30;
            if (name == "policy-action-copy") return 31;
            if (name == "policy-action-sfrag") return 32;
            if (name == "policy-action-monitor") return 33;
            if (name == "policy-action-redirect") return 34;
            if (name == "policy-action-ipv4-nh") return 35;
            if (name == "policy-action-ipv6-nh") return 36;
            if (name == "policy-action-vlan-pop") return 37;
            if (name == "policy-action-pbr-next-hop") return 38;
            if (name == "policy-action-decap-gre") return 39;
            if (name == "policy-action-output-interface") return 40;
            if (name == "policy-action-service-function-path") return 41;
            if (name == "policy-action-ptrs") return 42;
            if (name == "policy-action-police") return 43;
            if (name == "policy-action-shape") return 44;
            if (name == "policy-action-serv-pol") return 45;
            if (name == "policy-action-cac") return 46;
            if (name == "policy-action-afmon-flow-parm") return 47;
            if (name == "policy-action-afmon-ipcbr-metric") return 48;
            if (name == "policy-action-afmon-rtp-metric") return 49;
            if (name == "policy-action-afmon-rtp-mmr-metric") return 50;
            if (name == "policy-action-afmon-rtp-j2k-metric") return 51;
            if (name == "policy-action-afmon-rtp-voice-metric") return 52;
            if (name == "policy-action-afmon-mdi-metric") return 53;
            if (name == "policy-action-afmon-mdi-rtp-metric") return 54;
            if (name == "policy-action-afmon-fmm") return 55;
            if (name == "policy-action-pfc") return 56;
            if (name == "policy-action-max") return 57;
            return -1;
        }
};

class PlmgrApplnTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf pbr;
        static const ydk::Enum::YLeaf subscriber_control;
        static const ydk::Enum::YLeaf accounting;
        static const ydk::Enum::YLeaf traffic;
        static const ydk::Enum::YLeaf performance_traffic;

        static int get_enum_value(const std::string & name) {
            if (name == "qos") return 1;
            if (name == "pbr") return 2;
            if (name == "subscriber-control") return 3;
            if (name == "accounting") return 4;
            if (name == "traffic") return 5;
            if (name == "performance-traffic") return 6;
            return -1;
        }
};

class AfmonRtpClockRateTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_rtp_cr_invalid;
        static const ydk::Enum::YLeaf afmon_rtp_cr_8k;
        static const ydk::Enum::YLeaf afmon_rtp_cr_16k;
        static const ydk::Enum::YLeaf afmon_rtp_cr_11025;
        static const ydk::Enum::YLeaf afmon_rtp_cr_22050;
        static const ydk::Enum::YLeaf afmon_rtp_cr_44100;
        static const ydk::Enum::YLeaf afmon_rtp_cr_48k;
        static const ydk::Enum::YLeaf afmon_rtp_cr_90k;
        static const ydk::Enum::YLeaf afmon_rtp_cr_27m;
        static const ydk::Enum::YLeaf afmon_rtp_cr_148500k;
        static const ydk::Enum::YLeaf afmon_rtp_cr_148351k;
        static const ydk::Enum::YLeaf afmon_rtp_cr_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-rtp-cr-invalid") return 0;
            if (name == "afmon-rtp-cr-8k") return 1;
            if (name == "afmon-rtp-cr-16k") return 2;
            if (name == "afmon-rtp-cr-11025") return 3;
            if (name == "afmon-rtp-cr-22050") return 4;
            if (name == "afmon-rtp-cr-44100") return 5;
            if (name == "afmon-rtp-cr-48k") return 6;
            if (name == "afmon-rtp-cr-90k") return 7;
            if (name == "afmon-rtp-cr-27m") return 8;
            if (name == "afmon-rtp-cr-148500k") return 9;
            if (name == "afmon-rtp-cr-148351k") return 10;
            if (name == "afmon-rtp-cr-max") return 11;
            return -1;
        }
};

class AfmonFlowParmTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_flow_parm_invalid;
        static const ydk::Enum::YLeaf afmon_flow_parm_max_mon_flow_s;
        static const ydk::Enum::YLeaf afmon_flow_parm_mon_interval;
        static const ydk::Enum::YLeaf afmon_flow_parm_intvl_hist;
        static const ydk::Enum::YLeaf afmon_flow_parm_flow_timeout;
        static const ydk::Enum::YLeaf afmon_flow_parm_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-flow-parm-invalid") return 0;
            if (name == "afmon-flow-parm-max-mon-flow-s") return 1;
            if (name == "afmon-flow-parm-mon-interval") return 2;
            if (name == "afmon-flow-parm-intvl-hist") return 3;
            if (name == "afmon-flow-parm-flow-timeout") return 4;
            if (name == "afmon-flow-parm-max") return 5;
            return -1;
        }
};

class MatchNoUsernameEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_no_user_name_unspecified;
        static const ydk::Enum::YLeaf match_no_user_name;
        static const ydk::Enum::YLeaf match_user_name;
        static const ydk::Enum::YLeaf match_no_user_name_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-no-user-name-unspecified") return 0;
            if (name == "match-no-user-name") return 1;
            if (name == "match-user-name") return 2;
            if (name == "match-no-user-name-max") return 3;
            return -1;
        }
};

class DpssSnidTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dpss_snid_invalid;
        static const ydk::Enum::YLeaf dpss_snid_index;
        static const ydk::Enum::YLeaf dpss_snid_name;
        static const ydk::Enum::YLeaf dpss_snid_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "dpss-snid-invalid") return 0;
            if (name == "dpss-snid-index") return 1;
            if (name == "dpss-snid-name") return 2;
            if (name == "dpss-snid-type-max") return 3;
            return -1;
        }
};

class MarkTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mark_type_none;
        static const ydk::Enum::YLeaf mark_type_dscp;
        static const ydk::Enum::YLeaf mark_type_prec;
        static const ydk::Enum::YLeaf mark_type_mpls_exp_topmost;
        static const ydk::Enum::YLeaf mark_type_mpls_exp_imposition;
        static const ydk::Enum::YLeaf mark_type_qos_group;
        static const ydk::Enum::YLeaf mark_type_discard_class;
        static const ydk::Enum::YLeaf mark_type_cos;
        static const ydk::Enum::YLeaf mark_type_cos_inner;
        static const ydk::Enum::YLeaf mark_type_srp_priority;
        static const ydk::Enum::YLeaf mark_type_atm_clp;
        static const ydk::Enum::YLeaf mark_type_fr_de;
        static const ydk::Enum::YLeaf mark_type_dscp_tunnel;
        static const ydk::Enum::YLeaf mark_type_prec_tunnel;
        static const ydk::Enum::YLeaf mark_type_dei;
        static const ydk::Enum::YLeaf mark_type_dei_imposition;
        static const ydk::Enum::YLeaf mark_type_forward_class;
        static const ydk::Enum::YLeaf mark_type_df;
        static const ydk::Enum::YLeaf mark_type_traffic_class;
        static const ydk::Enum::YLeaf mark_type_src_mac;
        static const ydk::Enum::YLeaf mark_type_dst_mac;
        static const ydk::Enum::YLeaf mark_type_ipv4_src_addr;
        static const ydk::Enum::YLeaf mark_type_ipv4_dst_addr;
        static const ydk::Enum::YLeaf mark_type_vlan_id;
        static const ydk::Enum::YLeaf mark_type_udp_src_port;
        static const ydk::Enum::YLeaf mark_type_udp_dst_port;
        static const ydk::Enum::YLeaf mark_type_tcp_src_port;
        static const ydk::Enum::YLeaf mark_type_tcp_dst_port;
        static const ydk::Enum::YLeaf mark_type_sctp_src_port;
        static const ydk::Enum::YLeaf mark_type_sctp_dst_port;
        static const ydk::Enum::YLeaf mark_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "mark-type-none") return 0;
            if (name == "mark-type-dscp") return 1;
            if (name == "mark-type-prec") return 2;
            if (name == "mark-type-mpls-exp-topmost") return 3;
            if (name == "mark-type-mpls-exp-imposition") return 4;
            if (name == "mark-type-qos-group") return 5;
            if (name == "mark-type-discard-class") return 6;
            if (name == "mark-type-cos") return 7;
            if (name == "mark-type-cos-inner") return 8;
            if (name == "mark-type-srp-priority") return 9;
            if (name == "mark-type-atm-clp") return 10;
            if (name == "mark-type-fr-de") return 11;
            if (name == "mark-type-dscp-tunnel") return 12;
            if (name == "mark-type-prec-tunnel") return 13;
            if (name == "mark-type-dei") return 14;
            if (name == "mark-type-dei-imposition") return 15;
            if (name == "mark-type-forward-class") return 16;
            if (name == "mark-type-df") return 17;
            if (name == "mark-type-traffic-class") return 18;
            if (name == "mark-type-src-mac") return 19;
            if (name == "mark-type-dst-mac") return 20;
            if (name == "mark-type-ipv4-src-addr") return 21;
            if (name == "mark-type-ipv4-dst-addr") return 22;
            if (name == "mark-type-vlan-id") return 23;
            if (name == "mark-type-udp-src-port") return 24;
            if (name == "mark-type-udp-dst-port") return 25;
            if (name == "mark-type-tcp-src-port") return 26;
            if (name == "mark-type-tcp-dst-port") return 27;
            if (name == "mark-type-sctp-src-port") return 28;
            if (name == "mark-type-sctp-dst-port") return 29;
            if (name == "mark-type-max") return 30;
            return -1;
        }
};

class PclassExecStratEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pclass_exe_strat_unspecified;
        static const ydk::Enum::YLeaf pclass_exe_strat_do_all;
        static const ydk::Enum::YLeaf pclass_exe_strat_do_until_success;
        static const ydk::Enum::YLeaf pclass_exe_strat_do_until_failure;
        static const ydk::Enum::YLeaf pclass_exe_strat_max;

        static int get_enum_value(const std::string & name) {
            if (name == "pclass-exe-strat-unspecified") return 0;
            if (name == "pclass-exe-strat-do-all") return 1;
            if (name == "pclass-exe-strat-do-until-success") return 2;
            if (name == "pclass-exe-strat-do-until-failure") return 3;
            if (name == "pclass-exe-strat-max") return 4;
            return -1;
        }
};

class DecodeIdentifierEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_decid_unspecified;
        static const ydk::Enum::YLeaf policy_decid_remote_id;
        static const ydk::Enum::YLeaf policy_decid_circuit_id;
        static const ydk::Enum::YLeaf policy_decid_user_name;
        static const ydk::Enum::YLeaf policy_decid_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-decid-unspecified") return 0;
            if (name == "policy-decid-remote-id") return 1;
            if (name == "policy-decid-circuit-id") return 2;
            if (name == "policy-decid-user-name") return 3;
            if (name == "policy-decid-max") return 4;
            return -1;
        }
};

class PfcPauseType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pfc_buffer_size_defined;
        static const ydk::Enum::YLeaf pfc_pause_threshold_defined;
        static const ydk::Enum::YLeaf pfc_resume_threshold_defined;
        static const ydk::Enum::YLeaf pfc_buffer_size_value;
        static const ydk::Enum::YLeaf pfc_pause_threshold_value;
        static const ydk::Enum::YLeaf pfc_resume_threshold_value;

        static int get_enum_value(const std::string & name) {
            if (name == "pfc-buffer-size-defined") return 0;
            if (name == "pfc-pause-threshold-defined") return 1;
            if (name == "pfc-resume-threshold-defined") return 2;
            if (name == "pfc-buffer-size-value") return 3;
            if (name == "pfc-pause-threshold-value") return 4;
            if (name == "pfc-resume-threshold-value") return 5;
            return -1;
        }
};

class SharedBucketType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shared_bucket_type_not_specified;
        static const ydk::Enum::YLeaf shared_bucket_referred;
        static const ydk::Enum::YLeaf shared_bucket_defined;

        static int get_enum_value(const std::string & name) {
            if (name == "shared-bucket-type-not-specified") return 0;
            if (name == "shared-bucket-referred") return 1;
            if (name == "shared-bucket-defined") return 2;
            return -1;
        }
};

class PoliceActionTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf police_action_none;
        static const ydk::Enum::YLeaf police_action_transmit;
        static const ydk::Enum::YLeaf police_action_drop;
        static const ydk::Enum::YLeaf police_action_mark;
        static const ydk::Enum::YLeaf police_action_max;

        static int get_enum_value(const std::string & name) {
            if (name == "police-action-none") return 0;
            if (name == "police-action-transmit") return 1;
            if (name == "police-action-drop") return 2;
            if (name == "police-action-mark") return 3;
            if (name == "police-action-max") return 4;
            return -1;
        }
};

class PolicyActionAttrEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf action_attribute;
        static const ydk::Enum::YLeaf sub_action_attribute;

        static int get_enum_value(const std::string & name) {
            if (name == "action-attribute") return 1;
            if (name == "sub-action-attribute") return 2;
            return -1;
        }
};

class MatchNasPortSubIdEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_nas_port_sub_id_unspecified;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_adapter;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_channel;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_ip_addr;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_port;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_shelf;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_slot;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_sub_interface;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_type;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_vci;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_vlan;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_vpi;
        static const ydk::Enum::YLeaf match_nas_port_sub_id_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-nas-port-sub-id-unspecified") return 0;
            if (name == "match-nas-port-sub-id-adapter") return 1;
            if (name == "match-nas-port-sub-id-channel") return 2;
            if (name == "match-nas-port-sub-id-ip-addr") return 3;
            if (name == "match-nas-port-sub-id-port") return 4;
            if (name == "match-nas-port-sub-id-shelf") return 5;
            if (name == "match-nas-port-sub-id-slot") return 6;
            if (name == "match-nas-port-sub-id-sub-interface") return 7;
            if (name == "match-nas-port-sub-id-type") return 8;
            if (name == "match-nas-port-sub-id-vci") return 9;
            if (name == "match-nas-port-sub-id-vlan") return 10;
            if (name == "match-nas-port-sub-id-vpi") return 11;
            if (name == "match-nas-port-sub-id-max") return 12;
            return -1;
        }
};

class IdentifierEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_ident_unspecified;
        static const ydk::Enum::YLeaf policy_ident_authen_status;
        static const ydk::Enum::YLeaf policy_ident_dnis;
        static const ydk::Enum::YLeaf policy_ident_media;
        static const ydk::Enum::YLeaf policy_ident_mlp_negotiated;
        static const ydk::Enum::YLeaf policy_ident_nas_port;
        static const ydk::Enum::YLeaf policy_ident_no_user_name;
        static const ydk::Enum::YLeaf policy_ident_protocol;
        static const ydk::Enum::YLeaf policy_ident_service_name;
        static const ydk::Enum::YLeaf policy_ident_source_address_ipv4;
        static const ydk::Enum::YLeaf policy_ident_source_address_ipv6;
        static const ydk::Enum::YLeaf policy_ident_source_address_mac;
        static const ydk::Enum::YLeaf policy_ident_timer;
        static const ydk::Enum::YLeaf policy_ident_tunnel_name;
        static const ydk::Enum::YLeaf policy_ident_auth_domain;
        static const ydk::Enum::YLeaf policy_ident_auth_user_name;
        static const ydk::Enum::YLeaf policy_ident_unauth_domain;
        static const ydk::Enum::YLeaf policy_ident_unauth_user_name;
        static const ydk::Enum::YLeaf policy_ident_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-ident-unspecified") return 0;
            if (name == "policy-ident-authen-status") return 1;
            if (name == "policy-ident-dnis") return 2;
            if (name == "policy-ident-media") return 3;
            if (name == "policy-ident-mlp-negotiated") return 4;
            if (name == "policy-ident-nas-port") return 5;
            if (name == "policy-ident-no-user-name") return 6;
            if (name == "policy-ident-protocol") return 7;
            if (name == "policy-ident-service-name") return 8;
            if (name == "policy-ident-source-address-ipv4") return 9;
            if (name == "policy-ident-source-address-ipv6") return 10;
            if (name == "policy-ident-source-address-mac") return 11;
            if (name == "policy-ident-timer") return 12;
            if (name == "policy-ident-tunnel-name") return 13;
            if (name == "policy-ident-auth-domain") return 14;
            if (name == "policy-ident-auth-user-name") return 15;
            if (name == "policy-ident-unauth-domain") return 16;
            if (name == "policy-ident-unauth-user-name") return 17;
            if (name == "policy-ident-max") return 18;
            return -1;
        }
};

class MatchLogicalOperatorEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_operator_unspecified;
        static const ydk::Enum::YLeaf match_equal_to;
        static const ydk::Enum::YLeaf match_greater_than;
        static const ydk::Enum::YLeaf match_greater_than_or_equal;
        static const ydk::Enum::YLeaf match_less_than;
        static const ydk::Enum::YLeaf match_less_than_or_equal;
        static const ydk::Enum::YLeaf match_operator_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-operator-unspecified") return 0;
            if (name == "match-equal-to") return 1;
            if (name == "match-greater-than") return 2;
            if (name == "match-greater-than-or-equal") return 3;
            if (name == "match-less-than") return 4;
            if (name == "match-less-than-or-equal") return 5;
            if (name == "match-operator-max") return 6;
            return -1;
        }
};

class MatchMlpNegotiatedEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_mlp_negotiated_unspecified;
        static const ydk::Enum::YLeaf match_mlp_negotiated;
        static const ydk::Enum::YLeaf match_mlp_not_negotiated;
        static const ydk::Enum::YLeaf match_mlp_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-mlp-negotiated-unspecified") return 0;
            if (name == "match-mlp-negotiated") return 1;
            if (name == "match-mlp-not-negotiated") return 2;
            if (name == "match-mlp-max") return 3;
            return -1;
        }
};

class AcctEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_acct_evt_unspecified;
        static const ydk::Enum::YLeaf policy_acct_evt_start;
        static const ydk::Enum::YLeaf policy_acct_evt_stop;
        static const ydk::Enum::YLeaf policy_acct_evt_update;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-acct-evt-unspecified") return 0;
            if (name == "policy-acct-evt-start") return 1;
            if (name == "policy-acct-evt-stop") return 2;
            if (name == "policy-acct-evt-update") return 3;
            return -1;
        }
};

class AfmonMdiParmTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_mdi_parm_invalid;
        static const ydk::Enum::YLeaf afmon_mdi_parm_pids;
        static const ydk::Enum::YLeaf afmon_mdi_parm_pkt_rate;
        static const ydk::Enum::YLeaf afmon_mdi_parm_ip_pkt_rate;
        static const ydk::Enum::YLeaf afmon_mdi_parm_ip_bit_rate;
        static const ydk::Enum::YLeaf afmon_mdi_parm_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-mdi-parm-invalid") return 0;
            if (name == "afmon-mdi-parm-pids") return 1;
            if (name == "afmon-mdi-parm-pkt-rate") return 2;
            if (name == "afmon-mdi-parm-ip-pkt-rate") return 3;
            if (name == "afmon-mdi-parm-ip-bit-rate") return 4;
            if (name == "afmon-mdi-parm-max") return 5;
            return -1;
        }
};

class MatchMediaTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_media_type_unspecified;
        static const ydk::Enum::YLeaf match_media_type_async;
        static const ydk::Enum::YLeaf match_media_type_atm;
        static const ydk::Enum::YLeaf match_media_type_ether;
        static const ydk::Enum::YLeaf match_media_type_ip;
        static const ydk::Enum::YLeaf match_media_type_isdn;
        static const ydk::Enum::YLeaf match_media_type_mpls;
        static const ydk::Enum::YLeaf match_media_type_sync;
        static const ydk::Enum::YLeaf match_media_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-media-type-unspecified") return 0;
            if (name == "match-media-type-async") return 1;
            if (name == "match-media-type-atm") return 2;
            if (name == "match-media-type-ether") return 3;
            if (name == "match-media-type-ip") return 4;
            if (name == "match-media-type-isdn") return 5;
            if (name == "match-media-type-mpls") return 6;
            if (name == "match-media-type-sync") return 7;
            if (name == "match-media-type-max") return 8;
            return -1;
        }
};

class PeventCondEvalEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pevent_cond_eval_unspecified;
        static const ydk::Enum::YLeaf pevent_cond_eval_match_first;
        static const ydk::Enum::YLeaf pevent_cond_eval_match_all;
        static const ydk::Enum::YLeaf pevent_cond_eval_max;

        static int get_enum_value(const std::string & name) {
            if (name == "pevent-cond-eval-unspecified") return 0;
            if (name == "pevent-cond-eval-match-first") return 1;
            if (name == "pevent-cond-eval-match-all") return 2;
            if (name == "pevent-cond-eval-max") return 3;
            return -1;
        }
};

class ClassMapModeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class_map_mode_match_any;
        static const ydk::Enum::YLeaf class_map_mode_match_all;
        static const ydk::Enum::YLeaf class_map_mode_max;
        static const ydk::Enum::YLeaf class_map_mode_usr_def;

        static int get_enum_value(const std::string & name) {
            if (name == "class-map-mode-match-any") return 0;
            if (name == "class-map-mode-match-all") return 1;
            if (name == "class-map-mode-max") return 2;
            if (name == "class-map-mode-usr-def") return 1073741824;
            return -1;
        }
};

class PolicyMapTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_map_type_none;
        static const ydk::Enum::YLeaf policy_map_type_qos;
        static const ydk::Enum::YLeaf policy_map_type_pbr;
        static const ydk::Enum::YLeaf policy_map_type_traffic;
        static const ydk::Enum::YLeaf policy_map_type_subs_control;
        static const ydk::Enum::YLeaf policy_map_type_accounting;
        static const ydk::Enum::YLeaf policy_map_type_redirect;
        static const ydk::Enum::YLeaf policy_map_type_afmon;
        static const ydk::Enum::YLeaf policy_map_type_merge;
        static const ydk::Enum::YLeaf policy_map_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-map-type-none") return 0;
            if (name == "policy-map-type-qos") return 1;
            if (name == "policy-map-type-pbr") return 2;
            if (name == "policy-map-type-traffic") return 3;
            if (name == "policy-map-type-subs-control") return 4;
            if (name == "policy-map-type-accounting") return 5;
            if (name == "policy-map-type-redirect") return 6;
            if (name == "policy-map-type-afmon") return 7;
            if (name == "policy-map-type-merge") return 8;
            if (name == "policy-map-type-max") return 9;
            return -1;
        }
};

class WredTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wred_cos_cmd;
        static const ydk::Enum::YLeaf wred_dscp_cmd;
        static const ydk::Enum::YLeaf wred_precedence_cmd;
        static const ydk::Enum::YLeaf wred_discard_class_cmd;
        static const ydk::Enum::YLeaf wred_mpls_exp_cmd;
        static const ydk::Enum::YLeaf red_with_user_min_max;
        static const ydk::Enum::YLeaf red_with_default_min_max;
        static const ydk::Enum::YLeaf wred_dei_cmd;
        static const ydk::Enum::YLeaf wred_ecn_cmd;
        static const ydk::Enum::YLeaf wred_invalid_cmd;

        static int get_enum_value(const std::string & name) {
            if (name == "wred-cos-cmd") return 0;
            if (name == "wred-dscp-cmd") return 1;
            if (name == "wred-precedence-cmd") return 2;
            if (name == "wred-discard-class-cmd") return 3;
            if (name == "wred-mpls-exp-cmd") return 4;
            if (name == "red-with-user-min-max") return 5;
            if (name == "red-with-default-min-max") return 6;
            if (name == "wred-dei-cmd") return 7;
            if (name == "wred-ecn-cmd") return 8;
            if (name == "wred-invalid-cmd") return 9;
            return -1;
        }
};

class PolicyActionExecTypeE : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf execution_immediate;
        static const ydk::Enum::YLeaf execution_deferred;

        static int get_enum_value(const std::string & name) {
            if (name == "execution-immediate") return 1;
            if (name == "execution-deferred") return 2;
            return -1;
        }
};

class PolicymgrClassMap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf pbr;
        static const ydk::Enum::YLeaf traffic;
        static const ydk::Enum::YLeaf subscriber_control;

        static int get_enum_value(const std::string & name) {
            if (name == "qos") return 1;
            if (name == "pbr") return 2;
            if (name == "traffic") return 3;
            if (name == "subscriber-control") return 4;
            return -1;
        }
};

class PolicyRouteTargetEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_rt_type_none;
        static const ydk::Enum::YLeaf policy_rt_type_asn2;
        static const ydk::Enum::YLeaf policy_rt_type_ipv4;
        static const ydk::Enum::YLeaf policy_rt_type_asn4;
        static const ydk::Enum::YLeaf policy_rt_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-rt-type-none") return 0;
            if (name == "policy-rt-type-asn2") return 1;
            if (name == "policy-rt-type-ipv4") return 2;
            if (name == "policy-rt-type-asn4") return 3;
            if (name == "policy-rt-type-max") return 4;
            return -1;
        }
};

class PolicyObjEncEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_obj_enc_name;
        static const ydk::Enum::YLeaf policy_obj_enc_hdl;
        static const ydk::Enum::YLeaf policy_obj_enc_var_idx;
        static const ydk::Enum::YLeaf policy_obj_enc_in_line;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-obj-enc-name") return 0;
            if (name == "policy-obj-enc-hdl") return 1;
            if (name == "policy-obj-enc-var-idx") return 2;
            if (name == "policy-obj-enc-in-line") return 3;
            return -1;
        }
};

class AfmonReactCriterionEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_react_crit_invalid;
        static const ydk::Enum::YLeaf afmon_react_mrv;
        static const ydk::Enum::YLeaf afmon_react_df;
        static const ydk::Enum::YLeaf afmon_react_mse;
        static const ydk::Enum::YLeaf afmon_react_pkt_rate;
        static const ydk::Enum::YLeaf afmon_react_flow_cnt;
        static const ydk::Enum::YLeaf afmon_react_rtp_loss_fraction;
        static const ydk::Enum::YLeaf afmon_react_rtp_jitter;
        static const ydk::Enum::YLeaf afmon_react_rtp_max_jitter;
        static const ydk::Enum::YLeaf afmon_react_rtp_out_of_order;
        static const ydk::Enum::YLeaf afmon_react_rtp_loss_pkts;
        static const ydk::Enum::YLeaf afmon_react_rtp_ta;
        static const ydk::Enum::YLeaf afmon_react_rtp_es;
        static const ydk::Enum::YLeaf afmon_react_mdi_mlr;
        static const ydk::Enum::YLeaf afmon_react_mdi_mdc;
        static const ydk::Enum::YLeaf afmon_react_mdi_jitter;
        static const ydk::Enum::YLeaf afmon_react_mdi_loss_pkts;
        static const ydk::Enum::YLeaf afmon_react_mdi_ta;
        static const ydk::Enum::YLeaf afmon_react_mdi_es;
        static const ydk::Enum::YLeaf afmon_react_crit_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-react-crit-invalid") return 0;
            if (name == "afmon-react-mrv") return 1;
            if (name == "afmon-react-df") return 2;
            if (name == "afmon-react-mse") return 3;
            if (name == "afmon-react-pkt-rate") return 4;
            if (name == "afmon-react-flow-cnt") return 5;
            if (name == "afmon-react-rtp-loss-fraction") return 6;
            if (name == "afmon-react-rtp-jitter") return 7;
            if (name == "afmon-react-rtp-max-jitter") return 8;
            if (name == "afmon-react-rtp-out-of-order") return 9;
            if (name == "afmon-react-rtp-loss-pkts") return 10;
            if (name == "afmon-react-rtp-ta") return 11;
            if (name == "afmon-react-rtp-es") return 12;
            if (name == "afmon-react-mdi-mlr") return 13;
            if (name == "afmon-react-mdi-mdc") return 14;
            if (name == "afmon-react-mdi-jitter") return 15;
            if (name == "afmon-react-mdi-loss-pkts") return 16;
            if (name == "afmon-react-mdi-ta") return 17;
            if (name == "afmon-react-mdi-es") return 18;
            if (name == "afmon-react-crit-max") return 19;
            return -1;
        }
};

class AfmonRtpParmTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_rtp_parm_invalid;
        static const ydk::Enum::YLeaf afmon_rtp_parm_min_seq;
        static const ydk::Enum::YLeaf afmon_rtp_parm_max_drop;
        static const ydk::Enum::YLeaf afmon_rtp_parm_max_mis_order;
        static const ydk::Enum::YLeaf afmon_rtp_parm_seq_ext_cop4;
        static const ydk::Enum::YLeaf afmon_rtp_parm_clock_rate;
        static const ydk::Enum::YLeaf afmon_rtp_parm_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-rtp-parm-invalid") return 0;
            if (name == "afmon-rtp-parm-min-seq") return 1;
            if (name == "afmon-rtp-parm-max-drop") return 2;
            if (name == "afmon-rtp-parm-max-mis-order") return 3;
            if (name == "afmon-rtp-parm-seq-ext-cop4") return 4;
            if (name == "afmon-rtp-parm-clock-rate") return 5;
            if (name == "afmon-rtp-parm-max") return 6;
            return -1;
        }
};

class PolicyMapTableTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_map_table_type_none;
        static const ydk::Enum::YLeaf policy_map_table_type_l2_any;
        static const ydk::Enum::YLeaf policy_map_table_type_l2_l3;
        static const ydk::Enum::YLeaf policy_map_table_type_l3_ipv4;
        static const ydk::Enum::YLeaf policy_map_table_type_l3_ds;
        static const ydk::Enum::YLeaf policy_map_table_type_traffic_ingress;
        static const ydk::Enum::YLeaf policy_map_table_type_qos_ingress;
        static const ydk::Enum::YLeaf policy_map_table_type_qos_egress;
        static const ydk::Enum::YLeaf policy_map_table_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-map-table-type-none") return 0;
            if (name == "policy-map-table-type-l2-any") return 1;
            if (name == "policy-map-table-type-l2-l3") return 2;
            if (name == "policy-map-table-type-l3-ipv4") return 3;
            if (name == "policy-map-table-type-l3-ds") return 4;
            if (name == "policy-map-table-type-traffic-ingress") return 5;
            if (name == "policy-map-table-type-qos-ingress") return 6;
            if (name == "policy-map-table-type-qos-egress") return 7;
            if (name == "policy-map-table-type-max") return 8;
            return -1;
        }
};

class AuthorizeIdEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_authorize_ident_unspecified;
        static const ydk::Enum::YLeaf policy_authorize_ident_dnis;
        static const ydk::Enum::YLeaf policy_authorize_ident_domain;
        static const ydk::Enum::YLeaf policy_authorize_ident_user_name;
        static const ydk::Enum::YLeaf policy_authorize_ident_nas_port;
        static const ydk::Enum::YLeaf policy_authorize_ident_source_address_ipv4;
        static const ydk::Enum::YLeaf policy_authorize_ident_source_address_ipv6;
        static const ydk::Enum::YLeaf policy_authorize_ident_source_address_mac;
        static const ydk::Enum::YLeaf policy_authorize_ident_auto_detect;
        static const ydk::Enum::YLeaf policy_authorize_ident_tunnel_name;
        static const ydk::Enum::YLeaf policy_authorize_ident_dhcp_client_id;
        static const ydk::Enum::YLeaf policy_authorize_ident_circuit_id;
        static const ydk::Enum::YLeaf policy_authorize_ident_remote_id;
        static const ydk::Enum::YLeaf policy_authorize_ident_vendor_id;
        static const ydk::Enum::YLeaf policy_authorize_ident_service_name;
        static const ydk::Enum::YLeaf policy_authorize_ident_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-authorize-ident-unspecified") return 0;
            if (name == "policy-authorize-ident-dnis") return 1;
            if (name == "policy-authorize-ident-domain") return 2;
            if (name == "policy-authorize-ident-user-name") return 3;
            if (name == "policy-authorize-ident-nas-port") return 4;
            if (name == "policy-authorize-ident-source-address-ipv4") return 5;
            if (name == "policy-authorize-ident-source-address-ipv6") return 6;
            if (name == "policy-authorize-ident-source-address-mac") return 7;
            if (name == "policy-authorize-ident-auto-detect") return 8;
            if (name == "policy-authorize-ident-tunnel-name") return 9;
            if (name == "policy-authorize-ident-dhcp-client-id") return 10;
            if (name == "policy-authorize-ident-circuit-id") return 11;
            if (name == "policy-authorize-ident-remote-id") return 12;
            if (name == "policy-authorize-ident-vendor-id") return 13;
            if (name == "policy-authorize-ident-service-name") return 14;
            if (name == "policy-authorize-ident-max") return 15;
            return -1;
        }
};

class MatchSubsProtocolEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_subs_protocol_unspecified;
        static const ydk::Enum::YLeaf match_subs_protocol_ipv4;
        static const ydk::Enum::YLeaf match_subs_protocol_ppp;
        static const ydk::Enum::YLeaf match_subs_protocol_dhcpv4;
        static const ydk::Enum::YLeaf match_subs_protocol_dhcpv6;
        static const ydk::Enum::YLeaf match_subs_protocol_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-subs-protocol-unspecified") return 0;
            if (name == "match-subs-protocol-ipv4") return 1;
            if (name == "match-subs-protocol-ppp") return 2;
            if (name == "match-subs-protocol-dhcpv4") return 3;
            if (name == "match-subs-protocol-dhcpv6") return 4;
            if (name == "match-subs-protocol-max") return 5;
            return -1;
        }
};

class PlmgrAppFwdingTypeE : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf layer2;
        static const ydk::Enum::YLeaf layer3;
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "layer2") return 0;
            if (name == "layer3") return 1;
            if (name == "any") return 2;
            return -1;
        }
};

class ClassMapTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf class_map_type_none;
        static const ydk::Enum::YLeaf class_map_type_qos;
        static const ydk::Enum::YLeaf class_map_type_pbr;
        static const ydk::Enum::YLeaf class_map_type_traffic;
        static const ydk::Enum::YLeaf class_map_type_subs_control;
        static const ydk::Enum::YLeaf class_map_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "class-map-type-none") return 0;
            if (name == "class-map-type-qos") return 1;
            if (name == "class-map-type-pbr") return 2;
            if (name == "class-map-type-traffic") return 3;
            if (name == "class-map-type-subs-control") return 4;
            if (name == "class-map-type-max") return 5;
            return -1;
        }
};

class AfmonReactParmTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_react_parm_invalid;
        static const ydk::Enum::YLeaf afmon_react_parm_oper_id;
        static const ydk::Enum::YLeaf afmon_react_parm_crit_erion;
        static const ydk::Enum::YLeaf afmon_react_parm_desc;
        static const ydk::Enum::YLeaf afmon_react_parm_trig_value;
        static const ydk::Enum::YLeaf afmon_react_parm_trig_type;
        static const ydk::Enum::YLeaf afmon_react_parm_action;
        static const ydk::Enum::YLeaf afmon_react_parm_alm_type;
        static const ydk::Enum::YLeaf afmon_react_parm_alm_severity;
        static const ydk::Enum::YLeaf afmon_react_parm_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-react-parm-invalid") return 0;
            if (name == "afmon-react-parm-oper-id") return 1;
            if (name == "afmon-react-parm-crit-erion") return 2;
            if (name == "afmon-react-parm-desc") return 3;
            if (name == "afmon-react-parm-trig-value") return 4;
            if (name == "afmon-react-parm-trig-type") return 5;
            if (name == "afmon-react-parm-action") return 6;
            if (name == "afmon-react-parm-alm-type") return 7;
            if (name == "afmon-react-parm-alm-severity") return 8;
            if (name == "afmon-react-parm-max") return 9;
            return -1;
        }
};

class MatchAvailableIdEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_avail_ident_unspecified;
        static const ydk::Enum::YLeaf match_avail_ident_dnis;
        static const ydk::Enum::YLeaf match_avail_ident_domain;
        static const ydk::Enum::YLeaf match_avail_ident_circuit_id;
        static const ydk::Enum::YLeaf match_avail_ident_remote_id;
        static const ydk::Enum::YLeaf match_avail_ident_media;
        static const ydk::Enum::YLeaf match_avail_ident_nas_port;
        static const ydk::Enum::YLeaf match_avail_ident_protocol;
        static const ydk::Enum::YLeaf match_avail_ident_source_address_ipv4;
        static const ydk::Enum::YLeaf match_avail_ident_source_address_ipv6;
        static const ydk::Enum::YLeaf match_avail_ident_source_address_mac;
        static const ydk::Enum::YLeaf match_avail_ident_tunnel_name;
        static const ydk::Enum::YLeaf match_avail_ident_user_name;
        static const ydk::Enum::YLeaf match_avail_ident_vendor_id;
        static const ydk::Enum::YLeaf match_avail_ident_dhcp_client_id;
        static const ydk::Enum::YLeaf match_avail_ident_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-avail-ident-unspecified") return 0;
            if (name == "match-avail-ident-dnis") return 1;
            if (name == "match-avail-ident-domain") return 2;
            if (name == "match-avail-ident-circuit-id") return 3;
            if (name == "match-avail-ident-remote-id") return 4;
            if (name == "match-avail-ident-media") return 5;
            if (name == "match-avail-ident-nas-port") return 6;
            if (name == "match-avail-ident-protocol") return 7;
            if (name == "match-avail-ident-source-address-ipv4") return 8;
            if (name == "match-avail-ident-source-address-ipv6") return 9;
            if (name == "match-avail-ident-source-address-mac") return 10;
            if (name == "match-avail-ident-tunnel-name") return 11;
            if (name == "match-avail-ident-user-name") return 12;
            if (name == "match-avail-ident-vendor-id") return 13;
            if (name == "match-avail-ident-dhcp-client-id") return 14;
            if (name == "match-avail-ident-max") return 15;
            return -1;
        }
};

class FlowKeyEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flow_key_invalid;
        static const ydk::Enum::YLeaf flow_key_src_ip;
        static const ydk::Enum::YLeaf flow_key_dst_ip;
        static const ydk::Enum::YLeaf flow_key_five_tuple;
        static const ydk::Enum::YLeaf flow_key_max;

        static int get_enum_value(const std::string & name) {
            if (name == "flow-key-invalid") return 0;
            if (name == "flow-key-src-ip") return 1;
            if (name == "flow-key-dst-ip") return 2;
            if (name == "flow-key-five-tuple") return 3;
            if (name == "flow-key-max") return 4;
            return -1;
        }
};

class MatchAuthenStatusEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_authen_status_unspecified;
        static const ydk::Enum::YLeaf match_authen_status_authenticated;
        static const ydk::Enum::YLeaf match_authen_status_unauthenticated;
        static const ydk::Enum::YLeaf match_authen_status_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-authen-status-unspecified") return 0;
            if (name == "match-authen-status-authenticated") return 1;
            if (name == "match-authen-status-unauthenticated") return 2;
            if (name == "match-authen-status-max") return 3;
            return -1;
        }
};

class PolicymgrPolicyMap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos;
        static const ydk::Enum::YLeaf pbr;
        static const ydk::Enum::YLeaf traffic;
        static const ydk::Enum::YLeaf subscriber_control;
        static const ydk::Enum::YLeaf accounting;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf flow_monitor;

        static int get_enum_value(const std::string & name) {
            if (name == "qos") return 1;
            if (name == "pbr") return 2;
            if (name == "traffic") return 3;
            if (name == "subscriber-control") return 4;
            if (name == "accounting") return 5;
            if (name == "redirect") return 6;
            if (name == "flow-monitor") return 7;
            return -1;
        }
};

class AfmonReactActnEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_react_actn_none;
        static const ydk::Enum::YLeaf afmon_react_syslog;
        static const ydk::Enum::YLeaf afmon_react_snmp;
        static const ydk::Enum::YLeaf afmon_react_clone;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-react-actn-none") return 0;
            if (name == "afmon-react-syslog") return 1;
            if (name == "afmon-react-snmp") return 2;
            if (name == "afmon-react-clone") return 3;
            return -1;
        }
};

class MatchNasPortIntfTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_nas_port_intf_type_unspecified;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_async;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_atm;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_bri;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_ether;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_ipsec;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_none;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_piafs;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_pppatm;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_ppp_ether;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_pppoeatm;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_pppqinq;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_pppvlan;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_pri;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_sync;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_v110;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_v120;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_vty;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_x75;
        static const ydk::Enum::YLeaf match_nas_port_intf_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "match-nas-port-intf-type-unspecified") return 0;
            if (name == "match-nas-port-intf-type-async") return 1;
            if (name == "match-nas-port-intf-type-atm") return 2;
            if (name == "match-nas-port-intf-type-bri") return 3;
            if (name == "match-nas-port-intf-type-ether") return 4;
            if (name == "match-nas-port-intf-type-ipsec") return 5;
            if (name == "match-nas-port-intf-type-none") return 6;
            if (name == "match-nas-port-intf-type-piafs") return 7;
            if (name == "match-nas-port-intf-type-pppatm") return 8;
            if (name == "match-nas-port-intf-type-ppp-ether") return 9;
            if (name == "match-nas-port-intf-type-pppoeatm") return 10;
            if (name == "match-nas-port-intf-type-pppqinq") return 11;
            if (name == "match-nas-port-intf-type-pppvlan") return 12;
            if (name == "match-nas-port-intf-type-pri") return 13;
            if (name == "match-nas-port-intf-type-sync") return 14;
            if (name == "match-nas-port-intf-type-v110") return 15;
            if (name == "match-nas-port-intf-type-v120") return 16;
            if (name == "match-nas-port-intf-type-vty") return 17;
            if (name == "match-nas-port-intf-type-x75") return 18;
            if (name == "match-nas-port-intf-type-max") return 19;
            return -1;
        }
};

class QlimitTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qlimit_cmd;
        static const ydk::Enum::YLeaf qlimit_discard_class;
        static const ydk::Enum::YLeaf qlimit_qos_group;
        static const ydk::Enum::YLeaf qlimit_precedence;
        static const ydk::Enum::YLeaf qlimit_mpls_exp;
        static const ydk::Enum::YLeaf qlimit_dscp;
        static const ydk::Enum::YLeaf qlimit_max;

        static int get_enum_value(const std::string & name) {
            if (name == "qlimit-cmd") return 0;
            if (name == "qlimit-discard-class") return 1;
            if (name == "qlimit-qos-group") return 2;
            if (name == "qlimit-precedence") return 3;
            if (name == "qlimit-mpls-exp") return 4;
            if (name == "qlimit-dscp") return 5;
            if (name == "qlimit-max") return 6;
            return -1;
        }
};

class AfmonAlarmTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_alm_type_invalid;
        static const ydk::Enum::YLeaf afmon_alm_discrete;
        static const ydk::Enum::YLeaf afmon_alm_grp_cnt;
        static const ydk::Enum::YLeaf afmon_alm_grp_pct;
        static const ydk::Enum::YLeaf afmon_alm_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-alm-type-invalid") return 0;
            if (name == "afmon-alm-discrete") return 1;
            if (name == "afmon-alm-grp-cnt") return 2;
            if (name == "afmon-alm-grp-pct") return 3;
            if (name == "afmon-alm-type-max") return 4;
            return -1;
        }
};

class PolicyClassInfoEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_class_info_key_type;
        static const ydk::Enum::YLeaf policy_class_info_mod_type;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-class-info-key-type") return 0;
            if (name == "policy-class-info-mod-type") return 1;
            return -1;
        }
};

class PoliceActnCategoryEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf police_actn_category_conform;
        static const ydk::Enum::YLeaf police_actn_category_exceed;
        static const ydk::Enum::YLeaf police_actn_category_violate;
        static const ydk::Enum::YLeaf police_actn_category_max;

        static int get_enum_value(const std::string & name) {
            if (name == "police-actn-category-conform") return 0;
            if (name == "police-actn-category-exceed") return 1;
            if (name == "police-actn-category-violate") return 2;
            if (name == "police-actn-category-max") return 3;
            return -1;
        }
};

class AfmonAlarmSevEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_alm_none;
        static const ydk::Enum::YLeaf afmon_alm_info;
        static const ydk::Enum::YLeaf afmon_alm_notif;
        static const ydk::Enum::YLeaf afmon_alm_warn;
        static const ydk::Enum::YLeaf afmon_alm_error;
        static const ydk::Enum::YLeaf afmon_alm_crit;
        static const ydk::Enum::YLeaf afmon_alm_alert;
        static const ydk::Enum::YLeaf afmon_alm_emerg;
        static const ydk::Enum::YLeaf afmon_alm_sev_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-alm-none") return 0;
            if (name == "afmon-alm-info") return 1;
            if (name == "afmon-alm-notif") return 2;
            if (name == "afmon-alm-warn") return 3;
            if (name == "afmon-alm-error") return 4;
            if (name == "afmon-alm-crit") return 5;
            if (name == "afmon-alm-alert") return 6;
            if (name == "afmon-alm-emerg") return 7;
            if (name == "afmon-alm-sev-max") return 8;
            return -1;
        }
};

class RedirectTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf redirect_type_none;
        static const ydk::Enum::YLeaf redirect_type_output_interface;
        static const ydk::Enum::YLeaf redirect_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "redirect-type-none") return 0;
            if (name == "redirect-type-output-interface") return 1;
            if (name == "redirect-type-max") return 2;
            return -1;
        }
};

class AfmonTrigTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_trig_type_invalid;
        static const ydk::Enum::YLeaf afmon_trig_immed;
        static const ydk::Enum::YLeaf afmon_trig_avg;
        static const ydk::Enum::YLeaf afmon_trig_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-trig-type-invalid") return 0;
            if (name == "afmon-trig-immed") return 1;
            if (name == "afmon-trig-avg") return 2;
            if (name == "afmon-trig-type-max") return 3;
            return -1;
        }
};

class PeventTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pevent_type_unspecified;
        static const ydk::Enum::YLeaf pevent_type_acct_logon;
        static const ydk::Enum::YLeaf pevent_type_acct_logoff;
        static const ydk::Enum::YLeaf pevent_type_credit_exhausted;
        static const ydk::Enum::YLeaf pevent_type_idle_timeout;
        static const ydk::Enum::YLeaf pevent_type_absolute_timeout;
        static const ydk::Enum::YLeaf pevent_type_quota_depleted;
        static const ydk::Enum::YLeaf pevent_type_service_start;
        static const ydk::Enum::YLeaf pevent_type_service_stop;
        static const ydk::Enum::YLeaf pevent_type_session_start;
        static const ydk::Enum::YLeaf pevent_type_session_activate;
        static const ydk::Enum::YLeaf pevent_type_session_restart;
        static const ydk::Enum::YLeaf pevent_type_session_stop;
        static const ydk::Enum::YLeaf pevent_type_session_disconnect;
        static const ydk::Enum::YLeaf pevent_type_session_update;
        static const ydk::Enum::YLeaf pevent_type_flow_start;
        static const ydk::Enum::YLeaf pevent_type_flow_stop;
        static const ydk::Enum::YLeaf pevent_type_accouting_start;
        static const ydk::Enum::YLeaf pevent_type_acountng_g_stop;
        static const ydk::Enum::YLeaf pevent_type_acountng_g_update;
        static const ydk::Enum::YLeaf pevent_type_timer_expiry;
        static const ydk::Enum::YLeaf pevent_type_threshold_reached;
        static const ydk::Enum::YLeaf pevent_type_ka_success;
        static const ydk::Enum::YLeaf pevent_type_ka_failure;
        static const ydk::Enum::YLeaf pevent_type_link_up;
        static const ydk::Enum::YLeaf pevent_type_link_down;
        static const ydk::Enum::YLeaf pevent_type_authorization_failure;
        static const ydk::Enum::YLeaf pevent_type_authorization_no_response;
        static const ydk::Enum::YLeaf pevent_type_authentication_failure;
        static const ydk::Enum::YLeaf pevent_type_authentication_no_response;
        static const ydk::Enum::YLeaf pevent_type_exception;
        static const ydk::Enum::YLeaf pevent_type_session_ident_chg;
        static const ydk::Enum::YLeaf pevent_type_max;

        static int get_enum_value(const std::string & name) {
            if (name == "pevent-type-unspecified") return 0;
            if (name == "pevent-type-acct-logon") return 1;
            if (name == "pevent-type-acct-logoff") return 2;
            if (name == "pevent-type-credit-exhausted") return 3;
            if (name == "pevent-type-idle-timeout") return 4;
            if (name == "pevent-type-absolute-timeout") return 5;
            if (name == "pevent-type-quota-depleted") return 6;
            if (name == "pevent-type-service-start") return 7;
            if (name == "pevent-type-service-stop") return 8;
            if (name == "pevent-type-session-start") return 9;
            if (name == "pevent-type-session-activate") return 10;
            if (name == "pevent-type-session-restart") return 11;
            if (name == "pevent-type-session-stop") return 12;
            if (name == "pevent-type-session-disconnect") return 13;
            if (name == "pevent-type-session-update") return 14;
            if (name == "pevent-type-flow-start") return 15;
            if (name == "pevent-type-flow-stop") return 16;
            if (name == "pevent-type-accouting-start") return 17;
            if (name == "pevent-type-acountng-g-stop") return 18;
            if (name == "pevent-type-acountng-g-update") return 19;
            if (name == "pevent-type-timer-expiry") return 20;
            if (name == "pevent-type-threshold-reached") return 21;
            if (name == "pevent-type-ka-success") return 22;
            if (name == "pevent-type-ka-failure") return 23;
            if (name == "pevent-type-link-up") return 24;
            if (name == "pevent-type-link-down") return 25;
            if (name == "pevent-type-authorization-failure") return 26;
            if (name == "pevent-type-authorization-no-response") return 27;
            if (name == "pevent-type-authentication-failure") return 28;
            if (name == "pevent-type-authentication-no-response") return 29;
            if (name == "pevent-type-exception") return 30;
            if (name == "pevent-type-session-ident-chg") return 31;
            if (name == "pevent-type-max") return 32;
            return -1;
        }
};

class VsvcServiceTypeT : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vsvc_service_invalid;
        static const ydk::Enum::YLeaf vsvc_service_v_path;
        static const ydk::Enum::YLeaf vsvc_service_ipsec;
        static const ydk::Enum::YLeaf vsvc_service_cgn;
        static const ydk::Enum::YLeaf vsvc_service_o_flow;
        static const ydk::Enum::YLeaf vsvc_service_output;
        static const ydk::Enum::YLeaf vsvc_service_cfg_v_path;
        static const ydk::Enum::YLeaf vsvc_service_sfp;
        static const ydk::Enum::YLeaf vsvc_service_sfl;
        static const ydk::Enum::YLeaf vsvc_service_sffl;
        static const ydk::Enum::YLeaf vsvc_service_max;

        static int get_enum_value(const std::string & name) {
            if (name == "vsvc-service-invalid") return 0;
            if (name == "vsvc-service-v-path") return 1;
            if (name == "vsvc-service-ipsec") return 2;
            if (name == "vsvc-service-cgn") return 3;
            if (name == "vsvc-service-o-flow") return 4;
            if (name == "vsvc-service-output") return 5;
            if (name == "vsvc-service-cfg-v-path") return 6;
            if (name == "vsvc-service-sfp") return 7;
            if (name == "vsvc-service-sfl") return 8;
            if (name == "vsvc-service-sffl") return 9;
            if (name == "vsvc-service-max") return 10;
            return -1;
        }
};

class PolicyParamUnitType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf policy_param_unit_invalid;
        static const ydk::Enum::YLeaf policy_param_unit_bytes;
        static const ydk::Enum::YLeaf policy_param_unit_kbytes;
        static const ydk::Enum::YLeaf policy_param_unit_mbytes;
        static const ydk::Enum::YLeaf policy_param_unit_gbytes;
        static const ydk::Enum::YLeaf policy_param_unit_bitsps;
        static const ydk::Enum::YLeaf policy_param_unit_kbitsps;
        static const ydk::Enum::YLeaf policy_param_unit_mbitsps;
        static const ydk::Enum::YLeaf policy_param_unit_gbitsps;
        static const ydk::Enum::YLeaf policy_param_unit_cells_ps;
        static const ydk::Enum::YLeaf policy_param_unit_packets_ps;
        static const ydk::Enum::YLeaf policy_param_unit_us;
        static const ydk::Enum::YLeaf policy_param_unit_ms;
        static const ydk::Enum::YLeaf policy_param_unit_seconds;
        static const ydk::Enum::YLeaf policy_param_unit_packets;
        static const ydk::Enum::YLeaf policy_param_unit_cells;
        static const ydk::Enum::YLeaf policy_param_unit_percent;
        static const ydk::Enum::YLeaf policy_param_unit_per_thousand;
        static const ydk::Enum::YLeaf policy_param_unit_per_million;
        static const ydk::Enum::YLeaf policy_param_unit_hz;
        static const ydk::Enum::YLeaf policy_param_unit_khz;
        static const ydk::Enum::YLeaf policy_param_unit_mhz;
        static const ydk::Enum::YLeaf policy_param_unit_ratio;
        static const ydk::Enum::YLeaf policy_param_unit_max;

        static int get_enum_value(const std::string & name) {
            if (name == "policy-param-unit-invalid") return 0;
            if (name == "policy-param-unit-bytes") return 1;
            if (name == "policy-param-unit-kbytes") return 2;
            if (name == "policy-param-unit-mbytes") return 3;
            if (name == "policy-param-unit-gbytes") return 4;
            if (name == "policy-param-unit-bitsps") return 5;
            if (name == "policy-param-unit-kbitsps") return 6;
            if (name == "policy-param-unit-mbitsps") return 7;
            if (name == "policy-param-unit-gbitsps") return 8;
            if (name == "policy-param-unit-cells-ps") return 9;
            if (name == "policy-param-unit-packets-ps") return 10;
            if (name == "policy-param-unit-us") return 11;
            if (name == "policy-param-unit-ms") return 12;
            if (name == "policy-param-unit-seconds") return 13;
            if (name == "policy-param-unit-packets") return 14;
            if (name == "policy-param-unit-cells") return 15;
            if (name == "policy-param-unit-percent") return 16;
            if (name == "policy-param-unit-per-thousand") return 17;
            if (name == "policy-param-unit-per-million") return 18;
            if (name == "policy-param-unit-hz") return 19;
            if (name == "policy-param-unit-khz") return 20;
            if (name == "policy-param-unit-mhz") return 21;
            if (name == "policy-param-unit-ratio") return 22;
            if (name == "policy-param-unit-max") return 23;
            return -1;
        }
};

class AfmonTrigRelopEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_trig_relop_invalid;
        static const ydk::Enum::YLeaf afmon_trig_lt;
        static const ydk::Enum::YLeaf afmon_trig_le;
        static const ydk::Enum::YLeaf afmon_trig_gt;
        static const ydk::Enum::YLeaf afmon_trig_ge;
        static const ydk::Enum::YLeaf afmon_trig_range;
        static const ydk::Enum::YLeaf afmon_trig_relop_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-trig-relop-invalid") return 0;
            if (name == "afmon-trig-lt") return 1;
            if (name == "afmon-trig-le") return 2;
            if (name == "afmon-trig-gt") return 3;
            if (name == "afmon-trig-ge") return 4;
            if (name == "afmon-trig-range") return 5;
            if (name == "afmon-trig-relop-max") return 6;
            return -1;
        }
};

class MatchAttrE : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf value_;
        static const ydk::Enum::YLeaf range;
        static const ydk::Enum::YLeaf mask;

        static int get_enum_value(const std::string & name) {
            if (name == "value") return 0;
            if (name == "range") return 1;
            if (name == "mask") return 2;
            return -1;
        }
};

class AfmonIpcbrParmTypeEn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf afmon_ipcbr_parm_invalid;
        static const ydk::Enum::YLeaf afmon_ipcbr_parm_ip_pkt_rate;
        static const ydk::Enum::YLeaf afmon_ipcbr_parm_ip_bit_rate;
        static const ydk::Enum::YLeaf afmon_ipcbr_parm_media_bit_rate;
        static const ydk::Enum::YLeaf afmon_ipcbr_parm_media_pkt_size;
        static const ydk::Enum::YLeaf afmon_ipcbr_parm_media_pkts_per_ip;
        static const ydk::Enum::YLeaf afmon_ipcbr_parm_max;

        static int get_enum_value(const std::string & name) {
            if (name == "afmon-ipcbr-parm-invalid") return 0;
            if (name == "afmon-ipcbr-parm-ip-pkt-rate") return 1;
            if (name == "afmon-ipcbr-parm-ip-bit-rate") return 2;
            if (name == "afmon-ipcbr-parm-media-bit-rate") return 3;
            if (name == "afmon-ipcbr-parm-media-pkt-size") return 4;
            if (name == "afmon-ipcbr-parm-media-pkts-per-ip") return 5;
            if (name == "afmon-ipcbr-parm-max") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_0_ */

