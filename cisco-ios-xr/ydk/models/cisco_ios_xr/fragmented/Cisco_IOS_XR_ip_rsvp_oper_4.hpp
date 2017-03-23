#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_4_
#define _CISCO_IOS_XR_IP_RSVP_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_oper {


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Forwarded; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded
        class LocallyDestined; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined
        class Dropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped
        class DefaultActionDropped; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped
        class DefaultActionProcessed; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed
        class Total; //type: Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped> default_action_dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed> default_action_processed;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped> dropped;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded> forwarded;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined> locally_destined;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total> total;


}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded : public Entity
{
    public:
        Forwarded();
        ~Forwarded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined : public Entity
{
    public:
        LocallyDestined();
        ~LocallyDestined();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped : public Entity
{
    public:
        Dropped();
        ~Dropped();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped : public Entity
{
    public:
        DefaultActionDropped();
        ~DefaultActionDropped();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed : public Entity
{
    public:
        DefaultActionProcessed();
        ~DefaultActionProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed


class Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: uint32
        YLeaf path_tear; //type: uint32
        YLeaf reservation_confirm; //type: uint32
        YLeaf total; //type: uint32



}; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total


class Rsvp::Counters::OutOfResource : public Entity
{
    public:
        OutOfResource();
        ~OutOfResource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: Rsvp::Counters::OutOfResource::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces> interfaces;


}; // Rsvp::Counters::OutOfResource


class Rsvp::Counters::OutOfResource::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Summary; //type: Rsvp::Counters::OutOfResource::Interfaces::Summary
        class Interfaces_; //type: Rsvp::Counters::OutOfResource::Interfaces::Interfaces_

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Summary> summary;


}; // Rsvp::Counters::OutOfResource::Interfaces


class Rsvp::Counters::OutOfResource::Interfaces::Summary : public Entity
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


        YLeaf dropped_path_messages; //type: uint32



}; // Rsvp::Counters::OutOfResource::Interfaces::Summary


class Rsvp::Counters::OutOfResource::Interfaces::Interfaces_ : public Entity
{
    public:
        Interfaces_();
        ~Interfaces_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface> > interface;


}; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_


class Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf dropped_path_messages; //type: uint32



}; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface


class Rsvp::Counters::InterfaceEvents : public Entity
{
    public:
        InterfaceEvents();
        ~InterfaceEvents();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceEvent; //type: Rsvp::Counters::InterfaceEvents::InterfaceEvent

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceEvents::InterfaceEvent> > interface_event;


}; // Rsvp::Counters::InterfaceEvents


class Rsvp::Counters::InterfaceEvents::InterfaceEvent : public Entity
{
    public:
        InterfaceEvent();
        ~InterfaceEvent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf expired_paths; //type: uint32
        YLeaf expired_reservations; //type: uint32
        YLeaf nac_ks; //type: uint32



}; // Rsvp::Counters::InterfaceEvents::InterfaceEvent


class Rsvp::Counters::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf rsvp_process_role; //type: RsvpProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nacks; //type: uint64
        YLeaf total_id_ts; //type: uint32



}; // Rsvp::Counters::Nsr


class Rsvp::Counters::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_cleared_timestamp; //type: uint32
        YLeaf rsvp_process_role; //type: RsvpProcRoleEnum
        YLeaf last_idt_states; //type: uint32
        YLeaf total_states; //type: uint32
        YLeaf total_deletions; //type: uint32
        YLeaf total_nacks; //type: uint64
        YLeaf total_id_ts; //type: uint32



}; // Rsvp::Counters::Issu


class Rsvp::Counters::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions; //type: uint32
        YLeaf incoming_paths; //type: uint32
        YLeaf outgoing_paths; //type: uint32
        YLeaf incoming_reservations; //type: uint32
        YLeaf outgoing_reservations; //type: uint32
        YLeaf interfaces; //type: uint32



}; // Rsvp::Counters::Database


class Rsvp::Counters::EventSyncs : public Entity
{
    public:
        EventSyncs();
        ~EventSyncs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventSync; //type: Rsvp::Counters::EventSyncs::EventSync

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::EventSyncs::EventSync> > event_sync;


}; // Rsvp::Counters::EventSyncs


class Rsvp::Counters::EventSyncs::EventSync : public Entity
{
    public:
        EventSync();
        ~EventSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf expired_paths; //type: uint32
        YLeaf expired_reservations; //type: uint32
        YLeaf nac_ks; //type: uint32



}; // Rsvp::Counters::EventSyncs::EventSync


class Rsvp::InterfaceDetaileds : public Entity
{
    public:
        InterfaceDetaileds();
        ~InterfaceDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceDetailed; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed> > interface_detailed;


}; // Rsvp::InterfaceDetaileds


class Rsvp::InterfaceDetaileds::InterfaceDetailed : public Entity
{
    public:
        InterfaceDetailed();
        ~InterfaceDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf signalling_ip_tos; //type: uint8
        YLeaf integrity_send_password; //type: string
        YLeaf integrity_receive_password; //type: string
        YLeaf integrity_receive_password_optional; //type: uint8
        YLeaf refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf summary_refresh_timer_state; //type: RsvpTimerStateEnum
        YLeaf refresh_interval; //type: int32
        YLeaf out_of_band_refresh_interval; //type: uint32
        YLeaf summary_refresh_max_size; //type: uint32
        YLeaf bundle_message_max_size; //type: uint32
        YLeaf expiry_timer_state; //type: RsvpTimerStateEnum
        YLeaf expiry_states; //type: int32
        YLeaf expiry_interval; //type: int32
        YLeaf expiry_drops_tolerated; //type: int32
        YLeaf out_of_band_expiry_drops_tolerated; //type: uint32
        YLeaf ack_hold_time; //type: uint32
        YLeaf ack_max_size; //type: uint32
        YLeaf retransmit_time; //type: uint32
        YLeaf pacing_interval; //type: uint32
        YLeaf pacing_message_rate; //type: uint32
        YLeaf pacing_timer_state; //type: RsvpTimerStateEnum
        YLeaf pacing_messages; //type: int32

        class BandwidthInformation; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation
        class Flags; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags
        class NeighborArray; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation> bandwidth_information;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags> flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray> > neighbor_array;


}; // Rsvp::InterfaceDetaileds::InterfaceDetailed


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation : public Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_mode; //type: RsvpMgmtDsteModesEnum

        class PreStandardDsteInterface; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface : public Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_subpool_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_subpool_bandwidth_absolute; //type: boolean



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface : public Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_pool0_bandwidth; //type: uint64
        YLeaf max_pool1_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc1_bandwidth_absolute; //type: boolean



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface


class Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_mpls_enabled; //type: boolean
        YLeaf is_refresh_reduction_enabled; //type: boolean
        YLeaf is_pacing_enabled; //type: boolean
        YLeaf is_refresh_enabled; //type: boolean
        YLeaf is_s_refresh_enabled; //type: boolean
        YLeaf is_interface_down; //type: boolean
        YLeaf is_interface_created; //type: boolean
        YLeaf is_rel_s_refresh_enabled; //type: boolean
        YLeaf is_backup_tunnel; //type: boolean
        YLeaf is_rsvp_configured; //type: boolean
        YLeaf is_non_default_vrf; //type: boolean
        YLeaf is_message_bundling_enabled; //type: boolean



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray : public Entity
{
    public:
        NeighborArray();
        ~NeighborArray();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor_refresh_reduction_capable; //type: boolean
        YLeaf neighbor_address; //type: string
        YLeaf message_ids; //type: uint32
        YLeaf outgoing_states; //type: int32

        class ExpiryTime; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime
        class NeighborMessageId; //type: Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime> expiry_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;


}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime : public Entity
{
    public:
        ExpiryTime();
        ~ExpiryTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime


class Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId : public Entity
{
    public:
        NeighborMessageId();
        ~NeighborMessageId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf message_id; //type: uint32



}; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId


class Rsvp::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_gr_enabled; //type: boolean
        YLeaf global_neighbors; //type: uint32
        YLeaf restart_time; //type: uint32
        YLeaf recovery_time; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf missed_hellos; //type: uint8
        YLeaf pending_states; //type: uint32

        class RecoveryTimeLeft; //type: Rsvp::GracefulRestart::RecoveryTimeLeft
        class RecoveryTimerExpTime; //type: Rsvp::GracefulRestart::RecoveryTimerExpTime
        class LocalNodeAddress; //type: Rsvp::GracefulRestart::LocalNodeAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::LocalNodeAddress> > local_node_address;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimeLeft> recovery_time_left;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimerExpTime> recovery_timer_exp_time;


}; // Rsvp::GracefulRestart


class Rsvp::GracefulRestart::RecoveryTimeLeft : public Entity
{
    public:
        RecoveryTimeLeft();
        ~RecoveryTimeLeft();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GracefulRestart::RecoveryTimeLeft


class Rsvp::GracefulRestart::RecoveryTimerExpTime : public Entity
{
    public:
        RecoveryTimerExpTime();
        ~RecoveryTimerExpTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::GracefulRestart::RecoveryTimerExpTime


class Rsvp::GracefulRestart::LocalNodeAddress : public Entity
{
    public:
        LocalNodeAddress();
        ~LocalNodeAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_node_ip_address; //type: string
        YLeaf application_type; //type: RsvpMgmtGrAppEnum



}; // Rsvp::GracefulRestart::LocalNodeAddress


class Rsvp::HelloInterfaceInstanceBriefs : public Entity
{
    public:
        HelloInterfaceInstanceBriefs();
        ~HelloInterfaceInstanceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInterfaceInstanceBrief; //type: Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief> > hello_interface_instance_brief;


}; // Rsvp::HelloInterfaceInstanceBriefs


class Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief : public Entity
{
    public:
        HelloInterfaceInstanceBrief();
        ~HelloInterfaceInstanceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string



}; // Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief


class Rsvp::HelloInterfaceInstanceDetails : public Entity
{
    public:
        HelloInterfaceInstanceDetails();
        ~HelloInterfaceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelloInterfaceInstanceDetail; //type: Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail> > hello_interface_instance_detail;


}; // Rsvp::HelloInterfaceInstanceDetails


class Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail : public Entity
{
    public:
        HelloInterfaceInstanceDetail();
        ~HelloInterfaceInstanceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf source_address_xr; //type: string
        YLeaf destination_address_xr; //type: string
        YLeaf hello_global_neighbor_id; //type: string
        YLeaf instance_type; //type: RsvpMgmtHelloInstanceEnum
        YLeaf hello_interface; //type: string
        YLeaf source_instance; //type: uint32
        YLeaf destination_instance; //type: uint32
        YLeaf hello_messages_sent; //type: uint64
        YLeaf hello_messages_received; //type: uint64

        class LastMessageSentTime; //type: Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime> last_message_sent_time;


}; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail


class Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime : public Entity
{
    public:
        LastMessageSentTime();
        ~LastMessageSentTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: int32
        YLeaf nanoseconds; //type: int32



}; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime


class Rsvp::InterfaceNeighborDetails : public Entity
{
    public:
        InterfaceNeighborDetails();
        ~InterfaceNeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceNeighborDetail; //type: Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail> > interface_neighbor_detail;


}; // Rsvp::InterfaceNeighborDetails


class Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail : public Entity
{
    public:
        InterfaceNeighborDetail();
        ~InterfaceNeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf node_address; //type: string

        class InterfaceNeighborListDetail; //type: Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail> > interface_neighbor_list_detail;


}; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail


class Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail : public Entity
{
    public:
        InterfaceNeighborListDetail();
        ~InterfaceNeighborListDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_neighbor_address; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf is_rr_enabled; //type: boolean
        YLeaf neighbor_epoch; //type: uint32
        YLeaf out_of_order_messages; //type: uint32
        YLeaf retransmitted_messages; //type: uint32



}; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail


class Rsvp::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Status; //type: Rsvp::Nsr::Status

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status> status;


}; // Rsvp::Nsr


class Rsvp::Nsr::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: Rsvp::Nsr::Status::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Nsr::Status::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::PreviousIdtStatus> previous_idt_status;


}; // Rsvp::Nsr::Status


class Rsvp::Nsr::Status::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Nsr::Status::IdtStatus


class Rsvp::Nsr::Status::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Nsr::Status::PreviousIdtStatus


class Rsvp::Summary : public Entity
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


        YLeaf interfaces; //type: uint32
        YLeaf ls_ps; //type: uint32

        class IssuStatus; //type: Rsvp::Summary::IssuStatus
        class NsrStatus; //type: Rsvp::Summary::NsrStatus
        class DatabaseCounters; //type: Rsvp::Summary::DatabaseCounters

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::DatabaseCounters> database_counters;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus> issu_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus> nsr_status;


}; // Rsvp::Summary


class Rsvp::Summary::IssuStatus : public Entity
{
    public:
        IssuStatus();
        ~IssuStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: Rsvp::Summary::IssuStatus::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Summary::IssuStatus::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::PreviousIdtStatus> previous_idt_status;


}; // Rsvp::Summary::IssuStatus


class Rsvp::Summary::IssuStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::IssuStatus::IdtStatus


class Rsvp::Summary::IssuStatus::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::IssuStatus::PreviousIdtStatus


class Rsvp::Summary::NsrStatus : public Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: RsvpProcRoleEnum

        class IdtStatus; //type: Rsvp::Summary::NsrStatus::IdtStatus
        class PreviousIdtStatus; //type: Rsvp::Summary::NsrStatus::PreviousIdtStatus

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::IdtStatus> idt_status;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::PreviousIdtStatus> previous_idt_status;


}; // Rsvp::Summary::NsrStatus


class Rsvp::Summary::NsrStatus::IdtStatus : public Entity
{
    public:
        IdtStatus();
        ~IdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::NsrStatus::IdtStatus


class Rsvp::Summary::NsrStatus::PreviousIdtStatus : public Entity
{
    public:
        PreviousIdtStatus();
        ~PreviousIdtStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sync_status; //type: RsvpSyncStatusEnum
        YLeaf not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
        YLeaf idt_start_time; //type: uint32
        YLeaf idt_end_time; //type: uint32
        YLeaf declare_time; //type: uint32
        YLeaf withdraw_time; //type: uint32



}; // Rsvp::Summary::NsrStatus::PreviousIdtStatus


class Rsvp::Summary::DatabaseCounters : public Entity
{
    public:
        DatabaseCounters();
        ~DatabaseCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sessions; //type: uint32
        YLeaf incoming_paths; //type: uint32
        YLeaf outgoing_paths; //type: uint32
        YLeaf incoming_reservations; //type: uint32
        YLeaf outgoing_reservations; //type: uint32
        YLeaf interfaces; //type: uint32



}; // Rsvp::Summary::DatabaseCounters


class Rsvp::Frrs : public Entity
{
    public:
        Frrs();
        ~Frrs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Frr; //type: Rsvp::Frrs::Frr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr> > frr;


}; // Rsvp::Frrs


class Rsvp::Frrs::Frr : public Entity
{
    public:
        Frr();
        ~Frr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf protocol; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpSessionEnum
        YLeaf p2mp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf source_port; //type: int32
        YLeaf sub_group_origin; //type: string
        YLeaf sub_group_id; //type: int32
        YLeaf vrf_name; //type: string
        YLeaf path_status; //type: RsvpMgmtFrrStateEnumEnum
        YLeaf reservation_status; //type: RsvpMgmtFrrStateEnumEnum

        class Session; //type: Rsvp::Frrs::Frr::Session
        class S2LSubLsp; //type: Rsvp::Frrs::Frr::S2LSubLsp

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session> session;


}; // Rsvp::Frrs::Frr


class Rsvp::Frrs::Frr::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession> rsvp_session;


}; // Rsvp::Frrs::Frr::Session


class Rsvp::Frrs::Frr::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_type; //type: RsvpMgmtSessionEnum

        class Ipv4; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::Frrs::Frr::Session::RsvpSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession


class Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::Frrs::Frr::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // Rsvp::Frrs::Frr::S2LSubLsp


class Rsvp::RequestBriefs : public Entity
{
    public:
        RequestBriefs();
        ~RequestBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RequestBrief; //type: Rsvp::RequestBriefs::RequestBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief> > request_brief;


}; // Rsvp::RequestBriefs


class Rsvp::RequestBriefs::RequestBrief : public Entity
{
    public:
        RequestBrief();
        ~RequestBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf protocol; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpSessionEnum
        YLeaf p2mp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf source_port; //type: int32
        YLeaf sub_group_origin; //type: string
        YLeaf sub_group_id; //type: int32
        YLeaf vrf_name; //type: string
        YLeaf output_interface; //type: string

        class Session; //type: Rsvp::RequestBriefs::RequestBrief::Session
        class S2LSubLsp; //type: Rsvp::RequestBriefs::RequestBrief::S2LSubLsp
        class FlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec
        class Filter; //type: Rsvp::RequestBriefs::RequestBrief::Filter
        class Style; //type: Rsvp::RequestBriefs::RequestBrief::Style

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Style> style;


}; // Rsvp::RequestBriefs::RequestBrief


class Rsvp::RequestBriefs::RequestBrief::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession> rsvp_session;


}; // Rsvp::RequestBriefs::RequestBrief::Session


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_type; //type: RsvpMgmtSessionEnum

        class Ipv4; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession


class Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RequestBriefs::RequestBrief::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // Rsvp::RequestBriefs::RequestBrief::S2LSubLsp


class Rsvp::RequestBriefs::RequestBrief::FlowSpec : public Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_average_rate; //type: uint64
        YLeaf flow_max_burst; //type: uint64
        YLeaf flow_peak_rate; //type: uint64
        YLeaf flow_min_unit; //type: uint32
        YLeaf flow_max_unit; //type: uint32
        YLeaf flow_requested_rate; //type: uint64
        YLeaf flow_slack; //type: uint32
        YLeaf flow_qos; //type: RsvpMgmtQosServiceEnumEnum



}; // Rsvp::RequestBriefs::RequestBrief::FlowSpec


class Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec : public Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_spec_type; //type: RsvpMgmtFlowSpecEnum

        class G709OtnFlowSpec; //type: Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec


class Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec : public Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_signal_type; //type: uint8
        YLeaf flow_nvc; //type: uint16
        YLeaf flow_multiplier; //type: uint16
        YLeaf flow_bit_rate; //type: uint64



}; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RequestBriefs::RequestBrief::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpFilter; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter> rsvp_filter;


}; // Rsvp::RequestBriefs::RequestBrief::Filter


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf filter_type; //type: RsvpMgmtFilterEnum

        class UdpIpv4Session; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16



}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16



}; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RequestBriefs::RequestBrief::Style : public Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnumEnum



}; // Rsvp::RequestBriefs::RequestBrief::Style


class Rsvp::RequestDetails : public Entity
{
    public:
        RequestDetails();
        ~RequestDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RequestDetail; //type: Rsvp::RequestDetails::RequestDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail> > request_detail;


}; // Rsvp::RequestDetails


class Rsvp::RequestDetails::RequestDetail : public Entity
{
    public:
        RequestDetail();
        ~RequestDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf protocol; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpSessionEnum
        YLeaf p2mp_id; //type: int32
        YLeaf source_address; //type: string
        YLeaf source_port; //type: int32
        YLeaf sub_group_origin; //type: string
        YLeaf sub_group_id; //type: int32
        YLeaf vrf_name; //type: string
        YLeaf output_interface; //type: string

        class Session; //type: Rsvp::RequestDetails::RequestDetail::Session
        class S2LSubLsp; //type: Rsvp::RequestDetails::RequestDetail::S2LSubLsp
        class FlowSpec; //type: Rsvp::RequestDetails::RequestDetail::FlowSpec
        class GenericFlowSpec; //type: Rsvp::RequestDetails::RequestDetail::GenericFlowSpec
        class Filter; //type: Rsvp::RequestDetails::RequestDetail::Filter
        class Style; //type: Rsvp::RequestDetails::RequestDetail::Style
        class ReqFlags; //type: Rsvp::RequestDetails::RequestDetail::ReqFlags
        class Hop; //type: Rsvp::RequestDetails::RequestDetail::Hop
        class Header; //type: Rsvp::RequestDetails::RequestDetail::Header
        class PolicySources; //type: Rsvp::RequestDetails::RequestDetail::PolicySources
        class PolicyFlags; //type: Rsvp::RequestDetails::RequestDetail::PolicyFlags
        class PolicyQueryFlags; //type: Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags
        class PsbKey; //type: Rsvp::RequestDetails::RequestDetail::PsbKey
        class RsbKey; //type: Rsvp::RequestDetails::RequestDetail::RsbKey

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter> filter;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::FlowSpec> flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec> generic_flow_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Header> header;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Hop> hop;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyFlags> policy_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags> policy_query_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicySources> policy_sources;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PsbKey> > psb_key;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::ReqFlags> req_flags;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::RsbKey> > rsb_key;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::S2LSubLsp> s2l_sub_lsp;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session> session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Style> style;


}; // Rsvp::RequestDetails::RequestDetail


class Rsvp::RequestDetails::RequestDetail::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession> rsvp_session;


}; // Rsvp::RequestDetails::RequestDetail::Session


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_type; //type: RsvpMgmtSessionEnum

        class Ipv4; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession


class Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::RequestDetails::RequestDetail::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // Rsvp::RequestDetails::RequestDetail::S2LSubLsp


class Rsvp::RequestDetails::RequestDetail::FlowSpec : public Entity
{
    public:
        FlowSpec();
        ~FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_average_rate; //type: uint64
        YLeaf flow_max_burst; //type: uint64
        YLeaf flow_peak_rate; //type: uint64
        YLeaf flow_min_unit; //type: uint32
        YLeaf flow_max_unit; //type: uint32
        YLeaf flow_requested_rate; //type: uint64
        YLeaf flow_slack; //type: uint32
        YLeaf flow_qos; //type: RsvpMgmtQosServiceEnumEnum



}; // Rsvp::RequestDetails::RequestDetail::FlowSpec


class Rsvp::RequestDetails::RequestDetail::GenericFlowSpec : public Entity
{
    public:
        GenericFlowSpec();
        ~GenericFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_spec_type; //type: RsvpMgmtFlowSpecEnum

        class G709OtnFlowSpec; //type: Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;


}; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec


class Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec : public Entity
{
    public:
        G709OtnFlowSpec();
        ~G709OtnFlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_signal_type; //type: uint8
        YLeaf flow_nvc; //type: uint16
        YLeaf flow_multiplier; //type: uint16
        YLeaf flow_bit_rate; //type: uint64



}; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec


class Rsvp::RequestDetails::RequestDetail::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpFilter; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter> rsvp_filter;


}; // Rsvp::RequestDetails::RequestDetail::Filter


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter : public Entity
{
    public:
        RsvpFilter();
        ~RsvpFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf filter_type; //type: RsvpMgmtFilterEnum

        class UdpIpv4Session; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session
        class P2MpIpv4Session; //type: Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;


}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session : public Entity
{
    public:
        UdpIpv4Session();
        ~UdpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16



}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session


class Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session : public Entity
{
    public:
        P2MpIpv4Session();
        ~P2MpIpv4Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf source_port; //type: uint16
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16



}; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session


class Rsvp::RequestDetails::RequestDetail::Style : public Entity
{
    public:
        Style();
        ~Style();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reservation_type; //type: RsvpMgmtReservationTypeEnumEnum



}; // Rsvp::RequestDetails::RequestDetail::Style


class Rsvp::RequestDetails::RequestDetail::ReqFlags : public Entity
{
    public:
        ReqFlags();
        ~ReqFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_local_receiver; //type: boolean
        YLeaf is_refreshing; //type: boolean
        YLeaf is_send_confirm; //type: boolean
        YLeaf is_ack_outstanding; //type: boolean
        YLeaf is_message_id_allocated; //type: boolean
        YLeaf is_nack_received; //type: boolean
        YLeaf is_retransmit; //type: boolean
        YLeaf is_paced; //type: boolean
        YLeaf is_label_request_in_path; //type: boolean
        YLeaf is_rro_in_path; //type: boolean
        YLeaf is_record_label_in_path; //type: boolean
        YLeaf is_merge_point; //type: boolean



}; // Rsvp::RequestDetails::RequestDetail::ReqFlags


class Rsvp::RequestDetails::RequestDetail::Hop : public Entity
{
    public:
        Hop();
        ~Hop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_address; //type: string
        YLeaf neighbor_logical_interface_name; //type: string



}; // Rsvp::RequestDetails::RequestDetail::Hop


class Rsvp::RequestDetails::RequestDetail::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rsvp_version; //type: uint8
        YLeaf rsvp_header_flags; //type: uint8
        YLeaf rsvp_ttl; //type: uint8
        YLeaf rsvp_message_type; //type: uint8
        YLeaf ip_tos; //type: uint8
        YLeaf ip_ttl; //type: uint8
        YLeaf ip_source_address; //type: string



}; // Rsvp::RequestDetails::RequestDetail::Header


class Rsvp::RequestDetails::RequestDetail::PolicySources : public Entity
{
    public:
        PolicySources();
        ~PolicySources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_te_link; //type: boolean
        YLeaf is_local; //type: boolean
        YLeaf is_cops; //type: boolean
        YLeaf is_default; //type: boolean
        YLeaf is_cable; //type: boolean



}; // Rsvp::RequestDetails::RequestDetail::PolicySources


class Rsvp::RequestDetails::RequestDetail::PolicyFlags : public Entity
{
    public:
        PolicyFlags();
        ~PolicyFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_accepted; //type: boolean
        YLeaf is_installed; //type: boolean
        YLeaf is_forwarding; //type: boolean



}; // Rsvp::RequestDetails::RequestDetail::PolicyFlags


class Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags : public Entity
{
    public:
        PolicyQueryFlags();
        ~PolicyQueryFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_needed; //type: boolean
        YLeaf is_report_required; //type: boolean
        YLeaf is_resync; //type: boolean
        YLeaf is_bypass; //type: boolean



}; // Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags


class Rsvp::RequestDetails::RequestDetail::PsbKey : public Entity
{
    public:
        PsbKey();
        ~PsbKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf destination_port_or_tunnel_id; //type: uint32
        YLeaf protocol; //type: uint32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpMgmtSessionEnum
        YLeaf source_address; //type: string
        YLeaf source_port_or_lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf vrfid; //type: uint32



}; // Rsvp::RequestDetails::RequestDetail::PsbKey


class Rsvp::RequestDetails::RequestDetail::RsbKey : public Entity
{
    public:
        RsbKey();
        ~RsbKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf destination_address; //type: string
        YLeaf destination_port_or_tunnel_id; //type: uint32
        YLeaf protocol; //type: uint32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpMgmtSessionEnum
        YLeaf source_address; //type: string
        YLeaf source_port_or_lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf vrfid; //type: uint32



}; // Rsvp::RequestDetails::RequestDetail::RsbKey


class Rsvp::InterfaceBriefs : public Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceBrief; //type: Rsvp::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief> > interface_brief;


}; // Rsvp::InterfaceBriefs


class Rsvp::InterfaceBriefs::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string

        class BandwidthInformation; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation> bandwidth_information;


}; // Rsvp::InterfaceBriefs::InterfaceBrief


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation : public Entity
{
    public:
        BandwidthInformation();
        ~BandwidthInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dste_mode; //type: RsvpMgmtDsteModesEnum

        class PreStandardDsteInterface; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface
        class StandardDsteInterface; //type: Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;


}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface : public Entity
{
    public:
        PreStandardDsteInterface();
        ~PreStandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_subpool_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_subpool_bandwidth_absolute; //type: boolean



}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface


class Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface : public Entity
{
    public:
        StandardDsteInterface();
        ~StandardDsteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allocated_bit_rate; //type: uint64
        YLeaf max_flow_bandwidth; //type: uint64
        YLeaf max_bandwidth; //type: uint64
        YLeaf max_pool0_bandwidth; //type: uint64
        YLeaf max_pool1_bandwidth; //type: uint64
        YLeaf is_max_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc0_bandwidth_absolute; //type: boolean
        YLeaf is_max_bc1_bandwidth_absolute; //type: boolean



}; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface


class Rsvp::SessionDetaileds : public Entity
{
    public:
        SessionDetaileds();
        ~SessionDetaileds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SessionDetailed; //type: Rsvp::SessionDetaileds::SessionDetailed

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed> > session_detailed;


}; // Rsvp::SessionDetaileds


class Rsvp::SessionDetaileds::SessionDetailed : public Entity
{
    public:
        SessionDetailed();
        ~SessionDetailed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf destination_port; //type: int32
        YLeaf protocol; //type: int32
        YLeaf extended_tunnel_id; //type: string
        YLeaf session_type; //type: RsvpSessionEnum
        YLeaf p2mp_id; //type: int32
        YLeaf vrf_name; //type: string

        class Compact; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact
        class S2LSubLsp; //type: Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp
        class PsbRsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact> compact;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo> > psb_rsb_info;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp> s2l_sub_lsp;


}; // Rsvp::SessionDetaileds::SessionDetailed


class Rsvp::SessionDetaileds::SessionDetailed::Compact : public Entity
{
    public:
        Compact();
        ~Compact();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ps_bs; //type: uint32
        YLeaf rs_bs; //type: uint32
        YLeaf requests; //type: uint32
        YLeaf detail_list_size; //type: uint32

        class Session; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session> session;


}; // Rsvp::SessionDetaileds::SessionDetailed::Compact


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RsvpSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession> rsvp_session;


}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession : public Entity
{
    public:
        RsvpSession();
        ~RsvpSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_type; //type: RsvpMgmtSessionEnum

        class Ipv4; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4
        class Ipv4LspSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession
        class Ipv4UniSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession
        class Ipv4P2MpLspSession; //type: Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;


}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf protocol; //type: uint8
        YLeaf destination_port; //type: uint16



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession : public Entity
{
    public:
        Ipv4LspSession();
        ~Ipv4LspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession : public Entity
{
    public:
        Ipv4UniSession();
        ~Ipv4UniSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_address; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession


class Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession : public Entity
{
    public:
        Ipv4P2MpLspSession();
        ~Ipv4P2MpLspSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint16
        YLeaf extended_tunnel_id; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession


class Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp : public Entity
{
    public:
        S2LSubLsp();
        ~S2LSubLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s2l_destination_address; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo : public Entity
{
    public:
        PsbRsbInfo();
        ~PsbRsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo
        class RsbInfo; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo> > psb_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo> > rsb_info;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo : public Entity
{
    public:
        PsbInfo();
        ~PsbInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf destination_address; //type: string
        YLeaf lsp_id; //type: uint32
        YLeaf p2mp_sub_group_origin; //type: string
        YLeaf sub_group_id; //type: uint16
        YLeaf in_interface; //type: string
        YLeaf in_label; //type: uint32
        YLeaf lsp_wrap_label; //type: uint32
        YLeaf is_bad_address; //type: boolean
        YLeaf incoming_interface_address; //type: string
        YLeaf is_ero_valid; //type: boolean
        YLeaf is_rro_valid; //type: boolean
        YLeaf is_traffic_spec_valid; //type: boolean
        YLeaf tunnel_name; //type: string

        class GenericInLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel
        class TrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec
        class GenericTrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec
        class Association; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association
        class Protection; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection
        class ReverseLsp; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp
        class Ero; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero
        class Rro; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association> association;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero> > ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel> generic_in_label;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec> generic_traffic_spec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection> protection;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp> reverse_lsp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro> > rro;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec> traffic_spec;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel : public Entity
{
    public:
        GenericInLabel();
        ~GenericInLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf generic_label_type; //type: RsvpMgmtGenericLabelEnum

        class GeneralizedLabel; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel> generalized_label;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel : public Entity
{
    public:
        GeneralizedLabel();
        ~GeneralizedLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList value_; //type: list of  uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec : public Entity
{
    public:
        TrafficSpec();
        ~TrafficSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_average_rate; //type: uint64
        YLeaf traffic_max_burst; //type: uint64
        YLeaf traffic_peak_rate; //type: uint64
        YLeaf traffic_min_unit; //type: uint32
        YLeaf traffic_max_unit; //type: uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec : public Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tspec_type; //type: RsvpMgmtTspecEnum

        class G709OtnTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec : public Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_signal_type; //type: uint8
        YLeaf traffic_nvc; //type: uint16
        YLeaf traffic_multiplier; //type: uint16
        YLeaf traffic_bit_rate; //type: uint64



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec : public Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_average_rate; //type: uint64
        YLeaf traffic_max_burst; //type: uint64
        YLeaf traffic_peak_rate; //type: uint64
        YLeaf traffic_min_unit; //type: uint32
        YLeaf traffic_max_unit; //type: uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf association_type; //type: RsvpMgmtAssociationEnum

        class Ipv4; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4
        class Ipv6; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6
        class ExtendedIpv4; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4
        class ExtendedIpv6; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4> extended_ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6> extended_ipv6;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6> ipv6;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4 : public Entity
{
    public:
        ExtendedIpv4();
        ~ExtendedIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string
        YLeaf global_source; //type: uint32
        YLeafList extended_id; //type: list of  uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6 : public Entity
{
    public:
        ExtendedIpv6();
        ~ExtendedIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf id; //type: uint16
        YLeaf source; //type: string
        YLeaf global_source; //type: uint32
        YLeafList extended_id; //type: list of  uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf s; //type: boolean
        YLeaf p; //type: boolean
        YLeaf n; //type: boolean
        YLeaf o; //type: boolean

        class LspFlags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags
        class LinkFlags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags> link_flags;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags> lsp_flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags : public Entity
{
    public:
        LspFlags();
        ~LspFlags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rerouting; //type: boolean
        YLeaf rerouting_no_et; //type: boolean
        YLeaf one_to_n_protection_et; //type: boolean
        YLeaf one_plus_one_uni; //type: boolean
        YLeaf one_plus_one_bi; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags : public Entity
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


        YLeaf enhanced; //type: boolean
        YLeaf ded1_plus1; //type: boolean
        YLeaf ded1_to1; //type: boolean
        YLeaf shared; //type: boolean
        YLeaf unprotected; //type: boolean
        YLeaf extra_traffic; //type: boolean
        YLeaf reserved_bit1; //type: boolean
        YLeaf reserved_bit2; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp : public Entity
{
    public:
        ReverseLsp();
        ~ReverseLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GenericTrafficSpec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec
        class Ero; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero
        class UnsupSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero> > ero;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec> generic_traffic_spec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject> > unsup_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec : public Entity
{
    public:
        GenericTrafficSpec();
        ~GenericTrafficSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tspec_type; //type: RsvpMgmtTspecEnum

        class G709OtnTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec
        class IntsrvTspec; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec : public Entity
{
    public:
        G709OtnTspec();
        ~G709OtnTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_signal_type; //type: uint8
        YLeaf traffic_nvc; //type: uint16
        YLeaf traffic_multiplier; //type: uint16
        YLeaf traffic_bit_rate; //type: uint64



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec : public Entity
{
    public:
        IntsrvTspec();
        ~IntsrvTspec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf traffic_average_rate; //type: uint64
        YLeaf traffic_max_burst; //type: uint64
        YLeaf traffic_peak_rate; //type: uint64
        YLeaf traffic_min_unit; //type: uint32
        YLeaf traffic_max_unit; //type: uint32



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject : public Entity
{
    public:
        UnsupSubObject();
        ~UnsupSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList rsvp_mgmt_rev_lsp_unsupported_subobj; //type: list of  uint8



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero : public Entity
{
    public:
        Ero();
        ~Ero();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ero_type; //type: RsvpMgmtEroSubobjEnum

        class Ipv4EroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject
        class UnnumberedEroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject : public Entity
{
    public:
        Ipv4EroSubObject();
        ~Ipv4EroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_address; //type: string
        YLeaf prefix_length; //type: uint8



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject : public Entity
{
    public:
        UnnumberedEroSubObject();
        ~UnnumberedEroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_strict_route; //type: boolean
        YLeaf ero_interface_id; //type: uint32
        YLeaf ero_router_id; //type: string
        YLeaf status; //type: RsvpMgmtEroSubobjStatusEnum



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro : public Entity
{
    public:
        Rro();
        ~Rro();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_type; //type: RsvpMgmtRroSubobjEnum

        class Ipv4RroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject
        class LabelRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject
        class UnnumberedRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject
        class SrlgRroSubObject; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject : public Entity
{
    public:
        Ipv4RroSubObject();
        ~Ipv4RroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rro_address; //type: string

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_protection_available; //type: boolean
        YLeaf is_protection_in_use; //type: boolean
        YLeaf is_bandwidth_protected; //type: boolean
        YLeaf is_node_protection_available; //type: boolean
        YLeaf is_node_id; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject : public Entity
{
    public:
        LabelRroSubObject();
        ~LabelRroSubObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf is_label_variable_length; //type: boolean
        YLeafList variable_length_label; //type: list of  uint32

        class Flags; //type: Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags

        std::shared_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags> flags;


}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject


class Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_global_label; //type: boolean



}; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_4_ */

