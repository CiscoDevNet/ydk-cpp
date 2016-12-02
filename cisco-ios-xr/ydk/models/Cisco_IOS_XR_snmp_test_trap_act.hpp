#ifndef _CISCO_IOS_XR_SNMP_TEST_TRAP_ACT_
#define _CISCO_IOS_XR_SNMP_TEST_TRAP_ACT_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_snmp_test_trap_act {

class SnmpColdStartRpc : public Entity
{
    public:
        SnmpColdStartRpc();
        ~SnmpColdStartRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // SnmpColdStartRpc

class SnmpWarmStartRpc : public Entity
{
    public:
        SnmpWarmStartRpc();
        ~SnmpWarmStartRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // SnmpWarmStartRpc

class InterfaceLinkUpRpc : public Entity
{
    public:
        InterfaceLinkUpRpc();
        ~InterfaceLinkUpRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value ifindex; //type: uint32




}; // InterfaceLinkUpRpc

class InterfaceLinkDownRpc : public Entity
{
    public:
        InterfaceLinkDownRpc();
        ~InterfaceLinkDownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value ifindex; //type: uint32




}; // InterfaceLinkDownRpc

class SonetSectionStatusRpc : public Entity
{
    public:
        SonetSectionStatusRpc();
        ~SonetSectionStatusRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value ifindex; //type: uint32




}; // SonetSectionStatusRpc

class SonetLineStatusRpc : public Entity
{
    public:
        SonetLineStatusRpc();
        ~SonetLineStatusRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value ifindex; //type: uint32




}; // SonetLineStatusRpc

class SonetPathStatusRpc : public Entity
{
    public:
        SonetPathStatusRpc();
        ~SonetPathStatusRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value ifindex; //type: uint32




}; // SonetPathStatusRpc

class InfraSyslogMessageGeneratedRpc : public Entity
{
    public:
        InfraSyslogMessageGeneratedRpc();
        ~InfraSyslogMessageGeneratedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraSyslogMessageGeneratedRpc

class InfraFlashDeviceInsertedRpc : public Entity
{
    public:
        InfraFlashDeviceInsertedRpc();
        ~InfraFlashDeviceInsertedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraFlashDeviceInsertedRpc

class InfraFlashDeviceRemovedRpc : public Entity
{
    public:
        InfraFlashDeviceRemovedRpc();
        ~InfraFlashDeviceRemovedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraFlashDeviceRemovedRpc

class InfraRedundancyProgressionRpc : public Entity
{
    public:
        InfraRedundancyProgressionRpc();
        ~InfraRedundancyProgressionRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraRedundancyProgressionRpc

class InfraRedundancySwitchRpc : public Entity
{
    public:
        InfraRedundancySwitchRpc();
        ~InfraRedundancySwitchRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraRedundancySwitchRpc

class InfraBridgeNewRootRpc : public Entity
{
    public:
        InfraBridgeNewRootRpc();
        ~InfraBridgeNewRootRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraBridgeNewRootRpc

class InfraBridgeTopologyChangeRpc : public Entity
{
    public:
        InfraBridgeTopologyChangeRpc();
        ~InfraBridgeTopologyChangeRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraBridgeTopologyChangeRpc

class InfraConfigEventRpc : public Entity
{
    public:
        InfraConfigEventRpc();
        ~InfraConfigEventRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // InfraConfigEventRpc

class EntitySensorThresholdNotificationRpc : public Entity
{
    public:
        EntitySensorThresholdNotificationRpc();
        ~EntitySensorThresholdNotificationRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entindex; //type: uint32




}; // EntitySensorThresholdNotificationRpc

class EntityFruPowerStatusChangeFailedRpc : public Entity
{
    public:
        EntityFruPowerStatusChangeFailedRpc();
        ~EntityFruPowerStatusChangeFailedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entindex; //type: uint32




}; // EntityFruPowerStatusChangeFailedRpc

class EntityFruModuleStatusChangeUpRpc : public Entity
{
    public:
        EntityFruModuleStatusChangeUpRpc();
        ~EntityFruModuleStatusChangeUpRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entindex; //type: uint32




}; // EntityFruModuleStatusChangeUpRpc

class EntityFruModuleStatusChangeDownRpc : public Entity
{
    public:
        EntityFruModuleStatusChangeDownRpc();
        ~EntityFruModuleStatusChangeDownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entindex; //type: uint32




}; // EntityFruModuleStatusChangeDownRpc

class EntityFruFanTrayOperStatusUpRpc : public Entity
{
    public:
        EntityFruFanTrayOperStatusUpRpc();
        ~EntityFruFanTrayOperStatusUpRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entindex; //type: uint32




}; // EntityFruFanTrayOperStatusUpRpc

class EntityFruFanTrayInsertedRpc : public Entity
{
    public:
        EntityFruFanTrayInsertedRpc();
        ~EntityFruFanTrayInsertedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entindex; //type: uint32




}; // EntityFruFanTrayInsertedRpc

class EntityFruFanTrayRemovedRpc : public Entity
{
    public:
        EntityFruFanTrayRemovedRpc();
        ~EntityFruFanTrayRemovedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entindex; //type: uint32




}; // EntityFruFanTrayRemovedRpc

class PlatformHfrBundleDownedLinkRpc : public Entity
{
    public:
        PlatformHfrBundleDownedLinkRpc();
        ~PlatformHfrBundleDownedLinkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value bundle_name; //type: string




}; // PlatformHfrBundleDownedLinkRpc

class PlatformHfrBundleStateRpc : public Entity
{
    public:
        PlatformHfrBundleStateRpc();
        ~PlatformHfrBundleStateRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value bundle_name; //type: string




}; // PlatformHfrBundleStateRpc

class PlatformHfrPlaneStateRpc : public Entity
{
    public:
        PlatformHfrPlaneStateRpc();
        ~PlatformHfrPlaneStateRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value plane_id; //type: uint32




}; // PlatformHfrPlaneStateRpc

class RoutingBgpEstablishedRemotePeerRpc : public Entity
{
    public:
        RoutingBgpEstablishedRemotePeerRpc();
        ~RoutingBgpEstablishedRemotePeerRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value address; //type: string




}; // RoutingBgpEstablishedRemotePeerRpc

class RoutingBgpStateChangeRemotePeerRpc : public Entity
{
    public:
        RoutingBgpStateChangeRemotePeerRpc();
        ~RoutingBgpStateChangeRemotePeerRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value address; //type: string




}; // RoutingBgpStateChangeRemotePeerRpc

class RoutingOspfNeighborStateChangeRpc : public Entity
{
    public:
        RoutingOspfNeighborStateChangeRpc();
        ~RoutingOspfNeighborStateChangeRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value address; //type: string
        Value ifindex; //type: uint32




}; // RoutingOspfNeighborStateChangeRpc

class RoutingMplsLdpSessionDownRpc : public Entity
{
    public:
        RoutingMplsLdpSessionDownRpc();
        ~RoutingMplsLdpSessionDownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value entity_id; //type: string
        Value entity_index; //type: uint32
        Value peer_id; //type: string




}; // RoutingMplsLdpSessionDownRpc

class RoutingMplsTunnelReRoutedRpc : public Entity
{
    public:
        RoutingMplsTunnelReRoutedRpc();
        ~RoutingMplsTunnelReRoutedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value index_; //type: uint32
        Value instance; //type: uint32
        Value source; //type: string
        Value destination; //type: string




}; // RoutingMplsTunnelReRoutedRpc

class RoutingMplsTunnelReOptimizedRpc : public Entity
{
    public:
        RoutingMplsTunnelReOptimizedRpc();
        ~RoutingMplsTunnelReOptimizedRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value index_; //type: uint32
        Value instance; //type: uint32
        Value source; //type: string
        Value destination; //type: string




}; // RoutingMplsTunnelReOptimizedRpc

class RoutingMplsTunnelDownRpc : public Entity
{
    public:
        RoutingMplsTunnelDownRpc();
        ~RoutingMplsTunnelDownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value index_; //type: uint32
        Value instance; //type: uint32
        Value source; //type: string
        Value destination; //type: string




}; // RoutingMplsTunnelDownRpc

class AllRpc : public Entity
{
    public:
        AllRpc();
        ~AllRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // AllRpc



}
}

#endif /* _CISCO_IOS_XR_SNMP_TEST_TRAP_ACT_ */

