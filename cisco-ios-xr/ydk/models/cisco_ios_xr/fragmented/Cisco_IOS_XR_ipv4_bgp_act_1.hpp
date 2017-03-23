#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_1_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string



}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string



}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc

class ClearBgpInstanceAsGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceAsGracefulRpc();
        ~ClearBgpInstanceAsGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceAsGracefulRpc

class ClearBgpInstanceAsRpc : public Entity
{
    public:
        ClearBgpInstanceAsRpc();
        ~ClearBgpInstanceAsRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceAsRpc

class ClearBgpInstanceBestpathIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceBestpathIpAddrIpNetmaskRpc

class ClearBgpInstanceBestpathIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathIpAddrRpc();
        ~ClearBgpInstanceBestpathIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceBestpathIpAddrRpc

class ClearBgpInstanceBestpathIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathIpPrefixRpc();
        ~ClearBgpInstanceBestpathIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceBestpathIpPrefixRpc

class ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc

class ClearBgpInstanceBestpathAfiSafiIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpAddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpAddrRpc

class ClearBgpInstanceBestpathAfiSafiIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpPrefixRpc

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc

class ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc

class ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc

class ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc

class ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc

class ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc

class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc

class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc

class ClearBgpInstanceBestpathAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string



}; // ClearBgpInstanceBestpathAfiSafiNetworkRpc

class ClearBgpInstanceBestpathAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdNetworkRpc

class ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc

class ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rt_constraint_network; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc

class ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_tunnel_network; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc

class ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc

class ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc

class ClearBgpInstanceBestpathAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdRpc

class ClearBgpInstanceBestpathAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfRpc

class ClearBgpInstanceBestpathAfiSafiRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRpc();
        ~ClearBgpInstanceBestpathAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum



}; // ClearBgpInstanceBestpathAfiSafiRpc

class ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf sr_policy_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc

class ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc

class ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf mp2mp; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc

class ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc

class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc

class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc

class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc

class ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc

class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc

class ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc

class ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc

class ClearBgpInstanceBestpathVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpAddrRpc();
        ~ClearBgpInstanceBestpathVrfIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceBestpathVrfIpAddrRpc

class ClearBgpInstanceBestpathVrfIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpPrefixRpc();
        ~ClearBgpInstanceBestpathVrfIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceBestpathVrfIpPrefixRpc

class ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc

class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc

class ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc

class ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc

class ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc

class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc

class ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc

class ClearBgpInstanceBestpathVrfAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRdRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiRdRpc

class ClearBgpInstanceBestpathVrfAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiVrfRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string



}; // ClearBgpInstanceBestpathVrfAfiSafiVrfRpc

class ClearBgpInstanceBestpathVrfAfiSafiRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum



}; // ClearBgpInstanceBestpathVrfAfiSafiRpc

class ClearBgpInstanceExternalGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceExternalGracefulRpc();
        ~ClearBgpInstanceExternalGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceExternalGracefulRpc

class ClearBgpInstanceExternalRpc : public Entity
{
    public:
        ClearBgpInstanceExternalRpc();
        ~ClearBgpInstanceExternalRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceExternalRpc

class ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc();
        ~ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc

class ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc

class ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc();
        ~ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc

class ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc

class ClearBgpInstanceNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceNexthopPerformanceStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceNexthopPerformanceStatisticsRpc

class ClearBgpInstanceNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceNexthopRegistrationIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceNexthopRegistrationIpAddrRpc

class ClearBgpInstancePeerDropsAllRpc : public Entity
{
    public:
        ClearBgpInstancePeerDropsAllRpc();
        ~ClearBgpInstancePeerDropsAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstancePeerDropsAllRpc

class ClearBgpInstancePeerDropsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstancePeerDropsIpAddrRpc();
        ~ClearBgpInstancePeerDropsIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstancePeerDropsIpAddrRpc

class ClearBgpInstancePerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstancePerformanceStatisticsRpc();
        ~ClearBgpInstancePerformanceStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstancePerformanceStatisticsRpc

class ClearBgpInstanceRpkiServerAllSerialQueryRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiServerAllSerialQueryRpc();
        ~ClearBgpInstanceRpkiServerAllSerialQueryRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceRpkiServerAllSerialQueryRpc

class ClearBgpInstanceRpkiServerAllRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiServerAllRpc();
        ~ClearBgpInstanceRpkiServerAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceRpkiServerAllRpc

class ClearBgpInstanceRpkiServerRpkiServerRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiServerRpkiServerRpc();
        ~ClearBgpInstanceRpkiServerRpkiServerRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf rpki_server; //type: string



}; // ClearBgpInstanceRpkiServerRpkiServerRpc

class ClearBgpInstanceRpkiValidationIpv4Rpc : public Entity
{
    public:
        ClearBgpInstanceRpkiValidationIpv4Rpc();
        ~ClearBgpInstanceRpkiValidationIpv4Rpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceRpkiValidationIpv4Rpc

class ClearBgpInstanceRpkiValidationIpv6Rpc : public Entity
{
    public:
        ClearBgpInstanceRpkiValidationIpv6Rpc();
        ~ClearBgpInstanceRpkiValidationIpv6Rpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceRpkiValidationIpv6Rpc

class ClearBgpInstanceRpkiValidationRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiValidationRpc();
        ~ClearBgpInstanceRpkiValidationRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceRpkiValidationRpc

class ClearBgpInstanceShutdownRpc : public Entity
{
    public:
        ClearBgpInstanceShutdownRpc();
        ~ClearBgpInstanceShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceShutdownRpc

class ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpInstanceUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqAddressFamilyRpc();
        ~ClearBgpInstanceUpdateOutqAddressFamilyRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceUpdateOutqAddressFamilyRpc

class ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpInstanceUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpInstanceUpdateOutqNeighborIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceUpdateOutqNeighborIpAddrRpc

class ClearBgpInstanceUpdateOutqProcessRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqProcessRpc();
        ~ClearBgpInstanceUpdateOutqProcessRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration



}; // ClearBgpInstanceUpdateOutqProcessRpc

class ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf update_group; //type: string



}; // ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpInstanceUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpInstanceUpdateOutqUpdateGroupRpc();
        ~ClearBgpInstanceUpdateOutqUpdateGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf update_group; //type: string



}; // ClearBgpInstanceUpdateOutqUpdateGroupRpc

class ClearBgpInstanceVersionIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceVersionIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceVersionIpAddrIpNetmaskRpc

class ClearBgpInstanceVersionIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionIpAddrRpc();
        ~ClearBgpInstanceVersionIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVersionIpAddrRpc

class ClearBgpInstanceVersionIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionIpPrefixRpc();
        ~ClearBgpInstanceVersionIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceVersionIpPrefixRpc

class ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc

class ClearBgpInstanceVersionAfiSafiIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpAddrRpc();
        ~ClearBgpInstanceVersionAfiSafiIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpAddrRpc

class ClearBgpInstanceVersionAfiSafiIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpPrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpPrefixRpc

class ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc

class ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc();
        ~ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc

class ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc

class ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc

class ClearBgpInstanceVersionAfiSafiRdIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpAddrRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpAddrRpc

class ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc

class ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpInstanceVersionAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpv4AddrRpc();
        ~ClearBgpInstanceVersionAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpv4AddrRpc

class ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc

class ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc

class ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc

class ClearBgpInstanceVersionAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiNetworkRpc();
        ~ClearBgpInstanceVersionAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string



}; // ClearBgpInstanceVersionAfiSafiNetworkRpc

class ClearBgpInstanceVersionAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdNetworkRpc();
        ~ClearBgpInstanceVersionAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdNetworkRpc

class ClearBgpInstanceVersionAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfNetworkRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfNetworkRpc

class ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc();
        ~ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rt_constraint_network; //type: string



}; // ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc

class ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc();
        ~ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_tunnel_network; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc

class ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceVersionAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpv6AddrRpc();
        ~ClearBgpInstanceVersionAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpv6AddrRpc

class ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc

class ClearBgpInstanceVersionAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdRpc();
        ~ClearBgpInstanceVersionAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdRpc

class ClearBgpInstanceVersionAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfRpc

class ClearBgpInstanceVersionAfiSafiRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRpc();
        ~ClearBgpInstanceVersionAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum



}; // ClearBgpInstanceVersionAfiSafiRpc

class ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf sr_policy_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc

class ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc

class ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc

class ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf mp2mp; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc

class ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc

class ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc

class ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc

class ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc

class ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc

class ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc

class ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc();
        ~ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc

class ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc

class ClearBgpInstanceVersionVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfIpAddrRpc();
        ~ClearBgpInstanceVersionVrfIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVersionVrfIpAddrRpc

class ClearBgpInstanceVersionVrfIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfIpPrefixRpc();
        ~ClearBgpInstanceVersionVrfIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_prefix; //type: string



}; // ClearBgpInstanceVersionVrfIpPrefixRpc

class ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc

class ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc

class ClearBgpInstanceVersionVrfAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiNetworkRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiNetworkRpc

class ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc

class ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc

class ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc

class ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc

class ClearBgpInstanceVersionVrfAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiRdRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiRdRpc

class ClearBgpInstanceVersionVrfAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiVrfRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string



}; // ClearBgpInstanceVersionVrfAfiSafiVrfRpc

class ClearBgpInstanceVersionVrfAfiSafiRpc : public Entity
{
    public:
        ClearBgpInstanceVersionVrfAfiSafiRpc();
        ~ClearBgpInstanceVersionVrfAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum



}; // ClearBgpInstanceVersionVrfAfiSafiRpc

class ClearBgpInstanceVrfAllGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAllGracefulRpc();
        ~ClearBgpInstanceVrfAllGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration



}; // ClearBgpInstanceVrfAllGracefulRpc

class ClearBgpInstanceVrfAllRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAllRpc();
        ~ClearBgpInstanceVrfAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration



}; // ClearBgpInstanceVrfAllRpc

class ClearBgpInstanceVrfIpAddrGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceVrfIpAddrGracefulRpc();
        ~ClearBgpInstanceVrfIpAddrGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf instance_name; //type: one of string, enumeration
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfIpAddrGracefulRpc


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_1_ */

