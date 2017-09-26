#ifndef _CISCO_IOS_XR_IP_STATIC_CFG_4_
#define _CISCO_IOS_XR_IP_STATIC_CFG_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_static_cfg_0.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_2.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_static_cfg {


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public ydk::Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public ydk::Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

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
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public ydk::Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

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
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public ydk::Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public ydk::Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute : public ydk::Entity
{
    public:
        VrfRoute();
        ~VrfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNextHopTable; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable> vrf_next_hop_table;
        
}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable : public ydk::Entity
{
    public:
        VrfNextHopTable();
        ~VrfNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNextHopInterfaceName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;
        
}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public ydk::Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName : public ydk::Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

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
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public ydk::Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

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
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public ydk::Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public ydk::Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute : public ydk::Entity
{
    public:
        VrfSegRoute();
        ~VrfSegRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRouteNextHopTable; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;
        
}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable : public ydk::Entity
{
    public:
        SegmentRouteNextHopTable();
        ~SegmentRouteNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNextHopInterfaceName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;
        
}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public ydk::Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public ydk::Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

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
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public ydk::Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

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
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public ydk::Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public ydk::Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf explicit_path_name; //type: string
        ydk::YLeaf bfd_fast_detect; //type: boolean
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf detect_multiplier; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf permanent; //type: boolean
        ydk::YLeaf vrf_lable; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf object_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf index_; //type: string

}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


}
}

#endif /* _CISCO_IOS_XR_IP_STATIC_CFG_4_ */

