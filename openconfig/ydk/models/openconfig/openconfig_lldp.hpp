#ifndef _OPENCONFIG_LLDP_
#define _OPENCONFIG_LLDP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_lldp {

class Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

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

        class Config; //type: Lldp::Config
        class State; //type: Lldp::State
        class Interfaces; //type: Lldp::Interfaces

        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Config> config;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::State> state;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces> interfaces;
        
}; // Lldp


class Lldp::Config : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf hello_timer; //type: uint64
        ydk::YLeaf system_name; //type: string
        ydk::YLeaf system_description; //type: string
        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf chassis_id_type; //type: ChassisIdType
        ydk::YLeafList suppress_tlv_advertisement; //type: list of  LLDPTLV

}; // Lldp::Config


class Lldp::State : public ydk::Entity
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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf hello_timer; //type: uint64
        ydk::YLeaf system_name; //type: string
        ydk::YLeaf system_description; //type: string
        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf chassis_id_type; //type: ChassisIdType
        ydk::YLeafList suppress_tlv_advertisement; //type: list of  LLDPTLV
        class Counters; //type: Lldp::State::Counters

        std::shared_ptr<openconfig::openconfig_lldp::Lldp::State::Counters> counters;
        
}; // Lldp::State


class Lldp::State::Counters : public ydk::Entity
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

        ydk::YLeaf frame_in; //type: uint64
        ydk::YLeaf frame_out; //type: uint64
        ydk::YLeaf frame_error_in; //type: uint64
        ydk::YLeaf frame_discard; //type: uint64
        ydk::YLeaf tlv_discard; //type: uint64
        ydk::YLeaf tlv_unknown; //type: uint64
        ydk::YLeaf last_clear; //type: string
        ydk::YLeaf tlv_accepted; //type: uint64
        ydk::YLeaf entries_aged_out; //type: uint64

}; // Lldp::State::Counters


class Lldp::Interfaces : public ydk::Entity
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

        class Interface; //type: Lldp::Interfaces::Interface

        std::vector<std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface> > interface;
        
}; // Lldp::Interfaces


class Lldp::Interfaces::Interface : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Config::name)
        ydk::YLeaf name;
        class Config; //type: Lldp::Interfaces::Interface::Config
        class State; //type: Lldp::Interfaces::Interface::State
        class Neighbors; //type: Lldp::Interfaces::Interface::Neighbors

        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors> neighbors;
        
}; // Lldp::Interfaces::Interface


class Lldp::Interfaces::Interface::Config : public ydk::Entity
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
        ydk::YLeaf name;
        ydk::YLeaf enabled; //type: boolean

}; // Lldp::Interfaces::Interface::Config


class Lldp::Interfaces::Interface::State : public ydk::Entity
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
        ydk::YLeaf name;
        ydk::YLeaf enabled; //type: boolean
        class Counters; //type: Lldp::Interfaces::Interface::State::Counters

        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::State::Counters> counters;
        
}; // Lldp::Interfaces::Interface::State


class Lldp::Interfaces::Interface::State::Counters : public ydk::Entity
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

        ydk::YLeaf frame_in; //type: uint64
        ydk::YLeaf frame_out; //type: uint64
        ydk::YLeaf frame_error_in; //type: uint64
        ydk::YLeaf frame_discard; //type: uint64
        ydk::YLeaf tlv_discard; //type: uint64
        ydk::YLeaf tlv_unknown; //type: uint64
        ydk::YLeaf last_clear; //type: string
        ydk::YLeaf frame_error_out; //type: uint64

}; // Lldp::Interfaces::Interface::State::Counters


class Lldp::Interfaces::Interface::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor> > neighbor;
        
}; // Lldp::Interfaces::Interface::Neighbors


class Lldp::Interfaces::Interface::Neighbors::Neighbor : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::State::id)
        ydk::YLeaf id;
        class Config; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::Config
        class State; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::State
        class CustomTlvs; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs
        class Capabilities; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities

        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::State> state;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs> custom_tlvs;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities> capabilities;
        
}; // Lldp::Interfaces::Interface::Neighbors::Neighbor


class Lldp::Interfaces::Interface::Neighbors::Neighbor::Config : public ydk::Entity
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


}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::Config


class Lldp::Interfaces::Interface::Neighbors::Neighbor::State : public ydk::Entity
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

        ydk::YLeaf system_name; //type: string
        ydk::YLeaf system_description; //type: string
        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf chassis_id_type; //type: ChassisIdType
        ydk::YLeaf id; //type: string
        ydk::YLeaf age; //type: uint64
        ydk::YLeaf last_update; //type: int64
        ydk::YLeaf port_id; //type: string
        ydk::YLeaf port_id_type; //type: PortIdType
        ydk::YLeaf port_description; //type: string
        ydk::YLeaf management_address; //type: string
        ydk::YLeaf management_address_type; //type: string

}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::State


class Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs : public ydk::Entity
{
    public:
        CustomTlvs();
        ~CustomTlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv

        std::vector<std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv> > tlv;
        
}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs


class Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::type)
        ydk::YLeaf type;
        //type: string (refers to openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::oui)
        ydk::YLeaf oui;
        //type: string (refers to openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State::oui_subtype)
        ydk::YLeaf oui_subtype;
        class Config; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config
        class State; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State

        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config> config;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State> state;
        
}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv


class Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config : public ydk::Entity
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


}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::Config


class Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State : public ydk::Entity
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

        ydk::YLeaf type; //type: int32
        ydk::YLeaf oui; //type: string
        ydk::YLeaf oui_subtype; //type: string
        ydk::YLeaf value_; //type: binary

}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::CustomTlvs::Tlv::State


class Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Capability; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability

        std::vector<std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability> > capability;
        
}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities


class Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: LLDPSYSTEMCAPABILITY
        class Config; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config
        class State; //type: Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State

        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config> config;
        std::shared_ptr<openconfig::openconfig_lldp::Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State> state;
        
}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability


class Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config : public ydk::Entity
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


}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::Config


class Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State : public ydk::Entity
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

        ydk::YLeaf name; //type: LLDPSYSTEMCAPABILITY
        ydk::YLeaf enabled; //type: boolean

}; // Lldp::Interfaces::Interface::Neighbors::Neighbor::Capabilities::Capability::State


}
}

#endif /* _OPENCONFIG_LLDP_ */

