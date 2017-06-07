#ifndef _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_
#define _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_fia_hw_profile_cfg {

class HwModuleProfileConfig : public Entity
{
    public:
        HwModuleProfileConfig();
        ~HwModuleProfileConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Profile; //type: HwModuleProfileConfig::Profile

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile> profile;
        
}; // HwModuleProfileConfig


class HwModuleProfileConfig::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TcamTable; //type: HwModuleProfileConfig::Profile::TcamTable

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable> tcam_table;
        
}; // HwModuleProfileConfig::Profile


class HwModuleProfileConfig::Profile::TcamTable : public Entity
{
    public:
        TcamTable();
        ~TcamTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FibTable; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable> fib_table;
        
}; // HwModuleProfileConfig::Profile::TcamTable


class HwModuleProfileConfig::Profile::TcamTable::FibTable : public Entity
{
    public:
        FibTable();
        ~FibTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Address; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address
        class Ipv6Address; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address> ipv4_address;
        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address> ipv6_address;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address : public Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Unicast; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast> ipv4_unicast;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast : public Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_unicast_percent; //type: uint32
        class Ipv4UnicastPrefixLengths; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths> ipv4_unicast_prefix_lengths;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths : public Entity
{
    public:
        Ipv4UnicastPrefixLengths();
        ~Ipv4UnicastPrefixLengths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4UnicastPrefixLength; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength> > ipv4_unicast_prefix_length;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength : public Entity
{
    public:
        Ipv4UnicastPrefixLength();
        ~Ipv4UnicastPrefixLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint32
        YLeaf ipv4_unicast_prefix_percent; //type: string

}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address : public Entity
{
    public:
        Ipv6Address();
        ~Ipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Unicast; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast> ipv6_unicast;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast : public Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_unicast_percent; //type: uint32
        class Ipv6UnicastPrefixLengths; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths

        std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths> ipv6_unicast_prefix_lengths;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths : public Entity
{
    public:
        Ipv6UnicastPrefixLengths();
        ~Ipv6UnicastPrefixLengths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6UnicastPrefixLength; //type: HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength> > ipv6_unicast_prefix_length;
        
}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths


class HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength : public Entity
{
    public:
        Ipv6UnicastPrefixLength();
        ~Ipv6UnicastPrefixLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint32
        YLeaf ipv6_unicast_prefix_percent; //type: string

}; // HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength


}
}

#endif /* _CISCO_IOS_XR_FIA_HW_PROFILE_CFG_ */

