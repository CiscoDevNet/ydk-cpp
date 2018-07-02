#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_2_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpInstanceAsGraceful : public ydk::Entity
{
    public:
        ClearBgpInstanceAsGraceful();
        ~ClearBgpInstanceAsGraceful();

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

        class Input; //type: ClearBgpInstanceAsGraceful::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAsGraceful::Input> input;
        
}; // ClearBgpInstanceAsGraceful


class ClearBgpInstanceAsGraceful::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAsGraceful::Input

class ClearBgpInstanceAs : public ydk::Entity
{
    public:
        ClearBgpInstanceAs();
        ~ClearBgpInstanceAs();

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

        class Input; //type: ClearBgpInstanceAs::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAs::Input> input;
        
}; // ClearBgpInstanceAs


class ClearBgpInstanceAs::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAs::Input

class ClearBgpInstanceBestpathIpAddrIpNetmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathIpAddrIpNetmask();
        ~ClearBgpInstanceBestpathIpAddrIpNetmask();

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

        class Input; //type: ClearBgpInstanceBestpathIpAddrIpNetmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathIpAddrIpNetmask::Input> input;
        
}; // ClearBgpInstanceBestpathIpAddrIpNetmask


class ClearBgpInstanceBestpathIpAddrIpNetmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathIpAddrIpNetmask::Input

class ClearBgpInstanceBestpathIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathIpAddr();
        ~ClearBgpInstanceBestpathIpAddr();

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

        class Input; //type: ClearBgpInstanceBestpathIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathIpAddr::Input> input;
        
}; // ClearBgpInstanceBestpathIpAddr


class ClearBgpInstanceBestpathIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathIpAddr::Input

class ClearBgpInstanceBestpathIpPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathIpPrefix();
        ~ClearBgpInstanceBestpathIpPrefix();

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

        class Input; //type: ClearBgpInstanceBestpathIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathIpPrefix::Input> input;
        
}; // ClearBgpInstanceBestpathIpPrefix


class ClearBgpInstanceBestpathIpPrefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathIpPrefix::Input

class ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask();
        ~ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask


class ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input

class ClearBgpInstanceBestpathAfiSafiIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpAddr();
        ~ClearBgpInstanceBestpathAfiSafiIpAddr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpAddr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpAddr


class ClearBgpInstanceBestpathAfiSafiIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpAddr::Input

class ClearBgpInstanceBestpathAfiSafiIpPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpPrefix();
        ~ClearBgpInstanceBestpathAfiSafiIpPrefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpPrefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpPrefix


class ClearBgpInstanceBestpathAfiSafiIpPrefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpPrefix::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input

class ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask();
        ~ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask


class ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input

class ClearBgpInstanceBestpathAfiSafiRdIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpAddr();
        ~ClearBgpInstanceBestpathAfiSafiRdIpAddr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpAddr


class ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input

class ClearBgpInstanceBestpathAfiSafiRdIpPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpPrefix();
        ~ClearBgpInstanceBestpathAfiSafiRdIpPrefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpPrefix


class ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input

class ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask();
        ~ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask


class ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input

class ClearBgpInstanceBestpathAfiSafiIpv4Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4Addr();
        ~ClearBgpInstanceBestpathAfiSafiIpv4Addr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4Addr


class ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input

class ClearBgpInstanceBestpathAfiSafiIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4Prefix();
        ~ClearBgpInstanceBestpathAfiSafiIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4Prefix


class ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv4Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4Addr();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4Addr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv4Addr


class ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr


class ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input

class ClearBgpInstanceBestpathAfiSafiNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiNetwork();
        ~ClearBgpInstanceBestpathAfiSafiNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiNetwork


class ClearBgpInstanceBestpathAfiSafiNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiNetwork::Input

class ClearBgpInstanceBestpathAfiSafiRdNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdNetwork();
        ~ClearBgpInstanceBestpathAfiSafiRdNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdNetwork


class ClearBgpInstanceBestpathAfiSafiRdNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdNetwork::Input

class ClearBgpInstanceBestpathAfiSafiVrfNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfNetwork();
        ~ClearBgpInstanceBestpathAfiSafiVrfNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfNetwork


class ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input

class ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork();
        ~ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork


class ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rt_constraint_network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input

class ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork();
        ~ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork


class ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_tunnel_network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input

class ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask();
        ~ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask


class ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input

class ClearBgpInstanceBestpathAfiSafiIpv6Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6Addr();
        ~ClearBgpInstanceBestpathAfiSafiIpv6Addr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv6Addr


class ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input

class ClearBgpInstanceBestpathAfiSafiIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6Prefix();
        ~ClearBgpInstanceBestpathAfiSafiIpv6Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv6Prefix


class ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input

class ClearBgpInstanceBestpathAfiSafiRd : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRd();
        ~ClearBgpInstanceBestpathAfiSafiRd();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRd::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRd::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRd


class ClearBgpInstanceBestpathAfiSafiRd::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRd::Input

class ClearBgpInstanceBestpathAfiSafiVrf : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrf();
        ~ClearBgpInstanceBestpathAfiSafiVrf();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrf::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrf::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrf


class ClearBgpInstanceBestpathAfiSafiVrf::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrf::Input

class ClearBgpInstanceBestpathAfiSafi : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafi();
        ~ClearBgpInstanceBestpathAfiSafi();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafi::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafi::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafi


class ClearBgpInstanceBestpathAfiSafi::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpInstanceBestpathAfiSafi::Input

class ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix();
        ~ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix


class ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf sr_policy_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix


class ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input

class ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix();
        ~ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix


class ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf mp2mp; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiMp2mpIpv4Prefix::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix


class ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask


class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask


class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask


class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv6Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6Addr();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6Addr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv6Addr


class ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix


class ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask


class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr


class ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix


class ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input

class ClearBgpInstanceBestpathVrfIpAddrIpNetmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpAddrIpNetmask();
        ~ClearBgpInstanceBestpathVrfIpAddrIpNetmask();

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

        class Input; //type: ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input> input;
        
}; // ClearBgpInstanceBestpathVrfIpAddrIpNetmask


class ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input

class ClearBgpInstanceBestpathVrfIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpAddr();
        ~ClearBgpInstanceBestpathVrfIpAddr();

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

        class Input; //type: ClearBgpInstanceBestpathVrfIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfIpAddr::Input> input;
        
}; // ClearBgpInstanceBestpathVrfIpAddr


class ClearBgpInstanceBestpathVrfIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathVrfIpAddr::Input

class ClearBgpInstanceBestpathVrfIpPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpPrefix();
        ~ClearBgpInstanceBestpathVrfIpPrefix();

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

        class Input; //type: ClearBgpInstanceBestpathVrfIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfIpPrefix::Input> input;
        
}; // ClearBgpInstanceBestpathVrfIpPrefix


class ClearBgpInstanceBestpathVrfIpPrefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathVrfIpPrefix::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix


class ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask


class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr


class ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input

class ClearBgpInstanceBestpathVrfAfiSafiNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiNetwork();
        ~ClearBgpInstanceBestpathVrfAfiSafiNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiNetwork


class ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf network; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input

class ClearBgpInstanceBestpathVrfAfiSafiRdNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRdNetwork();
        ~ClearBgpInstanceBestpathVrfAfiSafiRdNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiRdNetwork


class ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf network; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input

class ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork();
        ~ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork


class ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf network; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask


class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr


class ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix


class ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input

class ClearBgpInstanceBestpathVrfAfiSafiRd : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRd();
        ~ClearBgpInstanceBestpathVrfAfiSafiRd();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiRd::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiRd::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiRd


class ClearBgpInstanceBestpathVrfAfiSafiRd::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiRd::Input

class ClearBgpInstanceBestpathVrfAfiSafiVrf : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiVrf();
        ~ClearBgpInstanceBestpathVrfAfiSafiVrf();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiVrf::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiVrf::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiVrf


class ClearBgpInstanceBestpathVrfAfiSafiVrf::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiVrf::Input

class ClearBgpInstanceBestpathVrfAfiSafi : public ydk::Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafi();
        ~ClearBgpInstanceBestpathVrfAfiSafi();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafi::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafi::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafi


class ClearBgpInstanceBestpathVrfAfiSafi::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpInstanceBestpathVrfAfiSafi::Input

class ClearBgpInstanceExternalGraceful : public ydk::Entity
{
    public:
        ClearBgpInstanceExternalGraceful();
        ~ClearBgpInstanceExternalGraceful();

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

        class Input; //type: ClearBgpInstanceExternalGraceful::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceExternalGraceful::Input> input;
        
}; // ClearBgpInstanceExternalGraceful


class ClearBgpInstanceExternalGraceful::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceExternalGraceful::Input

class ClearBgpInstanceExternal : public ydk::Entity
{
    public:
        ClearBgpInstanceExternal();
        ~ClearBgpInstanceExternal();

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

        class Input; //type: ClearBgpInstanceExternal::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceExternal::Input> input;
        
}; // ClearBgpInstanceExternal


class ClearBgpInstanceExternal::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceExternal::Input

class ClearBgpInstanceAfiSafiDampeningIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpv4Prefix();
        ~ClearBgpInstanceAfiSafiDampeningIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampeningIpv4Prefix


class ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix


class ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input

class ClearBgpInstanceAfiSafiDampeningIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpv6Prefix();
        ~ClearBgpInstanceAfiSafiDampeningIpv6Prefix();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampeningIpv6Prefix


class ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix


class ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input

class ClearBgpInstanceNexthopPerformanceStatistics : public ydk::Entity
{
    public:
        ClearBgpInstanceNexthopPerformanceStatistics();
        ~ClearBgpInstanceNexthopPerformanceStatistics();

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

        class Input; //type: ClearBgpInstanceNexthopPerformanceStatistics::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceNexthopPerformanceStatistics::Input> input;
        
}; // ClearBgpInstanceNexthopPerformanceStatistics


class ClearBgpInstanceNexthopPerformanceStatistics::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceNexthopPerformanceStatistics::Input

class ClearBgpInstanceNexthopRegistrationIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceNexthopRegistrationIpAddr();
        ~ClearBgpInstanceNexthopRegistrationIpAddr();

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

        class Input; //type: ClearBgpInstanceNexthopRegistrationIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceNexthopRegistrationIpAddr::Input> input;
        
}; // ClearBgpInstanceNexthopRegistrationIpAddr


class ClearBgpInstanceNexthopRegistrationIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpInstanceNexthopRegistrationIpAddr::Input

class ClearBgpInstancePeerDropsAll : public ydk::Entity
{
    public:
        ClearBgpInstancePeerDropsAll();
        ~ClearBgpInstancePeerDropsAll();

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

        class Input; //type: ClearBgpInstancePeerDropsAll::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstancePeerDropsAll::Input> input;
        
}; // ClearBgpInstancePeerDropsAll


class ClearBgpInstancePeerDropsAll::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstancePeerDropsAll::Input

class ClearBgpInstancePeerDropsIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstancePeerDropsIpAddr();
        ~ClearBgpInstancePeerDropsIpAddr();

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

        class Input; //type: ClearBgpInstancePeerDropsIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstancePeerDropsIpAddr::Input> input;
        
}; // ClearBgpInstancePeerDropsIpAddr


class ClearBgpInstancePeerDropsIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpInstancePeerDropsIpAddr::Input

class ClearBgpInstancePerformanceStatistics : public ydk::Entity
{
    public:
        ClearBgpInstancePerformanceStatistics();
        ~ClearBgpInstancePerformanceStatistics();

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

        class Input; //type: ClearBgpInstancePerformanceStatistics::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstancePerformanceStatistics::Input> input;
        
}; // ClearBgpInstancePerformanceStatistics


class ClearBgpInstancePerformanceStatistics::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstancePerformanceStatistics::Input

class ClearBgpInstanceRpkiServerAllSerialQuery : public ydk::Entity
{
    public:
        ClearBgpInstanceRpkiServerAllSerialQuery();
        ~ClearBgpInstanceRpkiServerAllSerialQuery();

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

        class Input; //type: ClearBgpInstanceRpkiServerAllSerialQuery::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiServerAllSerialQuery::Input> input;
        
}; // ClearBgpInstanceRpkiServerAllSerialQuery


class ClearBgpInstanceRpkiServerAllSerialQuery::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceRpkiServerAllSerialQuery::Input

class ClearBgpInstanceRpkiServerAll : public ydk::Entity
{
    public:
        ClearBgpInstanceRpkiServerAll();
        ~ClearBgpInstanceRpkiServerAll();

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

        class Input; //type: ClearBgpInstanceRpkiServerAll::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiServerAll::Input> input;
        
}; // ClearBgpInstanceRpkiServerAll


class ClearBgpInstanceRpkiServerAll::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceRpkiServerAll::Input

class ClearBgpInstanceRpkiServerRpkiServer : public ydk::Entity
{
    public:
        ClearBgpInstanceRpkiServerRpkiServer();
        ~ClearBgpInstanceRpkiServerRpkiServer();

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

        class Input; //type: ClearBgpInstanceRpkiServerRpkiServer::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiServerRpkiServer::Input> input;
        
}; // ClearBgpInstanceRpkiServerRpkiServer


class ClearBgpInstanceRpkiServerRpkiServer::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration
        ydk::YLeaf rpki_server; //type: string

}; // ClearBgpInstanceRpkiServerRpkiServer::Input

class ClearBgpInstanceRpkiValidationIpv4 : public ydk::Entity
{
    public:
        ClearBgpInstanceRpkiValidationIpv4();
        ~ClearBgpInstanceRpkiValidationIpv4();

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

        class Input; //type: ClearBgpInstanceRpkiValidationIpv4::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiValidationIpv4::Input> input;
        
}; // ClearBgpInstanceRpkiValidationIpv4


class ClearBgpInstanceRpkiValidationIpv4::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceRpkiValidationIpv4::Input

class ClearBgpInstanceRpkiValidationIpv6 : public ydk::Entity
{
    public:
        ClearBgpInstanceRpkiValidationIpv6();
        ~ClearBgpInstanceRpkiValidationIpv6();

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

        class Input; //type: ClearBgpInstanceRpkiValidationIpv6::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiValidationIpv6::Input> input;
        
}; // ClearBgpInstanceRpkiValidationIpv6


class ClearBgpInstanceRpkiValidationIpv6::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceRpkiValidationIpv6::Input

class ClearBgpInstanceRpkiValidation : public ydk::Entity
{
    public:
        ClearBgpInstanceRpkiValidation();
        ~ClearBgpInstanceRpkiValidation();

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

        class Input; //type: ClearBgpInstanceRpkiValidation::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiValidation::Input> input;
        
}; // ClearBgpInstanceRpkiValidation


class ClearBgpInstanceRpkiValidation::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceRpkiValidation::Input


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_2_ */

