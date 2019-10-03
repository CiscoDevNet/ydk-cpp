#ifndef _CISCO_IOS_XR_IP_RSVP_CFG_
#define _CISCO_IOS_XR_IP_RSVP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_cfg {

class Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

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

        class Neighbors; //type: Rsvp::Neighbors
        class Controllers; //type: Rsvp::Controllers
        class GlobalLogging; //type: Rsvp::GlobalLogging
        class GlobalBandwidth; //type: Rsvp::GlobalBandwidth
        class Interfaces; //type: Rsvp::Interfaces
        class Signalling; //type: Rsvp::Signalling
        class Authentication; //type: Rsvp::Authentication

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Controllers> controllers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalLogging> global_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth> global_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling> signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Authentication> authentication;
        
}; // Rsvp


class Rsvp::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Rsvp::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Rsvp::Neighbors


class Rsvp::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf neighbor; //type: string
        class Authentication; //type: Rsvp::Neighbors::Neighbor::Authentication

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Neighbors::Neighbor::Authentication> authentication;
        
}; // Rsvp::Neighbors::Neighbor


class Rsvp::Neighbors::Neighbor::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf key_chain; //type: string

}; // Rsvp::Neighbors::Neighbor::Authentication


class Rsvp::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

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

        class Controller; //type: Rsvp::Controllers::Controller

        ydk::YList controller;
        
}; // Rsvp::Controllers


class Rsvp::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf enable; //type: empty
        class CntlSignalling; //type: Rsvp::Controllers::Controller::CntlSignalling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Controllers::Controller::CntlSignalling> cntl_signalling;
        
}; // Rsvp::Controllers::Controller


class Rsvp::Controllers::Controller::CntlSignalling : public ydk::Entity
{
    public:
        CntlSignalling();
        ~CntlSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OutOfBand; //type: Rsvp::Controllers::Controller::CntlSignalling::OutOfBand

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Controllers::Controller::CntlSignalling::OutOfBand> out_of_band;
        
}; // Rsvp::Controllers::Controller::CntlSignalling


class Rsvp::Controllers::Controller::CntlSignalling::OutOfBand : public ydk::Entity
{
    public:
        OutOfBand();
        ~OutOfBand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missed_messages; //type: uint32
        ydk::YLeaf refresh_interval; //type: uint32

}; // Rsvp::Controllers::Controller::CntlSignalling::OutOfBand


class Rsvp::GlobalLogging : public ydk::Entity
{
    public:
        GlobalLogging();
        ~GlobalLogging();

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

        ydk::YLeaf log_nsr_status; //type: empty
        ydk::YLeaf log_issu_status; //type: empty

}; // Rsvp::GlobalLogging


class Rsvp::GlobalBandwidth : public ydk::Entity
{
    public:
        GlobalBandwidth();
        ~GlobalBandwidth();

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

        class DefaultInterfacePercent; //type: Rsvp::GlobalBandwidth::DefaultInterfacePercent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth::DefaultInterfacePercent> default_interface_percent;
        
}; // Rsvp::GlobalBandwidth


class Rsvp::GlobalBandwidth::DefaultInterfacePercent : public ydk::Entity
{
    public:
        DefaultInterfacePercent();
        ~DefaultInterfacePercent();

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

        class Mam; //type: Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam
        class Rdm; //type: Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam> mam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm> rdm;
        
}; // Rsvp::GlobalBandwidth::DefaultInterfacePercent


class Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam : public ydk::Entity
{
    public:
        Mam();
        ~Mam();

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

        ydk::YLeaf max_res_percent; //type: uint32
        ydk::YLeaf bc0_percent; //type: uint32
        ydk::YLeaf bc1_percent; //type: uint32

}; // Rsvp::GlobalBandwidth::DefaultInterfacePercent::Mam


class Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm : public ydk::Entity
{
    public:
        Rdm();
        ~Rdm();

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

        ydk::YLeaf bc0_percent; //type: uint32
        ydk::YLeaf bc1_percent; //type: uint32

}; // Rsvp::GlobalBandwidth::DefaultInterfacePercent::Rdm


class Rsvp::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Rsvp::Interfaces::Interface

        ydk::YList interface;
        
}; // Rsvp::Interfaces


class Rsvp::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf enable; //type: empty
        class IfSignalling; //type: Rsvp::Interfaces::Interface::IfSignalling
        class Bandwidth; //type: Rsvp::Interfaces::Interface::Bandwidth
        class Authentication; //type: Rsvp::Interfaces::Interface::Authentication

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling> if_signalling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Authentication> authentication;
        
}; // Rsvp::Interfaces::Interface


class Rsvp::Interfaces::Interface::IfSignalling : public ydk::Entity
{
    public:
        IfSignalling();
        ~IfSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf missed_messages; //type: uint32
        ydk::YLeaf hello_graceful_restart_if_based; //type: empty
        ydk::YLeaf pacing; //type: empty
        ydk::YLeaf refresh_interval; //type: uint32
        class RefreshReduction; //type: Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction
        class IntervalRate; //type: Rsvp::Interfaces::Interface::IfSignalling::IntervalRate
        class OutOfBand; //type: Rsvp::Interfaces::Interface::IfSignalling::OutOfBand

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction> refresh_reduction;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling::IntervalRate> interval_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::IfSignalling::OutOfBand> out_of_band;
        
}; // Rsvp::Interfaces::Interface::IfSignalling


class Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction : public ydk::Entity
{
    public:
        RefreshReduction();
        ~RefreshReduction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf reliable_ack_max_size; //type: uint32
        ydk::YLeaf reliable_ack_hold_time; //type: uint32
        ydk::YLeaf reliable_retransmit_time; //type: uint32
        ydk::YLeaf reliable_s_refresh; //type: empty
        ydk::YLeaf summary_max_size; //type: uint32
        ydk::YLeaf bundle_message_max_size; //type: uint32

}; // Rsvp::Interfaces::Interface::IfSignalling::RefreshReduction


class Rsvp::Interfaces::Interface::IfSignalling::IntervalRate : public ydk::Entity
{
    public:
        IntervalRate();
        ~IntervalRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf messages_per_interval; //type: uint32
        ydk::YLeaf interval_size; //type: uint32

}; // Rsvp::Interfaces::Interface::IfSignalling::IntervalRate


class Rsvp::Interfaces::Interface::IfSignalling::OutOfBand : public ydk::Entity
{
    public:
        OutOfBand();
        ~OutOfBand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missed_messages; //type: uint32
        ydk::YLeaf refresh_interval; //type: uint32

}; // Rsvp::Interfaces::Interface::IfSignalling::OutOfBand


class Rsvp::Interfaces::Interface::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mam; //type: Rsvp::Interfaces::Interface::Bandwidth::Mam
        class Rdm; //type: Rsvp::Interfaces::Interface::Bandwidth::Rdm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Bandwidth::Mam> mam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Interfaces::Interface::Bandwidth::Rdm> rdm;
        
}; // Rsvp::Interfaces::Interface::Bandwidth


class Rsvp::Interfaces::Interface::Bandwidth::Mam : public ydk::Entity
{
    public:
        Mam();
        ~Mam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_resv_bandwidth; //type: uint32
        ydk::YLeaf max_resv_flow; //type: uint32
        ydk::YLeaf bc0_bandwidth; //type: uint32
        ydk::YLeaf bc1_bandwidth; //type: uint32
        ydk::YLeaf bandwidth_mode; //type: RsvpBwCfg

}; // Rsvp::Interfaces::Interface::Bandwidth::Mam


class Rsvp::Interfaces::Interface::Bandwidth::Rdm : public ydk::Entity
{
    public:
        Rdm();
        ~Rdm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_resv_flow; //type: uint32
        ydk::YLeaf bc0_bandwidth; //type: uint32
        ydk::YLeaf bc1_bandwidth; //type: uint32
        ydk::YLeaf rdm_keyword; //type: RsvpRdm
        ydk::YLeaf bc0_keyword; //type: RsvpBc0
        ydk::YLeaf bc1_keyword; //type: RsvpBc1
        ydk::YLeaf bandwidth_mode; //type: RsvpBwCfg

}; // Rsvp::Interfaces::Interface::Bandwidth::Rdm


class Rsvp::Interfaces::Interface::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf key_chain; //type: string

}; // Rsvp::Interfaces::Interface::Authentication


class Rsvp::Signalling : public ydk::Entity
{
    public:
        Signalling();
        ~Signalling();

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

        ydk::YLeaf hello_graceful_restart_misses; //type: uint32
        ydk::YLeaf hello_graceful_restart_interval; //type: uint32
        class GlobalOutOfBand; //type: Rsvp::Signalling::GlobalOutOfBand
        class GracefulRestart; //type: Rsvp::Signalling::GracefulRestart
        class PrefixFiltering; //type: Rsvp::Signalling::PrefixFiltering
        class Pesr; //type: Rsvp::Signalling::Pesr
        class Checksum; //type: Rsvp::Signalling::Checksum

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::GlobalOutOfBand> global_out_of_band;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::PrefixFiltering> prefix_filtering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::Pesr> pesr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::Checksum> checksum;
        
}; // Rsvp::Signalling


class Rsvp::Signalling::GlobalOutOfBand : public ydk::Entity
{
    public:
        GlobalOutOfBand();
        ~GlobalOutOfBand();

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

        ydk::YLeaf vrf; //type: string

}; // Rsvp::Signalling::GlobalOutOfBand


class Rsvp::Signalling::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        class LspClassType; //type: Rsvp::Signalling::GracefulRestart::LspClassType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::GracefulRestart::LspClassType> lsp_class_type;
        
}; // Rsvp::Signalling::GracefulRestart


class Rsvp::Signalling::GracefulRestart::LspClassType : public ydk::Entity
{
    public:
        LspClassType();
        ~LspClassType();

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

        ydk::YLeaf enable; //type: boolean

}; // Rsvp::Signalling::GracefulRestart::LspClassType


class Rsvp::Signalling::PrefixFiltering : public ydk::Entity
{
    public:
        PrefixFiltering();
        ~PrefixFiltering();

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

        ydk::YLeaf acl; //type: string
        class DefaultDenyAction; //type: Rsvp::Signalling::PrefixFiltering::DefaultDenyAction

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rsvp_cfg::Rsvp::Signalling::PrefixFiltering::DefaultDenyAction> default_deny_action;
        
}; // Rsvp::Signalling::PrefixFiltering


class Rsvp::Signalling::PrefixFiltering::DefaultDenyAction : public ydk::Entity
{
    public:
        DefaultDenyAction();
        ~DefaultDenyAction();

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

        ydk::YLeaf drop; //type: empty

}; // Rsvp::Signalling::PrefixFiltering::DefaultDenyAction


class Rsvp::Signalling::Pesr : public ydk::Entity
{
    public:
        Pesr();
        ~Pesr();

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

        ydk::YLeaf disable; //type: empty

}; // Rsvp::Signalling::Pesr


class Rsvp::Signalling::Checksum : public ydk::Entity
{
    public:
        Checksum();
        ~Checksum();

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

        ydk::YLeaf disable; //type: empty

}; // Rsvp::Signalling::Checksum


class Rsvp::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        ydk::YLeaf life_time; //type: uint32
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf key_chain; //type: string

}; // Rsvp::Authentication

class RsvpBwCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf percentage;

        static int get_enum_value(const std::string & name) {
            if (name == "absolute") return 0;
            if (name == "percentage") return 1;
            return -1;
        }
};

class RsvpBc0 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bc0;
        static const ydk::Enum::YLeaf global_pool;
        static const ydk::Enum::YLeaf not_specified;

        static int get_enum_value(const std::string & name) {
            if (name == "bc0") return 1;
            if (name == "global-pool") return 2;
            if (name == "not-specified") return 3;
            return -1;
        }
};

class RsvpBc1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bc1;
        static const ydk::Enum::YLeaf sub_pool;

        static int get_enum_value(const std::string & name) {
            if (name == "bc1") return 1;
            if (name == "sub-pool") return 2;
            return -1;
        }
};

class RsvpRdm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rdm;
        static const ydk::Enum::YLeaf not_specified;
        static const ydk::Enum::YLeaf use_default_bandwidth;

        static int get_enum_value(const std::string & name) {
            if (name == "rdm") return 1;
            if (name == "not-specified") return 2;
            if (name == "use-default-bandwidth") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_CFG_ */

