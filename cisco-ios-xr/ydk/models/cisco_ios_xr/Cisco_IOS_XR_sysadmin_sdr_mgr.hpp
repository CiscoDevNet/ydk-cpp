#ifndef _CISCO_IOS_XR_SYSADMIN_SDR_MGR_
#define _CISCO_IOS_XR_SYSADMIN_SDR_MGR_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_sdr_mgr {

class SdrConfig : public ydk::Entity
{
    public:
        SdrConfig();
        ~SdrConfig();

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

        class Sdr; //type: SdrConfig::Sdr

        ydk::YList sdr;
        
}; // SdrConfig


class SdrConfig::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf initial_image; //type: string
        ydk::YLeaf lead_down_delta; //type: uint32
        ydk::YLeaf pairing_mode; //type: PairingMode
        ydk::YLeaf issu; //type: Issu
        class Resources; //type: SdrConfig::Sdr::Resources
        class Location; //type: SdrConfig::Sdr::Location
        class Action; //type: SdrConfig::Sdr::Action
        class Detail; //type: SdrConfig::Sdr::Detail
        class RebootHistory; //type: SdrConfig::Sdr::RebootHistory
        class Nodes; //type: SdrConfig::Sdr::Nodes
        class Pairing2; //type: SdrConfig::Sdr::Pairing2
        class Pairing; //type: SdrConfig::Sdr::Pairing

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::Resources> resources;
        ydk::YList location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::Action> action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::RebootHistory> reboot_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::Pairing2> pairing2;
        ydk::YList pairing;
                class PairingMode;
        class Issu;

}; // SdrConfig::Sdr


class SdrConfig::Sdr::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fgid; //type: uint32
        ydk::YLeaf mgmt_ext_vlan; //type: uint32
        ydk::YLeaf disk_space_size; //type: uint32
        class CardType; //type: SdrConfig::Sdr::Resources::CardType

        ydk::YList card_type;
        
}; // SdrConfig::Sdr::Resources


class SdrConfig::Sdr::Resources::CardType : public ydk::Entity
{
    public:
        CardType();
        ~CardType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: CardType
        ydk::YLeaf vm_memory; //type: uint32
        ydk::YLeaf vm_cpu; //type: uint32

}; // SdrConfig::Sdr::Resources::CardType


class SdrConfig::Sdr::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_location; //type: string

}; // SdrConfig::Sdr::Location


class SdrConfig::Sdr::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: SdrConfig::Sdr::Action::Location

        ydk::YList location;
        
}; // SdrConfig::Sdr::Action


class SdrConfig::Sdr::Action::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_location; //type: string

}; // SdrConfig::Sdr::Action::Location


class SdrConfig::Sdr::Detail : public ydk::Entity
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

        class Location; //type: SdrConfig::Sdr::Detail::Location

        ydk::YList location;
        
}; // SdrConfig::Sdr::Detail


class SdrConfig::Sdr::Detail::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf sdr_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf boot_part; //type: string
        ydk::YLeaf data_part; //type: string
        ydk::YLeaf big_disk; //type: string
        ydk::YLeaf vm_id; //type: uint32
        ydk::YLeaf vmcpu; //type: uint32
        ydk::YLeaf vmmemory; //type: uint32
        ydk::YLeaf card_type; //type: string
        ydk::YLeaf card_serial; //type: string
        ydk::YLeaf rack_type; //type: string
        ydk::YLeaf chassis_serial; //type: string
        ydk::YLeaf hw_version; //type: string
        ydk::YLeaf mgmt_ext_vlan; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf reboot_count; //type: uint32
        ydk::YLeaf rh_count; //type: uint32
        class RebootHist1; //type: SdrConfig::Sdr::Detail::Location::RebootHist1

        ydk::YList reboot_hist1;
        
}; // SdrConfig::Sdr::Detail::Location


class SdrConfig::Sdr::Detail::Location::RebootHist1 : public ydk::Entity
{
    public:
        RebootHist1();
        ~RebootHist1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf time; //type: string
        ydk::YLeaf reason; //type: string

}; // SdrConfig::Sdr::Detail::Location::RebootHist1


class SdrConfig::Sdr::RebootHistory : public ydk::Entity
{
    public:
        RebootHistory();
        ~RebootHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reverse; //type: SdrConfig::Sdr::RebootHistory::Reverse
        class DefaultDisp; //type: SdrConfig::Sdr::RebootHistory::DefaultDisp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::RebootHistory::Reverse> reverse;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::RebootHistory::DefaultDisp> default_disp;
        
}; // SdrConfig::Sdr::RebootHistory


class SdrConfig::Sdr::RebootHistory::Reverse : public ydk::Entity
{
    public:
        Reverse();
        ~Reverse();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: SdrConfig::Sdr::RebootHistory::Reverse::Location

        ydk::YList location;
        
}; // SdrConfig::Sdr::RebootHistory::Reverse


class SdrConfig::Sdr::RebootHistory::Reverse::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf reboot_count; //type: uint32
        ydk::YLeaf rh_count; //type: uint32
        class RebootHist2; //type: SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2

        ydk::YList reboot_hist2;
        
}; // SdrConfig::Sdr::RebootHistory::Reverse::Location


class SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2 : public ydk::Entity
{
    public:
        RebootHist2();
        ~RebootHist2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf time; //type: string
        ydk::YLeaf reason; //type: string

}; // SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2


class SdrConfig::Sdr::RebootHistory::DefaultDisp : public ydk::Entity
{
    public:
        DefaultDisp();
        ~DefaultDisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: SdrConfig::Sdr::RebootHistory::DefaultDisp::Location

        ydk::YList location;
        
}; // SdrConfig::Sdr::RebootHistory::DefaultDisp


class SdrConfig::Sdr::RebootHistory::DefaultDisp::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf reboot_count; //type: uint32
        ydk::YLeaf rh_count; //type: uint32
        class RebootHist2; //type: SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2

        ydk::YList reboot_hist2;
        
}; // SdrConfig::Sdr::RebootHistory::DefaultDisp::Location


class SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2 : public ydk::Entity
{
    public:
        RebootHist2();
        ~RebootHist2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: uint32
        ydk::YLeaf time; //type: string
        ydk::YLeaf reason; //type: string

}; // SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2


class SdrConfig::Sdr::Nodes : public ydk::Entity
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

        class Location; //type: SdrConfig::Sdr::Nodes::Location

        ydk::YList location;
        
}; // SdrConfig::Sdr::Nodes


class SdrConfig::Sdr::Nodes::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf sdr_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf reload_reason; //type: string
        ydk::YLeaf reboot_count; //type: uint32
        ydk::YLeaf rh_count; //type: uint32

}; // SdrConfig::Sdr::Nodes::Location


class SdrConfig::Sdr::Pairing2 : public ydk::Entity
{
    public:
        Pairing2();
        ~Pairing2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pairing_mode; //type: string
        class Sdrlead; //type: SdrConfig::Sdr::Pairing2::Sdrlead
        class Pairing; //type: SdrConfig::Sdr::Pairing2::Pairing

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrConfig::Sdr::Pairing2::Sdrlead> sdrlead;
        ydk::YList pairing;
        
}; // SdrConfig::Sdr::Pairing2


class SdrConfig::Sdr::Pairing2::Sdrlead : public ydk::Entity
{
    public:
        Sdrlead();
        ~Sdrlead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp1; //type: string
        ydk::YLeaf rp2; //type: string

}; // SdrConfig::Sdr::Pairing2::Sdrlead


class SdrConfig::Sdr::Pairing2::Pairing : public ydk::Entity
{
    public:
        Pairing();
        ~Pairing();

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
        ydk::YLeaf rp1; //type: string
        ydk::YLeaf rp2; //type: string

}; // SdrConfig::Sdr::Pairing2::Pairing


class SdrConfig::Sdr::Pairing : public ydk::Entity
{
    public:
        Pairing();
        ~Pairing();

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
        ydk::YLeaf rp1; //type: string
        ydk::YLeaf rp2; //type: string

}; // SdrConfig::Sdr::Pairing

class SdrManager : public ydk::Entity
{
    public:
        SdrManager();
        ~SdrManager();

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

        class SdrMgr; //type: SdrManager::SdrMgr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrManager::SdrMgr> sdr_mgr;
        
}; // SdrManager


class SdrManager::SdrMgr : public ydk::Entity
{
    public:
        SdrMgr();
        ~SdrMgr();

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

        class Trace; //type: SdrManager::SdrMgr::Trace

        ydk::YList trace;
        
}; // SdrManager::SdrMgr


class SdrManager::SdrMgr::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: SdrManager::SdrMgr::Trace::Location

        ydk::YList location;
        
}; // SdrManager::SdrMgr::Trace


class SdrManager::SdrMgr::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: SdrManager::SdrMgr::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // SdrManager::SdrMgr::Trace::Location


class SdrManager::SdrMgr::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // SdrManager::SdrMgr::Trace::Location::AllOptions


class SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks

class SdrOperation : public ydk::Entity
{
    public:
        SdrOperation();
        ~SdrOperation();

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

        class Sdr; //type: SdrOperation::Sdr

        ydk::YList sdr;
        
}; // SdrOperation


class SdrOperation::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        ydk::YLeaf name; //type: string
        class Nodes; //type: SdrOperation::Sdr::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_sdr_mgr::SdrOperation::Sdr::Nodes> nodes;
        
}; // SdrOperation::Sdr


class SdrOperation::Sdr::Nodes : public ydk::Entity
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

        class Location; //type: SdrOperation::Sdr::Nodes::Location

        ydk::YList location;
        
}; // SdrOperation::Sdr::Nodes


class SdrOperation::Sdr::Nodes::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf node_type; //type: uint32
        ydk::YLeaf progress; //type: string
        ydk::YLeaf state; //type: string

}; // SdrOperation::Sdr::Nodes::Location

class PrivateSdr : public ydk::Entity
{
    public:
        PrivateSdr();
        ~PrivateSdr();

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

        class SdrName; //type: PrivateSdr::SdrName

        ydk::YList sdr_name;
        
}; // PrivateSdr


class PrivateSdr::SdrName : public ydk::Entity
{
    public:
        SdrName();
        ~SdrName();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf lead_rack0; //type: uint32
        ydk::YLeaf lead_rack1; //type: uint32
        class Pairing; //type: PrivateSdr::SdrName::Pairing

        ydk::YList pairing;
        
}; // PrivateSdr::SdrName


class PrivateSdr::SdrName::Pairing : public ydk::Entity
{
    public:
        Pairing();
        ~Pairing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num; //type: uint32
        ydk::YLeaf second_exist; //type: boolean
        ydk::YLeaf rp1_rack; //type: uint32
        ydk::YLeaf rp1_slot; //type: uint32
        ydk::YLeaf rp2_rack; //type: uint32
        ydk::YLeaf rp2_slot; //type: uint32

}; // PrivateSdr::SdrName::Pairing

class VmReloadReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf CARD_OFFLINE;
        static const ydk::Enum::YLeaf CARD_SHUTDOWN;
        static const ydk::Enum::YLeaf ALL_VM_RELOAD;
        static const ydk::Enum::YLeaf VM_REQUESTED_GRACEFUL_RELOAD;
        static const ydk::Enum::YLeaf VM_REQUESTED_UNGRACEFUL_RELOAD;
        static const ydk::Enum::YLeaf SDR_CLI_REQUESTED;
        static const ydk::Enum::YLeaf SDR_VCPU_VMEM_CHANGED;
        static const ydk::Enum::YLeaf SDR_HEARTBEAT_FAILURE;
        static const ydk::Enum::YLeaf FIRST_BOOT;
        static const ydk::Enum::YLeaf SMU;
        static const ydk::Enum::YLeaf REASON_UNKNOWN;

        static int get_enum_value(const std::string & name) {
            if (name == "CARD_OFFLINE") return 0;
            if (name == "CARD_SHUTDOWN") return 1;
            if (name == "ALL_VM_RELOAD") return 2;
            if (name == "VM_REQUESTED_GRACEFUL_RELOAD") return 3;
            if (name == "VM_REQUESTED_UNGRACEFUL_RELOAD") return 4;
            if (name == "SDR_CLI_REQUESTED") return 5;
            if (name == "SDR_VCPU_VMEM_CHANGED") return 6;
            if (name == "SDR_HEARTBEAT_FAILURE") return 7;
            if (name == "FIRST_BOOT") return 8;
            if (name == "SMU") return 9;
            if (name == "REASON_UNKNOWN") return 10;
            return -1;
        }
};

class CardType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf RP;
        static const ydk::Enum::YLeaf LC;
        static const ydk::Enum::YLeaf CC;

        static int get_enum_value(const std::string & name) {
            if (name == "RP") return 0;
            if (name == "LC") return 1;
            if (name == "CC") return 2;
            return -1;
        }
};

class SdrConfig::Sdr::PairingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf intra_rack;
        static const ydk::Enum::YLeaf inter_rack;

        static int get_enum_value(const std::string & name) {
            if (name == "intra-rack") return 0;
            if (name == "inter-rack") return 1;
            return -1;
        }
};

class SdrConfig::Sdr::Issu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_SDR_MGR_ */

