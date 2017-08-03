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

        class Profile; //type: HwModuleProfileConfig::Profile
        class FibScale; //type: HwModuleProfileConfig::FibScale
        class Tcam; //type: HwModuleProfileConfig::Tcam

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale> fib_scale;
        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile> profile;
        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Tcam> tcam;
        
}; // HwModuleProfileConfig


class HwModuleProfileConfig::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamTable; //type: HwModuleProfileConfig::Profile::TcamTable

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable> tcam_table;
        
}; // HwModuleProfileConfig::Profile


class HwModuleProfileConfig::Profile::TcamTable : public ydk::Entity
{
    public:
        TcamTable();
        ~TcamTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibTable; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable> fib_table;
        
}; // HwModuleProfileConfig::Profile::TcamTable


class HwModuleProfileConfig::Profile::TcamTable::FibTable : public ydk::Entity
{
    public:
        FibTable();
        ~FibTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Address; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address
        class Ipv6Address; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address> ipv4_address;
        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address> ipv6_address;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Unicast; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast> ipv4_unicast;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_unicast_percent; //type: uint32
        class Ipv4UnicastPrefixLengths; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths> ipv4_unicast_prefix_lengths;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths : public ydk::Entity
{
    public:
        Ipv4UnicastPrefixLengths();
        ~Ipv4UnicastPrefixLengths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4UnicastPrefixLength; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength> > ipv4_unicast_prefix_length;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength : public ydk::Entity
{
    public:
        Ipv4UnicastPrefixLength();
        ~Ipv4UnicastPrefixLength();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Unicast; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast> ipv6_unicast;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_unicast_percent; //type: uint32
        class Ipv6UnicastPrefixLengths; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths> ipv6_unicast_prefix_lengths;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths : public ydk::Entity
{
    public:
        Ipv6UnicastPrefixLengths();
        ~Ipv6UnicastPrefixLengths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6UnicastPrefixLength; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength> > ipv6_unicast_prefix_length;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength : public ydk::Entity
{
    public:
        Ipv6UnicastPrefixLength();
        ~Ipv6UnicastPrefixLength();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf ipv6_unicast_prefix_percent; //type: string

}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength


class HwModuleProfileConfig::FibScale : public ydk::Entity
{
    public:
        FibScale();
        ~FibScale();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6UnicastScaleNoTcam; //type: HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam
        class Ipv4UnicastScaleNoTcam; //type: HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam> ipv4_unicast_scale_no_tcam;
        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam> ipv6_unicast_scale_no_tcam;
        
}; // HwModuleProfileConfig::FibScale


class HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam : public ydk::Entity
{
    public:
        Ipv6UnicastScaleNoTcam();
        ~Ipv6UnicastScaleNoTcam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ScaleIpv6NoTcam; //type: HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam> scale_ipv6_no_tcam;
        
}; // HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam


class HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam : public ydk::Entity
{
    public:
        ScaleIpv6NoTcam();
        ~ScaleIpv6NoTcam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internet_optimized_ipv6_no_tcam; //type: string

}; // HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam


class HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam : public ydk::Entity
{
    public:
        Ipv4UnicastScaleNoTcam();
        ~Ipv4UnicastScaleNoTcam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ScaleIpv4NoTcam; //type: HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam> scale_ipv4_no_tcam;
        
}; // HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam


class HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam : public ydk::Entity
{
    public:
        ScaleIpv4NoTcam();
        ~ScaleIpv4NoTcam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_optimized_ipv4_no_tcam; //type: string
        ydk::YLeaf internet_optimized_ipv4_no_tcam; //type: string

}; // HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam


class HwModuleProfileConfig::Tcam : public ydk::Entity
{
    public:
        Tcam();
        ~Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FibTcamScale; //type: HwModuleProfileConfig::Tcam::FibTcamScale

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Tcam::FibTcamScale> fib_tcam_scale;
        
}; // HwModuleProfileConfig::Tcam


class HwModuleProfileConfig::Tcam::FibTcamScale : public ydk::Entity
{
    public:
        FibTcamScale();
        ~FibTcamScale();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4UnicastScale; //type: HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale> ipv4_unicast_scale;
        
}; // HwModuleProfileConfig::Tcam::FibTcamScale


class HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale : public ydk::Entity
{
    public:
        Ipv4UnicastScale();
        ~Ipv4UnicastScale();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_scale; //type: empty

}; // HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale


}
}

#endif /* _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_ */

