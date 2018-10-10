#ifndef _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_
#define _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fia_hw_profile_cfg {

class HwModuleProfileConfig : public ydk::Entity
{
    public:
        HwModuleProfileConfig();
        ~HwModuleProfileConfig();

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

        class Profile; //type: HwModuleProfileConfig::Profile
        class FibScale; //type: HwModuleProfileConfig::FibScale
        class OrchestratedLinecardReload; //type: HwModuleProfileConfig::OrchestratedLinecardReload
        class Tcam; //type: HwModuleProfileConfig::Tcam
        class Qosqppb; //type: HwModuleProfileConfig::Qosqppb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile> profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale> fib_scale;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::OrchestratedLinecardReload> orchestrated_linecard_reload;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Tcam> tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Qosqppb> qosqppb;
        
}; // HwModuleProfileConfig


class HwModuleProfileConfig::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        class TcamTable; //type: HwModuleProfileConfig::Profile::TcamTable
        class Netflow; //type: HwModuleProfileConfig::Profile::Netflow
        class Flowspecs; //type: HwModuleProfileConfig::Profile::Flowspecs
        class SegmentRoutings; //type: HwModuleProfileConfig::Profile::SegmentRoutings
        class LoadBalance; //type: HwModuleProfileConfig::Profile::LoadBalance
        class Stats; //type: HwModuleProfileConfig::Profile::Stats
        class ProfileAcl; //type: HwModuleProfileConfig::Profile::ProfileAcl
        class BundleScale; //type: HwModuleProfileConfig::Profile::BundleScale
        class ProfileTcam; //type: HwModuleProfileConfig::Profile::ProfileTcam
        class Qos; //type: HwModuleProfileConfig::Profile::Qos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable> tcam_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Netflow> netflow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Flowspecs> flowspecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::SegmentRoutings> segment_routings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Stats> stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::ProfileAcl> profile_acl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::BundleScale> bundle_scale;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::ProfileTcam> profile_tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Qos> qos;
        
}; // HwModuleProfileConfig::Profile


class HwModuleProfileConfig::Profile::TcamTable : public ydk::Entity
{
    public:
        TcamTable();
        ~TcamTable();

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

        class FibTable; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable> fib_table;
        
}; // HwModuleProfileConfig::Profile::TcamTable


class HwModuleProfileConfig::Profile::TcamTable::FibTable : public ydk::Entity
{
    public:
        FibTable();
        ~FibTable();

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

        class Ipv4Address; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address
        class Ipv6Address; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address> ipv4_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address> ipv6_address;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

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

        class Ipv4Unicast; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast> ipv4_unicast;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

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

        ydk::YLeaf ipv4_unicast_percent; //type: uint32
        class Ipv4UnicastPrefixLengths; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths> ipv4_unicast_prefix_lengths;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths : public ydk::Entity
{
    public:
        Ipv4UnicastPrefixLengths();
        ~Ipv4UnicastPrefixLengths();

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

        class Ipv4UnicastPrefixLength; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength

        ydk::YList ipv4_unicast_prefix_length;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength : public ydk::Entity
{
    public:
        Ipv4UnicastPrefixLength();
        ~Ipv4UnicastPrefixLength();

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

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf ipv4_unicast_prefix_percent; //type: string

}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address : public ydk::Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

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

        class Ipv6Unicast; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast> ipv6_unicast;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

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

        ydk::YLeaf ipv6_unicast_percent; //type: uint32
        class Ipv6UnicastPrefixLengths; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths> ipv6_unicast_prefix_lengths;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths : public ydk::Entity
{
    public:
        Ipv6UnicastPrefixLengths();
        ~Ipv6UnicastPrefixLengths();

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

        class Ipv6UnicastPrefixLength; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength

        ydk::YList ipv6_unicast_prefix_length;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength : public ydk::Entity
{
    public:
        Ipv6UnicastPrefixLength();
        ~Ipv6UnicastPrefixLength();

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

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf ipv6_unicast_prefix_percent; //type: string

}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength


class HwModuleProfileConfig::Profile::Netflow : public ydk::Entity
{
    public:
        Netflow();
        ~Netflow();

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

        class NetflowLocations; //type: HwModuleProfileConfig::Profile::Netflow::NetflowLocations
        class LocationAll; //type: HwModuleProfileConfig::Profile::Netflow::LocationAll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Netflow::NetflowLocations> netflow_locations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Netflow::LocationAll> location_all;
        
}; // HwModuleProfileConfig::Profile::Netflow


class HwModuleProfileConfig::Profile::Netflow::NetflowLocations : public ydk::Entity
{
    public:
        NetflowLocations();
        ~NetflowLocations();

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

        class NetflowLocation; //type: HwModuleProfileConfig::Profile::Netflow::NetflowLocations::NetflowLocation

        ydk::YList netflow_location;
        
}; // HwModuleProfileConfig::Profile::Netflow::NetflowLocations


class HwModuleProfileConfig::Profile::Netflow::NetflowLocations::NetflowLocation : public ydk::Entity
{
    public:
        NetflowLocation();
        ~NetflowLocation();

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

        ydk::YLeaf location_string; //type: string
        class NetflowLocationLeaf; //type: HwModuleProfileConfig::Profile::Netflow::NetflowLocations::NetflowLocation::NetflowLocationLeaf

        ydk::YList netflow_location_leaf;
        
}; // HwModuleProfileConfig::Profile::Netflow::NetflowLocations::NetflowLocation


class HwModuleProfileConfig::Profile::Netflow::NetflowLocations::NetflowLocation::NetflowLocationLeaf : public ydk::Entity
{
    public:
        NetflowLocationLeaf();
        ~NetflowLocationLeaf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_id; //type: uint32
        ydk::YLeaf enable_val; //type: uint32

}; // HwModuleProfileConfig::Profile::Netflow::NetflowLocations::NetflowLocation::NetflowLocationLeaf


class HwModuleProfileConfig::Profile::Netflow::LocationAll : public ydk::Entity
{
    public:
        LocationAll();
        ~LocationAll();

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

        ydk::YLeaf location_all_leaf; //type: uint32

}; // HwModuleProfileConfig::Profile::Netflow::LocationAll


class HwModuleProfileConfig::Profile::Flowspecs : public ydk::Entity
{
    public:
        Flowspecs();
        ~Flowspecs();

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

        class Flowspec; //type: HwModuleProfileConfig::Profile::Flowspecs::Flowspec

        ydk::YList flowspec;
        
}; // HwModuleProfileConfig::Profile::Flowspecs


class HwModuleProfileConfig::Profile::Flowspecs::Flowspec : public ydk::Entity
{
    public:
        Flowspec();
        ~Flowspec();

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

        ydk::YLeaf v6_enable; //type: string
        ydk::YLeaf location_string; //type: string
        ydk::YLeaf location_id; //type: uint32
        ydk::YLeaf enable_val; //type: uint32

}; // HwModuleProfileConfig::Profile::Flowspecs::Flowspec


class HwModuleProfileConfig::Profile::SegmentRoutings : public ydk::Entity
{
    public:
        SegmentRoutings();
        ~SegmentRoutings();

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

        class SegmentRouting; //type: HwModuleProfileConfig::Profile::SegmentRoutings::SegmentRouting

        ydk::YList segment_routing;
        
}; // HwModuleProfileConfig::Profile::SegmentRoutings


class HwModuleProfileConfig::Profile::SegmentRoutings::SegmentRouting : public ydk::Entity
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

        ydk::YLeaf srv6; //type: string
        ydk::YLeaf enable_val; //type: uint32

}; // HwModuleProfileConfig::Profile::SegmentRoutings::SegmentRouting


class HwModuleProfileConfig::Profile::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

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

        ydk::YLeaf load_balance_profile; //type: uint32

}; // HwModuleProfileConfig::Profile::LoadBalance


class HwModuleProfileConfig::Profile::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

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

        class StatsProfileModes; //type: HwModuleProfileConfig::Profile::Stats::StatsProfileModes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Stats::StatsProfileModes> stats_profile_modes;
        
}; // HwModuleProfileConfig::Profile::Stats


class HwModuleProfileConfig::Profile::Stats::StatsProfileModes : public ydk::Entity
{
    public:
        StatsProfileModes();
        ~StatsProfileModes();

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

        class StatsProfileMode; //type: HwModuleProfileConfig::Profile::Stats::StatsProfileModes::StatsProfileMode

        ydk::YList stats_profile_mode;
        
}; // HwModuleProfileConfig::Profile::Stats::StatsProfileModes


class HwModuleProfileConfig::Profile::Stats::StatsProfileModes::StatsProfileMode : public ydk::Entity
{
    public:
        StatsProfileMode();
        ~StatsProfileMode();

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

        ydk::YLeaf stats_mode_default; //type: uint32
        ydk::YLeaf mode; //type: uint32

}; // HwModuleProfileConfig::Profile::Stats::StatsProfileModes::StatsProfileMode


class HwModuleProfileConfig::Profile::ProfileAcl : public ydk::Entity
{
    public:
        ProfileAcl();
        ~ProfileAcl();

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

        ydk::YLeaf egress; //type: boolean

}; // HwModuleProfileConfig::Profile::ProfileAcl


class HwModuleProfileConfig::Profile::BundleScale : public ydk::Entity
{
    public:
        BundleScale();
        ~BundleScale();

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

        ydk::YLeaf trunk_size; //type: uint32

}; // HwModuleProfileConfig::Profile::BundleScale


class HwModuleProfileConfig::Profile::ProfileTcam : public ydk::Entity
{
    public:
        ProfileTcam();
        ~ProfileTcam();

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

        class KeyFormat; //type: HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat> key_format;
        
}; // HwModuleProfileConfig::Profile::ProfileTcam


class HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat : public ydk::Entity
{
    public:
        KeyFormat();
        ~KeyFormat();

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

        class KeyFormatAclTable; //type: HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable> key_format_acl_table;
        
}; // HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat


class HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable : public ydk::Entity
{
    public:
        KeyFormatAclTable();
        ~KeyFormatAclTable();

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

        class Ipv6AclTables; //type: HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv6AclTables
        class Ipv4AclTables; //type: HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv4AclTables

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv6AclTables> ipv6_acl_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv4AclTables> ipv4_acl_tables;
        
}; // HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable


class HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv6AclTables : public ydk::Entity
{
    public:
        Ipv6AclTables();
        ~Ipv6AclTables();

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

        class Ipv6AclTable; //type: HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv6AclTables::Ipv6AclTable

        ydk::YList ipv6_acl_table;
        
}; // HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv6AclTables


class HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv6AclTables::Ipv6AclTable : public ydk::Entity
{
    public:
        Ipv6AclTable();
        ~Ipv6AclTable();

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

        ydk::YLeaf location_string; //type: string
        ydk::YLeaf location_id; //type: uint32
        ydk::YLeaf source_addr; //type: uint32
        ydk::YLeaf source_port; //type: uint32
        ydk::YLeaf destination_addr; //type: uint32
        ydk::YLeaf dest_port; //type: uint32
        ydk::YLeaf prot_type; //type: uint32
        ydk::YLeaf tcp_flag; //type: uint32
        ydk::YLeaf pack_len; //type: uint32
        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf udf1; //type: string
        ydk::YLeaf udf2; //type: string
        ydk::YLeaf udf3; //type: string
        ydk::YLeaf udf4; //type: string
        ydk::YLeaf udf5; //type: string
        ydk::YLeaf udf6; //type: string
        ydk::YLeaf udf7; //type: string
        ydk::YLeaf udf8; //type: string
        ydk::YLeaf en_capture; //type: uint32
        ydk::YLeaf en_ttl; //type: uint32
        ydk::YLeaf en_match; //type: uint32
        ydk::YLeaf en_share_acl; //type: uint32

}; // HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv6AclTables::Ipv6AclTable


class HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv4AclTables : public ydk::Entity
{
    public:
        Ipv4AclTables();
        ~Ipv4AclTables();

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

        class Ipv4AclTable; //type: HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv4AclTables::Ipv4AclTable

        ydk::YList ipv4_acl_table;
        
}; // HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv4AclTables


class HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv4AclTables::Ipv4AclTable : public ydk::Entity
{
    public:
        Ipv4AclTable();
        ~Ipv4AclTable();

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

        ydk::YLeaf location_string; //type: string
        ydk::YLeaf location_id; //type: uint32
        ydk::YLeaf source_addr; //type: uint32
        ydk::YLeaf destination_addr; //type: uint32
        ydk::YLeaf source_port; //type: uint32
        ydk::YLeaf dest_port; //type: uint32
        ydk::YLeaf prot_type; //type: uint32
        ydk::YLeaf tcp_flag; //type: uint32
        ydk::YLeaf pack_len; //type: uint32
        ydk::YLeaf frag_bit; //type: uint32
        ydk::YLeaf precedence; //type: uint32
        ydk::YLeaf port_range; //type: uint32
        ydk::YLeaf udf1; //type: string
        ydk::YLeaf udf2; //type: string
        ydk::YLeaf udf3; //type: string
        ydk::YLeaf udf4; //type: string
        ydk::YLeaf udf5; //type: string
        ydk::YLeaf udf6; //type: string
        ydk::YLeaf udf7; //type: string
        ydk::YLeaf udf8; //type: string
        ydk::YLeaf en_capture; //type: uint32
        ydk::YLeaf en_ttl; //type: uint32
        ydk::YLeaf en_match; //type: uint32
        ydk::YLeaf en_share_acl; //type: uint32

}; // HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormatAclTable::Ipv4AclTables::Ipv4AclTable


class HwModuleProfileConfig::Profile::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

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

        class HqosEnableAll; //type: HwModuleProfileConfig::Profile::Qos::HqosEnableAll
        class IngressModelRootDef; //type: HwModuleProfileConfig::Profile::Qos::IngressModelRootDef
        class IngressModels; //type: HwModuleProfileConfig::Profile::Qos::IngressModels
        class ClassMapsRootDef; //type: HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef
        class ClassMaps; //type: HwModuleProfileConfig::Profile::Qos::ClassMaps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Qos::HqosEnableAll> hqos_enable_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Qos::IngressModelRootDef> ingress_model_root_def;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Qos::IngressModels> ingress_models;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef> class_maps_root_def;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::Qos::ClassMaps> class_maps;
        
}; // HwModuleProfileConfig::Profile::Qos


class HwModuleProfileConfig::Profile::Qos::HqosEnableAll : public ydk::Entity
{
    public:
        HqosEnableAll();
        ~HqosEnableAll();

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

        ydk::YLeaf hqos_enable; //type: uint32

}; // HwModuleProfileConfig::Profile::Qos::HqosEnableAll


class HwModuleProfileConfig::Profile::Qos::IngressModelRootDef : public ydk::Entity
{
    public:
        IngressModelRootDef();
        ~IngressModelRootDef();

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

        ydk::YLeaf ingress_model_leaf_def; //type: uint32

}; // HwModuleProfileConfig::Profile::Qos::IngressModelRootDef


class HwModuleProfileConfig::Profile::Qos::IngressModels : public ydk::Entity
{
    public:
        IngressModels();
        ~IngressModels();

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

        class IngressModel; //type: HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel

        ydk::YList ingress_model;
        
}; // HwModuleProfileConfig::Profile::Qos::IngressModels


class HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel : public ydk::Entity
{
    public:
        IngressModel();
        ~IngressModel();

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
        class IngressModelLeaf; //type: HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf

        ydk::YList ingress_model_leaf;
        
}; // HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel


class HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf : public ydk::Entity
{
    public:
        IngressModelLeaf();
        ~IngressModelLeaf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: uint32
        ydk::YLeaf ingress_model_leaf; //type: uint32

}; // HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf


class HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef : public ydk::Entity
{
    public:
        ClassMapsRootDef();
        ~ClassMapsRootDef();

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

        ydk::YLeaf class_map_size_def; //type: uint32

}; // HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef


class HwModuleProfileConfig::Profile::Qos::ClassMaps : public ydk::Entity
{
    public:
        ClassMaps();
        ~ClassMaps();

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

        class ClassMap; //type: HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap

        ydk::YList class_map;
        
}; // HwModuleProfileConfig::Profile::Qos::ClassMaps


class HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap : public ydk::Entity
{
    public:
        ClassMap();
        ~ClassMap();

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
        class ClassMapSize; //type: HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize

        ydk::YList class_map_size;
        
}; // HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap


class HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize : public ydk::Entity
{
    public:
        ClassMapSize();
        ~ClassMapSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location; //type: uint32
        ydk::YLeaf class_map_size; //type: uint32

}; // HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize


class HwModuleProfileConfig::FibScale : public ydk::Entity
{
    public:
        FibScale();
        ~FibScale();

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

        class Ipv6UnicastScaleNoTcam; //type: HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam
        class Ipv4UnicastScaleNoTcam; //type: HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam> ipv6_unicast_scale_no_tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam> ipv4_unicast_scale_no_tcam;
        
}; // HwModuleProfileConfig::FibScale


class HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam : public ydk::Entity
{
    public:
        Ipv6UnicastScaleNoTcam();
        ~Ipv6UnicastScaleNoTcam();

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

        class ScaleIpv6NoTcam; //type: HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam> scale_ipv6_no_tcam;
        
}; // HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam


class HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam : public ydk::Entity
{
    public:
        ScaleIpv6NoTcam();
        ~ScaleIpv6NoTcam();

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

        ydk::YLeaf internet_optimized_ipv6_no_tcam; //type: string

}; // HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam


class HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam : public ydk::Entity
{
    public:
        Ipv4UnicastScaleNoTcam();
        ~Ipv4UnicastScaleNoTcam();

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

        class ScaleIpv4NoTcam; //type: HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam> scale_ipv4_no_tcam;
        
}; // HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam


class HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam : public ydk::Entity
{
    public:
        ScaleIpv4NoTcam();
        ~ScaleIpv4NoTcam();

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

        ydk::YLeaf optimized_ipv4_no_tcam; //type: string

}; // HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam


class HwModuleProfileConfig::OrchestratedLinecardReload : public ydk::Entity
{
    public:
        OrchestratedLinecardReload();
        ~OrchestratedLinecardReload();

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

        class PlaneTableEntries; //type: HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries> plane_table_entries;
        
}; // HwModuleProfileConfig::OrchestratedLinecardReload


class HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries : public ydk::Entity
{
    public:
        PlaneTableEntries();
        ~PlaneTableEntries();

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

        class PlaneTableEntry; //type: HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry

        ydk::YList plane_table_entry;
        
}; // HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries


class HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry : public ydk::Entity
{
    public:
        PlaneTableEntry();
        ~PlaneTableEntry();

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

        ydk::YLeaf plane_name; //type: string
        class RackTableEntries; //type: HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry::RackTableEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry::RackTableEntries> rack_table_entries;
        
}; // HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry


class HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry::RackTableEntries : public ydk::Entity
{
    public:
        RackTableEntries();
        ~RackTableEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RackTableEntry; //type: HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry::RackTableEntries::RackTableEntry

        ydk::YList rack_table_entry;
        
}; // HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry::RackTableEntries


class HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry::RackTableEntries::RackTableEntry : public ydk::Entity
{
    public:
        RackTableEntry();
        ~RackTableEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf nodes_list; //type: string

}; // HwModuleProfileConfig::OrchestratedLinecardReload::PlaneTableEntries::PlaneTableEntry::RackTableEntries::RackTableEntry


class HwModuleProfileConfig::Tcam : public ydk::Entity
{
    public:
        Tcam();
        ~Tcam();

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

        class FibTcamScale; //type: HwModuleProfileConfig::Tcam::FibTcamScale

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Tcam::FibTcamScale> fib_tcam_scale;
        
}; // HwModuleProfileConfig::Tcam


class HwModuleProfileConfig::Tcam::FibTcamScale : public ydk::Entity
{
    public:
        FibTcamScale();
        ~FibTcamScale();

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

        class Ipv4UnicastScale; //type: HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale> ipv4_unicast_scale;
        
}; // HwModuleProfileConfig::Tcam::FibTcamScale


class HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale : public ydk::Entity
{
    public:
        Ipv4UnicastScale();
        ~Ipv4UnicastScale();

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

        ydk::YLeaf ipv4_scale; //type: boolean

}; // HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale


class HwModuleProfileConfig::Qosqppb : public ydk::Entity
{
    public:
        Qosqppb();
        ~Qosqppb();

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

        class Ipv6Scale; //type: HwModuleProfileConfig::Qosqppb::Ipv6Scale

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Qosqppb::Ipv6Scale> ipv6_scale;
        
}; // HwModuleProfileConfig::Qosqppb


class HwModuleProfileConfig::Qosqppb::Ipv6Scale : public ydk::Entity
{
    public:
        Ipv6Scale();
        ~Ipv6Scale();

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

        ydk::YLeaf ipv6_short; //type: boolean

}; // HwModuleProfileConfig::Qosqppb::Ipv6Scale


}
}

#endif /* _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_ */

