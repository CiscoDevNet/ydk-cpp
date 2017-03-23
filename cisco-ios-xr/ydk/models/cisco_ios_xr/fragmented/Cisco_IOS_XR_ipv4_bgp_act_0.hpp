#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_0_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpAllGracefulRpc : public Entity
{
    public:
        ClearBgpAllGracefulRpc();
        ~ClearBgpAllGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;





}; // ClearBgpAllGracefulRpc

class ClearBgpAllRpc : public Entity
{
    public:
        ClearBgpAllRpc();
        ~ClearBgpAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;





}; // ClearBgpAllRpc

class ClearBgpIpAddrGracefulRpc : public Entity
{
    public:
        ClearBgpIpAddrGracefulRpc();
        ~ClearBgpIpAddrGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpIpAddrGracefulRpc

class ClearBgpIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpIpAddrLongLivedStaleRpc();
        ~ClearBgpIpAddrLongLivedStaleRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpIpAddrLongLivedStaleRpc

class ClearBgpIpAddrRpc : public Entity
{
    public:
        ClearBgpIpAddrRpc();
        ~ClearBgpIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpIpAddrRpc

class ClearBgpAfiSafiAllSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiAllSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiAllSoftInPrefixFilterRpc

class ClearBgpAfiSafiAllSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftInRpc();
        ~ClearBgpAfiSafiAllSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiAllSoftInRpc

class ClearBgpAfiSafiAllSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftOutRpc();
        ~ClearBgpAfiSafiAllSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiAllSoftOutRpc

class ClearBgpAfiSafiAllSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftRpc();
        ~ClearBgpAfiSafiAllSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiAllSoftRpc

class ClearBgpAfiSafiIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrLongLivedStaleRpc();
        ~ClearBgpAfiSafiIpAddrLongLivedStaleRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiIpAddrLongLivedStaleRpc

class ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc

class ClearBgpAfiSafiIpAddrSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftInRpc();
        ~ClearBgpAfiSafiIpAddrSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiIpAddrSoftInRpc

class ClearBgpAfiSafiIpAddrSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftOutRpc();
        ~ClearBgpAfiSafiIpAddrSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiIpAddrSoftOutRpc

class ClearBgpAfiSafiIpAddrSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftRpc();
        ~ClearBgpAfiSafiIpAddrSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiIpAddrSoftRpc

class ClearBgpAfiSafiAsSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiAsSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpAfiSafiAsSoftInPrefixFilterRpc

class ClearBgpAfiSafiAsSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftInRpc();
        ~ClearBgpAfiSafiAsSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpAfiSafiAsSoftInRpc

class ClearBgpAfiSafiAsSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftOutRpc();
        ~ClearBgpAfiSafiAsSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpAfiSafiAsSoftOutRpc

class ClearBgpAfiSafiAsSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftRpc();
        ~ClearBgpAfiSafiAsSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpAfiSafiAsSoftRpc

class ClearBgpAfiSafiDampeningIpPrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningIpPrefixRpc();
        ~ClearBgpAfiSafiDampeningIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiDampeningIpPrefixRpc

class ClearBgpAfiSafiDampeningRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningRpc();
        ~ClearBgpAfiSafiDampeningRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiDampeningRpc

class ClearBgpAfiSafiExternalSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiExternalSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiExternalSoftInPrefixFilterRpc

class ClearBgpAfiSafiExternalSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftInRpc();
        ~ClearBgpAfiSafiExternalSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiExternalSoftInRpc

class ClearBgpAfiSafiExternalSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftOutRpc();
        ~ClearBgpAfiSafiExternalSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiExternalSoftOutRpc

class ClearBgpAfiSafiExternalSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftRpc();
        ~ClearBgpAfiSafiExternalSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiExternalSoftRpc

class ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ipv4_mask; //type: string



}; // ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc

class ClearBgpAfiSafiFlapStatisticsIpAddrRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpAddrRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiFlapStatisticsIpAddrRpc

class ClearBgpAfiSafiFlapStatisticsIpPrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpPrefixRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiFlapStatisticsIpPrefixRpc

class ClearBgpAfiSafiFlapStatisticsRegexpRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsRegexpRpc();
        ~ClearBgpAfiSafiFlapStatisticsRegexpRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf regexp_pattern; //type: string



}; // ClearBgpAfiSafiFlapStatisticsRegexpRpc

class ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc();
        ~ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf route_policy_name; //type: string



}; // ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc

class ClearBgpAfiSafiFlapStatisticsRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsRpc();
        ~ClearBgpAfiSafiFlapStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiFlapStatisticsRpc

class ClearBgpAfiSafiNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpAfiSafiNexthopPerformanceStatisticsRpc();
        ~ClearBgpAfiSafiNexthopPerformanceStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiNexthopPerformanceStatisticsRpc

class ClearBgpAfiSafiNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpAfiSafiNexthopRegistrationIpAddrRpc();
        ~ClearBgpAfiSafiNexthopRegistrationIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiNexthopRegistrationIpAddrRpc

class ClearBgpAfiSafiSelfOriginatedRpc : public Entity
{
    public:
        ClearBgpAfiSafiSelfOriginatedRpc();
        ~ClearBgpAfiSafiSelfOriginatedRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiSelfOriginatedRpc

class ClearBgpAfiSafiShutdownRpc : public Entity
{
    public:
        ClearBgpAfiSafiShutdownRpc();
        ~ClearBgpAfiSafiShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiShutdownRpc

class ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpAfiSafiUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqAddressFamilyRpc();
        ~ClearBgpAfiSafiUpdateOutqAddressFamilyRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiUpdateOutqAddressFamilyRpc

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string



}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string



}; // ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc

class ClearBgpAfiSafiUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf update_group; //type: string



}; // ClearBgpAfiSafiUpdateOutqUpdateGroupRpc

class ClearBgpAsGracefulRpc : public Entity
{
    public:
        ClearBgpAsGracefulRpc();
        ~ClearBgpAsGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpAsGracefulRpc

class ClearBgpAsRpc : public Entity
{
    public:
        ClearBgpAsRpc();
        ~ClearBgpAsRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpAsRpc

class ClearBgpBestpathIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathIpAddrIpNetmaskRpc

class ClearBgpBestpathIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathIpAddrRpc();
        ~ClearBgpBestpathIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathIpAddrRpc

class ClearBgpBestpathIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathIpPrefixRpc();
        ~ClearBgpBestpathIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathIpPrefixRpc

class ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc

class ClearBgpBestpathAfiSafiIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpAddrRpc();
        ~ClearBgpBestpathAfiSafiIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpAddrRpc

class ClearBgpBestpathAfiSafiIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpPrefixRpc();
        ~ClearBgpBestpathAfiSafiIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpPrefixRpc

class ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc

class ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc

class ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc

class ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc

class ClearBgpBestpathAfiSafiRdIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpAddrRpc();
        ~ClearBgpBestpathAfiSafiRdIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpAddrRpc

class ClearBgpBestpathAfiSafiRdIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpPrefixRpc();
        ~ClearBgpBestpathAfiSafiRdIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpPrefixRpc

class ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpBestpathAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4AddrRpc();
        ~ClearBgpBestpathAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpv4AddrRpc

class ClearBgpBestpathAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpv4PrefixRpc

class ClearBgpBestpathAfiSafiRdIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4AddrRpc();
        ~ClearBgpBestpathAfiSafiRdIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpv4AddrRpc

class ClearBgpBestpathAfiSafiVrfIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4AddrRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfIpv4AddrRpc

class ClearBgpBestpathAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiNetworkRpc();
        ~ClearBgpBestpathAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiNetworkRpc

class ClearBgpBestpathAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdNetworkRpc();
        ~ClearBgpBestpathAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdNetworkRpc

class ClearBgpBestpathAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfNetworkRpc();
        ~ClearBgpBestpathAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfNetworkRpc

class ClearBgpBestpathAfiSafiRtConstraintNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRtConstraintNetworkRpc();
        ~ClearBgpBestpathAfiSafiRtConstraintNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRtConstraintNetworkRpc

class ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc();
        ~ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc

class ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpBestpathAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv6AddrRpc();
        ~ClearBgpBestpathAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpv6AddrRpc

class ClearBgpBestpathAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv6PrefixRpc();
        ~ClearBgpBestpathAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiIpv6PrefixRpc

class ClearBgpBestpathAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdRpc();
        ~ClearBgpBestpathAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdRpc

class ClearBgpBestpathAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfRpc();
        ~ClearBgpBestpathAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfRpc

class ClearBgpBestpathAfiSafiRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRpc();
        ~ClearBgpBestpathAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRpc

class ClearBgpBestpathAfiSafiSrPolicyPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiSrPolicyPrefixRpc();
        ~ClearBgpBestpathAfiSafiSrPolicyPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiSrPolicyPrefixRpc

class ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc

class ClearBgpBestpathAfiSafiRdIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiRdIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpv4PrefixRpc

class ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc

class ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc

class ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc

class ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc

class ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc

class ClearBgpBestpathAfiSafiRdIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6AddrRpc();
        ~ClearBgpBestpathAfiSafiRdIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpv6AddrRpc

class ClearBgpBestpathAfiSafiRdIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6PrefixRpc();
        ~ClearBgpBestpathAfiSafiRdIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiRdIpv6PrefixRpc

class ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc

class ClearBgpBestpathAfiSafiVrfIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6AddrRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfIpv6AddrRpc

class ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc

class ClearBgpBestpathVrfIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathVrfIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathVrfIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfIpAddrIpNetmaskRpc

class ClearBgpBestpathVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathVrfIpAddrRpc();
        ~ClearBgpBestpathVrfIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfIpAddrRpc

class ClearBgpBestpathVrfIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathVrfIpPrefixRpc();
        ~ClearBgpBestpathVrfIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfIpPrefixRpc

class ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc

class ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc

class ClearBgpBestpathVrfAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4AddrRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiIpv4AddrRpc

class ClearBgpBestpathVrfAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiNetworkRpc();
        ~ClearBgpBestpathVrfAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiNetworkRpc

class ClearBgpBestpathVrfAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRdNetworkRpc();
        ~ClearBgpBestpathVrfAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiRdNetworkRpc

class ClearBgpBestpathVrfAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiVrfNetworkRpc();
        ~ClearBgpBestpathVrfAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiVrfNetworkRpc

class ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc

class ClearBgpBestpathVrfAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6AddrRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiIpv6AddrRpc

class ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc

class ClearBgpBestpathVrfAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRdRpc();
        ~ClearBgpBestpathVrfAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiRdRpc

class ClearBgpBestpathVrfAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiVrfRpc();
        ~ClearBgpBestpathVrfAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiVrfRpc

class ClearBgpBestpathVrfAfiSafiRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRpc();
        ~ClearBgpBestpathVrfAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpBestpathVrfAfiSafiRpc

class ClearBgpExternalGracefulRpc : public Entity
{
    public:
        ClearBgpExternalGracefulRpc();
        ~ClearBgpExternalGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;





}; // ClearBgpExternalGracefulRpc

class ClearBgpExternalRpc : public Entity
{
    public:
        ClearBgpExternalRpc();
        ~ClearBgpExternalRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;





}; // ClearBgpExternalRpc

class ClearBgpInstanceAllGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceAllGracefulRpc();
        ~ClearBgpInstanceAllGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAllGracefulRpc

class ClearBgpInstanceAllRpc : public Entity
{
    public:
        ClearBgpInstanceAllRpc();
        ~ClearBgpInstanceAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAllRpc

class ClearBgpInstanceIpAddrGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceIpAddrGracefulRpc();
        ~ClearBgpInstanceIpAddrGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceIpAddrGracefulRpc

class ClearBgpInstanceIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpInstanceIpAddrLongLivedStaleRpc();
        ~ClearBgpInstanceIpAddrLongLivedStaleRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceIpAddrLongLivedStaleRpc

class ClearBgpInstanceIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceIpAddrRpc();
        ~ClearBgpInstanceIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceIpAddrRpc

class ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc

class ClearBgpInstanceAfiSafiAllSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftInRpc();
        ~ClearBgpInstanceAfiSafiAllSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiAllSoftInRpc

class ClearBgpInstanceAfiSafiAllSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftOutRpc();
        ~ClearBgpInstanceAfiSafiAllSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiAllSoftOutRpc

class ClearBgpInstanceAfiSafiAllSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftRpc();
        ~ClearBgpInstanceAfiSafiAllSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiAllSoftRpc

class ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc();
        ~ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc

class ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc

class ClearBgpInstanceAfiSafiIpAddrSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftInRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiIpAddrSoftInRpc

class ClearBgpInstanceAfiSafiIpAddrSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftOutRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiIpAddrSoftOutRpc

class ClearBgpInstanceAfiSafiIpAddrSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiIpAddrSoftRpc

class ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc

class ClearBgpInstanceAfiSafiAsSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftInRpc();
        ~ClearBgpInstanceAfiSafiAsSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceAfiSafiAsSoftInRpc

class ClearBgpInstanceAfiSafiAsSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftOutRpc();
        ~ClearBgpInstanceAfiSafiAsSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceAfiSafiAsSoftOutRpc

class ClearBgpInstanceAfiSafiAsSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftRpc();
        ~ClearBgpInstanceAfiSafiAsSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf as_number; //type: one of union, uint16



}; // ClearBgpInstanceAfiSafiAsSoftRpc

class ClearBgpInstanceAfiSafiDampeningIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpPrefixRpc();
        ~ClearBgpInstanceAfiSafiDampeningIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiDampeningIpPrefixRpc

class ClearBgpInstanceAfiSafiDampeningRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningRpc();
        ~ClearBgpInstanceAfiSafiDampeningRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiDampeningRpc

class ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc

class ClearBgpInstanceAfiSafiExternalSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftInRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftInRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiExternalSoftInRpc

class ClearBgpInstanceAfiSafiExternalSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftOutRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftOutRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiExternalSoftOutRpc

class ClearBgpInstanceAfiSafiExternalSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiExternalSoftRpc

class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf ipv4_mask; //type: string



}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc

class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc

class ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc

class ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf regexp_pattern; //type: string



}; // ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc

class ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf route_policy_name; //type: string



}; // ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc

class ClearBgpInstanceAfiSafiFlapStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiFlapStatisticsRpc

class ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc

class ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc

class ClearBgpInstanceAfiSafiSelfOriginatedRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiSelfOriginatedRpc();
        ~ClearBgpInstanceAfiSafiSelfOriginatedRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiSelfOriginatedRpc

class ClearBgpInstanceAfiSafiShutdownRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiShutdownRpc();
        ~ClearBgpInstanceAfiSafiShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiShutdownRpc

class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
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



}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf sub_group; //type: string



}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
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
        YLeaf refresh_sub_group; //type: string



}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc

class InstanceNameEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class Vpnv6SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf unicast;

};

class AfiEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf l2vpn;
        static const Enum::YLeaf link_state;
        static const Enum::YLeaf vpnv4;
        static const Enum::YLeaf vpnv6;

};

class VrfNameEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class Ipv4SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf labeled_unicast;
        static const Enum::YLeaf mdt;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf mvpn;
        static const Enum::YLeaf rt_filter;
        static const Enum::YLeaf sr_policy;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf unicast;

};

class AfiSafiTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf all_alll;
        static const Enum::YLeaf all_evpn;
        static const Enum::YLeaf all_flowspec;
        static const Enum::YLeaf all_labeled_unicast;
        static const Enum::YLeaf all_mdt;
        static const Enum::YLeaf all_mspw;
        static const Enum::YLeaf all_multicast;
        static const Enum::YLeaf all_mvpn;
        static const Enum::YLeaf all_rt_filter;
        static const Enum::YLeaf all_sr_policy;
        static const Enum::YLeaf all_tunnel;
        static const Enum::YLeaf all_unicast;
        static const Enum::YLeaf all_vpls;
        static const Enum::YLeaf all_vpws;
        static const Enum::YLeaf ipv4_all;
        static const Enum::YLeaf ipv4_flowspec;
        static const Enum::YLeaf ipv4_labeled_unicast;
        static const Enum::YLeaf ipv4_mdt;
        static const Enum::YLeaf ipv4_multicast;
        static const Enum::YLeaf ipv4_mvpn;
        static const Enum::YLeaf ipv4_rt_filter;
        static const Enum::YLeaf ipv4_sr_policy;
        static const Enum::YLeaf ipv4_tunnel;
        static const Enum::YLeaf ipv4_unicast;
        static const Enum::YLeaf ipv6_all;
        static const Enum::YLeaf ipv6_flowspec;
        static const Enum::YLeaf ipv6_labeled_unicast;
        static const Enum::YLeaf ipv6_multicast;
        static const Enum::YLeaf ipv6_mvpn;
        static const Enum::YLeaf ipv6_sr_policy;
        static const Enum::YLeaf ipv6_unicast;
        static const Enum::YLeaf l2vpn_evpn;
        static const Enum::YLeaf l2vpn_mspw;
        static const Enum::YLeaf l2vpn_vpls;
        static const Enum::YLeaf l2vpn_vpws;
        static const Enum::YLeaf link_state;
        static const Enum::YLeaf vpnv4_flowspec;
        static const Enum::YLeaf vpnv4_multicast;
        static const Enum::YLeaf vpnv4_unicast;
        static const Enum::YLeaf vpnv6_flowspec;
        static const Enum::YLeaf vpnv6_multicast;
        static const Enum::YLeaf vpnv6_unicast;

};

class Vpnv4SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf unicast;

};

class Ipv6SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf labeled_unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf mvpn;
        static const Enum::YLeaf sr_policy;
        static const Enum::YLeaf unicast;

};

class L2VpnSafiEnum : public Enum
{
    public:
        static const Enum::YLeaf evpn;
        static const Enum::YLeaf mspw;
        static const Enum::YLeaf vpls;
        static const Enum::YLeaf vpws;

};

class LinkStateSafiEnum : public Enum
{
    public:
        static const Enum::YLeaf link_state;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_0_ */

