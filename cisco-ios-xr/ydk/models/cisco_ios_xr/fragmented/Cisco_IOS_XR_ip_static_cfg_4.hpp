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


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes : public ydk::Entity
{
    public:
        VrfRecurseRoutes();
        ~VrfRecurseRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfRecurseRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute> > vrf_recurse_route;
        
}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute : public ydk::Entity
{
    public:
        VrfRecurseRoute();
        ~VrfRecurseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class VrfRecursiveNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable> vrf_recursive_next_hop_table;
        
}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable : public ydk::Entity
{
    public:
        VrfRecursiveNextHopTable();
        ~VrfRecursiveNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        
}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute : public ydk::Entity
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

        class SegmentRouteNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;
        
}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable : public ydk::Entity
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

        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        
}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public ydk::Entity
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

}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::MaximumRoutes : public ydk::Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

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

        ydk::YLeaf ipv6_routes; //type: uint32
        ydk::YLeaf ipv4_routes; //type: uint32

}; // RouterStatic::MaximumRoutes


}
}

#endif /* _CISCO_IOS_XR_IP_STATIC_CFG_4_ */

