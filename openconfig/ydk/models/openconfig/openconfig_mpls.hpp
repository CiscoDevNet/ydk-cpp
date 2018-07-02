#ifndef _OPENCONFIG_MPLS_
#define _OPENCONFIG_MPLS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_mpls {

class Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

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

        class Global; //type: Mpls::Global
        class TeGlobalAttributes; //type: Mpls::TeGlobalAttributes
        class TeInterfaceAttributes; //type: Mpls::TeInterfaceAttributes
        class SignalingProtocols; //type: Mpls::SignalingProtocols
        class Lsps; //type: Mpls::Lsps

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global> global;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes> te_global_attributes;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes> te_interface_attributes;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols> signaling_protocols;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps> lsps;
        
}; // Mpls


class Mpls::Global : public ydk::Entity
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

        class Config; //type: Mpls::Global::Config
        class State; //type: Mpls::Global::State
        class InterfaceAttributes; //type: Mpls::Global::InterfaceAttributes
        class ReservedLabelBlocks; //type: Mpls::Global::ReservedLabelBlocks

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::InterfaceAttributes> interface_attributes;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::ReservedLabelBlocks> reserved_label_blocks;
        
}; // Mpls::Global


class Mpls::Global::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf null_label; //type: NULLLABELTYPE

}; // Mpls::Global::Config


class Mpls::Global::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf null_label; //type: NULLLABELTYPE

}; // Mpls::Global::State


class Mpls::Global::InterfaceAttributes : public ydk::Entity
{
    public:
        InterfaceAttributes();
        ~InterfaceAttributes();

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

        class Interface; //type: Mpls::Global::InterfaceAttributes::Interface

        ydk::YList interface;
        
}; // Mpls::Global::InterfaceAttributes


class Mpls::Global::InterfaceAttributes::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Global::InterfaceAttributes::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: Mpls::Global::InterfaceAttributes::Interface::Config
        class State; //type: Mpls::Global::InterfaceAttributes::Interface::State
        class InterfaceRef; //type: Mpls::Global::InterfaceAttributes::Interface::InterfaceRef

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::InterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::InterfaceAttributes::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef> interface_ref;
        
}; // Mpls::Global::InterfaceAttributes::Interface


class Mpls::Global::InterfaceAttributes::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf mpls_enabled; //type: boolean

}; // Mpls::Global::InterfaceAttributes::Interface::Config


class Mpls::Global::InterfaceAttributes::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf mpls_enabled; //type: boolean

}; // Mpls::Global::InterfaceAttributes::Interface::State


class Mpls::Global::InterfaceAttributes::Interface::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config
        class State; //type: Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State> state;
        
}; // Mpls::Global::InterfaceAttributes::Interface::InterfaceRef


class Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::Config


class Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::Global::InterfaceAttributes::Interface::InterfaceRef::State


class Mpls::Global::ReservedLabelBlocks : public ydk::Entity
{
    public:
        ReservedLabelBlocks();
        ~ReservedLabelBlocks();

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

        class ReservedLabelBlock; //type: Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock

        ydk::YList reserved_label_block;
        
}; // Mpls::Global::ReservedLabelBlocks


class Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock : public ydk::Entity
{
    public:
        ReservedLabelBlock();
        ~ReservedLabelBlock();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config::local_id)
        ydk::YLeaf local_id;
        class Config; //type: Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config
        class State; //type: Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State> state;
        
}; // Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock


class Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_id; //type: string
        ydk::YLeaf lower_bound; //type: one of uint32, enumeration
        ydk::YLeaf upper_bound; //type: one of uint32, enumeration

}; // Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::Config


class Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_id; //type: string
        ydk::YLeaf lower_bound; //type: one of uint32, enumeration
        ydk::YLeaf upper_bound; //type: one of uint32, enumeration

}; // Mpls::Global::ReservedLabelBlocks::ReservedLabelBlock::State


class Mpls::TeGlobalAttributes : public ydk::Entity
{
    public:
        TeGlobalAttributes();
        ~TeGlobalAttributes();

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

        class Srlgs; //type: Mpls::TeGlobalAttributes::Srlgs
        class MplsAdminGroups; //type: Mpls::TeGlobalAttributes::MplsAdminGroups
        class TeLspTimers; //type: Mpls::TeGlobalAttributes::TeLspTimers

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs> srlgs;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups> mpls_admin_groups;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::TeLspTimers> te_lsp_timers;
        
}; // Mpls::TeGlobalAttributes


class Mpls::TeGlobalAttributes::Srlgs : public ydk::Entity
{
    public:
        Srlgs();
        ~Srlgs();

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

        class Srlg; //type: Mpls::TeGlobalAttributes::Srlgs::Srlg

        ydk::YList srlg;
        
}; // Mpls::TeGlobalAttributes::Srlgs


class Mpls::TeGlobalAttributes::Srlgs::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::TeGlobalAttributes::Srlgs::Srlg::Config
        class State; //type: Mpls::TeGlobalAttributes::Srlgs::Srlg::State
        class StaticSrlgMembers; //type: Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers> static_srlg_members;
        
}; // Mpls::TeGlobalAttributes::Srlgs::Srlg


class Mpls::TeGlobalAttributes::Srlgs::Srlg::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf flooding_type; //type: MplsSrlgFloodingType

}; // Mpls::TeGlobalAttributes::Srlgs::Srlg::Config


class Mpls::TeGlobalAttributes::Srlgs::Srlg::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf flooding_type; //type: MplsSrlgFloodingType

}; // Mpls::TeGlobalAttributes::Srlgs::Srlg::State


class Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers : public ydk::Entity
{
    public:
        StaticSrlgMembers();
        ~StaticSrlgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MembersList; //type: Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList

        ydk::YList members_list;
        
}; // Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers


class Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList : public ydk::Entity
{
    public:
        MembersList();
        ~MembersList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config::from_address)
        ydk::YLeaf from_address;
        class Config; //type: Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config
        class State; //type: Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State> state;
        
}; // Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList


class Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::Config


class Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from_address; //type: string
        ydk::YLeaf to_address; //type: string

}; // Mpls::TeGlobalAttributes::Srlgs::Srlg::StaticSrlgMembers::MembersList::State


class Mpls::TeGlobalAttributes::MplsAdminGroups : public ydk::Entity
{
    public:
        MplsAdminGroups();
        ~MplsAdminGroups();

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

        class AdminGroup; //type: Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup

        ydk::YList admin_group;
        
}; // Mpls::TeGlobalAttributes::MplsAdminGroups


class Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup : public ydk::Entity
{
    public:
        AdminGroup();
        ~AdminGroup();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config::admin_group_name)
        ydk::YLeaf admin_group_name;
        class Config; //type: Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config
        class State; //type: Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::State> state;
        
}; // Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup


class Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Config; //type: Mpls::TeGlobalAttributes::TeLspTimers::Config
        class State; //type: Mpls::TeGlobalAttributes::TeLspTimers::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::TeLspTimers::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::TeLspTimers::State> state;
        
}; // Mpls::TeGlobalAttributes::TeLspTimers


class Mpls::TeGlobalAttributes::TeLspTimers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Mpls::TeInterfaceAttributes::Interface

        ydk::YList interface;
        
}; // Mpls::TeInterfaceAttributes


class Mpls::TeInterfaceAttributes::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: Mpls::TeInterfaceAttributes::Interface::Config
        class State; //type: Mpls::TeInterfaceAttributes::Interface::State
        class InterfaceRef; //type: Mpls::TeInterfaceAttributes::Interface::InterfaceRef
        class IgpFloodingBandwidth; //type: Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth> igp_flooding_bandwidth;
        
}; // Mpls::TeInterfaceAttributes::Interface


class Mpls::TeInterfaceAttributes::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf te_metric; //type: uint32
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::name)
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf te_metric; //type: uint32
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::Srlgs::Srlg::name)
        ydk::YLeafList srlg_membership;
        ydk::YLeafList admin_group; //type: list of  string

}; // Mpls::TeInterfaceAttributes::Interface::State


class Mpls::TeInterfaceAttributes::Interface::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config
        class State; //type: Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State> state;
        
}; // Mpls::TeInterfaceAttributes::Interface::InterfaceRef


class Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::TeInterfaceAttributes::Interface::InterfaceRef::Config


class Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::TeInterfaceAttributes::Interface::InterfaceRef::State


class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth : public ydk::Entity
{
    public:
        IgpFloodingBandwidth();
        ~IgpFloodingBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config
        class State; //type: Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::State> state;
        
}; // Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth


class Mpls::TeInterfaceAttributes::Interface::IgpFloodingBandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RsvpTe; //type: Mpls::SignalingProtocols::RsvpTe
        class Ldp; //type: Mpls::SignalingProtocols::Ldp
        class SegmentRouting; //type: Mpls::SignalingProtocols::SegmentRouting

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe> rsvp_te;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::Ldp> ldp;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting> segment_routing;
        
}; // Mpls::SignalingProtocols


class Mpls::SignalingProtocols::RsvpTe : public ydk::Entity
{
    public:
        RsvpTe();
        ~RsvpTe();

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

        class Sessions; //type: Mpls::SignalingProtocols::RsvpTe::Sessions
        class Neighbors; //type: Mpls::SignalingProtocols::RsvpTe::Neighbors
        class Global; //type: Mpls::SignalingProtocols::RsvpTe::Global
        class InterfaceAttributes; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions> sessions;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Neighbors> neighbors;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global> global;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes> interface_attributes;
        
}; // Mpls::SignalingProtocols::RsvpTe


class Mpls::SignalingProtocols::RsvpTe::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::Session

        ydk::YList session;
        
}; // Mpls::SignalingProtocols::RsvpTe::Sessions


class Mpls::SignalingProtocols::RsvpTe::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        //type: uint64 (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::local_index)
        ydk::YLeaf local_index;
        class RecordRouteObjects; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects> record_route_objects;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Sessions::Session


class Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects : public ydk::Entity
{
    public:
        RecordRouteObjects();
        ~RecordRouteObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RecordRouteObject; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject

        ydk::YList record_route_object;
        
}; // Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects


class Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject : public ydk::Entity
{
    public:
        RecordRouteObject();
        ~RecordRouteObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State::index_)
        ydk::YLeaf index_;
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject


class Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint8
        ydk::YLeaf address; //type: string
        ydk::YLeaf reported_label; //type: one of uint32, enumeration
        ydk::YLeaf reported_flags; //type: uint8

}; // Mpls::SignalingProtocols::RsvpTe::Sessions::Session::RecordRouteObjects::RecordRouteObject::State


class Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_index; //type: uint64
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf tunnel_id; //type: uint16
        ydk::YLeaf lsp_id; //type: uint16
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf status; //type: Status
        ydk::YLeaf type; //type: LSPROLE
        ydk::YLeaf protection_requested; //type: PROTECTIONTYPE
        ydk::YLeaf label_in; //type: one of uint32, enumeration
        ydk::YLeaf label_out; //type: one of uint32, enumeration
        class SenderTspec; //type: Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec> sender_tspec;
                class Status;

}; // Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State


class Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec : public ydk::Entity
{
    public:
        SenderTspec();
        ~SenderTspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: binary
        ydk::YLeaf size; //type: binary
        ydk::YLeaf peak_data_rate; //type: one of binary, enumeration
        class PeakDataRate;

}; // Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec


class Mpls::SignalingProtocols::RsvpTe::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Mpls::SignalingProtocols::RsvpTe::Neighbors


class Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        //type: union (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::address)
        ydk::YLeaf address;
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor


class Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State


class Mpls::SignalingProtocols::RsvpTe::Global : public ydk::Entity
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

        class GracefulRestart; //type: Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart
        class SoftPreemption; //type: Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption
        class Hellos; //type: Mpls::SignalingProtocols::RsvpTe::Global::Hellos
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption> soft_preemption;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::Hellos> hellos;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global


class Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart


class Mpls::SignalingProtocols::RsvpTe::Global::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption


class Mpls::SignalingProtocols::RsvpTe::Global::SoftPreemption::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::Hellos::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::Hellos


class Mpls::SignalingProtocols::RsvpTe::Global::Hellos::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Counters; //type: Mpls::SignalingProtocols::RsvpTe::Global::State::Counters

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Global::State::Counters> counters;
        
}; // Mpls::SignalingProtocols::RsvpTe::Global::State


class Mpls::SignalingProtocols::RsvpTe::Global::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface

        ydk::YList interface;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State
        class InterfaceRef; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef
        class BandwidthReservations; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations
        class Hellos; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos
        class Authentication; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication
        class Subscription; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription
        class Protection; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations> bandwidth_reservations;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos> hellos;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication> authentication;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription> subscription;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection> protection;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string
        class Counters; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters> counters;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::InterfaceRef::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations : public ydk::Entity
{
    public:
        BandwidthReservations();
        ~BandwidthReservations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BandwidthReservation; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation

        ydk::YList bandwidth_reservation;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation : public ydk::Entity
{
    public:
        BandwidthReservation();
        ~BandwidthReservation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::priority)
        ydk::YLeaf priority;
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: one of uint8, enumeration
        ydk::YLeaf available_bandwidth; //type: uint64
        ydk::YLeaf reserved_bandwidth; //type: uint64
        ydk::YLeaf active_reservations_count; //type: uint64
        ydk::YLeaf highwater_mark; //type: uint64
        class Priority;

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos : public ydk::Entity
{
    public:
        Hellos();
        ~Hellos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Hellos::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Authentication::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscription; //type: uint8
        ydk::YLeaf calculated_absolute_subscription_bw; //type: uint64

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Subscription::State


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config
        class State; //type: Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State> state;
        
}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf bypass_optimize_interval; //type: uint16

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::Config


class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf bypass_optimize_interval; //type: uint16

}; // Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::Protection::State


class Mpls::SignalingProtocols::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

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


}; // Mpls::SignalingProtocols::Ldp


class Mpls::SignalingProtocols::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

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

        class AggregateSidCounters; //type: Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters
        class Interfaces; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters> aggregate_sid_counters;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces> interfaces;
        
}; // Mpls::SignalingProtocols::SegmentRouting


class Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters : public ydk::Entity
{
    public:
        AggregateSidCounters();
        ~AggregateSidCounters();

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

        class AggregateSidCounter; //type: Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter

        ydk::YList aggregate_sid_counter;
        
}; // Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters


class Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter : public ydk::Entity
{
    public:
        AggregateSidCounter();
        ~AggregateSidCounter();

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

        //type: union (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State::mpls_label)
        ydk::YLeaf mpls_label;
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State> state;
        
}; // Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter


class Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls_label; //type: one of uint32, enumeration
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64

}; // Mpls::SignalingProtocols::SegmentRouting::AggregateSidCounters::AggregateSidCounter::State


class Mpls::SignalingProtocols::SegmentRouting::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface

        ydk::YList interface;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config::interface_id)
        ydk::YLeaf interface_id;
        class Config; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State
        class SidCounters; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters
        class InterfaceRef; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters> sid_counters;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef> interface_ref;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::Config


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::State


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters : public ydk::Entity
{
    public:
        SidCounters();
        ~SidCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SidCounter; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter

        ydk::YList sid_counter;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter : public ydk::Entity
{
    public:
        SidCounter();
        ~SidCounter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State::mpls_label)
        ydk::YLeaf mpls_label;
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State
        class ForwardingClasses; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses> forwarding_classes;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls_label; //type: one of uint32, enumeration
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::State


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses : public ydk::Entity
{
    public:
        ForwardingClasses();
        ~ForwardingClasses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ForwardingClass; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass

        ydk::YList forwarding_class;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass : public ydk::Entity
{
    public:
        ForwardingClass();
        ~ForwardingClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State::exp)
        ydk::YLeaf exp;
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State> state;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exp; //type: uint8
        ydk::YLeaf in_pkts; //type: uint64
        ydk::YLeaf in_octets; //type: uint64
        ydk::YLeaf out_pkts; //type: uint64
        ydk::YLeaf out_octets; //type: uint64

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::SidCounters::SidCounter::ForwardingClasses::ForwardingClass::State


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config
        class State; //type: Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State> state;
        
}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::Config


class Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // Mpls::SignalingProtocols::SegmentRouting::Interfaces::Interface::InterfaceRef::State


class Mpls::Lsps : public ydk::Entity
{
    public:
        Lsps();
        ~Lsps();

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

        class ConstrainedPath; //type: Mpls::Lsps::ConstrainedPath
        class UnconstrainedPath; //type: Mpls::Lsps::UnconstrainedPath
        class StaticLsps; //type: Mpls::Lsps::StaticLsps

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath> constrained_path;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::UnconstrainedPath> unconstrained_path;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps> static_lsps;
        
}; // Mpls::Lsps


class Mpls::Lsps::ConstrainedPath : public ydk::Entity
{
    public:
        ConstrainedPath();
        ~ConstrainedPath();

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

        class NamedExplicitPaths; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths
        class Tunnels; //type: Mpls::Lsps::ConstrainedPath::Tunnels

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths> named_explicit_paths;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels> tunnels;
        
}; // Mpls::Lsps::ConstrainedPath


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths : public ydk::Entity
{
    public:
        NamedExplicitPaths();
        ~NamedExplicitPaths();

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

        class NamedExplicitPath; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath

        ydk::YList named_explicit_path;
        
}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath : public ydk::Entity
{
    public:
        NamedExplicitPath();
        ~NamedExplicitPath();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State
        class ExplicitRouteObjects; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects> explicit_route_objects;
        
}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf sid_selection_mode; //type: SidSelectionMode
        ydk::YLeaf sid_protection_required; //type: boolean
        class SidSelectionMode;

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf sid_selection_mode; //type: SidSelectionMode
        ydk::YLeaf sid_protection_required; //type: boolean
        class SidSelectionMode;

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects : public ydk::Entity
{
    public:
        ExplicitRouteObjects();
        ~ExplicitRouteObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExplicitRouteObject; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject

        ydk::YList explicit_route_object;
        
}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject : public ydk::Entity
{
    public:
        ExplicitRouteObject();
        ~ExplicitRouteObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint8 (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config::index_)
        ydk::YLeaf index_;
        class Config; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf hop_type; //type: MplsHopType
        ydk::YLeaf index_; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::Config


class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf hop_type; //type: MplsHopType
        ydk::YLeaf index_; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::ExplicitRouteObjects::ExplicitRouteObject::State


class Mpls::Lsps::ConstrainedPath::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class Tunnel; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State
        class Bandwidth; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth
        class P2pTunnelAttributes; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth> bandwidth;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes> p2p_tunnel_attributes;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf type; //type: TUNNELTYPE
        ydk::YLeaf signaling_protocol; //type: PATHSETUPPROTOCOL
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: TUNNELADMINSTATUS
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf metric_type; //type: LSPMETRICTYPE
        ydk::YLeaf metric; //type: int32
        ydk::YLeaf shortcut_eligible; //type: boolean
        ydk::YLeaf protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf soft_preemption; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf type; //type: TUNNELTYPE
        ydk::YLeaf signaling_protocol; //type: PATHSETUPPROTOCOL
        ydk::YLeaf description; //type: string
        ydk::YLeaf admin_status; //type: TUNNELADMINSTATUS
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf metric_type; //type: LSPMETRICTYPE
        ydk::YLeaf metric; //type: int32
        ydk::YLeaf shortcut_eligible; //type: boolean
        ydk::YLeaf protection_style_requested; //type: PROTECTIONTYPE
        ydk::YLeaf reoptimize_timer; //type: uint16
        ydk::YLeaf source; //type: string
        ydk::YLeaf soft_preemption; //type: boolean
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf oper_status; //type: LSPOPERSTATUS
        ydk::YLeaf role; //type: LSPROLE
        class Counters; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters> counters;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::State::Counters


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State
        class AutoBandwidth; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth> auto_bandwidth;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf specification_type; //type: TeBandwidthType
        ydk::YLeaf set_bandwidth; //type: uint64

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf specification_type; //type: TeBandwidthType
        ydk::YLeaf set_bandwidth; //type: uint64
        ydk::YLeaf signaled_bandwidth; //type: uint64

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth : public ydk::Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State
        class Overflow; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow
        class Underflow; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow> overflow;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow> underflow;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf min_bw; //type: uint64
        ydk::YLeaf max_bw; //type: uint64
        ydk::YLeaf adjust_interval; //type: uint32
        ydk::YLeaf adjust_threshold; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf min_bw; //type: uint64
        ydk::YLeaf max_bw; //type: uint64
        ydk::YLeaf adjust_interval; //type: uint32
        ydk::YLeaf adjust_threshold; //type: uint8

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow : public ydk::Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf overflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf overflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Overflow::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow : public ydk::Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf underflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf underflow_threshold; //type: uint8
        ydk::YLeaf trigger_event_count; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::Bandwidth::AutoBandwidth::Underflow::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes : public ydk::Entity
{
    public:
        P2pTunnelAttributes();
        ~P2pTunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State
        class P2pPrimaryPath; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath
        class P2pSecondaryPaths; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath> p2p_primary_path;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths> p2p_secondary_paths;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath : public ydk::Entity
{
    public:
        P2pPrimaryPath();
        ~P2pPrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2pPrimaryPath_; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_

        ydk::YList p2p_primary_path;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_ : public ydk::Entity
{
    public:
        P2pPrimaryPath_();
        ~P2pPrimaryPath_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State
        class CandidateSecondaryPaths; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths
        class AdminGroups; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths> candidate_secondary_paths;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups> admin_groups;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16
        //type: leafref (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::local_index)
        ydk::YLeaf associated_rsvp_session;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths : public ydk::Entity
{
    public:
        CandidateSecondaryPaths();
        ~CandidateSecondaryPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateSecondaryPath; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath

        ydk::YList candidate_secondary_path;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath : public ydk::Entity
{
    public:
        CandidateSecondaryPath();
        ~CandidateSecondaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config::secondary_path)
        ydk::YLeaf secondary_path;
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::name)
        ydk::YLeaf secondary_path;
        ydk::YLeaf priority; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::name)
        ydk::YLeaf secondary_path;
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf active; //type: boolean

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::CandidateSecondaryPaths::CandidateSecondaryPath::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups : public ydk::Entity
{
    public:
        AdminGroups();
        ~AdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pPrimaryPath::P2pPrimaryPath_::AdminGroups::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths : public ydk::Entity
{
    public:
        P2pSecondaryPaths();
        ~P2pSecondaryPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2pSecondaryPath; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath

        ydk::YList p2p_secondary_path;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath : public ydk::Entity
{
    public:
        P2pSecondaryPath();
        ~P2pSecondaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State
        class AdminGroups; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups> admin_groups;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State : public ydk::Entity
{
    public:
        State();
        ~State();

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
        ydk::YLeaf path_computation_method; //type: PATHCOMPUTATIONMETHOD
        ydk::YLeaf use_cspf; //type: boolean
        ydk::YLeaf cspf_tiebreaker; //type: CspfTieBreaking
        ydk::YLeaf path_computation_server; //type: string
        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::name)
        ydk::YLeaf explicit_path_name;
        ydk::YLeaf preference; //type: uint8
        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8
        ydk::YLeaf retry_timer; //type: uint16
        //type: leafref (refers to openconfig::openconfig_mpls::Mpls::SignalingProtocols::RsvpTe::Sessions::Session::local_index)
        ydk::YLeaf associated_rsvp_session;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::State


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups : public ydk::Entity
{
    public:
        AdminGroups();
        ~AdminGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config
        class State; //type: Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State> state;
        
}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::Config


class Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList exclude_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_all_group;
        //type: list of  leafref (refers to openconfig::openconfig_mpls::Mpls::TeGlobalAttributes::MplsAdminGroups::AdminGroup::admin_group_name)
        ydk::YLeafList include_any_group;

}; // Mpls::Lsps::ConstrainedPath::Tunnels::Tunnel::P2pTunnelAttributes::P2pSecondaryPaths::P2pSecondaryPath::AdminGroups::State


class Mpls::Lsps::UnconstrainedPath : public ydk::Entity
{
    public:
        UnconstrainedPath();
        ~UnconstrainedPath();

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

        class PathSetupProtocol; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol> path_setup_protocol;
        
}; // Mpls::Lsps::UnconstrainedPath


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol : public ydk::Entity
{
    public:
        PathSetupProtocol();
        ~PathSetupProtocol();

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

        class Ldp; //type: Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp> ldp;
        
}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol


class Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

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


}; // Mpls::Lsps::UnconstrainedPath::PathSetupProtocol::Ldp


class Mpls::Lsps::StaticLsps : public ydk::Entity
{
    public:
        StaticLsps();
        ~StaticLsps();

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

        class StaticLsp; //type: Mpls::Lsps::StaticLsps::StaticLsp

        ydk::YList static_lsp;
        
}; // Mpls::Lsps::StaticLsps


class Mpls::Lsps::StaticLsps::StaticLsp : public ydk::Entity
{
    public:
        StaticLsp();
        ~StaticLsp();

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

        //type: string (refers to openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Config::name)
        ydk::YLeaf name;
        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::State
        class Ingress; //type: Mpls::Lsps::StaticLsps::StaticLsp::Ingress
        class Transit; //type: Mpls::Lsps::StaticLsps::StaticLsp::Transit
        class Egress; //type: Mpls::Lsps::StaticLsps::StaticLsp::Egress

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::State> state;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Ingress> ingress;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Transit> transit;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Egress> egress;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp


class Mpls::Lsps::StaticLsps::StaticLsp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

}; // Mpls::Lsps::StaticLsps::StaticLsp::Config


class Mpls::Lsps::StaticLsps::StaticLsp::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

}; // Mpls::Lsps::StaticLsps::StaticLsp::State


class Mpls::Lsps::StaticLsps::StaticLsp::Ingress : public ydk::Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State> state;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp::Ingress


class Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Ingress::Config


class Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Ingress::State


class Mpls::Lsps::StaticLsps::StaticLsp::Transit : public ydk::Entity
{
    public:
        Transit();
        ~Transit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::Transit::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Transit::State> state;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp::Transit


class Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Transit::Config


class Mpls::Lsps::StaticLsps::StaticLsp::Transit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Transit::State


class Mpls::Lsps::StaticLsps::StaticLsp::Egress : public ydk::Entity
{
    public:
        Egress();
        ~Egress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config
        class State; //type: Mpls::Lsps::StaticLsps::StaticLsp::Egress::State

        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config> config;
        std::shared_ptr<openconfig::openconfig_mpls::Mpls::Lsps::StaticLsps::StaticLsp::Egress::State> state;
        
}; // Mpls::Lsps::StaticLsps::StaticLsp::Egress


class Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Egress::Config


class Mpls::Lsps::StaticLsps::StaticLsp::Egress::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf incoming_label; //type: one of uint32, enumeration
        ydk::YLeaf push_label; //type: one of uint32, enumeration

}; // Mpls::Lsps::StaticLsps::StaticLsp::Egress::State

class MplsSrlgFloodingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf FLOODED_SRLG;
        static const ydk::Enum::YLeaf STATIC_SRLG;

};

class MplsHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LOOSE;
        static const ydk::Enum::YLeaf STRICT;

};

class CspfTieBreaking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf RANDOM;
        static const ydk::Enum::YLeaf LEAST_FILL;
        static const ydk::Enum::YLeaf MOST_FILL;

};

class TeMetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGP;

};

class TeBandwidthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SPECIFIED;
        static const ydk::Enum::YLeaf AUTO;

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

class Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;

};

class Mpls::SignalingProtocols::RsvpTe::Sessions::Session::State::SenderTspec::PeakDataRate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INFINITY;

};

class Mpls::SignalingProtocols::RsvpTe::Neighbors::Neighbor::State::NeighborStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf UP;
        static const ydk::Enum::YLeaf DOWN;

};

class Mpls::SignalingProtocols::RsvpTe::InterfaceAttributes::Interface::BandwidthReservations::BandwidthReservation::State::Priority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ALL;

};

class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::Config::SidSelectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADJ_SID_ONLY;
        static const ydk::Enum::YLeaf MIXED_MODE;

};

class Mpls::Lsps::ConstrainedPath::NamedExplicitPaths::NamedExplicitPath::State::SidSelectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ADJ_SID_ONLY;
        static const ydk::Enum::YLeaf MIXED_MODE;

};


}
}

#endif /* _OPENCONFIG_MPLS_ */

