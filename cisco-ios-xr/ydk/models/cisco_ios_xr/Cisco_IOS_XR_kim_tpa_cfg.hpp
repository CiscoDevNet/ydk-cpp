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

        class VrfNames; //type: Tpa::VrfNames
        class Logging; //type: Tpa::Logging
        class Statistics; //type: Tpa::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames> vrf_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::Statistics> statistics;
        
}; // Tpa


class Tpa::VrfNames : public ydk::Entity
{
    public:
        VrfNames();
        ~VrfNames();

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

        class VrfName; //type: Tpa::VrfNames::VrfName

        ydk::YList vrf_name;
        
}; // Tpa::VrfNames


class Tpa::VrfNames::VrfName : public ydk::Entity
{
    public:
        VrfName();
        ~VrfName();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf disable; //type: empty
        class EastWestNames; //type: Tpa::VrfNames::VrfName::EastWestNames
        class AddressFamily; //type: Tpa::VrfNames::VrfName::AddressFamily

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::EastWestNames> east_west_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily> address_family;
        
}; // Tpa::VrfNames::VrfName


class Tpa::VrfNames::VrfName::EastWestNames : public ydk::Entity
{
    public:
        EastWestNames();
        ~EastWestNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EastWestName; //type: Tpa::VrfNames::VrfName::EastWestNames::EastWestName

        ydk::YList east_west_name;
        
}; // Tpa::VrfNames::VrfName::EastWestNames


class Tpa::VrfNames::VrfName::EastWestNames::EastWestName : public ydk::Entity
{
    public:
        EastWestName();
        ~EastWestName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6
        class Ipv4; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv4> ipv4;
        
}; // Tpa::VrfNames::VrfName::AddressFamily


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_route; //type: string
        class InterfaceNames; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames
        class AllowEntries; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries
        class UpdateSource; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames> interface_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries> allow_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource> update_source;
        
}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames : public ydk::Entity
{
    public:
        InterfaceNames();
        ~InterfaceNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName

        ydk::YList interface_name;
        
}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName : public ydk::Entity
{
    public:
        InterfaceName();
        ~InterfaceName();

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
        ydk::YLeaf egress_interface_source; //type: string

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::InterfaceNames::InterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries : public ydk::Entity
{
    public:
        AllowEntries();
        ~AllowEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllowEntry; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntry
        class AllowEntryLocalAddress; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddress
        class AllowEntryRemoteAddress; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryRemoteAddress
        class AllowEntryLocalAddressRemoteAddress; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressRemoteAddress
        class AllowEntryInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryInterfaceName
        class AllowEntryLocalAddressInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressInterfaceName
        class AllowEntryRemoteAddressInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryRemoteAddressInterfaceName
        class AllowEntryLocalAddressRemoteAddressInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressRemoteAddressInterfaceName

        ydk::YList allow_entry;
        ydk::YList allow_entry_local_address;
        ydk::YList allow_entry_remote_address;
        ydk::YList allow_entry_local_address_remote_address;
        ydk::YList allow_entry_interface_name;
        ydk::YList allow_entry_local_address_interface_name;
        ydk::YList allow_entry_remote_address_interface_name;
        ydk::YList allow_entry_local_address_remote_address_interface_name;
        
}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntry : public ydk::Entity
{
    public:
        AllowEntry();
        ~AllowEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntry


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddress : public ydk::Entity
{
    public:
        AllowEntryLocalAddress();
        ~AllowEntryLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddress


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryRemoteAddress : public ydk::Entity
{
    public:
        AllowEntryRemoteAddress();
        ~AllowEntryRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryRemoteAddress


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressRemoteAddress : public ydk::Entity
{
    public:
        AllowEntryLocalAddressRemoteAddress();
        ~AllowEntryLocalAddressRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressRemoteAddress


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryInterfaceName : public ydk::Entity
{
    public:
        AllowEntryInterfaceName();
        ~AllowEntryInterfaceName();

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
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressInterfaceName : public ydk::Entity
{
    public:
        AllowEntryLocalAddressInterfaceName();
        ~AllowEntryLocalAddressInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryRemoteAddressInterfaceName : public ydk::Entity
{
    public:
        AllowEntryRemoteAddressInterfaceName();
        ~AllowEntryRemoteAddressInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryRemoteAddressInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressRemoteAddressInterfaceName : public ydk::Entity
{
    public:
        AllowEntryLocalAddressRemoteAddressInterfaceName();
        ~AllowEntryLocalAddressRemoteAddressInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::AllowEntries::AllowEntryLocalAddressRemoteAddressInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

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
        ydk::YLeaf active_management; //type: empty

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv6::UpdateSource


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_route; //type: string
        class InterfaceNames; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames
        class AllowEntries; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries
        class UpdateSource; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames> interface_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries> allow_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource> update_source;
        
}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames : public ydk::Entity
{
    public:
        InterfaceNames();
        ~InterfaceNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName

        ydk::YList interface_name;
        
}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName : public ydk::Entity
{
    public:
        InterfaceName();
        ~InterfaceName();

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
        ydk::YLeaf egress_interface_source; //type: string

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::InterfaceNames::InterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries : public ydk::Entity
{
    public:
        AllowEntries();
        ~AllowEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllowEntry; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntry
        class AllowEntryLocalAddress; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddress
        class AllowEntryRemoteAddress; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryRemoteAddress
        class AllowEntryLocalAddressRemoteAddress; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressRemoteAddress
        class AllowEntryInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryInterfaceName
        class AllowEntryLocalAddressInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressInterfaceName
        class AllowEntryRemoteAddressInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryRemoteAddressInterfaceName
        class AllowEntryLocalAddressRemoteAddressInterfaceName; //type: Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressRemoteAddressInterfaceName

        ydk::YList allow_entry;
        ydk::YList allow_entry_local_address;
        ydk::YList allow_entry_remote_address;
        ydk::YList allow_entry_local_address_remote_address;
        ydk::YList allow_entry_interface_name;
        ydk::YList allow_entry_local_address_interface_name;
        ydk::YList allow_entry_remote_address_interface_name;
        ydk::YList allow_entry_local_address_remote_address_interface_name;
        
}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntry : public ydk::Entity
{
    public:
        AllowEntry();
        ~AllowEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntry


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddress : public ydk::Entity
{
    public:
        AllowEntryLocalAddress();
        ~AllowEntryLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddress


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryRemoteAddress : public ydk::Entity
{
    public:
        AllowEntryRemoteAddress();
        ~AllowEntryRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryRemoteAddress


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressRemoteAddress : public ydk::Entity
{
    public:
        AllowEntryLocalAddressRemoteAddress();
        ~AllowEntryLocalAddressRemoteAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressRemoteAddress


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryInterfaceName : public ydk::Entity
{
    public:
        AllowEntryInterfaceName();
        ~AllowEntryInterfaceName();

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
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressInterfaceName : public ydk::Entity
{
    public:
        AllowEntryLocalAddressInterfaceName();
        ~AllowEntryLocalAddressInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryRemoteAddressInterfaceName : public ydk::Entity
{
    public:
        AllowEntryRemoteAddressInterfaceName();
        ~AllowEntryRemoteAddressInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryRemoteAddressInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressRemoteAddressInterfaceName : public ydk::Entity
{
    public:
        AllowEntryLocalAddressRemoteAddressInterfaceName();
        ~AllowEntryLocalAddressRemoteAddressInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf protocol; //type: IpProtocol
        ydk::YLeaf local_port; //type: uint16

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::AllowEntries::AllowEntryLocalAddressRemoteAddressInterfaceName


class Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource : public ydk::Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

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
        ydk::YLeaf active_management; //type: empty

}; // Tpa::VrfNames::VrfName::AddressFamily::Ipv4::UpdateSource


class Tpa::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        class Kim; //type: Tpa::Logging::Kim

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_kim_tpa_cfg::Tpa::Logging::Kim> kim;
        
}; // Tpa::Logging


class Tpa::Logging::Kim : public ydk::Entity
{
    public:
        Kim();
        ~Kim();

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

        ydk::YLeaf rotation_max; //type: uint32
        ydk::YLeaf file_size_max_kb; //type: uint32

}; // Tpa::Logging::Kim


class Tpa::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        ydk::YLeaf max_intf_events; //type: uint32
        ydk::YLeaf max_lpts_events; //type: uint32
        ydk::YLeaf statistics_update_frequency; //type: uint32

}; // Tpa::Statistics

class IpProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

        static int get_enum_value(const std::string & name) {
            if (name == "tcp") return 6;
            if (name == "udp") return 17;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_KIM_TPA_CFG_ */

