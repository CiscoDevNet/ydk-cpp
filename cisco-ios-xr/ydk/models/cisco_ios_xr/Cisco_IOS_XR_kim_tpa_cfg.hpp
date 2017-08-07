#ifndef _CISCO_IOS_XR_KIM_TPA_CFG_
#define _CISCO_IOS_XR_KIM_TPA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_kim_tpa_cfg {

class Tpa : public ydk::Entity
{
    public:
        Tpa();
        ~Tpa();

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

        class VrfNames; //type: Tpa::VrfNames
        class Statistics; //type: Tpa::Statistics

        std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames> vrf_names;
        
}; // Tpa


class Tpa::VrfNames : public ydk::Entity
{
    public:
        VrfNames();
        ~VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfName; //type: Tpa::VrfNames::VrfName

        std::vector<std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName> > vrf_name;
        
}; // Tpa::VrfNames


class Tpa::VrfNames::VrfName : public ydk::Entity
{
    public:
        VrfName();
        ~VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class EastWestNames; //type: Tpa::VrfNames::VrfName::EastWestNames
        class AddressFamily; //type: Tpa::VrfNames::VrfName::AddressFamily

        std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily> address_family;
        std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::EastWestNames> east_west_names;
        
}; // Tpa::VrfNames::VrfName


class Tpa::VrfNames::VrfName::EastWestNames : public ydk::Entity
{
    public:
        EastWestNames();
        ~EastWestNames();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EastWestName; //type: Tpa::VrfNames::VrfName::EastWestNames::EastWestName

        std::vector<std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::EastWestNames::EastWestName> > east_west_name;
        
}; // Tpa::VrfNames::VrfName::EastWestNames


class Tpa::VrfNames::VrfName::EastWestNames::EastWestName : public ydk::Entity
{
    public:
        EastWestName();
        ~EastWestName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf east_west_name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf interface; //type: string

}; // Tpa::VrfNames::VrfName::EastWestNames::EastWestName


class Tpa::VrfNames::VrfName::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6
        class Ipv4; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4

        std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv6> ipv6;
        
}; // Tpa::VrfNames::VrfName::AddressFamily


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_route; //type: string
        ydk::YLeaf update_source; //type: string

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_route; //type: string
        ydk::YLeaf update_source; //type: string

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4


class Tpa::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statistics_update_frequency; //type: int32

}; // Tpa::Statistics


}
}

#endif /* _CISCO_IOS_XR_KIM_TPA_CFG_ */

