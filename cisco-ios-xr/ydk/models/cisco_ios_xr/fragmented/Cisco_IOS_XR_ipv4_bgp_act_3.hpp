#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_3_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpVersionVrfAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiVrfRpc();
        ~ClearBgpVersionVrfAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVersionVrfAfiSafiVrfRpc

class ClearBgpVersionVrfAfiSafiRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiRpc();
        ~ClearBgpVersionVrfAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVersionVrfAfiSafiRpc

class ClearBgpVrfAllGracefulRpc : public Entity
{
    public:
        ClearBgpVrfAllGracefulRpc();
        ~ClearBgpVrfAllGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAllGracefulRpc

class ClearBgpVrfAllRpc : public Entity
{
    public:
        ClearBgpVrfAllRpc();
        ~ClearBgpVrfAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAllRpc

class ClearBgpVrfIpAddrGracefulRpc : public Entity
{
    public:
        ClearBgpVrfIpAddrGracefulRpc();
        ~ClearBgpVrfIpAddrGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfIpAddrGracefulRpc

class ClearBgpVrfIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpVrfIpAddrLongLivedStaleRpc();
        ~ClearBgpVrfIpAddrLongLivedStaleRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfIpAddrLongLivedStaleRpc

class ClearBgpVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfIpAddrRpc();
        ~ClearBgpVrfIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfIpAddrRpc

class ClearBgpVrfAsGracefulRpc : public Entity
{
    public:
        ClearBgpVrfAsGracefulRpc();
        ~ClearBgpVrfAsGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpVrfAsGracefulRpc

class ClearBgpVrfAsRpc : public Entity
{
    public:
        ClearBgpVrfAsRpc();
        ~ClearBgpVrfAsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpVrfAsRpc

class ClearBgpVrfExternalGracefulRpc : public Entity
{
    public:
        ClearBgpVrfExternalGracefulRpc();
        ~ClearBgpVrfExternalGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfExternalGracefulRpc

class ClearBgpVrfExternalRpc : public Entity
{
    public:
        ClearBgpVrfExternalRpc();
        ~ClearBgpVrfExternalRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfExternalRpc

class ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc();
        ~ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc

class ClearBgpVrfAfiSafiAllSoftInRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoftInRpc();
        ~ClearBgpVrfAfiSafiAllSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiAllSoftInRpc

class ClearBgpVrfAfiSafiAllSoftOutRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoftOutRpc();
        ~ClearBgpVrfAfiSafiAllSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiAllSoftOutRpc

class ClearBgpVrfAfiSafiAllSoftRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAllSoftRpc();
        ~ClearBgpVrfAfiSafiAllSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiAllSoftRpc

class ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc();
        ~ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc

class ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc();
        ~ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc

class ClearBgpVrfAfiSafiIpAddrSoftInRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoftInRpc();
        ~ClearBgpVrfAfiSafiIpAddrSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiIpAddrSoftInRpc

class ClearBgpVrfAfiSafiIpAddrSoftOutRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoftOutRpc();
        ~ClearBgpVrfAfiSafiIpAddrSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiIpAddrSoftOutRpc

class ClearBgpVrfAfiSafiIpAddrSoftRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiIpAddrSoftRpc();
        ~ClearBgpVrfAfiSafiIpAddrSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiIpAddrSoftRpc

class ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc();
        ~ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc

class ClearBgpVrfAfiSafiAsSoftInRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoftInRpc();
        ~ClearBgpVrfAfiSafiAsSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpVrfAfiSafiAsSoftInRpc

class ClearBgpVrfAfiSafiAsSoftOutRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoftOutRpc();
        ~ClearBgpVrfAfiSafiAsSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpVrfAfiSafiAsSoftOutRpc

class ClearBgpVrfAfiSafiAsSoftRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiAsSoftRpc();
        ~ClearBgpVrfAfiSafiAsSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpVrfAfiSafiAsSoftRpc

class ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc();
        ~ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc

class ClearBgpVrfAfiSafiDampeningRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiDampeningRpc();
        ~ClearBgpVrfAfiSafiDampeningRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiDampeningRpc

class ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc();
        ~ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc

class ClearBgpVrfAfiSafiExternalSoftInRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoftInRpc();
        ~ClearBgpVrfAfiSafiExternalSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiExternalSoftInRpc

class ClearBgpVrfAfiSafiExternalSoftOutRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoftOutRpc();
        ~ClearBgpVrfAfiSafiExternalSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiExternalSoftOutRpc

class ClearBgpVrfAfiSafiExternalSoftRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiExternalSoftRpc();
        ~ClearBgpVrfAfiSafiExternalSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiExternalSoftRpc

class ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string
        YLeaf ipv4_mask; //type: string



}; // ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc

class ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc

class ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc

class ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc();
        ~ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf regexp_pattern; //type: string



}; // ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc

class ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc();
        ~ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf route_policy_name; //type: string



}; // ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc

class ClearBgpVrfAfiSafiFlapStatisticsRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsRpc();
        ~ClearBgpVrfAfiSafiFlapStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiFlapStatisticsRpc

class ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc();
        ~ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc

class ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc();
        ~ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc

class ClearBgpVrfAfiSafiSelfOriginatedRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiSelfOriginatedRpc();
        ~ClearBgpVrfAfiSafiSelfOriginatedRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiSelfOriginatedRpc

class ClearBgpVrfAfiSafiShutdownRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiShutdownRpc();
        ~ClearBgpVrfAfiSafiShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiShutdownRpc

class ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ip_addr; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc();
        ~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string



}; // ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc

class ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc();
        ~ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc

class ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc();
        ~ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc

class ClearBgpVrfNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpVrfNexthopPerformanceStatisticsRpc();
        ~ClearBgpVrfNexthopPerformanceStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfNexthopPerformanceStatisticsRpc

class ClearBgpVrfNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfNexthopRegistrationIpAddrRpc();
        ~ClearBgpVrfNexthopRegistrationIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfNexthopRegistrationIpAddrRpc

class ClearBgpVrfPeerDropsAllRpc : public Entity
{
    public:
        ClearBgpVrfPeerDropsAllRpc();
        ~ClearBgpVrfPeerDropsAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfPeerDropsAllRpc

class ClearBgpVrfPeerDropsIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfPeerDropsIpAddrRpc();
        ~ClearBgpVrfPeerDropsIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfPeerDropsIpAddrRpc

class ClearBgpVrfPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpVrfPerformanceStatisticsRpc();
        ~ClearBgpVrfPerformanceStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfPerformanceStatisticsRpc

class ClearBgpVrfShutdownRpc : public Entity
{
    public:
        ClearBgpVrfShutdownRpc();
        ~ClearBgpVrfShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfShutdownRpc

class ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpVrfUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqAddressFamilyRpc();
        ~ClearBgpVrfUpdateOutqAddressFamilyRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfUpdateOutqAddressFamilyRpc

class ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpVrfUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpVrfUpdateOutqNeighborIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpVrfUpdateOutqNeighborIpAddrRpc

class ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string



}; // ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpVrfUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpVrfUpdateOutqUpdateGroupRpc();
        ~ClearBgpVrfUpdateOutqUpdateGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string



}; // ClearBgpVrfUpdateOutqUpdateGroupRpc


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_3_ */

