#ifndef _OPENCONFIG_MPLS_
#define _OPENCONFIG_MPLS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_mpls {

class PathComputationMethod : public virtual ydk::Identity
{
    public:
        PathComputationMethod();
        ~PathComputationMethod();


}; // PathComputationMethod

class Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

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

        class Global; //type: Mpls::Global
        class TeGlobalAttributes; //type: Mpls::TeGlobalAttributes
        class TeInterfaceAttributes; //type: Mpls::TeInterfaceAttributes
        class SignalingProtocols; //type: Mpls::SignalingProtocols
        class Lsps; //type: Mpls::Lsps

        std::shared_ptr<openconfig_mpls::Mpls::Global> global;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps> lsps;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols> signaling_protocols;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes> te_global_attributes;
        std::shared_ptr<openconfig_mpls::Mpls::TeInterfaceAttributes> te_interface_attributes;
        
}; // Mpls


class Mpls::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Global::Config
        class State; //type: Mpls::Global::State
        class MplsInterfaceAttributes; //type: Mpls::Global::MplsInterfaceAttributes

        std::shared_ptr<openconfig_mpls::Mpls::Global::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Global::MplsInterfaceAttributes> mpls_interface_attributes;
        std::shared_ptr<openconfig_mpls::Mpls::Global::State> state;
        
}; // Mpls::Global


class Mpls::Global::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null_label; //type: NullLabelType

}; // Mpls::Global::Config


class Mpls::Global::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null_label; //type: NullLabelType

}; // Mpls::Global::State


class Mpls::Global::MplsInterfaceAttributes : public ydk::Entity
{
    public:
        MplsInterfaceAttributes();
        ~MplsInterfaceAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mpls::Global::MplsInterfaceAttributes::Interface

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Global::MplsInterfaceAttributes::Interface> > interface;
        
}; // Mpls::Global::MplsInterfaceAttributes


class Mpls::Global::MplsInterfaceAttributes::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_mpls::Mpls::Global::MplsInterfaceAttributes::Interface::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Global::MplsInterfaceAttributes::Interface::Config
        class State; //type: Mpls::Global::MplsInterfaceAttributes::Interface::State

        std::shared_ptr<openconfig_mpls::Mpls::Global::MplsInterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Global::MplsInterfaceAttributes::Interface::State> state;
        
}; // Mpls::Global::MplsInterfaceAttributes::Interface


class Mpls::Global::MplsInterfaceAttributes::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf name;
        ydk::YLeaf mpls_enabled; //type: boolean

}; // Mpls::Global::MplsInterfaceAttributes::Interface::Config


class Mpls::Global::MplsInterfaceAttributes::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf name;
        ydk::YLeaf mpls_enabled; //type: boolean

}; // Mpls::Global::MplsInterfaceAttributes::Interface::State


class Mpls::TeGlobalAttributes : public ydk::Entity
{
    public:
        TeGlobalAttributes();
        ~TeGlobalAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srlg; //type: Mpls::TeGlobalAttributes::Srlg
        class IgpFloodingBandwidth; //type: Mpls::TeGlobalAttributes::IgpFloodingBandwidth
        class MplsAdminGroups; //type: Mpls::TeGlobalAttributes::MplsAdminGroups
        class TeLspTimers; //type: Mpls::TeGlobalAttributes::TeLspTimers

        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::IgpFloodingBandwidth> igp_flooding_bandwidth;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups> mpls_admin_groups;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg> srlg;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::TeLspTimers> te_lsp_timers;
        
}; // Mpls::TeGlobalAttributes


class Mpls::TeGlobalAttributes::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srlg_; //type: Mpls::TeGlobalAttributes::Srlg::Srlg_

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_> > srlg;
        
}; // Mpls::TeGlobalAttributes::Srlg


class Mpls::TeGlobalAttributes::Srlg::Srlg_ : public ydk::Entity
{
    public:
        Srlg_();
        ~Srlg_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::TeGlobalAttributes::Srlg::Srlg_::Config
        class State; //type: Mpls::TeGlobalAttributes::Srlg::Srlg_::State
        class StaticSrlgMembers; //type: Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers

        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::State> state;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers> static_srlg_members;
        
}; // Mpls::TeGlobalAttributes::Srlg::Srlg_


class Mpls::TeGlobalAttributes::Srlg::Srlg_::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf flooding_type; //type: MplsSrlgFloodingType

}; // Mpls::TeGlobalAttributes::Srlg::Srlg_::Config


class Mpls::TeGlobalAttributes::Srlg::Srlg_::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf flooding_type; //type: MplsSrlgFloodingType

}; // Mpls::TeGlobalAttributes::Srlg::Srlg_::State


class Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers : public ydk::Entity
{
    public:
        StaticSrlgMembers();
        ~StaticSrlgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MembersList; //type: Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList> > members_list;
        
}; // Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers


class Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList : public ydk::Entity
{
    public:
        MembersList();
        ~MembersList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config::from_address)
        ydk::YLeaf from_address;
        class Config; //type: Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config
        class State; //type: Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State

        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State> state;
        
}; // Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList


class Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::Config


class Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // Mpls::TeGlobalAttributes::Srlg::Srlg_::StaticSrlgMembers::MembersList::State


class Mpls::TeGlobalAttributes::IgpFloodingBandwidth : public ydk::Entity
{
    public:
        IgpFloodingBandwidth();
        ~IgpFloodingBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config
        class State; //type: Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State

        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State> state;
        
}; // Mpls::TeGlobalAttributes::IgpFloodingBandwidth


class Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf delta_percentage; //type: uint8
        ydk::YLeaf threshold_specification; //type: ThresholdSpecification
        ydk::YLeafList up_thresholds; //type: list of  uint8
        ydk::YLeafList down_thresholds; //type: list of  uint8
        ydk::YLeafList up_down_thresholds; //type: list of  uint8
        class ThresholdType;
        class ThresholdSpecification;

}; // Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config


class Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf delta_percentage; //type: uint8
        ydk::YLeaf threshold_specification; //type: ThresholdSpecification
        ydk::YLeafList up_thresholds; //type: list of  uint8
        ydk::YLeafList down_thresholds; //type: list of  uint8
        ydk::YLeafList up_down_thresholds; //type: list of  uint8
        class ThresholdType;
        class ThresholdSpecification;

}; // Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State


class Mpls::TeGlobalAttributes::MplsAdminGroups : public ydk::Entity
{
    public:
        MplsAdminGroups();
        ~MplsAdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminGroup; //type: Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup> > admin_group;
        
}; // Mpls::TeGlobalAttributes::MplsAdminGroups


class Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup : public ydk::Entity
{
    public:
        AdminGroup();
        ~AdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::admin_group_name)
        ydk::YLeaf admin_group_name;
        class Config; //type: Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config
        class State; //type: Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State

        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State> state;
        
}; // Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup


class Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_group_name; //type: string
        ydk::YLeaf bit_position; //type: uint32

}; // Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config


class Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admin_group_name; //type: string
        ydk::YLeaf bit_position; //type: uint32

}; // Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State


class Mpls::TeGlobalAttributes::TeLspTimers : public ydk::Entity
{
    public:
        TeLspTimers();
        ~TeLspTimers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::TeGlobalAttributes::TeLspTimers::Config
        class State; //type: Mpls::TeGlobalAttributes::TeLspTimers::State

        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::TeLspTimers::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::TeGlobalAttributes::TeLspTimers::State> state;
        
}; // Mpls::TeGlobalAttributes::TeLspTimers


class Mpls::TeGlobalAttributes::TeLspTimers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf install_delay; //type: uint16
        ydk::YLeaf cleanup_delay; //type: uint16
        ydk::YLeaf reoptimize_timer; //type: uint16

}; // Mpls::TeGlobalAttributes::TeLspTimers::Config


class Mpls::TeGlobalAttributes::TeLspTimers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf install_delay; //type: uint16
        ydk::YLeaf cleanup_delay; //type: uint16
        ydk::YLeaf reoptimize_timer; //type: uint16

}; // Mpls::TeGlobalAttributes::TeLspTimers::State


class Mpls::TeInterfaceAttributes : public ydk::Entity
{
    public:
        TeInterfaceAttributes();
        ~TeInterfaceAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mpls::TeInterfaceAttributes::Interface

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::TeInterfaceAttributes::Interface> > interface;
        
}; // Mpls::TeInterfaceAttributes


class Mpls::TeInterfaceAttributes::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::TeInterfaceAttributes::Interface::Config
        class State; //type: Mpls::TeInterfaceAttributes::Interface::State
        class IgpFloodingBandwidth; //type: Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth

        std::shared_ptr<openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth> igp_flooding_bandwidth;
        std::shared_ptr<openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::State> state;
        
}; // Mpls::TeInterfaceAttributes::Interface


class Mpls::TeInterfaceAttributes::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf name;
        ydk::YLeaf te_metric; //type: uint32
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::name)
        ydk::YLeafList srlg_membership;
        ydk::YLeafList admin_group; //type: list of  string

}; // Mpls::TeInterfaceAttributes::Interface::Config


class Mpls::TeInterfaceAttributes::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf name;
        ydk::YLeaf te_metric; //type: uint32
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::Srlg::Srlg_::name)
        ydk::YLeafList srlg_membership;
        ydk::YLeafList admin_group; //type: list of  string

}; // Mpls::TeInterfaceAttributes::Interface::State


class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth : public ydk::Entity
{
    public:
        IgpFloodingBandwidth();
        ~IgpFloodingBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config
        class State; //type: Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State

        std::shared_ptr<openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State> state;
        
}; // Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth


class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf delta_percentage; //type: uint8
        ydk::YLeaf threshold_specification; //type: ThresholdSpecification
        ydk::YLeafList up_thresholds; //type: list of  uint8
        ydk::YLeafList down_thresholds; //type: list of  uint8
        ydk::YLeafList up_down_thresholds; //type: list of  uint8
        class ThresholdType;
        class ThresholdSpecification;

}; // Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config


class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf delta_percentage; //type: uint8
        ydk::YLeaf threshold_specification; //type: ThresholdSpecification
        ydk::YLeafList up_thresholds; //type: list of  uint8
        ydk::YLeafList down_thresholds; //type: list of  uint8
        ydk::YLeafList up_down_thresholds; //type: list of  uint8
        class ThresholdType;
        class ThresholdSpecification;

}; // Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State


class Mpls::SignalingProtocols : public ydk::Entity
{
    public:
        SignalingProtocols();
        ~SignalingProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpTe; //type: Mpls::SignalingProtocols::RsvpTe
        class SegmentRouting; //type: Mpls::SignalingProtocols::SegmentRouting
        class Ldp; //type: Mpls::SignalingProtocols::Ldp

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::Ldp> ldp;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe> rsvp_te;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting> segment_routing;
        
}; // Mpls::SignalingProtocols


class Mpls::SignalingProtocols::RsvpTe : public ydk::Entity
{
    public:
        RsvpTe();
        ~RsvpTe();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sessions; //type: Mpls::SignalingProtocols::RsvpTe::Sessions
        class Neighbors; //type: Mpls::SignalingProtocols::RsvpTe::Neighbors
        class Global; //type: Mpls::SignalingProtocols::RsvpTe::Global
        class InterfaceAttributes; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global> global;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes> interface_attributes;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Neighbors> neighbors;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions> sessions;
        
}; // Mpls::SignalingProtocols::RsvpTe


class Mpls::SignalingProtocols::RsvpTe::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Sessions


class Mpls::SignalingProtocols::RsvpTe::Sessions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Mpls::SignalingProtocols::RsvpTe::Sessions::Config


class Mpls::SignalingProtocols::RsvpTe::Sessions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session> > session;
        
}; // Mpls::SignalingProtocols::RsvpTe::Sessions::State


class Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf status; //type: Status
        ydk::YLeaf type; //type: Type
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf label_in; //type: one of uint32, enumeration
        ydk::YLeaf label_out; //type: one of uint32, enumeration
        //type: list of  string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Config::name)
        ydk::YLeafList associated_lsps;
        class Status;
        class Type;

}; // Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session


class Mpls::SignalingProtocols::RsvpTe::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Neighbors::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Neighbors::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Neighbors::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Neighbors::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Neighbors


class Mpls::SignalingProtocols::RsvpTe::Neighbors::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Mpls::SignalingProtocols::RsvpTe::Neighbors::Config


class Mpls::SignalingProtocols::RsvpTe::Neighbors::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbor; //type: Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor> > neighbor;
        
}; // Mpls::SignalingProtocols::RsvpTe::Neighbors::State


class Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf detected_interface; //type: string
        ydk::YLeaf neighbor_status; //type: NeighborStatus
        ydk::YLeaf refresh_reduction; //type: boolean
        class NeighborStatus;

}; // Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor


class Mpls::SignalingProtocols::RsvpTe::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GracefulRestart; //type: Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart
        class SoftPreemption; //type: Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption
        class Hellos; //type: Mpls::SignalingProtocols::RsvpTe::Global::Hellos
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::Hellos> hellos;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption> soft_preemption;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global


class Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart


class Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config


class Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32

}; // Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State


class Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption : public ydk::Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption


class Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16

}; // Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config


class Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf soft_preemption_timeout; //type: uint16

}; // Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State


class Mpls::SignalingProtocols::RsvpTe::Global::Hellos : public ydk::Entity
{
    public:
        Hellos();
        ~Hellos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::Hellos


class Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config


class Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State


class Mpls::SignalingProtocols::RsvpTe::Global::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counters; //type: Mpls::SignalingProtocols::RsvpTe::Global::State::Counters

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters> counters;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::State


class Mpls::SignalingProtocols::RsvpTe::Global::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_timeouts; //type: uint64
        ydk::YLeaf reservation_timeouts; //type: uint64
        ydk::YLeaf rate_limited_messages; //type: uint64
        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // Mpls::SignalingProtocols::RsvpTe::Global::State::Counters


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes : public ydk::Entity
{
    public:
        InterfaceAttributes();
        ~InterfaceAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface> > interface;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::interface_name)
        ydk::YLeaf interface_name;
        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State
        class Hellos; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos
        class Authentication; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication
        class Subscription; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription
        class Protection; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication> authentication;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos> hellos;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection> protection;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State> state;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription> subscription;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface_name;

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf highwater_mark; //type: uint64
        ydk::YLeaf active_reservation_count; //type: uint64
        class Bandwidth; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth
        class Counters; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth> > bandwidth;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters> counters;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf available_bandwidth; //type: uint64
        ydk::YLeaf reserved_bandwidth; //type: uint64

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Bandwidth


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_path_messages; //type: uint64
        ydk::YLeaf in_path_error_messages; //type: uint64
        ydk::YLeaf in_path_tear_messages; //type: uint64
        ydk::YLeaf in_reservation_messages; //type: uint64
        ydk::YLeaf in_reservation_error_messages; //type: uint64
        ydk::YLeaf in_reservation_tear_messages; //type: uint64
        ydk::YLeaf in_hello_messages; //type: uint64
        ydk::YLeaf in_srefresh_messages; //type: uint64
        ydk::YLeaf in_ack_messages; //type: uint64
        ydk::YLeaf out_path_messages; //type: uint64
        ydk::YLeaf out_path_error_messages; //type: uint64
        ydk::YLeaf out_path_tear_messages; //type: uint64
        ydk::YLeaf out_reservation_messages; //type: uint64
        ydk::YLeaf out_reservation_error_messages; //type: uint64
        ydk::YLeaf out_reservation_tear_messages; //type: uint64
        ydk::YLeaf out_hello_messages; //type: uint64
        ydk::YLeaf out_srefresh_messages; //type: uint64
        ydk::YLeaf out_ack_messages; //type: uint64

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos : public ydk::Entity
{
    public:
        Hellos();
        ~Hellos();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf refresh_reduction; //type: boolean

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf authentication_key; //type: string

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf authentication_key; //type: string

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription : public ydk::Entity
{
    public:
        Subscription();
        ~Subscription();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription; //type: uint8

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription; //type: uint8

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protection_style_requested; //type: ProtectionType
        ydk::YLeaf bypass_optimize_interval; //type: uint16

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protection_style_requested; //type: ProtectionType
        ydk::YLeaf bypass_optimize_interval; //type: uint16

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State


class Mpls::SignalingProtocols::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Srgb; //type: Mpls::SignalingProtocols::SegmentRouting::Srgb
        class Interfaces; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces> > interfaces;
        std::vector<std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Srgb> > srgb;
        
}; // Mpls::SignalingProtocols::SegmentRouting


class Mpls::SignalingProtocols::SegmentRouting::Srgb : public ydk::Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32
        class Config; //type: Mpls::SignalingProtocols::SegmentRouting::Srgb::Config
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::Srgb::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Srgb::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Srgb::State> state;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Srgb


class Mpls::SignalingProtocols::SegmentRouting::Srgb::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Mpls::SignalingProtocols::SegmentRouting::Srgb::Config


class Mpls::SignalingProtocols::SegmentRouting::Srgb::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf free; //type: uint32
        ydk::YLeaf used; //type: uint32

}; // Mpls::SignalingProtocols::SegmentRouting::Srgb::State


class Mpls::SignalingProtocols::SegmentRouting::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        class Config; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::State
        class AdjacencySid; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid> adjacency_sid;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::State> state;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Config


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::State


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State> state;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList advertise; //type: list of  Advertise
        ydk::YLeafList groups; //type: list of  uint32
        class Advertise;

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList advertise; //type: list of  Advertise
        ydk::YLeafList groups; //type: list of  uint32
        class Advertise;

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State


class Mpls::SignalingProtocols::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timers; //type: Mpls::SignalingProtocols::Ldp::Timers

        std::shared_ptr<openconfig_mpls::Mpls::SignalingProtocols::Ldp::Timers> timers;
        
}; // Mpls::SignalingProtocols::Ldp


class Mpls::SignalingProtocols::Ldp::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Mpls::SignalingProtocols::Ldp::Timers


class Mpls::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConstrainedPath; //type: Mpls::Lsps::ConstrainedPath
        class UnconstrainedPath; //type: Mpls::Lsps::UnconstrainedPath
        class StaticLsps; //type: Mpls::Lsps::StaticLsps

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath> constrained_path;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::StaticLsps> static_lsps;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath> unconstrained_path;
        
}; // Mpls::Lsps


class Mpls::Lsps::ConstrainedPath : public ydk::Entity
{
    public:
        ConstrainedPath();
        ~ConstrainedPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NamedExplicitPaths; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths
        class Tunnel; //type: Mpls::Lsps::ConstrainedPath::Tunnel

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths> > named_explicit_paths;
        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel> > tunnel;
        
}; // Mpls::Lsps::ConstrainedPath


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths : public ydk::Entity
{
    public:
        NamedExplicitPaths();
        ~NamedExplicitPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State
        class ExplicitRouteObjects; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config> config;
        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects> > explicit_route_objects;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::State


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects : public ydk::Entity
{
    public:
        ExplicitRouteObjects();
        ~ExplicitRouteObjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf hop_type; //type: MplsHopType
        ydk::YLeaf index_; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::Config


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf hop_type; //type: MplsHopType
        ydk::YLeaf index_; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::ExplicitRouteObjects::State


class Mpls::Lsps::ConstrainedPath::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Config::name)
        ydk::YLeaf name;
        ydk::YLeaf type; //type: TunnelType
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::State
        class Bandwidth; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth
        class P2PTunnelAttributes; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth> bandwidth;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes> p2p_tunnel_attributes;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel


class Mpls::Lsps::ConstrainedPath::Tunnel::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: TunnelType
        ydk::YLeaf signaling_protocol; //type: TunnelType
        ydk::YLeaf local_id; //type: one of uint32, string
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: TunnelAdminStatus
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf metric; //type: one of uint32, enumeration
        ydk::YLeaf protection_style_requested; //type: ProtectionType
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf soft_preemption; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: TunnelType
        ydk::YLeaf signaling_protocol; //type: TunnelType
        ydk::YLeaf local_id; //type: one of uint32, string
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: TunnelAdminStatus
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf metric; //type: one of uint32, enumeration
        ydk::YLeaf protection_style_requested; //type: ProtectionType
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf soft_preemption; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf oper_status; //type: LspOperStatus
        ydk::YLeaf role; //type: LspRole
        class Counters; //type: Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters> counters;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::State


class Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf path_changes; //type: uint64
        ydk::YLeaf state_changes; //type: uint64
        ydk::YLeaf online_time; //type: string
        ydk::YLeaf current_path_time; //type: string
        ydk::YLeaf next_reoptimization_time; //type: string

}; // Mpls::Lsps::ConstrainedPath::Tunnel::State::Counters


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State
        class AutoBandwidth; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf specification_type; //type: TeBandwidthType
        ydk::YLeaf set_bandwidth; //type: uint32

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf specification_type; //type: TeBandwidthType
        ydk::YLeaf set_bandwidth; //type: uint32

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::State


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth : public ydk::Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State
        class Overflow; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow
        class Underflow; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow> overflow;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State> state;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow> underflow;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf min_bw; //type: uint32
        ydk::YLeaf max_bw; //type: uint32
        ydk::YLeaf adjust_interval; //type: uint32
        ydk::YLeaf adjust_threshold; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf min_bw; //type: uint32
        ydk::YLeaf max_bw; //type: uint32
        ydk::YLeaf adjust_interval; //type: uint32
        ydk::YLeaf adjust_threshold; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::State


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow : public ydk::Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf overflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf overflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Overflow::State


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow : public ydk::Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf underflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf underflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::Bandwidth::AutoBandwidth::Underflow::State


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes : public ydk::Entity
{
    public:
        P2PTunnelAttributes();
        ~P2PTunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State
        class P2PPrimaryPaths; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths
        class P2PSecondaryPaths; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config> config;
        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths> > p2p_primary_paths;
        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths> > p2p_secondary_paths;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::State


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths : public ydk::Entity
{
    public:
        P2PPrimaryPaths();
        ~P2PPrimaryPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State
        class CandidateSecondaryPaths; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths
        class AdminGroups; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups> admin_groups;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths> candidate_secondary_paths;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PathComputationMethod
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PathComputationMethod
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::State


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths : public ydk::Entity
{
    public:
        CandidateSecondaryPaths();
        ~CandidateSecondaryPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateSecondaryPath; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath> > candidate_secondary_path;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath : public ydk::Entity
{
    public:
        CandidateSecondaryPath();
        ~CandidateSecondaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config::secondary_path)
        ydk::YLeaf secondary_path;
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::name)
        ydk::YLeaf secondary_path;
        ydk::YLeaf priority; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::name)
        ydk::YLeaf secondary_path;
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf active; //type: boolean

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::CandidateSecondaryPaths::CandidateSecondaryPath::State


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups : public ydk::Entity
{
    public:
        AdminGroups();
        ~AdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PPrimaryPaths::AdminGroups::State


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths : public ydk::Entity
{
    public:
        P2PSecondaryPaths();
        ~P2PSecondaryPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State
        class AdminGroups; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups> admin_groups;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PathComputationMethod
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path_computation_method; //type: PathComputationMethod
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::State


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups : public ydk::Entity
{
    public:
        AdminGroups();
        ~AdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::Config


class Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnel::P2PTunnelAttributes::P2PSecondaryPaths::AdminGroups::State


class Mpls::Lsps::UnconstrainedPath : public ydk::Entity
{
    public:
        UnconstrainedPath();
        ~UnconstrainedPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathSetupProtocol; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol> path_setup_protocol;
        
}; // Mpls::Lsps::UnconstrainedPath


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol : public ydk::Entity
{
    public:
        PathSetupProtocol();
        ~PathSetupProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ldp; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp
        class SegmentRouting; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp> ldp; // presence node
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting> segment_routing; // presence node
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tunnel; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel> tunnel;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_type; //type: TunnelType
        ydk::YLeaf ldp_type; //type: LdpType
        class P2PLsp; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp
        class P2MpLsp; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp
        class Mp2MpLsp; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp> mp2mp_lsp;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp> p2mp_lsp;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp> p2p_lsp;
                class LdpType;

}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp : public ydk::Entity
{
    public:
        P2PLsp();
        ~P2PLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList fec_address; //type: list of  string

}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2PLsp


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp : public ydk::Entity
{
    public:
        P2MpLsp();
        ~P2MpLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::P2MpLsp


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp : public ydk::Entity
{
    public:
        Mp2MpLsp();
        ~Mp2MpLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::Mp2MpLsp


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tunnel; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel> tunnel;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_type; //type: TunnelType
        class P2PLsp; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp> p2p_lsp;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp : public ydk::Entity
{
    public:
        P2PLsp();
        ~P2PLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fec; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec> > fec;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_address; //type: string
        class Config; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config
        class State; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State
        class PrefixSid; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid> prefix_sid;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State> state;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_address; //type: string

}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::Config


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_address; //type: string

}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::State


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config
        class State; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config> config;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State> state;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf node_flag; //type: boolean
        ydk::YLeaf last_hop_behavior; //type: LastHopBehavior
        class Type;
        class LastHopBehavior;

}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Type
        ydk::YLeaf node_flag; //type: boolean
        ydk::YLeaf last_hop_behavior; //type: LastHopBehavior
        class Type;
        class LastHopBehavior;

}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State


class Mpls::Lsps::StaticLsps : public ydk::Entity
{
    public:
        StaticLsps();
        ~StaticLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelSwitchedPath; //type: Mpls::Lsps::StaticLsps::LabelSwitchedPath

        std::vector<std::shared_ptr<openconfig_mpls::Mpls::Lsps::StaticLsps::LabelSwitchedPath> > label_switched_path;
        
}; // Mpls::Lsps::StaticLsps


class Mpls::Lsps::StaticLsps::LabelSwitchedPath : public ydk::Entity
{
    public:
        LabelSwitchedPath();
        ~LabelSwitchedPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Ingress; //type: Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress
        class Transit; //type: Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit
        class Egress; //type: Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress

        std::shared_ptr<openconfig_mpls::Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress> egress;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress> ingress;
        std::shared_ptr<openconfig_mpls::Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit> transit;
        
}; // Mpls::Lsps::StaticLsps::LabelSwitchedPath


class Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress : public ydk::Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::LabelSwitchedPath::Ingress


class Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit : public ydk::Entity
{
    public:
        Transit();
        ~Transit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::LabelSwitchedPath::Transit


class Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress : public ydk::Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::LabelSwitchedPath::Egress

class LocallyComputed : public openconfig_mpls::PathComputationMethod, virtual ydk::Identity
{
    public:
        LocallyComputed();
        ~LocallyComputed();


}; // LocallyComputed

class ExplicitlyDefined : public openconfig_mpls::PathComputationMethod, virtual ydk::Identity
{
    public:
        ExplicitlyDefined();
        ~ExplicitlyDefined();


}; // ExplicitlyDefined

class ExternallyQueried : public openconfig_mpls::PathComputationMethod, virtual ydk::Identity
{
    public:
        ExternallyQueried();
        ~ExternallyQueried();


}; // ExternallyQueried

class CspfTieBreaking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf RANDOM;
        static const ydk::Enum::YLeaf LEAST_FILL;
        static const ydk::Enum::YLeaf MOST_FILL;

};

class TeBandwidthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SPECIFIED;
        static const ydk::Enum::YLeaf AUTO;

};

class MplsSrlgFloodingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf FLOODED_SRLG;
        static const ydk::Enum::YLeaf STATIC_SRLG;

};

class TeMetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGP;

};

class MplsHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LOOSE;
        static const ydk::Enum::YLeaf STRICT;

};

class Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DELTA;
        static const ydk::Enum::YLeaf THRESHOLD_CROSSED;

};

class Mpls::TeGlobalAttributes::IgpFloodingBandwidth::Config::ThresholdSpecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MIRRORED_UP_DOWN;
        static const ydk::Enum::YLeaf SEPARATE_UP_DOWN;

};

class Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DELTA;
        static const ydk::Enum::YLeaf THRESHOLD_CROSSED;

};

class Mpls::TeGlobalAttributes::IgpFloodingBandwidth::State::ThresholdSpecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MIRRORED_UP_DOWN;
        static const ydk::Enum::YLeaf SEPARATE_UP_DOWN;

};

class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DELTA;
        static const ydk::Enum::YLeaf THRESHOLD_CROSSED;

};

class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config::ThresholdSpecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MIRRORED_UP_DOWN;
        static const ydk::Enum::YLeaf SEPARATE_UP_DOWN;

};

class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DELTA;
        static const ydk::Enum::YLeaf THRESHOLD_CROSSED;

};

class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State::ThresholdSpecification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MIRRORED_UP_DOWN;
        static const ydk::Enum::YLeaf SEPARATE_UP_DOWN;

};

class Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;

};

class Mpls::SignalingProtocols::RsvpTe::Sessions::State::Session::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SOURCE;
        static const ydk::Enum::YLeaf TRANSIT;
        static const ydk::Enum::YLeaf DESTINATION;

};

class Mpls::SignalingProtocols::RsvpTe::Neighbors::State::Neighbor::NeighborStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;

};

class Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::Config::Advertise : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PROTECTED;
        static const ydk::Enum::YLeaf UNPROTECTED;

};

class Mpls::SignalingProtocols::SegmentRouting::Interfaces::AdjacencySid::State::Advertise : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PROTECTED;
        static const ydk::Enum::YLeaf UNPROTECTED;

};

class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp::Tunnel::LdpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BASIC;
        static const ydk::Enum::YLeaf TARGETED;

};

class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INDEX;
        static const ydk::Enum::YLeaf ABSOLUTE;

};

class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::Config::LastHopBehavior : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXPLICIT_NULL;
        static const ydk::Enum::YLeaf UNCHANGED;
        static const ydk::Enum::YLeaf PHP;

};

class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INDEX;
        static const ydk::Enum::YLeaf ABSOLUTE;

};

class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::SegmentRouting::Tunnel::P2PLsp::Fec::PrefixSid::State::LastHopBehavior : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf EXPLICIT_NULL;
        static const ydk::Enum::YLeaf UNCHANGED;
        static const ydk::Enum::YLeaf PHP;

};


}
}

#endif /* _OPENCONFIG_MPLS_ */

