#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_6_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpVrfAs : public ydk::Entity
{
    public:
        ClearBgpVrfAs();
        ~ClearBgpVrfAs();

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

        class Input; //type: ClearBgpVrfAs::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAs::Input> input;
        
}; // ClearBgpVrfAs


class ClearBgpVrfAs::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpVrfAs::Input

class ClearBgpVrfExternalGraceful : public ydk::Entity
{
    public:
        ClearBgpVrfExternalGraceful();
        ~ClearBgpVrfExternalGraceful();

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

        class Input; //type: ClearBgpVrfExternalGraceful::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfExternalGraceful::Input> input;
        
}; // ClearBgpVrfExternalGraceful


class ClearBgpVrfExternalGraceful::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfExternalGraceful::Input

class ClearBgpVrfExternal : public ydk::Entity
{
    public:
        ClearBgpVrfExternal();
        ~ClearBgpVrfExternal();

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

        class Input; //type: ClearBgpVrfExternal::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfExternal::Input> input;
        
}; // ClearBgpVrfExternal


class ClearBgpVrfExternal::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfExternal::Input

class ClearBgpVrfAfiSafiAllSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoftInPrefixFilter();
        ~ClearBgpVrfAfiSafiAllSoftInPrefixFilter();

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

        class Input; //type: ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input> input;
        
}; // ClearBgpVrfAfiSafiAllSoftInPrefixFilter


class ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input

class ClearBgpVrfAfiSafiAllSoftIn : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoftIn();
        ~ClearBgpVrfAfiSafiAllSoftIn();

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

        class Input; //type: ClearBgpVrfAfiSafiAllSoftIn::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAllSoftIn::Input> input;
        
}; // ClearBgpVrfAfiSafiAllSoftIn


class ClearBgpVrfAfiSafiAllSoftIn::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiAllSoftIn::Input

class ClearBgpVrfAfiSafiAllSoftOut : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoftOut();
        ~ClearBgpVrfAfiSafiAllSoftOut();

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

        class Input; //type: ClearBgpVrfAfiSafiAllSoftOut::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAllSoftOut::Input> input;
        
}; // ClearBgpVrfAfiSafiAllSoftOut


class ClearBgpVrfAfiSafiAllSoftOut::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiAllSoftOut::Input

class ClearBgpVrfAfiSafiAllSoft : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoft();
        ~ClearBgpVrfAfiSafiAllSoft();

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

        class Input; //type: ClearBgpVrfAfiSafiAllSoft::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAllSoft::Input> input;
        
}; // ClearBgpVrfAfiSafiAllSoft


class ClearBgpVrfAfiSafiAllSoft::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiAllSoft::Input

class ClearBgpVrfAfiSafiIpAddrLongLivedStale : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrLongLivedStale();
        ~ClearBgpVrfAfiSafiIpAddrLongLivedStale();

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

        class Input; //type: ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input> input;
        
}; // ClearBgpVrfAfiSafiIpAddrLongLivedStale


class ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input

class ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter();
        ~ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter();

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

        class Input; //type: ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input> input;
        
}; // ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter


class ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input

class ClearBgpVrfAfiSafiIpAddrSoftIn : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoftIn();
        ~ClearBgpVrfAfiSafiIpAddrSoftIn();

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

        class Input; //type: ClearBgpVrfAfiSafiIpAddrSoftIn::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiIpAddrSoftIn::Input> input;
        
}; // ClearBgpVrfAfiSafiIpAddrSoftIn


class ClearBgpVrfAfiSafiIpAddrSoftIn::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiIpAddrSoftIn::Input

class ClearBgpVrfAfiSafiIpAddrSoftOut : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoftOut();
        ~ClearBgpVrfAfiSafiIpAddrSoftOut();

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

        class Input; //type: ClearBgpVrfAfiSafiIpAddrSoftOut::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiIpAddrSoftOut::Input> input;
        
}; // ClearBgpVrfAfiSafiIpAddrSoftOut


class ClearBgpVrfAfiSafiIpAddrSoftOut::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiIpAddrSoftOut::Input

class ClearBgpVrfAfiSafiIpAddrSoft : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoft();
        ~ClearBgpVrfAfiSafiIpAddrSoft();

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

        class Input; //type: ClearBgpVrfAfiSafiIpAddrSoft::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiIpAddrSoft::Input> input;
        
}; // ClearBgpVrfAfiSafiIpAddrSoft


class ClearBgpVrfAfiSafiIpAddrSoft::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiIpAddrSoft::Input

class ClearBgpVrfAfiSafiAsSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoftInPrefixFilter();
        ~ClearBgpVrfAfiSafiAsSoftInPrefixFilter();

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

        class Input; //type: ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input> input;
        
}; // ClearBgpVrfAfiSafiAsSoftInPrefixFilter


class ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input

class ClearBgpVrfAfiSafiAsSoftIn : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoftIn();
        ~ClearBgpVrfAfiSafiAsSoftIn();

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

        class Input; //type: ClearBgpVrfAfiSafiAsSoftIn::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAsSoftIn::Input> input;
        
}; // ClearBgpVrfAfiSafiAsSoftIn


class ClearBgpVrfAfiSafiAsSoftIn::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpVrfAfiSafiAsSoftIn::Input

class ClearBgpVrfAfiSafiAsSoftOut : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoftOut();
        ~ClearBgpVrfAfiSafiAsSoftOut();

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

        class Input; //type: ClearBgpVrfAfiSafiAsSoftOut::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAsSoftOut::Input> input;
        
}; // ClearBgpVrfAfiSafiAsSoftOut


class ClearBgpVrfAfiSafiAsSoftOut::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpVrfAfiSafiAsSoftOut::Input

class ClearBgpVrfAfiSafiAsSoft : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoft();
        ~ClearBgpVrfAfiSafiAsSoft();

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

        class Input; //type: ClearBgpVrfAfiSafiAsSoft::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiAsSoft::Input> input;
        
}; // ClearBgpVrfAfiSafiAsSoft


class ClearBgpVrfAfiSafiAsSoft::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf as_number; //type: one of uint16, union

}; // ClearBgpVrfAfiSafiAsSoft::Input

class ClearBgpVrfAfiSafiDampeningIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiDampeningIpv4Prefix();
        ~ClearBgpVrfAfiSafiDampeningIpv4Prefix();

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

        class Input; //type: ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input> input;
        
}; // ClearBgpVrfAfiSafiDampeningIpv4Prefix


class ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input

class ClearBgpVrfAfiSafiDampening : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiDampening();
        ~ClearBgpVrfAfiSafiDampening();

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

        class Input; //type: ClearBgpVrfAfiSafiDampening::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiDampening::Input> input;
        
}; // ClearBgpVrfAfiSafiDampening


class ClearBgpVrfAfiSafiDampening::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiDampening::Input

class ClearBgpVrfAfiSafiExternalSoftInPrefixFilter : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoftInPrefixFilter();
        ~ClearBgpVrfAfiSafiExternalSoftInPrefixFilter();

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

        class Input; //type: ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input> input;
        
}; // ClearBgpVrfAfiSafiExternalSoftInPrefixFilter


class ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input

class ClearBgpVrfAfiSafiExternalSoftIn : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoftIn();
        ~ClearBgpVrfAfiSafiExternalSoftIn();

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

        class Input; //type: ClearBgpVrfAfiSafiExternalSoftIn::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiExternalSoftIn::Input> input;
        
}; // ClearBgpVrfAfiSafiExternalSoftIn


class ClearBgpVrfAfiSafiExternalSoftIn::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiExternalSoftIn::Input

class ClearBgpVrfAfiSafiExternalSoftOut : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoftOut();
        ~ClearBgpVrfAfiSafiExternalSoftOut();

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

        class Input; //type: ClearBgpVrfAfiSafiExternalSoftOut::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiExternalSoftOut::Input> input;
        
}; // ClearBgpVrfAfiSafiExternalSoftOut


class ClearBgpVrfAfiSafiExternalSoftOut::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiExternalSoftOut::Input

class ClearBgpVrfAfiSafiExternalSoft : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoft();
        ~ClearBgpVrfAfiSafiExternalSoft();

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

        class Input; //type: ClearBgpVrfAfiSafiExternalSoft::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiExternalSoft::Input> input;
        
}; // ClearBgpVrfAfiSafiExternalSoft


class ClearBgpVrfAfiSafiExternalSoft::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiExternalSoft::Input

class ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask();

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

        class Input; //type: ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input> input;
        
}; // ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask


class ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input

class ClearBgpVrfAfiSafiFlapStatisticsIpAddr : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpAddr();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpAddr();

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

        class Input; //type: ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input> input;
        
}; // ClearBgpVrfAfiSafiFlapStatisticsIpAddr


class ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input

class ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix();

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

        class Input; //type: ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input> input;
        
}; // ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix


class ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv4_prefix; //type: string

}; // ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input

class ClearBgpVrfAfiSafiFlapStatisticsRegexp : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsRegexp();
        ~ClearBgpVrfAfiSafiFlapStatisticsRegexp();

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

        class Input; //type: ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input> input;
        
}; // ClearBgpVrfAfiSafiFlapStatisticsRegexp


class ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf regexp_pattern; //type: string

}; // ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input

class ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy();
        ~ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy();

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

        class Input; //type: ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input> input;
        
}; // ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy


class ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf route_policy_name; //type: string

}; // ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input

class ClearBgpVrfAfiSafiFlapStatistics : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatistics();
        ~ClearBgpVrfAfiSafiFlapStatistics();

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

        class Input; //type: ClearBgpVrfAfiSafiFlapStatistics::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiFlapStatistics::Input> input;
        
}; // ClearBgpVrfAfiSafiFlapStatistics


class ClearBgpVrfAfiSafiFlapStatistics::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiFlapStatistics::Input

class ClearBgpVrfAfiSafiNexthopPerformanceStatistics : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiNexthopPerformanceStatistics();
        ~ClearBgpVrfAfiSafiNexthopPerformanceStatistics();

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

        class Input; //type: ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input> input;
        
}; // ClearBgpVrfAfiSafiNexthopPerformanceStatistics


class ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input

class ClearBgpVrfAfiSafiNexthopRegistrationIpAddr : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiNexthopRegistrationIpAddr();
        ~ClearBgpVrfAfiSafiNexthopRegistrationIpAddr();

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

        class Input; //type: ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input> input;
        
}; // ClearBgpVrfAfiSafiNexthopRegistrationIpAddr


class ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input

class ClearBgpVrfAfiSafiSelfOriginated : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiSelfOriginated();
        ~ClearBgpVrfAfiSafiSelfOriginated();

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

        class Input; //type: ClearBgpVrfAfiSafiSelfOriginated::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiSelfOriginated::Input> input;
        
}; // ClearBgpVrfAfiSafiSelfOriginated


class ClearBgpVrfAfiSafiSelfOriginated::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiSelfOriginated::Input

class ClearBgpVrfAfiSafiShutdown : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiShutdown();
        ~ClearBgpVrfAfiSafiShutdown();

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

        class Input; //type: ClearBgpVrfAfiSafiShutdown::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiShutdown::Input> input;
        
}; // ClearBgpVrfAfiSafiShutdown


class ClearBgpVrfAfiSafiShutdown::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiShutdown::Input

class ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent();
        ~ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent


class ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input

class ClearBgpVrfAfiSafiUpdateOutqAddressFamily : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqAddressFamily();
        ~ClearBgpVrfAfiSafiUpdateOutqAddressFamily();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqAddressFamily


class ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType

}; // ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent


class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh


class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent


class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr


class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent


class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf sub_group; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup


class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf sub_group; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent


class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf refresh_sub_group; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup


class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf refresh_sub_group; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent


class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf update_group; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroup : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroup();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroup();

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

        class Input; //type: ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input> input;
        
}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroup


class ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf update_group; //type: string

}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input

class ClearBgpVrfAfiSafiDampeningIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiDampeningIpv6Prefix();
        ~ClearBgpVrfAfiSafiDampeningIpv6Prefix();

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

        class Input; //type: ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input> input;
        
}; // ClearBgpVrfAfiSafiDampeningIpv6Prefix


class ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input

class ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix : public ydk::Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix();

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

        class Input; //type: ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input> input;
        
}; // ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix


class ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf afi_safi_name; //type: AfiSafiType
        ydk::YLeaf ipv6_prefix; //type: string

}; // ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input

class ClearBgpVrfNexthopPerformanceStatistics : public ydk::Entity
{
    public:
        ClearBgpVrfNexthopPerformanceStatistics();
        ~ClearBgpVrfNexthopPerformanceStatistics();

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

        class Input; //type: ClearBgpVrfNexthopPerformanceStatistics::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfNexthopPerformanceStatistics::Input> input;
        
}; // ClearBgpVrfNexthopPerformanceStatistics


class ClearBgpVrfNexthopPerformanceStatistics::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfNexthopPerformanceStatistics::Input

class ClearBgpVrfNexthopRegistrationIpAddr : public ydk::Entity
{
    public:
        ClearBgpVrfNexthopRegistrationIpAddr();
        ~ClearBgpVrfNexthopRegistrationIpAddr();

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

        class Input; //type: ClearBgpVrfNexthopRegistrationIpAddr::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfNexthopRegistrationIpAddr::Input> input;
        
}; // ClearBgpVrfNexthopRegistrationIpAddr


class ClearBgpVrfNexthopRegistrationIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfNexthopRegistrationIpAddr::Input

class ClearBgpVrfPeerDropsAll : public ydk::Entity
{
    public:
        ClearBgpVrfPeerDropsAll();
        ~ClearBgpVrfPeerDropsAll();

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

        class Input; //type: ClearBgpVrfPeerDropsAll::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfPeerDropsAll::Input> input;
        
}; // ClearBgpVrfPeerDropsAll


class ClearBgpVrfPeerDropsAll::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfPeerDropsAll::Input

class ClearBgpVrfPeerDropsIpAddr : public ydk::Entity
{
    public:
        ClearBgpVrfPeerDropsIpAddr();
        ~ClearBgpVrfPeerDropsIpAddr();

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

        class Input; //type: ClearBgpVrfPeerDropsIpAddr::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfPeerDropsIpAddr::Input> input;
        
}; // ClearBgpVrfPeerDropsIpAddr


class ClearBgpVrfPeerDropsIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfPeerDropsIpAddr::Input

class ClearBgpVrfPerformanceStatistics : public ydk::Entity
{
    public:
        ClearBgpVrfPerformanceStatistics();
        ~ClearBgpVrfPerformanceStatistics();

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

        class Input; //type: ClearBgpVrfPerformanceStatistics::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfPerformanceStatistics::Input> input;
        
}; // ClearBgpVrfPerformanceStatistics


class ClearBgpVrfPerformanceStatistics::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfPerformanceStatistics::Input

class ClearBgpVrfShutdown : public ydk::Entity
{
    public:
        ClearBgpVrfShutdown();
        ~ClearBgpVrfShutdown();

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

        class Input; //type: ClearBgpVrfShutdown::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfShutdown::Input> input;
        
}; // ClearBgpVrfShutdown


class ClearBgpVrfShutdown::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfShutdown::Input

class ClearBgpVrfUpdateOutqAddressFamilyUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqAddressFamilyUpdateParent();
        ~ClearBgpVrfUpdateOutqAddressFamilyUpdateParent();

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

        class Input; //type: ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input> input;
        
}; // ClearBgpVrfUpdateOutqAddressFamilyUpdateParent


class ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input

class ClearBgpVrfUpdateOutqAddressFamily : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqAddressFamily();
        ~ClearBgpVrfUpdateOutqAddressFamily();

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

        class Input; //type: ClearBgpVrfUpdateOutqAddressFamily::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqAddressFamily::Input> input;
        
}; // ClearBgpVrfUpdateOutqAddressFamily


class ClearBgpVrfUpdateOutqAddressFamily::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration

}; // ClearBgpVrfUpdateOutqAddressFamily::Input

class ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent();
        ~ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent();

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

        class Input; //type: ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input> input;
        
}; // ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent


class ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input

class ClearBgpVrfUpdateOutqNeighborIpAddrRefresh : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddrRefresh();
        ~ClearBgpVrfUpdateOutqNeighborIpAddrRefresh();

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

        class Input; //type: ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input> input;
        
}; // ClearBgpVrfUpdateOutqNeighborIpAddrRefresh


class ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input

class ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent();
        ~ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent();

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

        class Input; //type: ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input> input;
        
}; // ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent


class ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input

class ClearBgpVrfUpdateOutqNeighborIpAddr : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddr();
        ~ClearBgpVrfUpdateOutqNeighborIpAddr();

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

        class Input; //type: ClearBgpVrfUpdateOutqNeighborIpAddr::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqNeighborIpAddr::Input> input;
        
}; // ClearBgpVrfUpdateOutqNeighborIpAddr


class ClearBgpVrfUpdateOutqNeighborIpAddr::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf ip_addr; //type: string

}; // ClearBgpVrfUpdateOutqNeighborIpAddr::Input

class ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent();

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

        class Input; //type: ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input> input;
        
}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent


class ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf sub_group; //type: string

}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input

class ClearBgpVrfUpdateOutqUpdateGroupSubGroup : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroup();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroup();

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

        class Input; //type: ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input> input;
        
}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroup


class ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf sub_group; //type: string

}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input

class ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent();

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

        class Input; //type: ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input> input;
        
}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent


class ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf refresh_sub_group; //type: string

}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input

class ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup();

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

        class Input; //type: ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input> input;
        
}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup


class ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf update_group; //type: string
        ydk::YLeaf refresh_sub_group; //type: string

}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input

class ClearBgpVrfUpdateOutqUpdateGroupUpdateParent : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupUpdateParent();
        ~ClearBgpVrfUpdateOutqUpdateGroupUpdateParent();

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

        class Input; //type: ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input> input;
        
}; // ClearBgpVrfUpdateOutqUpdateGroupUpdateParent


class ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf update_group; //type: string

}; // ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input

class ClearBgpVrfUpdateOutqUpdateGroup : public ydk::Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroup();
        ~ClearBgpVrfUpdateOutqUpdateGroup();

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

        class Input; //type: ClearBgpVrfUpdateOutqUpdateGroup::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfUpdateOutqUpdateGroup::Input> input;
        
}; // ClearBgpVrfUpdateOutqUpdateGroup


class ClearBgpVrfUpdateOutqUpdateGroup::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_all; //type: one of string, enumeration
        ydk::YLeaf update_group; //type: string

}; // ClearBgpVrfUpdateOutqUpdateGroup::Input


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_6_ */

