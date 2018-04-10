#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_1_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpBestpathAfiSafiSrPolicyPrefix : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiSrPolicyPrefix();
        ~ClearBgpBestpathAfiSafiSrPolicyPrefix();

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

        class Input; //type: ClearBgpBestpathAfiSafiSrPolicyPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiSrPolicyPrefix::Input> input;
        
}; // ClearBgpBestpathAfiSafiSrPolicyPrefix


class ClearBgpBestpathAfiSafiSrPolicyPrefix::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf sr_policy_prefix; //type: string

}; // ClearBgpBestpathAfiSafiSrPolicyPrefix::Input

class ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix();

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

        class Input; //type: ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input> input;
        
}; // ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix


class ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf bridge_domain_name; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input

class ClearBgpBestpathAfiSafiRdIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4Prefix();
        ~ClearBgpBestpathAfiSafiRdIpv4Prefix();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv4Prefix::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv4Prefix


class ClearBgpBestpathAfiSafiRdIpv4Prefix::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv4Prefix::Input

class ClearBgpBestpathAfiSafiMp2MpIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiMp2MpIpv4Prefix();
        ~ClearBgpBestpathAfiSafiMp2MpIpv4Prefix();

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

        class Input; //type: ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input> input;
        
}; // ClearBgpBestpathAfiSafiMp2MpIpv4Prefix


class ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf mp2mp; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input

class ClearBgpBestpathAfiSafiVrfIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4Prefix();
        ~ClearBgpBestpathAfiSafiVrfIpv4Prefix();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv4Prefix


class ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input

class ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask();
        ~ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask


class ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input

class ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask();
        ~ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask


class ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input

class ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask();
        ~ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask


class ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv6_netmask; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input

class ClearBgpBestpathAfiSafiRdIpv6Addr : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6Addr();
        ~ClearBgpBestpathAfiSafiRdIpv6Addr();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv6Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv6Addr::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv6Addr


class ClearBgpBestpathAfiSafiRdIpv6Addr::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv6Addr::Input

class ClearBgpBestpathAfiSafiRdIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6Prefix();
        ~ClearBgpBestpathAfiSafiRdIpv6Prefix();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv6Prefix::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv6Prefix


class ClearBgpBestpathAfiSafiRdIpv6Prefix::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv6Prefix::Input

class ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask();
        ~ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask


class ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv6_netmask; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input

class ClearBgpBestpathAfiSafiVrfIpv6Addr : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6Addr();
        ~ClearBgpBestpathAfiSafiVrfIpv6Addr();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv6Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv6Addr::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv6Addr


class ClearBgpBestpathAfiSafiVrfIpv6Addr::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv6Addr::Input

class ClearBgpBestpathAfiSafiVrfIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6Prefix();
        ~ClearBgpBestpathAfiSafiVrfIpv6Prefix();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv6Prefix


class ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input : public ydk::Entity
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

        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input

class ClearBgpBestpathVrfIpAddrIpNetmask : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfIpAddrIpNetmask();
        ~ClearBgpBestpathVrfIpAddrIpNetmask();

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

        class Input; //type: ClearBgpBestpathVrfIpAddrIpNetmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfIpAddrIpNetmask::Input> input;
        
}; // ClearBgpBestpathVrfIpAddrIpNetmask


class ClearBgpBestpathVrfIpAddrIpNetmask::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf ip_netmask; //type: string

}; // ClearBgpBestpathVrfIpAddrIpNetmask::Input

class ClearBgpBestpathVrfIpAddr : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfIpAddr();
        ~ClearBgpBestpathVrfIpAddr();

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

        class Input; //type: ClearBgpBestpathVrfIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfIpAddr::Input> input;
        
}; // ClearBgpBestpathVrfIpAddr


class ClearBgpBestpathVrfIpAddr::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpBestpathVrfIpAddr::Input

class ClearBgpBestpathVrfIpPrefix : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfIpPrefix();
        ~ClearBgpBestpathVrfIpPrefix();

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

        class Input; //type: ClearBgpBestpathVrfIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfIpPrefix::Input> input;
        
}; // ClearBgpBestpathVrfIpPrefix


class ClearBgpBestpathVrfIpPrefix::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_prefix; //type: string

}; // ClearBgpBestpathVrfIpPrefix::Input

class ClearBgpBestpathVrfAfiSafiIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4Prefix();
        ~ClearBgpBestpathVrfAfiSafiIpv4Prefix();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv4Prefix


class ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input

class ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask();
        ~ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask


class ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input

class ClearBgpBestpathVrfAfiSafiIpv4Addr : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4Addr();
        ~ClearBgpBestpathVrfAfiSafiIpv4Addr();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv4Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv4Addr::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv4Addr


class ClearBgpBestpathVrfAfiSafiIpv4Addr::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_addr; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv4Addr::Input

class ClearBgpBestpathVrfAfiSafiNetwork : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiNetwork();
        ~ClearBgpBestpathVrfAfiSafiNetwork();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiNetwork::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiNetwork


class ClearBgpBestpathVrfAfiSafiNetwork::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf network; //type: string

}; // ClearBgpBestpathVrfAfiSafiNetwork::Input

class ClearBgpBestpathVrfAfiSafiRdNetwork : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRdNetwork();
        ~ClearBgpBestpathVrfAfiSafiRdNetwork();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiRdNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiRdNetwork::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiRdNetwork


class ClearBgpBestpathVrfAfiSafiRdNetwork::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string
        ydk::YLeaf network; //type: string

}; // ClearBgpBestpathVrfAfiSafiRdNetwork::Input

class ClearBgpBestpathVrfAfiSafiVrfNetwork : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiVrfNetwork();
        ~ClearBgpBestpathVrfAfiSafiVrfNetwork();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiVrfNetwork::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiVrfNetwork::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiVrfNetwork


class ClearBgpBestpathVrfAfiSafiVrfNetwork::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf network; //type: string

}; // ClearBgpBestpathVrfAfiSafiVrfNetwork::Input

class ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask();
        ~ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask


class ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_addr; //type: string
        ydk::YLeaf ipv6_netmask; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input

class ClearBgpBestpathVrfAfiSafiIpv6Addr : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6Addr();
        ~ClearBgpBestpathVrfAfiSafiIpv6Addr();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv6Addr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv6Addr::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv6Addr


class ClearBgpBestpathVrfAfiSafiIpv6Addr::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_addr; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv6Addr::Input

class ClearBgpBestpathVrfAfiSafiIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6Prefix();
        ~ClearBgpBestpathVrfAfiSafiIpv6Prefix();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv6Prefix


class ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input

class ClearBgpBestpathVrfAfiSafiRd : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRd();
        ~ClearBgpBestpathVrfAfiSafiRd();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiRd::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiRd::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiRd


class ClearBgpBestpathVrfAfiSafiRd::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf rd; //type: string

}; // ClearBgpBestpathVrfAfiSafiRd::Input

class ClearBgpBestpathVrfAfiSafiVrf : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiVrf();
        ~ClearBgpBestpathVrfAfiSafiVrf();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiVrf::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiVrf::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiVrf


class ClearBgpBestpathVrfAfiSafiVrf::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf vrf_name; //type: string

}; // ClearBgpBestpathVrfAfiSafiVrf::Input

class ClearBgpBestpathVrfAfiSafi : public ydk::Entity
{
    public:
        ClearBgpBestpathVrfAfiSafi();
        ~ClearBgpBestpathVrfAfiSafi();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafi::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafi::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafi


class ClearBgpBestpathVrfAfiSafi::Input : public ydk::Entity
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

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpBestpathVrfAfiSafi::Input

class ClearBgpExternalGraceful : public ydk::Entity
{
    public:
        ClearBgpExternalGraceful();
        ~ClearBgpExternalGraceful();

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


}; // ClearBgpExternalGraceful

class ClearBgpExternal : public ydk::Entity
{
    public:
        ClearBgpExternal();
        ~ClearBgpExternal();

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


}; // ClearBgpExternal

class ClearBgpInstanceAllGraceful : public ydk::Entity
{
    public:
        ClearBgpInstanceAllGraceful();
        ~ClearBgpInstanceAllGraceful();

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

        class Input; //type: ClearBgpInstanceAllGraceful::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAllGraceful::Input> input;
        
}; // ClearBgpInstanceAllGraceful


class ClearBgpInstanceAllGraceful::Input : public ydk::Entity
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

}; // ClearBgpInstanceAllGraceful::Input

class ClearBgpInstanceAll : public ydk::Entity
{
    public:
        ClearBgpInstanceAll();
        ~ClearBgpInstanceAll();

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

        class Input; //type: ClearBgpInstanceAll::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAll::Input> input;
        
}; // ClearBgpInstanceAll


class ClearBgpInstanceAll::Input : public ydk::Entity
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

}; // ClearBgpInstanceAll::Input

class ClearBgpInstanceIpAddrGraceful : public ydk::Entity
{
    public:
        ClearBgpInstanceIpAddrGraceful();
        ~ClearBgpInstanceIpAddrGraceful();

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

        class Input; //type: ClearBgpInstanceIpAddrGraceful::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceIpAddrGraceful::Input> input;
        
}; // ClearBgpInstanceIpAddrGraceful


class ClearBgpInstanceIpAddrGraceful::Input : public ydk::Entity
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

}; // ClearBgpInstanceIpAddrGraceful::Input

class ClearBgpInstanceIpAddrLongLivedStale : public ydk::Entity
{
    public:
        ClearBgpInstanceIpAddrLongLivedStale();
        ~ClearBgpInstanceIpAddrLongLivedStale();

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

        class Input; //type: ClearBgpInstanceIpAddrLongLivedStale::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceIpAddrLongLivedStale::Input> input;
        
}; // ClearBgpInstanceIpAddrLongLivedStale


class ClearBgpInstanceIpAddrLongLivedStale::Input : public ydk::Entity
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

}; // ClearBgpInstanceIpAddrLongLivedStale::Input

class ClearBgpInstanceIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceIpAddr();
        ~ClearBgpInstanceIpAddr();

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

        class Input; //type: ClearBgpInstanceIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceIpAddr::Input> input;
        
}; // ClearBgpInstanceIpAddr


class ClearBgpInstanceIpAddr::Input : public ydk::Entity
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

}; // ClearBgpInstanceIpAddr::Input

class ClearBgpInstanceAfiSafiAllSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftInPrefixFilter();
        ~ClearBgpInstanceAfiSafiAllSoftInPrefixFilter();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoftInPrefixFilter


class ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input

class ClearBgpInstanceAfiSafiAllSoftIn : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftIn();
        ~ClearBgpInstanceAfiSafiAllSoftIn();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoftIn::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoftIn::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoftIn


class ClearBgpInstanceAfiSafiAllSoftIn::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiAllSoftIn::Input

class ClearBgpInstanceAfiSafiAllSoftOut : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftOut();
        ~ClearBgpInstanceAfiSafiAllSoftOut();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoftOut::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoftOut::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoftOut


class ClearBgpInstanceAfiSafiAllSoftOut::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiAllSoftOut::Input

class ClearBgpInstanceAfiSafiAllSoft : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoft();
        ~ClearBgpInstanceAfiSafiAllSoft();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoft::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoft::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoft


class ClearBgpInstanceAfiSafiAllSoft::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiAllSoft::Input

class ClearBgpInstanceAfiSafiIpAddrLongLivedStale : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrLongLivedStale();
        ~ClearBgpInstanceAfiSafiIpAddrLongLivedStale();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrLongLivedStale


class ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input

class ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter();
        ~ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter


class ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input

class ClearBgpInstanceAfiSafiIpAddrSoftIn : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftIn();
        ~ClearBgpInstanceAfiSafiIpAddrSoftIn();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoftIn::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoftIn::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoftIn


class ClearBgpInstanceAfiSafiIpAddrSoftIn::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiIpAddrSoftIn::Input

class ClearBgpInstanceAfiSafiIpAddrSoftOut : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftOut();
        ~ClearBgpInstanceAfiSafiIpAddrSoftOut();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoftOut::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoftOut::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoftOut


class ClearBgpInstanceAfiSafiIpAddrSoftOut::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiIpAddrSoftOut::Input

class ClearBgpInstanceAfiSafiIpAddrSoft : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoft();
        ~ClearBgpInstanceAfiSafiIpAddrSoft();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoft::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoft::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoft


class ClearBgpInstanceAfiSafiIpAddrSoft::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiIpAddrSoft::Input

class ClearBgpInstanceAfiSafiAsSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftInPrefixFilter();
        ~ClearBgpInstanceAfiSafiAsSoftInPrefixFilter();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoftInPrefixFilter


class ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input : public ydk::Entity
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
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input

class ClearBgpInstanceAfiSafiAsSoftIn : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftIn();
        ~ClearBgpInstanceAfiSafiAsSoftIn();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoftIn::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoftIn::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoftIn


class ClearBgpInstanceAfiSafiAsSoftIn::Input : public ydk::Entity
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
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpInstanceAfiSafiAsSoftIn::Input

class ClearBgpInstanceAfiSafiAsSoftOut : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftOut();
        ~ClearBgpInstanceAfiSafiAsSoftOut();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoftOut::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoftOut::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoftOut


class ClearBgpInstanceAfiSafiAsSoftOut::Input : public ydk::Entity
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
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpInstanceAfiSafiAsSoftOut::Input

class ClearBgpInstanceAfiSafiAsSoft : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoft();
        ~ClearBgpInstanceAfiSafiAsSoft();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoft::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoft::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoft


class ClearBgpInstanceAfiSafiAsSoft::Input : public ydk::Entity
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
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpInstanceAfiSafiAsSoft::Input

class ClearBgpInstanceAfiSafiDampeningIpPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpPrefix();
        ~ClearBgpInstanceAfiSafiDampeningIpPrefix();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampeningIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampeningIpPrefix::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampeningIpPrefix


class ClearBgpInstanceAfiSafiDampeningIpPrefix::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiDampeningIpPrefix::Input

class ClearBgpInstanceAfiSafiDampening : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiDampening();
        ~ClearBgpInstanceAfiSafiDampening();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampening::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampening::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampening


class ClearBgpInstanceAfiSafiDampening::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiDampening::Input

class ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter();
        ~ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter


class ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input

class ClearBgpInstanceAfiSafiExternalSoftIn : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftIn();
        ~ClearBgpInstanceAfiSafiExternalSoftIn();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoftIn::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoftIn::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoftIn


class ClearBgpInstanceAfiSafiExternalSoftIn::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiExternalSoftIn::Input

class ClearBgpInstanceAfiSafiExternalSoftOut : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftOut();
        ~ClearBgpInstanceAfiSafiExternalSoftOut();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoftOut::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoftOut::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoftOut


class ClearBgpInstanceAfiSafiExternalSoftOut::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiExternalSoftOut::Input

class ClearBgpInstanceAfiSafiExternalSoft : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoft();
        ~ClearBgpInstanceAfiSafiExternalSoft();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoft::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoft::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoft


class ClearBgpInstanceAfiSafiExternalSoft::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiExternalSoft::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask


class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input : public ydk::Entity
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
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpAddr();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpAddr();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddr


class ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix


class ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input

class ClearBgpInstanceAfiSafiFlapStatisticsRegexp : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRegexp();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRegexp();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsRegexp


class ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input : public ydk::Entity
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
        ydk::YLeaf regexp_pattern; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input

class ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy


class ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input : public ydk::Entity
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
        ydk::YLeaf route_policy_name; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input

class ClearBgpInstanceAfiSafiFlapStatistics : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatistics();
        ~ClearBgpInstanceAfiSafiFlapStatistics();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatistics::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatistics::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatistics


class ClearBgpInstanceAfiSafiFlapStatistics::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiFlapStatistics::Input

class ClearBgpInstanceAfiSafiNexthopPerformanceStatistics : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiNexthopPerformanceStatistics();
        ~ClearBgpInstanceAfiSafiNexthopPerformanceStatistics();

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

        class Input; //type: ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input> input;
        
}; // ClearBgpInstanceAfiSafiNexthopPerformanceStatistics


class ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input

class ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr();
        ~ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr();

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

        class Input; //type: ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input> input;
        
}; // ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr


class ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input

class ClearBgpInstanceAfiSafiSelfOriginated : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiSelfOriginated();
        ~ClearBgpInstanceAfiSafiSelfOriginated();

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

        class Input; //type: ClearBgpInstanceAfiSafiSelfOriginated::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiSelfOriginated::Input> input;
        
}; // ClearBgpInstanceAfiSafiSelfOriginated


class ClearBgpInstanceAfiSafiSelfOriginated::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiSelfOriginated::Input

class ClearBgpInstanceAfiSafiShutdown : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiShutdown();
        ~ClearBgpInstanceAfiSafiShutdown();

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

        class Input; //type: ClearBgpInstanceAfiSafiShutdown::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiShutdown::Input> input;
        
}; // ClearBgpInstanceAfiSafiShutdown


class ClearBgpInstanceAfiSafiShutdown::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiShutdown::Input

class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent();
        ~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent


class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input

class ClearBgpInstanceAfiSafiUpdateOutqAddressFamily : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqAddressFamily();
        ~ClearBgpInstanceAfiSafiUpdateOutqAddressFamily();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamily


class ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input : public ydk::Entity
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

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input : public ydk::Entity
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
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input : public ydk::Entity
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
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input : public ydk::Entity
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
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input : public ydk::Entity
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
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input : public ydk::Entity
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
        ydk::YLeaf update_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup : public ydk::Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input : public ydk::Entity
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
        ydk::YLeaf update_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_1_ */

