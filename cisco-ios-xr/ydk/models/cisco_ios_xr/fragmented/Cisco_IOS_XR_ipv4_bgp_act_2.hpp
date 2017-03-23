#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_2_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpInstanceVrfIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpInstanceVrfIpAddrLongLivedStaleRpc();
        ~ClearBgpInstanceVrfIpAddrLongLivedStaleRpc();

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



}; // ClearBgpInstanceVrfIpAddrLongLivedStaleRpc

class ClearBgpInstanceVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfIpAddrRpc();
        ~ClearBgpInstanceVrfIpAddrRpc();

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



}; // ClearBgpInstanceVrfIpAddrRpc

class ClearBgpInstanceVrfAsGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAsGracefulRpc();
        ~ClearBgpInstanceVrfAsGracefulRpc();

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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceVrfAsGracefulRpc

class ClearBgpInstanceVrfAsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAsRpc();
        ~ClearBgpInstanceVrfAsRpc();

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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceVrfAsRpc

class ClearBgpInstanceVrfExternalGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceVrfExternalGracefulRpc();
        ~ClearBgpInstanceVrfExternalGracefulRpc();

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



}; // ClearBgpInstanceVrfExternalGracefulRpc

class ClearBgpInstanceVrfExternalRpc : public Entity
{
    public:
        ClearBgpInstanceVrfExternalRpc();
        ~ClearBgpInstanceVrfExternalRpc();

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



}; // ClearBgpInstanceVrfExternalRpc

class ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc();

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



}; // ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc

class ClearBgpInstanceVrfAfiSafiAllSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftInRpc();

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



}; // ClearBgpInstanceVrfAfiSafiAllSoftInRpc

class ClearBgpInstanceVrfAfiSafiAllSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftOutRpc();

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



}; // ClearBgpInstanceVrfAfiSafiAllSoftOutRpc

class ClearBgpInstanceVrfAfiSafiAllSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftRpc();

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



}; // ClearBgpInstanceVrfAfiSafiAllSoftRpc

class ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc

class ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc

class ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc

class ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc

class ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc

class ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc();

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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc

class ClearBgpInstanceVrfAfiSafiAsSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftInRpc();

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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceVrfAfiSafiAsSoftInRpc

class ClearBgpInstanceVrfAfiSafiAsSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftOutRpc();

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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceVrfAfiSafiAsSoftOutRpc

class ClearBgpInstanceVrfAfiSafiAsSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftRpc();

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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceVrfAfiSafiAsSoftRpc

class ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc();

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



}; // ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc

class ClearBgpInstanceVrfAfiSafiDampeningRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiDampeningRpc();
        ~ClearBgpInstanceVrfAfiSafiDampeningRpc();

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



}; // ClearBgpInstanceVrfAfiSafiDampeningRpc

class ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc();

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



}; // ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc

class ClearBgpInstanceVrfAfiSafiExternalSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftInRpc();

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



}; // ClearBgpInstanceVrfAfiSafiExternalSoftInRpc

class ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc();

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



}; // ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc

class ClearBgpInstanceVrfAfiSafiExternalSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftRpc();

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



}; // ClearBgpInstanceVrfAfiSafiExternalSoftRpc

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();

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
        YLeaf ip_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc();

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



}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc

class ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc();

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
        YLeaf regexp_pattern; //type: string



}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc

class ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc();

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
        YLeaf route_policy_name; //type: string



}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc

class ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc();

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



}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc

class ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc();

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



}; // ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc

class ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc

class ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc();
        ~ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc();

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



}; // ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc

class ClearBgpInstanceVrfAfiSafiShutdownRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiShutdownRpc();
        ~ClearBgpInstanceVrfAfiSafiShutdownRpc();

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



}; // ClearBgpInstanceVrfAfiSafiShutdownRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();

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



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc();

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



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc();

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
        YLeaf ip_addr; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc();

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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();

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
        YLeaf update_group; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc();

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
        YLeaf update_group; //type: string



}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc

class ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc();

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



}; // ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc();

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



}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc

class ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc();

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



}; // ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc

class ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc();

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



}; // ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc

class ClearBgpInstanceVrfPeerDropsAllRpc : public Entity
{
    public:
        ClearBgpInstanceVrfPeerDropsAllRpc();
        ~ClearBgpInstanceVrfPeerDropsAllRpc();

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



}; // ClearBgpInstanceVrfPeerDropsAllRpc

class ClearBgpInstanceVrfPeerDropsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfPeerDropsIpAddrRpc();
        ~ClearBgpInstanceVrfPeerDropsIpAddrRpc();

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



}; // ClearBgpInstanceVrfPeerDropsIpAddrRpc

class ClearBgpInstanceVrfPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfPerformanceStatisticsRpc();
        ~ClearBgpInstanceVrfPerformanceStatisticsRpc();

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



}; // ClearBgpInstanceVrfPerformanceStatisticsRpc

class ClearBgpInstanceVrfShutdownRpc : public Entity
{
    public:
        ClearBgpInstanceVrfShutdownRpc();
        ~ClearBgpInstanceVrfShutdownRpc();

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



}; // ClearBgpInstanceVrfShutdownRpc

class ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc();

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



}; // ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc();
        ~ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc();

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



}; // ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

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



}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc();

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



}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc();

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



}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc();

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



}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc();

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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc();

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
        YLeaf update_group; //type: string



}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc();

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
        YLeaf update_group; //type: string



}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc

class ClearBgpAfiSafiDampeningIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningIpv4PrefixRpc();
        ~ClearBgpAfiSafiDampeningIpv4PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpAfiSafiDampeningIpv4PrefixRpc

class ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc

class ClearBgpAfiSafiDampeningIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningIpv6PrefixRpc();
        ~ClearBgpAfiSafiDampeningIpv6PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpAfiSafiDampeningIpv6PrefixRpc

class ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc

class ClearBgpNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpNexthopPerformanceStatisticsRpc();
        ~ClearBgpNexthopPerformanceStatisticsRpc();

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





}; // ClearBgpNexthopPerformanceStatisticsRpc

class ClearBgpNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpNexthopRegistrationIpAddrRpc();
        ~ClearBgpNexthopRegistrationIpAddrRpc();

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


        YLeaf ip_addr; //type: string



}; // ClearBgpNexthopRegistrationIpAddrRpc

class ClearBgpPeerDropsAllRpc : public Entity
{
    public:
        ClearBgpPeerDropsAllRpc();
        ~ClearBgpPeerDropsAllRpc();

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





}; // ClearBgpPeerDropsAllRpc

class ClearBgpPeerDropsIpAddrRpc : public Entity
{
    public:
        ClearBgpPeerDropsIpAddrRpc();
        ~ClearBgpPeerDropsIpAddrRpc();

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


        YLeaf ip_addr; //type: string



}; // ClearBgpPeerDropsIpAddrRpc

class ClearBgpPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpPerformanceStatisticsRpc();
        ~ClearBgpPerformanceStatisticsRpc();

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





}; // ClearBgpPerformanceStatisticsRpc

class ClearBgpRpkiServerAllSerialQueryRpc : public Entity
{
    public:
        ClearBgpRpkiServerAllSerialQueryRpc();
        ~ClearBgpRpkiServerAllSerialQueryRpc();

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





}; // ClearBgpRpkiServerAllSerialQueryRpc

class ClearBgpRpkiServerAllRpc : public Entity
{
    public:
        ClearBgpRpkiServerAllRpc();
        ~ClearBgpRpkiServerAllRpc();

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





}; // ClearBgpRpkiServerAllRpc

class ClearBgpRpkiServerRpkiServerRpc : public Entity
{
    public:
        ClearBgpRpkiServerRpkiServerRpc();
        ~ClearBgpRpkiServerRpkiServerRpc();

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


        YLeaf rpki_server; //type: string



}; // ClearBgpRpkiServerRpkiServerRpc

class ClearBgpRpkiValidationIpv4Rpc : public Entity
{
    public:
        ClearBgpRpkiValidationIpv4Rpc();
        ~ClearBgpRpkiValidationIpv4Rpc();

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





}; // ClearBgpRpkiValidationIpv4Rpc

class ClearBgpRpkiValidationIpv6Rpc : public Entity
{
    public:
        ClearBgpRpkiValidationIpv6Rpc();
        ~ClearBgpRpkiValidationIpv6Rpc();

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





}; // ClearBgpRpkiValidationIpv6Rpc

class ClearBgpRpkiValidationRpc : public Entity
{
    public:
        ClearBgpRpkiValidationRpc();
        ~ClearBgpRpkiValidationRpc();

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





}; // ClearBgpRpkiValidationRpc

class ClearBgpShutdownRpc : public Entity
{
    public:
        ClearBgpShutdownRpc();
        ~ClearBgpShutdownRpc();

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





}; // ClearBgpShutdownRpc

class ClearBgpUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpUpdateOutqAddressFamilyUpdateParentRpc();

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





}; // ClearBgpUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpUpdateOutqAddressFamilyRpc();
        ~ClearBgpUpdateOutqAddressFamilyRpc();

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





}; // ClearBgpUpdateOutqAddressFamilyRpc

class ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

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


        YLeaf ip_addr; //type: string



}; // ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrRefreshRpc();

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


        YLeaf ip_addr; //type: string



}; // ClearBgpUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc();

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


        YLeaf ip_addr; //type: string



}; // ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrRpc();

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


        YLeaf ip_addr; //type: string



}; // ClearBgpUpdateOutqNeighborIpAddrRpc

class ClearBgpUpdateOutqProcessRpc : public Entity
{
    public:
        ClearBgpUpdateOutqProcessRpc();
        ~ClearBgpUpdateOutqProcessRpc();

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





}; // ClearBgpUpdateOutqProcessRpc

class ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

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


        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupRpc();

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


        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

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


        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

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


        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class ClearBgpUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpUpdateOutqUpdateGroupUpdateParentRpc();

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


        YLeaf update_group; //type: string



}; // ClearBgpUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupRpc();
        ~ClearBgpUpdateOutqUpdateGroupRpc();

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


        YLeaf update_group; //type: string



}; // ClearBgpUpdateOutqUpdateGroupRpc

class ClearBgpVersionIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionIpAddrIpNetmaskRpc();
        ~ClearBgpVersionIpAddrIpNetmaskRpc();

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


        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpVersionIpAddrIpNetmaskRpc

class ClearBgpVersionIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionIpAddrRpc();
        ~ClearBgpVersionIpAddrRpc();

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


        YLeaf ip_addr; //type: string



}; // ClearBgpVersionIpAddrRpc

class ClearBgpVersionIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionIpPrefixRpc();
        ~ClearBgpVersionIpPrefixRpc();

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


        YLeaf ip_prefix; //type: string



}; // ClearBgpVersionIpPrefixRpc

class ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc();
        ~ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc

class ClearBgpVersionAfiSafiIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpAddrRpc();
        ~ClearBgpVersionAfiSafiIpAddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string



}; // ClearBgpVersionAfiSafiIpAddrRpc

class ClearBgpVersionAfiSafiIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpPrefixRpc();
        ~ClearBgpVersionAfiSafiIpPrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_prefix; //type: string



}; // ClearBgpVersionAfiSafiIpPrefixRpc

class ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc

class ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string



}; // ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc

class ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_prefix; //type: string



}; // ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc

class ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc();
        ~ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc

class ClearBgpVersionAfiSafiRdIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpAddrRpc();
        ~ClearBgpVersionAfiSafiRdIpAddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string



}; // ClearBgpVersionAfiSafiRdIpAddrRpc

class ClearBgpVersionAfiSafiRdIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpPrefixRpc();
        ~ClearBgpVersionAfiSafiRdIpPrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ip_prefix; //type: string



}; // ClearBgpVersionAfiSafiRdIpPrefixRpc

class ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpVersionAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4AddrRpc();
        ~ClearBgpVersionAfiSafiIpv4AddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string



}; // ClearBgpVersionAfiSafiIpv4AddrRpc

class ClearBgpVersionAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiIpv4PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpVersionAfiSafiIpv4PrefixRpc

class ClearBgpVersionAfiSafiRdIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv4AddrRpc();
        ~ClearBgpVersionAfiSafiRdIpv4AddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string



}; // ClearBgpVersionAfiSafiRdIpv4AddrRpc

class ClearBgpVersionAfiSafiVrfIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv4AddrRpc();
        ~ClearBgpVersionAfiSafiVrfIpv4AddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string



}; // ClearBgpVersionAfiSafiVrfIpv4AddrRpc

class ClearBgpVersionAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiNetworkRpc();
        ~ClearBgpVersionAfiSafiNetworkRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string



}; // ClearBgpVersionAfiSafiNetworkRpc

class ClearBgpVersionAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdNetworkRpc();
        ~ClearBgpVersionAfiSafiRdNetworkRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string



}; // ClearBgpVersionAfiSafiRdNetworkRpc

class ClearBgpVersionAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfNetworkRpc();
        ~ClearBgpVersionAfiSafiVrfNetworkRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string



}; // ClearBgpVersionAfiSafiVrfNetworkRpc

class ClearBgpVersionAfiSafiRtConstraintNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRtConstraintNetworkRpc();
        ~ClearBgpVersionAfiSafiRtConstraintNetworkRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rt_constraint_network; //type: string



}; // ClearBgpVersionAfiSafiRtConstraintNetworkRpc

class ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc();
        ~ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_tunnel_network; //type: string



}; // ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc

class ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpVersionAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv6AddrRpc();
        ~ClearBgpVersionAfiSafiIpv6AddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string



}; // ClearBgpVersionAfiSafiIpv6AddrRpc

class ClearBgpVersionAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv6PrefixRpc();
        ~ClearBgpVersionAfiSafiIpv6PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpVersionAfiSafiIpv6PrefixRpc

class ClearBgpVersionAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdRpc();
        ~ClearBgpVersionAfiSafiRdRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string



}; // ClearBgpVersionAfiSafiRdRpc

class ClearBgpVersionAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfRpc();
        ~ClearBgpVersionAfiSafiVrfRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string



}; // ClearBgpVersionAfiSafiVrfRpc

class ClearBgpVersionAfiSafiRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRpc();
        ~ClearBgpVersionAfiSafiRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum



}; // ClearBgpVersionAfiSafiRpc

class ClearBgpVersionAfiSafiSrPolicyPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiSrPolicyPrefixRpc();
        ~ClearBgpVersionAfiSafiSrPolicyPrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf sr_policy_prefix; //type: string



}; // ClearBgpVersionAfiSafiSrPolicyPrefixRpc

class ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc

class ClearBgpVersionAfiSafiRdIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiRdIpv4PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpVersionAfiSafiRdIpv4PrefixRpc

class ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf mp2mp; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc

class ClearBgpVersionAfiSafiVrfIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiVrfIpv4PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpVersionAfiSafiVrfIpv4PrefixRpc

class ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc

class ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc

class ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc

class ClearBgpVersionAfiSafiRdIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv6AddrRpc();
        ~ClearBgpVersionAfiSafiRdIpv6AddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string



}; // ClearBgpVersionAfiSafiRdIpv6AddrRpc

class ClearBgpVersionAfiSafiRdIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv6PrefixRpc();
        ~ClearBgpVersionAfiSafiRdIpv6PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpVersionAfiSafiRdIpv6PrefixRpc

class ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc

class ClearBgpVersionAfiSafiVrfIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv6AddrRpc();
        ~ClearBgpVersionAfiSafiVrfIpv6AddrRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string



}; // ClearBgpVersionAfiSafiVrfIpv6AddrRpc

class ClearBgpVersionAfiSafiVrfIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv6PrefixRpc();
        ~ClearBgpVersionAfiSafiVrfIpv6PrefixRpc();

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


        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpVersionAfiSafiVrfIpv6PrefixRpc

class ClearBgpVersionVrfIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionVrfIpAddrIpNetmaskRpc();
        ~ClearBgpVersionVrfIpAddrIpNetmaskRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string



}; // ClearBgpVersionVrfIpAddrIpNetmaskRpc

class ClearBgpVersionVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionVrfIpAddrRpc();
        ~ClearBgpVersionVrfIpAddrRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string



}; // ClearBgpVersionVrfIpAddrRpc

class ClearBgpVersionVrfIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionVrfIpPrefixRpc();
        ~ClearBgpVersionVrfIpPrefixRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_prefix; //type: string



}; // ClearBgpVersionVrfIpPrefixRpc

class ClearBgpVersionVrfAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv4PrefixRpc();
        ~ClearBgpVersionVrfAfiSafiIpv4PrefixRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string



}; // ClearBgpVersionVrfAfiSafiIpv4PrefixRpc

class ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpVersionVrfAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv4AddrRpc();
        ~ClearBgpVersionVrfAfiSafiIpv4AddrRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string



}; // ClearBgpVersionVrfAfiSafiIpv4AddrRpc

class ClearBgpVersionVrfAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiNetworkRpc();
        ~ClearBgpVersionVrfAfiSafiNetworkRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string



}; // ClearBgpVersionVrfAfiSafiNetworkRpc

class ClearBgpVersionVrfAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiRdNetworkRpc();
        ~ClearBgpVersionVrfAfiSafiRdNetworkRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string



}; // ClearBgpVersionVrfAfiSafiRdNetworkRpc

class ClearBgpVersionVrfAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiVrfNetworkRpc();
        ~ClearBgpVersionVrfAfiSafiVrfNetworkRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string



}; // ClearBgpVersionVrfAfiSafiVrfNetworkRpc

class ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string



}; // ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpVersionVrfAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv6AddrRpc();
        ~ClearBgpVersionVrfAfiSafiIpv6AddrRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string



}; // ClearBgpVersionVrfAfiSafiIpv6AddrRpc

class ClearBgpVersionVrfAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv6PrefixRpc();
        ~ClearBgpVersionVrfAfiSafiIpv6PrefixRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string



}; // ClearBgpVersionVrfAfiSafiIpv6PrefixRpc

class ClearBgpVersionVrfAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiRdRpc();
        ~ClearBgpVersionVrfAfiSafiRdRpc();

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


        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string



}; // ClearBgpVersionVrfAfiSafiRdRpc


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_2_ */

