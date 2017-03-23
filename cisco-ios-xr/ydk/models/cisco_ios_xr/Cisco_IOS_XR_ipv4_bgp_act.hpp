#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_

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

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_ */
