#ifndef _CISCO_IOS_XR_DNX_DRIVER_OPER_
#define _CISCO_IOS_XR_DNX_DRIVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dnx_driver_oper {

class Fia : public ydk::Entity
{
    public:
        Fia();
        ~Fia();

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

        class Nodes; //type: Fia::Nodes

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes> nodes;
        
}; // Fia


class Fia::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Fia::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node> > node;
        
}; // Fia::Nodes


class Fia::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        class RxLinkInformation; //type: Fia::Nodes::Node::RxLinkInformation
        class DriverInformation; //type: Fia::Nodes::Node::DriverInformation
        class ClearStatistics; //type: Fia::Nodes::Node::ClearStatistics
        class TxLinkInformation; //type: Fia::Nodes::Node::TxLinkInformation
        class DiagShell; //type: Fia::Nodes::Node::DiagShell
        class OirHistory; //type: Fia::Nodes::Node::OirHistory
        class AsicStatistics; //type: Fia::Nodes::Node::AsicStatistics

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics> asic_statistics;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::ClearStatistics> clear_statistics;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell> diag_shell;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation> driver_information;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory> oir_history;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation> rx_link_information;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation> tx_link_information;
        
}; // Fia::Nodes::Node


class Fia::Nodes::Node::RxLinkInformation : public ydk::Entity
{
    public:
        RxLinkInformation();
        ~RxLinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkOptions; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions> link_options;
        
}; // Fia::Nodes::Node::RxLinkInformation


class Fia::Nodes::Node::RxLinkInformation::LinkOptions : public ydk::Entity
{
    public:
        LinkOptions();
        ~LinkOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkOption; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption> > link_option;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption : public ydk::Entity
{
    public:
        LinkOption();
        ~LinkOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class RxAsicInstances; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances> rx_asic_instances;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances : public ydk::Entity
{
    public:
        RxAsicInstances();
        ~RxAsicInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RxAsicInstance; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance> > rx_asic_instance;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance : public ydk::Entity
{
    public:
        RxAsicInstance();
        ~RxAsicInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        class RxLinks; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks> rx_links;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks : public ydk::Entity
{
    public:
        RxLinks();
        ~RxLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RxLink; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink> > rx_link;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink : public ydk::Entity
{
    public:
        RxLink();
        ~RxLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_number; //type: uint32
        ydk::YLeaf end_number; //type: uint32
        ydk::YLeaf status_option; //type: string
        class RxLink_; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_> > rx_link;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_ : public ydk::Entity
{
    public:
        RxLink_();
        ~RxLink_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: int32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf stage; //type: LinkStage
        ydk::YLeaf is_link_valid; //type: boolean
        ydk::YLeaf is_conf_pending; //type: boolean
        ydk::YLeaf admin_state; //type: AdminState
        ydk::YLeaf oper_state; //type: OperState
        ydk::YLeaf error_state; //type: LinkErrorState
        ydk::YLeaf flags; //type: string
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf correctable_errors; //type: uint64
        ydk::YLeaf uncorrectable_errors; //type: uint64
        class ThisLink; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink
        class FarEndLink; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink
        class FarEndLinkInHw; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw
        class History; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink> far_end_link;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw> far_end_link_in_hw;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History> history;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink> this_link;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink : public ydk::Entity
{
    public:
        ThisLink();
        ~ThisLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Link
        ydk::YLeaf link_stage; //type: LinkStage
        ydk::YLeaf link_num; //type: uint32
        ydk::YLeaf phy_link_num; //type: uint32
        class AsicId; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId> asic_id;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId : public ydk::Entity
{
    public:
        AsicId();
        ~AsicId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_type; //type: Rack
        ydk::YLeaf asic_type; //type: Asic
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32

}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::ThisLink::AsicId


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink : public ydk::Entity
{
    public:
        FarEndLink();
        ~FarEndLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Link
        ydk::YLeaf link_stage; //type: LinkStage
        ydk::YLeaf link_num; //type: uint32
        ydk::YLeaf phy_link_num; //type: uint32
        class AsicId; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId> asic_id;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId : public ydk::Entity
{
    public:
        AsicId();
        ~AsicId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_type; //type: Rack
        ydk::YLeaf asic_type; //type: Asic
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32

}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLink::AsicId


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw : public ydk::Entity
{
    public:
        FarEndLinkInHw();
        ~FarEndLinkInHw();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Link
        ydk::YLeaf link_stage; //type: LinkStage
        ydk::YLeaf link_num; //type: uint32
        ydk::YLeaf phy_link_num; //type: uint32
        class AsicId; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId> asic_id;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId : public ydk::Entity
{
    public:
        AsicId();
        ~AsicId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_type; //type: Rack
        ydk::YLeaf asic_type; //type: Asic
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32

}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::FarEndLinkInHw::AsicId


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf histnum; //type: uint8
        ydk::YLeaf start_index; //type: uint8
        class Hist; //type: Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist> > hist;
        
}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History


class Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist : public ydk::Entity
{
    public:
        Hist();
        ~Hist();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_state; //type: AdminState
        ydk::YLeaf oper_state; //type: OperState
        ydk::YLeaf error_state; //type: LinkErrorState
        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf reasons; //type: string

}; // Fia::Nodes::Node::RxLinkInformation::LinkOptions::LinkOption::RxAsicInstances::RxAsicInstance::RxLinks::RxLink::RxLink_::History::Hist


class Fia::Nodes::Node::DriverInformation : public ydk::Entity
{
    public:
        DriverInformation();
        ~DriverInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drv_version; //type: uint32
        ydk::YLeaf coeff_major_rev; //type: uint32
        ydk::YLeaf coeff_minor_rev; //type: uint32
        ydk::YLeaf functional_role; //type: uint8
        ydk::YLeaf issu_role; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf rack_type; //type: int32
        ydk::YLeaf rack_num; //type: uint8
        ydk::YLeaf is_driver_ready; //type: boolean
        ydk::YLeaf card_avail_mask; //type: uint32
        ydk::YLeaf asic_avail_mask; //type: uint64
        ydk::YLeaf exp_asic_avail_mask; //type: uint64
        ydk::YLeaf ucmc_ratio; //type: uint32
        ydk::YLeaf asic_oper_notify_to_fsdb_pending_bmap; //type: uint64
        ydk::YLeaf is_full_fgid_download_req; //type: boolean
        ydk::YLeaf is_fgid_download_in_progress; //type: boolean
        ydk::YLeaf is_fgid_download_completed; //type: boolean
        ydk::YLeaf fsdb_conn_active; //type: boolean
        ydk::YLeaf fgid_conn_active; //type: boolean
        ydk::YLeaf issu_mgr_conn_active; //type: boolean
        ydk::YLeaf fsdb_reg_active; //type: boolean
        ydk::YLeaf fgid_reg_active; //type: boolean
        ydk::YLeaf issu_mgr_reg_active; //type: boolean
        ydk::YLeaf num_pm_conn_reqs; //type: uint8
        ydk::YLeaf num_fsdb_conn_reqs; //type: uint8
        ydk::YLeaf num_fgid_conn_reqs; //type: uint8
        ydk::YLeaf num_fstats_conn_reqs; //type: uint8
        ydk::YLeaf num_cm_conn_reqs; //type: uint8
        ydk::YLeaf num_issu_mgr_conn_reqs; //type: uint8
        ydk::YLeaf num_peer_fia_conn_reqs; //type: uint8
        ydk::YLeaf is_gaspp_registered; //type: boolean
        ydk::YLeaf is_cih_registered; //type: boolean
        ydk::YLeaf drvr_initial_startup_timestamp; //type: string
        ydk::YLeaf drvr_current_startup_timestamp; //type: string
        ydk::YLeaf num_intf_ports; //type: uint32
        ydk::YLeaf uc_weight; //type: uint8
        ydk::YLeaf respawn_count; //type: uint8
        ydk::YLeaf total_asics; //type: uint8
        ydk::YLeaf issu_ready_ntfy_pending; //type: boolean
        ydk::YLeaf issu_abort_sent; //type: boolean
        ydk::YLeaf issu_abort_rcvd; //type: boolean
        ydk::YLeaf fabric_mode; //type: uint8
        ydk::YLeaf fc_mode; //type: FcMode
        ydk::YLeaf board_rev_id; //type: uint32
        class DeviceInfo; //type: Fia::Nodes::Node::DriverInformation::DeviceInfo
        class CardInfo; //type: Fia::Nodes::Node::DriverInformation::CardInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::CardInfo> > card_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::DeviceInfo> > device_info;
        
}; // Fia::Nodes::Node::DriverInformation


class Fia::Nodes::Node::DriverInformation::DeviceInfo : public ydk::Entity
{
    public:
        DeviceInfo();
        ~DeviceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf fapid; //type: uint32
        ydk::YLeaf hotplug_event; //type: uint32
        ydk::YLeaf slice_state; //type: SliceState
        ydk::YLeaf admin_state; //type: AdminState
        ydk::YLeaf oper_state; //type: AsicOperState
        ydk::YLeaf asic_state; //type: AsicAccessState
        ydk::YLeaf last_init_cause; //type: AsicInitMethod
        ydk::YLeaf num_pon_resets; //type: uint32
        ydk::YLeaf num_hard_resets; //type: uint32
        ydk::YLeaf local_switch_state; //type: boolean
        class AsicId; //type: Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId> asic_id;
        
}; // Fia::Nodes::Node::DriverInformation::DeviceInfo


class Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId : public ydk::Entity
{
    public:
        AsicId();
        ~AsicId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_type; //type: Rack
        ydk::YLeaf asic_type; //type: Asic
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32

}; // Fia::Nodes::Node::DriverInformation::DeviceInfo::AsicId


class Fia::Nodes::Node::DriverInformation::CardInfo : public ydk::Entity
{
    public:
        CardInfo();
        ~CardInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_type; //type: int32
        ydk::YLeaf card_name; //type: string
        ydk::YLeaf slot_no; //type: int32
        ydk::YLeaf card_flag; //type: int32
        ydk::YLeaf evt_flag; //type: int32
        ydk::YLeaf reg_flag; //type: int32
        ydk::YLeaf instance; //type: int32
        ydk::YLeaf card_state; //type: uint8
        ydk::YLeaf exp_num_asics; //type: uint32
        ydk::YLeaf exp_num_asics_per_fsdb; //type: uint32
        ydk::YLeaf is_powered; //type: boolean
        ydk::YLeaf cxp_avail_bitmap; //type: uint64
        ydk::YLeaf num_ilkns_per_asic; //type: uint32
        ydk::YLeaf num_local_ports_per_ilkn; //type: uint32
        ydk::YLeaf num_cos_per_port; //type: uint8
        class OirCircularBuffer; //type: Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer> oir_circular_buffer;
        
}; // Fia::Nodes::Node::DriverInformation::CardInfo


class Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer : public ydk::Entity
{
    public:
        OirCircularBuffer();
        ~OirCircularBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: int32
        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class FiaOirInfo; //type: Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo> > fia_oir_info;
        
}; // Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer


class Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo : public ydk::Entity
{
    public:
        FiaOirInfo();
        ~FiaOirInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_flag; //type: int32
        ydk::YLeaf card_type; //type: int32
        ydk::YLeaf reg_flag; //type: int32
        ydk::YLeaf evt_flag; //type: int32
        ydk::YLeaf rack_num; //type: int32
        ydk::YLeaf instance; //type: int32
        ydk::YLeaf cur_card_state; //type: int32

}; // Fia::Nodes::Node::DriverInformation::CardInfo::OirCircularBuffer::FiaOirInfo


class Fia::Nodes::Node::ClearStatistics : public ydk::Entity
{
    public:
        ClearStatistics();
        ~ClearStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicInstances; //type: Fia::Nodes::Node::ClearStatistics::AsicInstances

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::ClearStatistics::AsicInstances> asic_instances;
        
}; // Fia::Nodes::Node::ClearStatistics


class Fia::Nodes::Node::ClearStatistics::AsicInstances : public ydk::Entity
{
    public:
        AsicInstances();
        ~AsicInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicInstance; //type: Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance> > asic_instance;
        
}; // Fia::Nodes::Node::ClearStatistics::AsicInstances


class Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance : public ydk::Entity
{
    public:
        AsicInstance();
        ~AsicInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf instance; //type: int32

}; // Fia::Nodes::Node::ClearStatistics::AsicInstances::AsicInstance


class Fia::Nodes::Node::TxLinkInformation : public ydk::Entity
{
    public:
        TxLinkInformation();
        ~TxLinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxStatusOptionTable; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable> tx_status_option_table;
        
}; // Fia::Nodes::Node::TxLinkInformation


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable : public ydk::Entity
{
    public:
        TxStatusOptionTable();
        ~TxStatusOptionTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxStatusOption; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption> tx_status_option;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption : public ydk::Entity
{
    public:
        TxStatusOption();
        ~TxStatusOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxAsicInstances; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances> tx_asic_instances;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances : public ydk::Entity
{
    public:
        TxAsicInstances();
        ~TxAsicInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxAsicInstance; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance> > tx_asic_instance;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance : public ydk::Entity
{
    public:
        TxAsicInstance();
        ~TxAsicInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        class TxLinks; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks> tx_links;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks : public ydk::Entity
{
    public:
        TxLinks();
        ~TxLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxLink; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink> > tx_link;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink : public ydk::Entity
{
    public:
        TxLink();
        ~TxLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_number; //type: uint32
        ydk::YLeaf end_number; //type: uint32
        class TxLink_; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_> > tx_link;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_ : public ydk::Entity
{
    public:
        TxLink_();
        ~TxLink_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: int32
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf stage; //type: uint8
        ydk::YLeaf is_link_valid; //type: boolean
        ydk::YLeaf is_conf_pending; //type: boolean
        ydk::YLeaf is_power_enabled; //type: boolean
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf admin_state; //type: AdminState
        ydk::YLeaf oper_state; //type: OperState
        ydk::YLeaf error_state; //type: LinkErrorState
        ydk::YLeaf num_admin_shuts; //type: uint32
        class ThisLink; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink
        class FarEndLink; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink
        class Stats; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats
        class History; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink> far_end_link;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History> history;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink> this_link;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink : public ydk::Entity
{
    public:
        ThisLink();
        ~ThisLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Link
        ydk::YLeaf link_stage; //type: LinkStage
        ydk::YLeaf link_num; //type: uint32
        ydk::YLeaf phy_link_num; //type: uint32
        class AsicId; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId> asic_id;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId : public ydk::Entity
{
    public:
        AsicId();
        ~AsicId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_type; //type: Rack
        ydk::YLeaf asic_type; //type: Asic
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32

}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::ThisLink::AsicId


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink : public ydk::Entity
{
    public:
        FarEndLink();
        ~FarEndLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: Link
        ydk::YLeaf link_stage; //type: LinkStage
        ydk::YLeaf link_num; //type: uint32
        ydk::YLeaf phy_link_num; //type: uint32
        class AsicId; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId> asic_id;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId : public ydk::Entity
{
    public:
        AsicId();
        ~AsicId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_type; //type: Rack
        ydk::YLeaf asic_type; //type: Asic
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32

}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::FarEndLink::AsicId


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dummy; //type: uint32

}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::Stats


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf histnum; //type: uint8
        ydk::YLeaf start_index; //type: uint8
        class Hist; //type: Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist> > hist;
        
}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History


class Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist : public ydk::Entity
{
    public:
        Hist();
        ~Hist();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_state; //type: AdminState
        ydk::YLeaf oper_state; //type: OperState
        ydk::YLeaf error_state; //type: LinkErrorState
        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf reasons; //type: string

}; // Fia::Nodes::Node::TxLinkInformation::TxStatusOptionTable::TxStatusOption::TxAsicInstances::TxAsicInstance::TxLinks::TxLink::TxLink_::History::Hist


class Fia::Nodes::Node::DiagShell : public ydk::Entity
{
    public:
        DiagShell();
        ~DiagShell();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiagShellUnits; //type: Fia::Nodes::Node::DiagShell::DiagShellUnits

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits> diag_shell_units;
        
}; // Fia::Nodes::Node::DiagShell


class Fia::Nodes::Node::DiagShell::DiagShellUnits : public ydk::Entity
{
    public:
        DiagShellUnits();
        ~DiagShellUnits();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiagShellUnit; //type: Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit> > diag_shell_unit;
        
}; // Fia::Nodes::Node::DiagShell::DiagShellUnits


class Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit : public ydk::Entity
{
    public:
        DiagShellUnit();
        ~DiagShellUnit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unit; //type: uint32
        class Commands; //type: Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands> commands;
        
}; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit


class Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Command; //type: Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command> > command;
        
}; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands


class Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmd; //type: string
        class Output; //type: Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output> > output;
        
}; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command


class Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf output; //type: string
        ydk::YLeaf output_xr; //type: string

}; // Fia::Nodes::Node::DiagShell::DiagShellUnits::DiagShellUnit::Commands::Command::Output


class Fia::Nodes::Node::OirHistory : public ydk::Entity
{
    public:
        OirHistory();
        ~OirHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flags; //type: Fia::Nodes::Node::OirHistory::Flags

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags> flags;
        
}; // Fia::Nodes::Node::OirHistory


class Fia::Nodes::Node::OirHistory::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flag; //type: Fia::Nodes::Node::OirHistory::Flags::Flag

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag> > flag;
        
}; // Fia::Nodes::Node::OirHistory::Flags


class Fia::Nodes::Node::OirHistory::Flags::Flag : public ydk::Entity
{
    public:
        Flag();
        ~Flag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flag; //type: int32
        class Slots; //type: Fia::Nodes::Node::OirHistory::Flags::Flag::Slots

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots> slots;
        
}; // Fia::Nodes::Node::OirHistory::Flags::Flag


class Fia::Nodes::Node::OirHistory::Flags::Flag::Slots : public ydk::Entity
{
    public:
        Slots();
        ~Slots();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slot; //type: Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot> > slot;
        
}; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots


class Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot; //type: int32
        ydk::YLeaf drv_version; //type: uint32
        ydk::YLeaf coeff_major_rev; //type: uint32
        ydk::YLeaf coeff_minor_rev; //type: uint32
        ydk::YLeaf functional_role; //type: uint8
        ydk::YLeaf issu_role; //type: uint8
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf rack_type; //type: int32
        ydk::YLeaf rack_num; //type: uint8
        ydk::YLeaf is_driver_ready; //type: boolean
        ydk::YLeaf card_avail_mask; //type: uint32
        ydk::YLeaf asic_avail_mask; //type: uint64
        ydk::YLeaf exp_asic_avail_mask; //type: uint64
        ydk::YLeaf ucmc_ratio; //type: uint32
        ydk::YLeaf asic_oper_notify_to_fsdb_pending_bmap; //type: uint64
        ydk::YLeaf is_full_fgid_download_req; //type: boolean
        ydk::YLeaf is_fgid_download_in_progress; //type: boolean
        ydk::YLeaf is_fgid_download_completed; //type: boolean
        ydk::YLeaf fsdb_conn_active; //type: boolean
        ydk::YLeaf fgid_conn_active; //type: boolean
        ydk::YLeaf issu_mgr_conn_active; //type: boolean
        ydk::YLeaf fsdb_reg_active; //type: boolean
        ydk::YLeaf fgid_reg_active; //type: boolean
        ydk::YLeaf issu_mgr_reg_active; //type: boolean
        ydk::YLeaf num_pm_conn_reqs; //type: uint8
        ydk::YLeaf num_fsdb_conn_reqs; //type: uint8
        ydk::YLeaf num_fgid_conn_reqs; //type: uint8
        ydk::YLeaf num_fstats_conn_reqs; //type: uint8
        ydk::YLeaf num_cm_conn_reqs; //type: uint8
        ydk::YLeaf num_issu_mgr_conn_reqs; //type: uint8
        ydk::YLeaf num_peer_fia_conn_reqs; //type: uint8
        ydk::YLeaf is_gaspp_registered; //type: boolean
        ydk::YLeaf is_cih_registered; //type: boolean
        ydk::YLeaf drvr_initial_startup_timestamp; //type: string
        ydk::YLeaf drvr_current_startup_timestamp; //type: string
        ydk::YLeaf num_intf_ports; //type: uint32
        ydk::YLeaf uc_weight; //type: uint8
        ydk::YLeaf respawn_count; //type: uint8
        ydk::YLeaf total_asics; //type: uint8
        ydk::YLeaf issu_ready_ntfy_pending; //type: boolean
        ydk::YLeaf issu_abort_sent; //type: boolean
        ydk::YLeaf issu_abort_rcvd; //type: boolean
        ydk::YLeaf fabric_mode; //type: uint8
        ydk::YLeaf fc_mode; //type: FcMode
        ydk::YLeaf board_rev_id; //type: uint32
        class DeviceInfo; //type: Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo
        class CardInfo; //type: Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo> > card_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo> > device_info;
        
}; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot


class Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo : public ydk::Entity
{
    public:
        DeviceInfo();
        ~DeviceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: boolean
        ydk::YLeaf fapid; //type: uint32
        ydk::YLeaf hotplug_event; //type: uint32
        ydk::YLeaf slice_state; //type: SliceState
        ydk::YLeaf admin_state; //type: AdminState
        ydk::YLeaf oper_state; //type: AsicOperState
        ydk::YLeaf asic_state; //type: AsicAccessState
        ydk::YLeaf last_init_cause; //type: AsicInitMethod
        ydk::YLeaf num_pon_resets; //type: uint32
        ydk::YLeaf num_hard_resets; //type: uint32
        ydk::YLeaf local_switch_state; //type: boolean
        class AsicId; //type: Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId> asic_id;
        
}; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo


class Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId : public ydk::Entity
{
    public:
        AsicId();
        ~AsicId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_type; //type: Rack
        ydk::YLeaf asic_type; //type: Asic
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32

}; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::DeviceInfo::AsicId


class Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo : public ydk::Entity
{
    public:
        CardInfo();
        ~CardInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_type; //type: int32
        ydk::YLeaf card_name; //type: string
        ydk::YLeaf slot_no; //type: int32
        ydk::YLeaf card_flag; //type: int32
        ydk::YLeaf evt_flag; //type: int32
        ydk::YLeaf reg_flag; //type: int32
        ydk::YLeaf instance; //type: int32
        ydk::YLeaf card_state; //type: uint8
        ydk::YLeaf exp_num_asics; //type: uint32
        ydk::YLeaf exp_num_asics_per_fsdb; //type: uint32
        ydk::YLeaf is_powered; //type: boolean
        ydk::YLeaf cxp_avail_bitmap; //type: uint64
        ydk::YLeaf num_ilkns_per_asic; //type: uint32
        ydk::YLeaf num_local_ports_per_ilkn; //type: uint32
        ydk::YLeaf num_cos_per_port; //type: uint8
        class OirCircularBuffer; //type: Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer> oir_circular_buffer;
        
}; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo


class Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer : public ydk::Entity
{
    public:
        OirCircularBuffer();
        ~OirCircularBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: int32
        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class FiaOirInfo; //type: Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo> > fia_oir_info;
        
}; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer


class Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo : public ydk::Entity
{
    public:
        FiaOirInfo();
        ~FiaOirInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_flag; //type: int32
        ydk::YLeaf card_type; //type: int32
        ydk::YLeaf reg_flag; //type: int32
        ydk::YLeaf evt_flag; //type: int32
        ydk::YLeaf rack_num; //type: int32
        ydk::YLeaf instance; //type: int32
        ydk::YLeaf cur_card_state; //type: int32

}; // Fia::Nodes::Node::OirHistory::Flags::Flag::Slots::Slot::CardInfo::OirCircularBuffer::FiaOirInfo


class Fia::Nodes::Node::AsicStatistics : public ydk::Entity
{
    public:
        AsicStatistics();
        ~AsicStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticsAsicInstances; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances> statistics_asic_instances;
        
}; // Fia::Nodes::Node::AsicStatistics


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances : public ydk::Entity
{
    public:
        StatisticsAsicInstances();
        ~StatisticsAsicInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatisticsAsicInstance; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance> > statistics_asic_instance;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance : public ydk::Entity
{
    public:
        StatisticsAsicInstance();
        ~StatisticsAsicInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint32
        class PbcStatistics; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics
        class FmacStatistics; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics> fmac_statistics;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics> pbc_statistics;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics : public ydk::Entity
{
    public:
        PbcStatistics();
        ~PbcStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbcStats; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats> pbc_stats;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats : public ydk::Entity
{
    public:
        PbcStats();
        ~PbcStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rack_no; //type: uint32
        ydk::YLeaf slot_no; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf chip_ver; //type: uint16
        class StatsInfo; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo> stats_info;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo : public ydk::Entity
{
    public:
        StatsInfo();
        ~StatsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_blocks; //type: uint8
        class BlockInfo; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo> > block_info;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo : public ydk::Entity
{
    public:
        BlockInfo();
        ~BlockInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_name; //type: string
        ydk::YLeaf num_fields; //type: uint8
        class FieldInfo; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo> > field_info;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo : public ydk::Entity
{
    public:
        FieldInfo();
        ~FieldInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf field_name; //type: string
        ydk::YLeaf field_value; //type: uint64
        ydk::YLeaf is_ovf; //type: boolean

}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::PbcStatistics::PbcStats::StatsInfo::BlockInfo::FieldInfo


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics : public ydk::Entity
{
    public:
        FmacStatistics();
        ~FmacStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FmacLinks; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks> fmac_links;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks : public ydk::Entity
{
    public:
        FmacLinks();
        ~FmacLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FmacLink; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink> > fmac_link;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink : public ydk::Entity
{
    public:
        FmacLink();
        ~FmacLink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: int32
        class FmacAsic; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic

        std::vector<std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic> > fmac_asic;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic : public ydk::Entity
{
    public:
        FmacAsic();
        ~FmacAsic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic; //type: int32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rack_no; //type: uint32
        ydk::YLeaf slot_no; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf link_no; //type: uint32
        ydk::YLeaf link_valid; //type: boolean
        class AggrStats; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats
        class IncrStats; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats> aggr_stats;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats> incr_stats;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats : public ydk::Entity
{
    public:
        AggrStats();
        ~AggrStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkErrorStatus; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus
        class LinkCounters; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters
        class OvfStatus; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters> link_counters;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus> link_error_status;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus> ovf_status;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus : public ydk::Entity
{
    public:
        LinkErrorStatus();
        ~LinkErrorStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkErrorStatus


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters : public ydk::Entity
{
    public:
        LinkCounters();
        ~LinkCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64

}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::LinkCounters


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus : public ydk::Entity
{
    public:
        OvfStatus();
        ~OvfStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_control_cells_counter; //type: string
        ydk::YLeaf tx_data_cell_counter; //type: string
        ydk::YLeaf tx_data_byte_counter; //type: string
        ydk::YLeaf rx_crc_errors_counter; //type: string
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: string
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: string
        ydk::YLeaf rx_control_cells_counter; //type: string
        ydk::YLeaf rx_data_cell_counter; //type: string
        ydk::YLeaf rx_data_byte_counter; //type: string
        ydk::YLeaf rx_dropped_retransmitted_control; //type: string
        ydk::YLeaf tx_asyn_fifo_rate; //type: string
        ydk::YLeaf rx_asyn_fifo_rate; //type: string
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: string
        ydk::YLeaf rx_8b_10b_code_errors; //type: string

}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::AggrStats::OvfStatus


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats : public ydk::Entity
{
    public:
        IncrStats();
        ~IncrStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkErrorStatus; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus
        class LinkCounters; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters
        class OvfStatus; //type: Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus

        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters> link_counters;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus> link_error_status;
        std::shared_ptr<Cisco_IOS_XR_dnx_driver_oper::Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus> ovf_status;
        
}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus : public ydk::Entity
{
    public:
        LinkErrorStatus();
        ~LinkErrorStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_crc_error; //type: uint32
        ydk::YLeaf link_size_error; //type: uint32
        ydk::YLeaf link_mis_align_error; //type: uint32
        ydk::YLeaf link_code_group_error; //type: uint32
        ydk::YLeaf link_no_sig_lock_error; //type: uint32
        ydk::YLeaf link_no_sig_accept_error; //type: uint32
        ydk::YLeaf link_tokens_error; //type: uint32
        ydk::YLeaf error_token_count; //type: uint32

}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkErrorStatus


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters : public ydk::Entity
{
    public:
        LinkCounters();
        ~LinkCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_8b_10b_code_errors; //type: uint64

}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::LinkCounters


class Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus : public ydk::Entity
{
    public:
        OvfStatus();
        ~OvfStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_control_cells_counter; //type: string
        ydk::YLeaf tx_data_cell_counter; //type: string
        ydk::YLeaf tx_data_byte_counter; //type: string
        ydk::YLeaf rx_crc_errors_counter; //type: string
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: string
        ydk::YLeaf rx_8b_10b_disparity_errors; //type: string
        ydk::YLeaf rx_control_cells_counter; //type: string
        ydk::YLeaf rx_data_cell_counter; //type: string
        ydk::YLeaf rx_data_byte_counter; //type: string
        ydk::YLeaf rx_dropped_retransmitted_control; //type: string
        ydk::YLeaf tx_asyn_fifo_rate; //type: string
        ydk::YLeaf rx_asyn_fifo_rate; //type: string
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: string
        ydk::YLeaf rx_8b_10b_code_errors; //type: string

}; // Fia::Nodes::Node::AsicStatistics::StatisticsAsicInstances::StatisticsAsicInstance::FmacStatistics::FmacLinks::FmacLink::FmacAsic::IncrStats::OvfStatus

class LinkErrorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_error_unset;
        static const ydk::Enum::YLeaf link_error_none;
        static const ydk::Enum::YLeaf link_error_shut;
        static const ydk::Enum::YLeaf link_error_max;

};

class AsicOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asic_oper_unset;
        static const ydk::Enum::YLeaf asic_oper_unknown;
        static const ydk::Enum::YLeaf asic_oper_up;
        static const ydk::Enum::YLeaf asic_oper_down;
        static const ydk::Enum::YLeaf asic_card_down;

};

class AsicAccessState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asic_state_unset;
        static const ydk::Enum::YLeaf asic_state_none;
        static const ydk::Enum::YLeaf asic_state_device_off_line;
        static const ydk::Enum::YLeaf asic_state_device_created;
        static const ydk::Enum::YLeaf asic_state_device_online;
        static const ydk::Enum::YLeaf asic_state_warmboot;
        static const ydk::Enum::YLeaf asic_state_de_init_start;
        static const ydk::Enum::YLeaf asic_state_intr_de_init;
        static const ydk::Enum::YLeaf asic_state_bcm_detach;
        static const ydk::Enum::YLeaf asic_state_soc_de_init;
        static const ydk::Enum::YLeaf asic_state_de_init_done;
        static const ydk::Enum::YLeaf asic_state_soc_init;
        static const ydk::Enum::YLeaf asic_state_bcm_init;
        static const ydk::Enum::YLeaf asic_state_intr_init;
        static const ydk::Enum::YLeaf asic_state_soc_init_start;
        static const ydk::Enum::YLeaf asic_state_bcm_init_start;
        static const ydk::Enum::YLeaf asic_state_intr_init_start;
        static const ydk::Enum::YLeaf asic_state_hard_reset;
        static const ydk::Enum::YLeaf asic_state_normal;
        static const ydk::Enum::YLeaf asic_state_exception;
        static const ydk::Enum::YLeaf asic_state_hp_attached;
        static const ydk::Enum::YLeaf asic_state_quiesce;
        static const ydk::Enum::YLeaf asic_state_issu_started;
        static const ydk::Enum::YLeaf asic_state_issu_started_nn;
        static const ydk::Enum::YLeaf asic_state_issu_abort;
        static const ydk::Enum::YLeaf asic_state_max;

};

class Asic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asic_unset;
        static const ydk::Enum::YLeaf asic_unavail;
        static const ydk::Enum::YLeaf asic_fia;
        static const ydk::Enum::YLeaf asic_s123;
        static const ydk::Enum::YLeaf asic_s13;
        static const ydk::Enum::YLeaf asic_s2;
        static const ydk::Enum::YLeaf asic_b2b;
        static const ydk::Enum::YLeaf asic_type_unknown;

};

class LinkStage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_stage_unset;
        static const ydk::Enum::YLeaf link_stage_unused;
        static const ydk::Enum::YLeaf link_stage_fia;
        static const ydk::Enum::YLeaf link_stage_s1;
        static const ydk::Enum::YLeaf link_stage_s2;
        static const ydk::Enum::YLeaf link_stage_s3;
        static const ydk::Enum::YLeaf link_stage_unknown;

};

class Link : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link_type_unset;
        static const ydk::Enum::YLeaf link_type_unavail;
        static const ydk::Enum::YLeaf link_type_tx;
        static const ydk::Enum::YLeaf link_type_rx;

};

class FcMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fc_mode_unset;
        static const ydk::Enum::YLeaf fc_mode_unavail;
        static const ydk::Enum::YLeaf fc_mode_inband;
        static const ydk::Enum::YLeaf fc_mode_oob;

};

class AdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf admin_unset;
        static const ydk::Enum::YLeaf admin_up;
        static const ydk::Enum::YLeaf admin_down;

};

class SliceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf slice_oper_unset;
        static const ydk::Enum::YLeaf slice_oper_down;
        static const ydk::Enum::YLeaf slice_oper_up;
        static const ydk::Enum::YLeaf slice_oper_na;

};

class OperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oper_unset;
        static const ydk::Enum::YLeaf oper_unknown;
        static const ydk::Enum::YLeaf oper_up;
        static const ydk::Enum::YLeaf oper_down;
        static const ydk::Enum::YLeaf card_down;

};

class Rack : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rack_type_unset;
        static const ydk::Enum::YLeaf rack_type_lcc;
        static const ydk::Enum::YLeaf rack_type_fcc;

};

class AsicInitMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asic_init_method_unset;
        static const ydk::Enum::YLeaf asic_init_method_no_reset;
        static const ydk::Enum::YLeaf asic_init_method_pon_reset;
        static const ydk::Enum::YLeaf asic_init_method_pon_reset_on_intr;
        static const ydk::Enum::YLeaf asic_init_method_hard_reset;
        static const ydk::Enum::YLeaf asic_init_method_warmboot;
        static const ydk::Enum::YLeaf asic_init_method_issu_wb;
        static const ydk::Enum::YLeaf asic_init_method_pci_shutdown;
        static const ydk::Enum::YLeaf asic_init_method_quiesce;
        static const ydk::Enum::YLeaf asic_init_method_issu_started;
        static const ydk::Enum::YLeaf asic_init_method_issu_rollback;
        static const ydk::Enum::YLeaf asic_init_method_issu_abort;
        static const ydk::Enum::YLeaf asic_init_method_slice_cleanup;
        static const ydk::Enum::YLeaf asic_init_method_lc_remove;
        static const ydk::Enum::YLeaf asic_init_method_node_down;
        static const ydk::Enum::YLeaf asic_init_method_intr;
        static const ydk::Enum::YLeaf asic_init_method_board_reload;
        static const ydk::Enum::YLeaf asic_init_method_max;

};


}
}

#endif /* _CISCO_IOS_XR_DNX_DRIVER_OPER_ */

