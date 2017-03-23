#ifndef _CISCO_IOS_XR_MPLS_TE_OPER_27_
#define _CISCO_IOS_XR_MPLS_TE_OPER_27_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_te_oper_26.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {


class MplsLcacStandby::PreemptionEvents : public Entity
{
    public:
        PreemptionEvents();
        ~PreemptionEvents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PreemptionEvent; //type: MplsLcacStandby::PreemptionEvents::PreemptionEvent

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::PreemptionEvents::PreemptionEvent> > preemption_event;


}; // MplsLcacStandby::PreemptionEvents


class MplsLcacStandby::PreemptionEvents::PreemptionEvent : public Entity
{
    public:
        PreemptionEvent();
        ~PreemptionEvent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_index; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf requested_bandwidth; //type: uint64
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf bandwidth_type; //type: uint8
        YLeaf old_bandwidth_bc0; //type: uint64
        YLeaf old_bandwidth_bc1; //type: uint64
        YLeaf new_bandwidth_bc0; //type: uint64
        YLeaf new_bandwidth_bc1; //type: uint64
        YLeaf bandwidth_overshoot0; //type: uint64
        YLeaf bandwidth_overshoot1; //type: uint64
        YLeaf interface_name; //type: string
        YLeaf event_time; //type: uint32
        YLeaf ls_ps; //type: uint16
        YLeaf soft_preempted_ls_ps; //type: uint16
        YLeaf soft_preempted_ls_ps_fr_rrewrite; //type: uint16
        YLeaf hard_preempted_ls_ps; //type: uint16
        YLeaf total_preempted_bandwidth_bc0; //type: uint64
        YLeaf total_preempted_bandwidth_bc1; //type: uint64
        YLeaf softly_preempted_bandwidth_bc0; //type: uint64
        YLeaf softly_preempted_bandwidth_bc1; //type: uint64
        YLeaf soft_preempted_fr_rrewrite_bandwidth_bc0; //type: uint64
        YLeaf soft_preempted_fr_rrewrite_bandwidth_bc1; //type: uint64
        YLeaf hard_preempted_bandwidth_bc0; //type: uint64
        YLeaf hard_preempted_bandwidth_bc1; //type: uint64
        YLeaf tunnels; //type: uint16
        YLeaf soft_preempted_tunnels; //type: uint16
        YLeaf soft_preempted_tunnels_fr_rrewrite; //type: uint16
        YLeaf hard_preempted_tunnels; //type: uint16

        class Lsp; //type: MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp> > lsp;


}; // MplsLcacStandby::PreemptionEvents::PreemptionEvent


class MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf requested_bandwidth; //type: uint64
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf bandwidth_type; //type: uint8
        YLeaf soft_preempted; //type: boolean
        YLeaf soft_preemption_timeout; //type: uint16
        YLeaf bandwidth_preempted; //type: boolean
        YLeaf soft_preempted_fr_rrewrite; //type: boolean



}; // MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp


class MplsLcacStandby::Advertisements : public Entity
{
    public:
        Advertisements();
        ~Advertisements();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flooding_status_message; //type: string
        YLeaf last_flooding_time; //type: uint32
        YLeaf last_flooding_trigger; //type: FloodingTriggerEnum
        YLeaf next_flooding_time; //type: uint32
        YLeaf ds_te_mode; //type: RrrDsteMigrationModeEnum

        class AdvertizedAreas; //type: MplsLcacStandby::Advertisements::AdvertizedAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas> > advertized_areas;


}; // MplsLcacStandby::Advertisements


class MplsLcacStandby::Advertisements::AdvertizedAreas : public Entity
{
    public:
        AdvertizedAreas();
        ~AdvertizedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_area_id; //type: string
        YLeaf protocol; //type: IgpProtocolEnum
        YLeaf system_id; //type: string
        YLeaf router_id; //type: string

        class FloodedLink; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink> > flooded_link;


}; // MplsLcacStandby::Advertisements::AdvertizedAreas


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink : public Entity
{
    public:
        FloodedLink();
        ~FloodedLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_id; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf link_address; //type: string
        YLeaf subnet_type; //type: IgpSubnetEnum
        YLeaf outgoing_interface_id; //type: uint32
        YLeaf is_designated_router; //type: boolean
        YLeaf designated_router_igp_id; //type: string
        YLeaf neighbor_igp_id; //type: string
        YLeaf igp_neighbor_address; //type: string
        YLeaf incoming_interface_id; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf igp_metric; //type: uint32
        YLeaf uni_link_delay; //type: uint32
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum
        YLeaf physical_bandwidth; //type: uint32
        YLeaf bcm_id; //type: uint16
        YLeaf link_maximum_reservable_bandwidth; //type: uint32
        YLeaf reservable_pool0_bandwidth; //type: uint32
        YLeaf reservable_pool1_bandwidth; //type: uint32
        YLeaf is_receiving_reservable_bandwidth_enabled; //type: boolean
        YLeaf receiving_direction; //type: LinkDirectionEnumEnum
        YLeaf is_transmitting_reservable_bandwidth_enabled; //type: boolean
        YLeaf transmitting_direction; //type: LinkDirectionEnumEnum
        YLeaf affinity_attribute_flags; //type: uint32
        YLeafList extended_affinity_attribute_flag; //type: list of  uint32

        class OduLinkCapabilities; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities
        class SharedRiskLinkGroup; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup
        class ReceivingReservableBandwidth; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth
        class TransmittingReservableBandwidth; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth> > receiving_reservable_bandwidth;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth> > transmitting_reservable_bandwidth;


}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities : public Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList max_lsp_bandwidth; //type: list of  uint32

        class OduCapability; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability> > odu_capability;


}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability : public Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_type; //type: TeOduLevelEnum
        YLeaf stage1; //type: TeOduLevelEnum
        YLeaf stage2; //type: TeOduLevelEnum
        YLeaf stage3; //type: TeOduLevelEnum
        YLeaf stage4; //type: TeOduLevelEnum
        YLeaf terminable; //type: boolean
        YLeaf switchable; //type: boolean
        YLeaf tsg1p25; //type: boolean
        YLeaf tsg2p5; //type: boolean
        YLeaf vcat_capable; //type: boolean
        YLeaf lcas_capable; //type: boolean

        class BandwidthInfo; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;


}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeOduCapabilityEnum

        class Fixed; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;


}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_od_us; //type: uint8
        YLeaf unreserved_od_us; //type: uint8



}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_bandwidth; //type: uint32
        YLeaf unreserved_bandwidth; //type: uint32
        YLeaf max_lsp_bandwidth; //type: uint32



}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth : public Entity
{
    public:
        ReceivingReservableBandwidth();
        ~ReceivingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: uint8
        YLeaf pool0_bandwidth; //type: uint32
        YLeaf pool1_bandwidth; //type: uint32



}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth


class MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth : public Entity
{
    public:
        TransmittingReservableBandwidth();
        ~TransmittingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: uint8
        YLeaf pool0_bandwidth; //type: uint32
        YLeaf pool1_bandwidth; //type: uint32



}; // MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth


class MplsLcacStandby::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: MplsLcacStandby::Statistics::Summary
        class StatsticsLinks; //type: MplsLcacStandby::Statistics::StatsticsLinks

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks> statstics_links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary> summary;


}; // MplsLcacStandby::Statistics


class MplsLcacStandby::Statistics::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean

        class PathStatistics; //type: MplsLcacStandby::Statistics::Summary::PathStatistics
        class ReservationStatistics; //type: MplsLcacStandby::Statistics::Summary::ReservationStatistics
        class PathStatistics32Bit; //type: MplsLcacStandby::Statistics::Summary::PathStatistics32Bit
        class ReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::PathStatistics> path_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::PathStatistics32Bit> path_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::ReservationStatistics> reservation_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit> reservation_statistics32_bit;


}; // MplsLcacStandby::Statistics::Summary


class MplsLcacStandby::Statistics::Summary::PathStatistics : public Entity
{
    public:
        PathStatistics();
        ~PathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcacStandby::Statistics::Summary::PathStatistics


class MplsLcacStandby::Statistics::Summary::ReservationStatistics : public Entity
{
    public:
        ReservationStatistics();
        ~ReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcacStandby::Statistics::Summary::ReservationStatistics


class MplsLcacStandby::Statistics::Summary::PathStatistics32Bit : public Entity
{
    public:
        PathStatistics32Bit();
        ~PathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcacStandby::Statistics::Summary::PathStatistics32Bit


class MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit : public Entity
{
    public:
        ReservationStatistics32Bit();
        ~ReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks : public Entity
{
    public:
        StatsticsLinks();
        ~StatsticsLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatsticsLink; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink> > statstics_link;


}; // MplsLcacStandby::Statistics::StatsticsLinks


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink : public Entity
{
    public:
        StatsticsLink();
        ~StatsticsLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf link_address; //type: string

        class IncomingPathStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics
        class IncomingReservationStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics
        class OutgoingPathStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics
        class OutgoingReservationStatistics; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics
        class IncomingPathStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit
        class IncomingReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit
        class OutgoingPathStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit
        class OutgoingReservationStatistics32Bit; //type: MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics> incoming_path_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit> incoming_path_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics> incoming_reservation_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit> incoming_reservation_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics> outgoing_path_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit> outgoing_path_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics> outgoing_reservation_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit> outgoing_reservation_statistics32_bit;


}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics : public Entity
{
    public:
        IncomingPathStatistics();
        ~IncomingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics : public Entity
{
    public:
        IncomingReservationStatistics();
        ~IncomingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics : public Entity
{
    public:
        OutgoingPathStatistics();
        ~OutgoingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics : public Entity
{
    public:
        OutgoingReservationStatistics();
        ~OutgoingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit : public Entity
{
    public:
        IncomingPathStatistics32Bit();
        ~IncomingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit : public Entity
{
    public:
        IncomingReservationStatistics32Bit();
        ~IncomingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit : public Entity
{
    public:
        OutgoingPathStatistics32Bit();
        ~OutgoingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit


class MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit : public Entity
{
    public:
        OutgoingReservationStatistics32Bit();
        ~OutgoingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit


class MplsLcacStandby::BandwidthAllocation : public Entity
{
    public:
        BandwidthAllocation();
        ~BandwidthAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsLcacStandby::BandwidthAllocation::Global
        class BandwidthAllocationLinks; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks> bandwidth_allocation_links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::Global> global;


}; // MplsLcacStandby::BandwidthAllocation


class MplsLcacStandby::BandwidthAllocation::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf links; //type: uint16
        YLeaf bandwidth_hold_time; //type: uint16



}; // MplsLcacStandby::BandwidthAllocation::Global


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks : public Entity
{
    public:
        BandwidthAllocationLinks();
        ~BandwidthAllocationLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAllocationLink; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink> > bandwidth_allocation_link;


}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink : public Entity
{
    public:
        BandwidthAllocationLink();
        ~BandwidthAllocationLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf total_bandwidth_descriptors; //type: uint16
        YLeaf bandwidth_descriptors; //type: uint16
        YLeaf bandwidth_pool; //type: BandwidthTypeEnumEnum
        YLeaf flooding_up_thresholds_are_default; //type: boolean
        YLeaf flooding_down_thresholds_are_default; //type: boolean
        YLeaf flooding_up_thresholds_are_global; //type: boolean
        YLeaf flooding_down_thresholds_are_global; //type: boolean
        YLeafList flooding_up_threshold; //type: list of  uint8
        YLeafList flooding_down_threshold; //type: list of  uint8

        class LinkCommon; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon
        class UpstreamBandwidth; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth
        class DownstreamBandwidth; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth> downstream_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon> link_common;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth> upstream_bandwidth;


}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon : public Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_id; //type: string
        YLeaf link_address; //type: string
        YLeaf is_unnumbered; //type: boolean
        YLeaf has_protection; //type: boolean
        YLeaf capability; //type: uint32
        YLeaf working_priority; //type: uint32
        YLeaf resource_provider; //type: ResourceProviderEnum
        YLeaf is_resource_provider_installed; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum
        YLeaf physical_bandwidth; //type: uint64
        YLeaf bcm_id; //type: uint16
        YLeaf maximum_reservable_bandwidth; //type: uint64
        YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf inbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf outbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf igp_neighbors; //type: uint16

        class LinkFlags; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;


}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags : public Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_te_on; //type: boolean
        YLeaf signaling_agent; //type: SignalingAgentEnumEnum
        YLeaf is_admin_up; //type: boolean



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint8
        YLeaf switching_capability; //type: uint8
        YLeaf encoding; //type: uint8



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas : public Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flooded_area; //type: string



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth : public Entity
{
    public:
        UpstreamBandwidth();
        ~UpstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_direction; //type: LinkDirectionEnumEnum
        YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum

        class BandwidthPool0; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1> > bandwidth_pool1;


}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0 : public Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1 : public Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth : public Entity
{
    public:
        DownstreamBandwidth();
        ~DownstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_direction; //type: LinkDirectionEnumEnum
        YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum

        class BandwidthPool0; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1> > bandwidth_pool1;


}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0 : public Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0


class MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1 : public Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1


class MplsLcacStandby::Gmpls : public Entity
{
    public:
        Gmpls();
        ~Gmpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nni; //type: MplsLcacStandby::Gmpls::Nni
        class Uni; //type: MplsLcacStandby::Gmpls::Uni

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls::Nni> nni;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::Gmpls::Uni> uni;


}; // MplsLcacStandby::Gmpls


class MplsLcacStandby::Gmpls::Nni : public Entity
{
    public:
        Nni();
        ~Nni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsLcacStandby::Gmpls::Nni


class MplsLcacStandby::Gmpls::Uni : public Entity
{
    public:
        Uni();
        ~Uni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsLcacStandby::Gmpls::Uni


class MplsLcacStandby::BfdNeighbors : public Entity
{
    public:
        BfdNeighbors();
        ~BfdNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BfdNeighbor; //type: MplsLcacStandby::BfdNeighbors::BfdNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors::BfdNeighbor> > bfd_neighbor;


}; // MplsLcacStandby::BfdNeighbors


class MplsLcacStandby::BfdNeighbors::BfdNeighbor : public Entity
{
    public:
        BfdNeighbor();
        ~BfdNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Neighbor; //type: MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor> > neighbor;


}; // MplsLcacStandby::BfdNeighbors::BfdNeighbor


class MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf is_bfd_up; //type: boolean



}; // MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor


class MplsLcacStandby::BandwidthAccount : public Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAccountLinks; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks> bandwidth_account_links;


}; // MplsLcacStandby::BandwidthAccount


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks : public Entity
{
    public:
        BandwidthAccountLinks();
        ~BandwidthAccountLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAccountLink; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink> > bandwidth_account_link;


}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink : public Entity
{
    public:
        BandwidthAccountLink();
        ~BandwidthAccountLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf link_id; //type: string

        class CommonInfo; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo
        class SampleHistory; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo> common_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory> sample_history;


}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo : public Entity
{
    public:
        CommonInfo();
        ~CommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf application_enabled; //type: boolean
        YLeaf collection_type; //type: BandwidthAccountingCollectionEnum
        YLeaf sample_time_remaining_timestamp_nano_sec; //type: uint64
        YLeaf last_sample_collection_timestamp_nano_sec; //type: uint64
        YLeaf next_sample_collection_nano_sec; //type: uint64
        YLeaf application_time_remaining_nano_sec; //type: uint64
        YLeaf last_application_timestamp_nano_sec; //type: uint64
        YLeaf next_application_timestamp_nano_sec; //type: uint64
        YLeaf effective_maximum_reservable_bandwidth; //type: uint64

        class BandwidthUtilization; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization> bandwidth_utilization;


}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization : public Entity
{
    public:
        BandwidthUtilization();
        ~BandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_link_bandwidth_utilization; //type: uint64
        YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf applied_non_rsvp_te_bandwidth_utilization; //type: uint64



}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory : public Entity
{
    public:
        SampleHistory();
        ~SampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_samples; //type: uint32
        YLeaf total_applications; //type: uint32

        class ActiveIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample
        class PreviousIntervalSample; //type: MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample> > active_interval_sample;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample> > previous_interval_sample;


}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample : public Entity
{
    public:
        ActiveIntervalSample();
        ~ActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp_nano_sec; //type: uint64
        YLeaf total_rate; //type: uint64
        YLeaf total_packet_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf rsvp_te_packet_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_packet_rate; //type: uint64



}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample


class MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample : public Entity
{
    public:
        PreviousIntervalSample();
        ~PreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp_nano_sec; //type: uint64
        YLeaf total_rate; //type: uint64
        YLeaf total_packet_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf rsvp_te_packet_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_packet_rate; //type: uint64



}; // MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample


class MplsLcacStandby::LinkSummary : public Entity
{
    public:
        LinkSummary();
        ~LinkSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf links; //type: uint16
        YLeaf maximum_links; //type: uint16
        YLeaf is_flooding_enabled; //type: boolean

        class BandwidthAccountSummary; //type: MplsLcacStandby::LinkSummary::BandwidthAccountSummary
        class AreasSummary; //type: MplsLcacStandby::LinkSummary::AreasSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary::AreasSummary> > areas_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkSummary::BandwidthAccountSummary> bandwidth_account_summary;


}; // MplsLcacStandby::LinkSummary


class MplsLcacStandby::LinkSummary::BandwidthAccountSummary : public Entity
{
    public:
        BandwidthAccountSummary();
        ~BandwidthAccountSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_bandwidth_account_enabled; //type: boolean
        YLeaf sample_interval; //type: uint32
        YLeaf sample_time_remaining; //type: uint32
        YLeaf application_interval; //type: uint32
        YLeaf application_time_remaining; //type: uint32



}; // MplsLcacStandby::LinkSummary::BandwidthAccountSummary


class MplsLcacStandby::LinkSummary::AreasSummary : public Entity
{
    public:
        AreasSummary();
        ~AreasSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: string
        YLeaf protocol; //type: IgpProtocolEnum
        YLeaf is_flooded; //type: boolean
        YLeaf is_periodic_flooding_on; //type: boolean
        YLeaf periodic_flooding_interval; //type: uint16
        YLeaf links_flooded; //type: uint16
        YLeaf system_id; //type: string
        YLeaf local_node_router_id; //type: string
        YLeaf igp_neighbors; //type: uint16



}; // MplsLcacStandby::LinkSummary::AreasSummary


class MplsLcacStandby::LinkInformation : public Entity
{
    public:
        LinkInformation();
        ~LinkInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsLcacStandby::LinkInformation::Global
        class Links; //type: MplsLcacStandby::LinkInformation::Links

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links> links;


}; // MplsLcacStandby::LinkInformation


class MplsLcacStandby::LinkInformation::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf links; //type: uint16
        YLeaf maximum_links; //type: uint16



}; // MplsLcacStandby::LinkInformation::Global


class MplsLcacStandby::LinkInformation::Links : public Entity
{
    public:
        Links();
        ~Links();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Link; //type: MplsLcacStandby::LinkInformation::Links::Link

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link> > link;


}; // MplsLcacStandby::LinkInformation::Links


class MplsLcacStandby::LinkInformation::Links::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf reason_not_flooded; //type: string
        YLeaf maximum_reservation_bandwidth_rdm; //type: uint64
        YLeaf reservable_pool0_bandwidth_rdm; //type: uint64
        YLeaf reservable_pool1_bandwidth_rdm; //type: uint64
        YLeaf maximum_reservation_bandwidth_mam; //type: uint64
        YLeaf reservable_pool0_bandwidth_mam; //type: uint64
        YLeaf reservable_pool1_bandwidth_mam; //type: uint64
        YLeaf link_attributes; //type: uint32
        YLeaf is_attribute_incomplete; //type: boolean
        YLeaf is_name_based_attribute; //type: boolean
        YLeaf te_metric; //type: uint32
        YLeaf is_te_metric_valid; //type: boolean
        YLeafList link_extended_attribute; //type: list of  uint32
        YLeafList link_forwad_ref_value; //type: list of  uint32

        class LinkCommon; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon
        class BandwidthAccount; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount
        class HwOor; //type: MplsLcacStandby::LinkInformation::Links::Link::HwOor
        class AffinityMap; //type: MplsLcacStandby::LinkInformation::Links::Link::AffinityMap
        class Areas; //type: MplsLcacStandby::LinkInformation::Links::Link::Areas
        class Lockout; //type: MplsLcacStandby::LinkInformation::Links::Link::Lockout

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::AffinityMap> > affinity_map;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::Areas> > areas;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount> bandwidth_account;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::HwOor> hw_oor;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon> link_common;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::Lockout> > lockout;


}; // MplsLcacStandby::LinkInformation::Links::Link


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon : public Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_id; //type: string
        YLeaf link_address; //type: string
        YLeaf is_unnumbered; //type: boolean
        YLeaf has_protection; //type: boolean
        YLeaf capability; //type: uint32
        YLeaf working_priority; //type: uint32
        YLeaf resource_provider; //type: ResourceProviderEnum
        YLeaf is_resource_provider_installed; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum
        YLeaf physical_bandwidth; //type: uint64
        YLeaf bcm_id; //type: uint16
        YLeaf maximum_reservable_bandwidth; //type: uint64
        YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf inbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf outbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf igp_neighbors; //type: uint16

        class LinkFlags; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;


}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags : public Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_te_on; //type: boolean
        YLeaf signaling_agent; //type: SignalingAgentEnumEnum
        YLeaf is_admin_up; //type: boolean



}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint8
        YLeaf switching_capability; //type: uint8
        YLeaf encoding; //type: uint8



}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas : public Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flooded_area; //type: string



}; // MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount : public Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAccountCommonInfo; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo
        class BandwidthSampleHistory; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo> bandwidth_account_common_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory> bandwidth_sample_history;


}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo : public Entity
{
    public:
        BandwidthAccountCommonInfo();
        ~BandwidthAccountCommonInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_bandwidth_account_enabled; //type: boolean
        YLeaf application_enabled; //type: boolean
        YLeaf collection_type; //type: BandwidthAccountingCollectionEnum
        YLeaf sample_interval; //type: uint32
        YLeaf sample_time_remaining; //type: uint32
        YLeaf last_sample_collection_timestamp; //type: uint32
        YLeaf next_sample_collection; //type: uint32
        YLeaf application_interval; //type: uint32
        YLeaf application_time_remaining; //type: uint32
        YLeaf last_application_timestamp; //type: uint32
        YLeaf next_application; //type: uint32
        YLeaf adjustment_factor; //type: uint32
        YLeaf max_reservable_bandwidth_threshold_are_default; //type: boolean
        YLeaf up_threshold_max_reservable_bandwidth; //type: uint8
        YLeaf down_threshold_max_reservable_bandwidth; //type: uint8

        class BandwidthUtilization; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization> bandwidth_utilization;


}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization : public Entity
{
    public:
        BandwidthUtilization();
        ~BandwidthUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_link_bandwidth_utilization; //type: uint64
        YLeaf rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf non_rsvp_te_bandwidth_utilization; //type: uint64
        YLeaf applied_non_rsvp_te_bandwidth_utilization; //type: uint64



}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory : public Entity
{
    public:
        BandwidthSampleHistory();
        ~BandwidthSampleHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_samples; //type: uint32
        YLeaf total_applications; //type: uint32

        class ActiveIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample
        class PreviousIntervalSample; //type: MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample> > active_interval_sample;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample> > previous_interval_sample;


}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample : public Entity
{
    public:
        ActiveIntervalSample();
        ~ActiveIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf total_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64



}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample : public Entity
{
    public:
        PreviousIntervalSample();
        ~PreviousIntervalSample();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timestamp; //type: uint32
        YLeaf total_rate; //type: uint64
        YLeaf rsvp_te_rate; //type: uint64
        YLeaf non_rsvp_te_rate; //type: uint64



}; // MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample


class MplsLcacStandby::LinkInformation::Links::Link::HwOor : public Entity
{
    public:
        HwOor();
        ~HwOor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hw_oor_state; //type: HwOorStateEnum
        YLeaf hw_oor_timestamp; //type: uint32
        YLeaf hw_o_or_green_recovery_time; //type: uint32

        class HwOOrLinkStatistic; //type: MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic> > hw_o_or_link_statistic;


}; // MplsLcacStandby::LinkInformation::Links::Link::HwOor


class MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic : public Entity
{
    public:
        HwOOrLinkStatistic();
        ~HwOOrLinkStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hw_oor_state; //type: HwOorStateEnum
        YLeaf transitions; //type: uint32
        YLeaf node_protection_disable_number; //type: uint32
        YLeaf rejected_ls_ps_number; //type: uint32
        YLeaf accepted_ls_ps_number; //type: uint32
        YLeaf accepted_reopt_ls_ps_number; //type: uint32
        YLeaf rejected_reopt_ls_ps_number; //type: uint32



}; // MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic


class MplsLcacStandby::LinkInformation::Links::Link::AffinityMap : public Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf affinity_name; //type: string
        YLeaf affinity_value; //type: uint32
        YLeaf affinity_bit_position; //type: uint8
        YLeaf affinity_table_id; //type: TeAffinityTableEnum
        YLeafList affinity_extended_value; //type: list of  uint32



}; // MplsLcacStandby::LinkInformation::Links::Link::AffinityMap


class MplsLcacStandby::LinkInformation::Links::Link::Areas : public Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf area_id; //type: string
        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf is_neighbor_up; //type: boolean
        YLeaf igp_metric; //type: uint32



}; // MplsLcacStandby::LinkInformation::Links::Link::Areas


class MplsLcacStandby::LinkInformation::Links::Link::Lockout : public Entity
{
    public:
        Lockout();
        ~Lockout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_lockout; //type: boolean
        YLeaf lockout_on_timestamp; //type: uint32
        YLeaf lockout_off_timestamp; //type: uint32



}; // MplsLcacStandby::LinkInformation::Links::Link::Lockout


class MplsLcacStandby::AdmissionControl : public Entity
{
    public:
        AdmissionControl();
        ~AdmissionControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsLcacStandby::AdmissionControl::Global
        class AdmittedTunnels; //type: MplsLcacStandby::AdmissionControl::AdmittedTunnels
        class LinkInterfaces; //type: MplsLcacStandby::AdmissionControl::LinkInterfaces

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::AdmittedTunnels> admitted_tunnels;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::LinkInterfaces> link_interfaces;


}; // MplsLcacStandby::AdmissionControl


class MplsLcacStandby::AdmissionControl::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf total_tunnels; //type: uint32
        YLeaf total_p2mp_tunnels; //type: uint32
        YLeaf selected_tunnels; //type: uint32
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum



}; // MplsLcacStandby::AdmissionControl::Global


class MplsLcacStandby::AdmissionControl::AdmittedTunnels : public Entity
{
    public:
        AdmittedTunnels();
        ~AdmittedTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdmittedTunnel; //type: MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel> > admitted_tunnel;


}; // MplsLcacStandby::AdmissionControl::AdmittedTunnels


class MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel : public Entity
{
    public:
        AdmittedTunnel();
        ~AdmittedTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf source_port; //type: int32
        YLeaf destination_address; //type: string
        YLeaf extended_tunnel_id; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf ctype; //type: CtypeEnum
        YLeaf p2mp_id; //type: int32
        YLeaf tunnel_name; //type: string
        YLeaf bandwidth_state; //type: BandwidthStateEnumEnum
        YLeaf bandwidth_pool; //type: BandwidthTypeEnumEnum
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf up_link_name; //type: string
        YLeaf down_link_name; //type: string
        YLeaf tunnel_state; //type: TunnelStateEnumEnum
        YLeaf bandwidth; //type: uint64
        YLeaf local_label; //type: uint32
        YLeaf outgoing_label; //type: uint32
        YLeaf backup_interface; //type: string
        YLeaf is_rerouted; //type: boolean



}; // MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel


class MplsLcacStandby::AdmissionControl::LinkInterfaces : public Entity
{
    public:
        LinkInterfaces();
        ~LinkInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkInterface; //type: MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface> > link_interface;


}; // MplsLcacStandby::AdmissionControl::LinkInterfaces


class MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface : public Entity
{
    public:
        LinkInterface();
        ~LinkInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf is_role_standby; //type: boolean
        YLeaf total_tunnels; //type: uint32
        YLeaf total_p2mp_tunnels; //type: uint32
        YLeaf selected_tunnels; //type: uint32
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum



}; // MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface


class MplsLcacStandby::SoftPreemptionGlobalInfo : public Entity
{
    public:
        SoftPreemptionGlobalInfo();
        ~SoftPreemptionGlobalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_configured; //type: boolean
        YLeaf is_timeout_interval_configured; //type: boolean
        YLeaf timeout_interval; //type: uint32



}; // MplsLcacStandby::SoftPreemptionGlobalInfo


class MplsLcacStandby::SoftPreemptions : public Entity
{
    public:
        SoftPreemptions();
        ~SoftPreemptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SoftPreemption; //type: MplsLcacStandby::SoftPreemptions::SoftPreemption

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions::SoftPreemption> > soft_preemption;


}; // MplsLcacStandby::SoftPreemptions


class MplsLcacStandby::SoftPreemptions::SoftPreemption : public Entity
{
    public:
        SoftPreemption();
        ~SoftPreemption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf link_address; //type: string
        YLeaf total_soft_preempted_bandwidth_bc0; //type: uint64
        YLeaf total_soft_preempted_bandwidth_bc1; //type: uint64
        YLeaf current_soft_preempted_bandwidth_bc0; //type: uint64
        YLeaf current_soft_preempted_bandwidth_bc1; //type: uint64
        YLeaf release_soft_preempted_bandwidth_bc0; //type: uint64
        YLeaf release_soft_preempted_bandwidth_bc1; //type: uint64
        YLeaf current_over_subscribed_bandwidth_bc0; //type: uint64
        YLeaf current_over_subscribed_bandwidth_bc1; //type: uint64

        class CurrentSoftPreemptionLsp; //type: MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp> > current_soft_preemption_lsp;


}; // MplsLcacStandby::SoftPreemptions::SoftPreemption


class MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp : public Entity
{
    public:
        CurrentSoftPreemptionLsp();
        ~CurrentSoftPreemptionLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf requested_bandwidth; //type: uint64
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf bandwidth_type; //type: uint8
        YLeaf soft_preempted; //type: boolean
        YLeaf soft_preemption_timeout; //type: uint16
        YLeaf bandwidth_preempted; //type: boolean
        YLeaf soft_preempted_fr_rrewrite; //type: boolean



}; // MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp

class MplsLcac : public Entity
{
    public:
        MplsLcac();
        ~MplsLcac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Neighbors; //type: MplsLcac::Neighbors
        class PreemptionEvents; //type: MplsLcac::PreemptionEvents
        class Advertisements; //type: MplsLcac::Advertisements
        class Statistics; //type: MplsLcac::Statistics
        class BandwidthAllocation; //type: MplsLcac::BandwidthAllocation
        class Gmpls; //type: MplsLcac::Gmpls
        class BfdNeighbors; //type: MplsLcac::BfdNeighbors
        class BandwidthAccount; //type: MplsLcac::BandwidthAccount
        class LinkSummary; //type: MplsLcac::LinkSummary
        class LinkInformation; //type: MplsLcac::LinkInformation
        class AdmissionControl; //type: MplsLcac::AdmissionControl
        class SoftPreemptionGlobalInfo; //type: MplsLcac::SoftPreemptionGlobalInfo
        class SoftPreemptions; //type: MplsLcac::SoftPreemptions

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::AdmissionControl> admission_control;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements> advertisements;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount> bandwidth_account;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation> bandwidth_allocation;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors> bfd_neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls> gmpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkInformation> link_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::LinkSummary> link_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents> preemption_events;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptionGlobalInfo> soft_preemption_global_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::SoftPreemptions> soft_preemptions;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics> statistics;


}; // MplsLcac


class MplsLcac::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: MplsLcac::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors::Neighbor> > neighbor;


}; // MplsLcac::Neighbors


class MplsLcac::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Neighbor_; //type: MplsLcac::Neighbors::Neighbor::Neighbor_

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Neighbors::Neighbor::Neighbor_> > neighbor;


}; // MplsLcac::Neighbors::Neighbor


class MplsLcac::Neighbors::Neighbor::Neighbor_ : public Entity
{
    public:
        Neighbor_();
        ~Neighbor_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_id; //type: string
        YLeaf area_id; //type: string
        YLeaf neighbor_address; //type: string



}; // MplsLcac::Neighbors::Neighbor::Neighbor_


class MplsLcac::PreemptionEvents : public Entity
{
    public:
        PreemptionEvents();
        ~PreemptionEvents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PreemptionEvent; //type: MplsLcac::PreemptionEvents::PreemptionEvent

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents::PreemptionEvent> > preemption_event;


}; // MplsLcac::PreemptionEvents


class MplsLcac::PreemptionEvents::PreemptionEvent : public Entity
{
    public:
        PreemptionEvent();
        ~PreemptionEvent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_index; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf requested_bandwidth; //type: uint64
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf bandwidth_type; //type: uint8
        YLeaf old_bandwidth_bc0; //type: uint64
        YLeaf old_bandwidth_bc1; //type: uint64
        YLeaf new_bandwidth_bc0; //type: uint64
        YLeaf new_bandwidth_bc1; //type: uint64
        YLeaf bandwidth_overshoot0; //type: uint64
        YLeaf bandwidth_overshoot1; //type: uint64
        YLeaf interface_name; //type: string
        YLeaf event_time; //type: uint32
        YLeaf ls_ps; //type: uint16
        YLeaf soft_preempted_ls_ps; //type: uint16
        YLeaf soft_preempted_ls_ps_fr_rrewrite; //type: uint16
        YLeaf hard_preempted_ls_ps; //type: uint16
        YLeaf total_preempted_bandwidth_bc0; //type: uint64
        YLeaf total_preempted_bandwidth_bc1; //type: uint64
        YLeaf softly_preempted_bandwidth_bc0; //type: uint64
        YLeaf softly_preempted_bandwidth_bc1; //type: uint64
        YLeaf soft_preempted_fr_rrewrite_bandwidth_bc0; //type: uint64
        YLeaf soft_preempted_fr_rrewrite_bandwidth_bc1; //type: uint64
        YLeaf hard_preempted_bandwidth_bc0; //type: uint64
        YLeaf hard_preempted_bandwidth_bc1; //type: uint64
        YLeaf tunnels; //type: uint16
        YLeaf soft_preempted_tunnels; //type: uint16
        YLeaf soft_preempted_tunnels_fr_rrewrite; //type: uint16
        YLeaf hard_preempted_tunnels; //type: uint16

        class Lsp; //type: MplsLcac::PreemptionEvents::PreemptionEvent::Lsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::PreemptionEvents::PreemptionEvent::Lsp> > lsp;


}; // MplsLcac::PreemptionEvents::PreemptionEvent


class MplsLcac::PreemptionEvents::PreemptionEvent::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16
        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf requested_bandwidth; //type: uint64
        YLeaf setup_priority; //type: uint8
        YLeaf hold_priority; //type: uint8
        YLeaf bandwidth_type; //type: uint8
        YLeaf soft_preempted; //type: boolean
        YLeaf soft_preemption_timeout; //type: uint16
        YLeaf bandwidth_preempted; //type: boolean
        YLeaf soft_preempted_fr_rrewrite; //type: boolean



}; // MplsLcac::PreemptionEvents::PreemptionEvent::Lsp


class MplsLcac::Advertisements : public Entity
{
    public:
        Advertisements();
        ~Advertisements();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flooding_status_message; //type: string
        YLeaf last_flooding_time; //type: uint32
        YLeaf last_flooding_trigger; //type: FloodingTriggerEnum
        YLeaf next_flooding_time; //type: uint32
        YLeaf ds_te_mode; //type: RrrDsteMigrationModeEnum

        class AdvertizedAreas; //type: MplsLcac::Advertisements::AdvertizedAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas> > advertized_areas;


}; // MplsLcac::Advertisements


class MplsLcac::Advertisements::AdvertizedAreas : public Entity
{
    public:
        AdvertizedAreas();
        ~AdvertizedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_area_id; //type: string
        YLeaf protocol; //type: IgpProtocolEnum
        YLeaf system_id; //type: string
        YLeaf router_id; //type: string

        class FloodedLink; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink> > flooded_link;


}; // MplsLcac::Advertisements::AdvertizedAreas


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink : public Entity
{
    public:
        FloodedLink();
        ~FloodedLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_id; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf link_address; //type: string
        YLeaf subnet_type; //type: IgpSubnetEnum
        YLeaf outgoing_interface_id; //type: uint32
        YLeaf is_designated_router; //type: boolean
        YLeaf designated_router_igp_id; //type: string
        YLeaf neighbor_igp_id; //type: string
        YLeaf igp_neighbor_address; //type: string
        YLeaf incoming_interface_id; //type: uint32
        YLeaf te_metric; //type: uint32
        YLeaf igp_metric; //type: uint32
        YLeaf uni_link_delay; //type: uint32
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum
        YLeaf physical_bandwidth; //type: uint32
        YLeaf bcm_id; //type: uint16
        YLeaf link_maximum_reservable_bandwidth; //type: uint32
        YLeaf reservable_pool0_bandwidth; //type: uint32
        YLeaf reservable_pool1_bandwidth; //type: uint32
        YLeaf is_receiving_reservable_bandwidth_enabled; //type: boolean
        YLeaf receiving_direction; //type: LinkDirectionEnumEnum
        YLeaf is_transmitting_reservable_bandwidth_enabled; //type: boolean
        YLeaf transmitting_direction; //type: LinkDirectionEnumEnum
        YLeaf affinity_attribute_flags; //type: uint32
        YLeafList extended_affinity_attribute_flag; //type: list of  uint32

        class OduLinkCapabilities; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities
        class SharedRiskLinkGroup; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup
        class ReceivingReservableBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth
        class TransmittingReservableBandwidth; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities> odu_link_capabilities;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth> > receiving_reservable_bandwidth;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup> > shared_risk_link_group;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth> > transmitting_reservable_bandwidth;


}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities : public Entity
{
    public:
        OduLinkCapabilities();
        ~OduLinkCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList max_lsp_bandwidth; //type: list of  uint32

        class OduCapability; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability> > odu_capability;


}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability : public Entity
{
    public:
        OduCapability();
        ~OduCapability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signal_type; //type: TeOduLevelEnum
        YLeaf stage1; //type: TeOduLevelEnum
        YLeaf stage2; //type: TeOduLevelEnum
        YLeaf stage3; //type: TeOduLevelEnum
        YLeaf stage4; //type: TeOduLevelEnum
        YLeaf terminable; //type: boolean
        YLeaf switchable; //type: boolean
        YLeaf tsg1p25; //type: boolean
        YLeaf tsg2p5; //type: boolean
        YLeaf vcat_capable; //type: boolean
        YLeaf lcas_capable; //type: boolean

        class BandwidthInfo; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo> bandwidth_info;


}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo : public Entity
{
    public:
        BandwidthInfo();
        ~BandwidthInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: TeOduCapabilityEnum

        class Fixed; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed
        class Flex; //type: MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed> fixed;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex> flex;


}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed : public Entity
{
    public:
        Fixed();
        ~Fixed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_od_us; //type: uint8
        YLeaf unreserved_od_us; //type: uint8



}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex : public Entity
{
    public:
        Flex();
        ~Flex();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_bandwidth; //type: uint32
        YLeaf unreserved_bandwidth; //type: uint32
        YLeaf max_lsp_bandwidth; //type: uint32



}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth : public Entity
{
    public:
        ReceivingReservableBandwidth();
        ~ReceivingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: uint8
        YLeaf pool0_bandwidth; //type: uint32
        YLeaf pool1_bandwidth; //type: uint32



}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth


class MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth : public Entity
{
    public:
        TransmittingReservableBandwidth();
        ~TransmittingReservableBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: uint8
        YLeaf pool0_bandwidth; //type: uint32
        YLeaf pool1_bandwidth; //type: uint32



}; // MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth


class MplsLcac::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: MplsLcac::Statistics::Summary
        class StatsticsLinks; //type: MplsLcac::Statistics::StatsticsLinks

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks> statstics_links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary> summary;


}; // MplsLcac::Statistics


class MplsLcac::Statistics::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean

        class PathStatistics; //type: MplsLcac::Statistics::Summary::PathStatistics
        class ReservationStatistics; //type: MplsLcac::Statistics::Summary::ReservationStatistics
        class PathStatistics32Bit; //type: MplsLcac::Statistics::Summary::PathStatistics32Bit
        class ReservationStatistics32Bit; //type: MplsLcac::Statistics::Summary::ReservationStatistics32Bit

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::PathStatistics> path_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::PathStatistics32Bit> path_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::ReservationStatistics> reservation_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::Summary::ReservationStatistics32Bit> reservation_statistics32_bit;


}; // MplsLcac::Statistics::Summary


class MplsLcac::Statistics::Summary::PathStatistics : public Entity
{
    public:
        PathStatistics();
        ~PathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcac::Statistics::Summary::PathStatistics


class MplsLcac::Statistics::Summary::ReservationStatistics : public Entity
{
    public:
        ReservationStatistics();
        ~ReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcac::Statistics::Summary::ReservationStatistics


class MplsLcac::Statistics::Summary::PathStatistics32Bit : public Entity
{
    public:
        PathStatistics32Bit();
        ~PathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcac::Statistics::Summary::PathStatistics32Bit


class MplsLcac::Statistics::Summary::ReservationStatistics32Bit : public Entity
{
    public:
        ReservationStatistics32Bit();
        ~ReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcac::Statistics::Summary::ReservationStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks : public Entity
{
    public:
        StatsticsLinks();
        ~StatsticsLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StatsticsLink; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink> > statstics_link;


}; // MplsLcac::Statistics::StatsticsLinks


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink : public Entity
{
    public:
        StatsticsLink();
        ~StatsticsLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf link_address; //type: string

        class IncomingPathStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics
        class IncomingReservationStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics
        class OutgoingPathStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics
        class OutgoingReservationStatistics; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics
        class IncomingPathStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit
        class IncomingReservationStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit
        class OutgoingPathStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit
        class OutgoingReservationStatistics32Bit; //type: MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics> incoming_path_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit> incoming_path_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics> incoming_reservation_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit> incoming_reservation_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics> outgoing_path_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit> outgoing_path_statistics32_bit;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics> outgoing_reservation_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit> outgoing_reservation_statistics32_bit;


}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics : public Entity
{
    public:
        IncomingPathStatistics();
        ~IncomingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics : public Entity
{
    public:
        IncomingReservationStatistics();
        ~IncomingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics : public Entity
{
    public:
        OutgoingPathStatistics();
        ~OutgoingPathStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics : public Entity
{
    public:
        OutgoingReservationStatistics();
        ~OutgoingReservationStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint16
        YLeaf setup_errors; //type: uint16
        YLeaf setup_admits; //type: uint16
        YLeaf setup_rejects; //type: uint16
        YLeaf tear_requests; //type: uint16
        YLeaf tear_errors; //type: uint16
        YLeaf tear_preempts; //type: uint16



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit : public Entity
{
    public:
        IncomingPathStatistics32Bit();
        ~IncomingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit : public Entity
{
    public:
        IncomingReservationStatistics32Bit();
        ~IncomingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit : public Entity
{
    public:
        OutgoingPathStatistics32Bit();
        ~OutgoingPathStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit


class MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit : public Entity
{
    public:
        OutgoingReservationStatistics32Bit();
        ~OutgoingReservationStatistics32Bit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_requests; //type: uint32
        YLeaf setup_errors; //type: uint32
        YLeaf setup_admits; //type: uint32
        YLeaf setup_rejects; //type: uint32
        YLeaf tear_requests; //type: uint32
        YLeaf tear_errors; //type: uint32
        YLeaf tear_preempts; //type: uint32



}; // MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit


class MplsLcac::BandwidthAllocation : public Entity
{
    public:
        BandwidthAllocation();
        ~BandwidthAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Global; //type: MplsLcac::BandwidthAllocation::Global
        class BandwidthAllocationLinks; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks> bandwidth_allocation_links;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::Global> global;


}; // MplsLcac::BandwidthAllocation


class MplsLcac::BandwidthAllocation::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_role_standby; //type: boolean
        YLeaf links; //type: uint16
        YLeaf bandwidth_hold_time; //type: uint16



}; // MplsLcac::BandwidthAllocation::Global


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks : public Entity
{
    public:
        BandwidthAllocationLinks();
        ~BandwidthAllocationLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAllocationLink; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink> > bandwidth_allocation_link;


}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink : public Entity
{
    public:
        BandwidthAllocationLink();
        ~BandwidthAllocationLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf total_bandwidth_descriptors; //type: uint16
        YLeaf bandwidth_descriptors; //type: uint16
        YLeaf bandwidth_pool; //type: BandwidthTypeEnumEnum
        YLeaf flooding_up_thresholds_are_default; //type: boolean
        YLeaf flooding_down_thresholds_are_default; //type: boolean
        YLeaf flooding_up_thresholds_are_global; //type: boolean
        YLeaf flooding_down_thresholds_are_global; //type: boolean
        YLeafList flooding_up_threshold; //type: list of  uint8
        YLeafList flooding_down_threshold; //type: list of  uint8

        class LinkCommon; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon
        class UpstreamBandwidth; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth
        class DownstreamBandwidth; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth> downstream_bandwidth;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon> link_common;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth> upstream_bandwidth;


}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon : public Entity
{
    public:
        LinkCommon();
        ~LinkCommon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_id; //type: string
        YLeaf link_address; //type: string
        YLeaf is_unnumbered; //type: boolean
        YLeaf has_protection; //type: boolean
        YLeaf capability; //type: uint32
        YLeaf working_priority; //type: uint32
        YLeaf resource_provider; //type: ResourceProviderEnum
        YLeaf is_resource_provider_installed; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum
        YLeaf physical_bandwidth; //type: uint64
        YLeaf bcm_id; //type: uint16
        YLeaf maximum_reservable_bandwidth; //type: uint64
        YLeaf last_flooded_effective_maximum_reservable_bandwidth; //type: uint64
        YLeaf incoming_reservable_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool0_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool0_bandwidth_percentage; //type: uint8
        YLeaf maximum_reservable_pool1_bandwidth; //type: uint64
        YLeaf incoming_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf outgoing_reservable_pool1_bandwidth_percentage; //type: uint8
        YLeaf inbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf outbound_admission_method; //type: AdmissionPolicyEnum
        YLeaf igp_neighbors; //type: uint16

        class LinkFlags; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags
        class SharedRiskLinkGroup; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup
        class InterfaceSwitchingCapabilityDescriptor; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor
        class FloodedAreas; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas> > flooded_areas;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor> > interface_switching_capability_descriptor;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags> link_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup> > shared_risk_link_group;


}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags : public Entity
{
    public:
        LinkFlags();
        ~LinkFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_te_on; //type: boolean
        YLeaf signaling_agent; //type: SignalingAgentEnumEnum
        YLeaf is_admin_up; //type: boolean



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup : public Entity
{
    public:
        SharedRiskLinkGroup();
        ~SharedRiskLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf shared_risk_group; //type: uint32
        YLeaf srlg_name; //type: string



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor : public Entity
{
    public:
        InterfaceSwitchingCapabilityDescriptor();
        ~InterfaceSwitchingCapabilityDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint8
        YLeaf switching_capability; //type: uint8
        YLeaf encoding; //type: uint8



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas : public Entity
{
    public:
        FloodedAreas();
        ~FloodedAreas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flooded_area; //type: string



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth : public Entity
{
    public:
        UpstreamBandwidth();
        ~UpstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_direction; //type: LinkDirectionEnumEnum
        YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum

        class BandwidthPool0; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1> > bandwidth_pool1;


}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0 : public Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1 : public Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth : public Entity
{
    public:
        DownstreamBandwidth();
        ~DownstreamBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bandwidth_direction; //type: LinkDirectionEnumEnum
        YLeaf is_admission_method_allocated_bandwidth; //type: boolean
        YLeaf bandwidth_units; //type: BandwidthUnitEnumEnum

        class BandwidthPool0; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0
        class BandwidthPool1; //type: MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0> > bandwidth_pool0;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1> > bandwidth_pool1;


}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0 : public Entity
{
    public:
        BandwidthPool0();
        ~BandwidthPool0();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0


class MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1 : public Entity
{
    public:
        BandwidthPool1();
        ~BandwidthPool1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hold_priority; //type: uint8
        YLeaf held_amount; //type: uint32
        YLeaf total_held_amount; //type: uint32
        YLeaf locked_amount; //type: uint32
        YLeaf total_locked_amount; //type: uint32



}; // MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1


class MplsLcac::Gmpls : public Entity
{
    public:
        Gmpls();
        ~Gmpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nni; //type: MplsLcac::Gmpls::Nni
        class Uni; //type: MplsLcac::Gmpls::Uni

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls::Nni> nni;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::Gmpls::Uni> uni;


}; // MplsLcac::Gmpls


class MplsLcac::Gmpls::Nni : public Entity
{
    public:
        Nni();
        ~Nni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsLcac::Gmpls::Nni


class MplsLcac::Gmpls::Uni : public Entity
{
    public:
        Uni();
        ~Uni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // MplsLcac::Gmpls::Uni


class MplsLcac::BfdNeighbors : public Entity
{
    public:
        BfdNeighbors();
        ~BfdNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BfdNeighbor; //type: MplsLcac::BfdNeighbors::BfdNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors::BfdNeighbor> > bfd_neighbor;


}; // MplsLcac::BfdNeighbors


class MplsLcac::BfdNeighbors::BfdNeighbor : public Entity
{
    public:
        BfdNeighbor();
        ~BfdNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Neighbor; //type: MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor> > neighbor;


}; // MplsLcac::BfdNeighbors::BfdNeighbor


class MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf is_bfd_up; //type: boolean



}; // MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor


class MplsLcac::BandwidthAccount : public Entity
{
    public:
        BandwidthAccount();
        ~BandwidthAccount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAccountLinks; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks> bandwidth_account_links;


}; // MplsLcac::BandwidthAccount


class MplsLcac::BandwidthAccount::BandwidthAccountLinks : public Entity
{
    public:
        BandwidthAccountLinks();
        ~BandwidthAccountLinks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BandwidthAccountLink; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink> > bandwidth_account_link;


}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks


class MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink : public Entity
{
    public:
        BandwidthAccountLink();
        ~BandwidthAccountLink();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf link_id; //type: string

        class CommonInfo; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo
        class SampleHistory; //type: MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory

        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo> common_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_te_oper::MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory> sample_history;


}; // MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_OPER_27_ */

