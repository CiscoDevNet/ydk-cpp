#ifndef _CISCO_IOS_XR_ETHERNET_CFM_OPER_
#define _CISCO_IOS_XR_ETHERNET_CFM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_cfm_oper {

class Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

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

        class Nodes; //type: Cfm::Nodes
        class Global; //type: Cfm::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes> nodes;
        
}; // Cfm


class Cfm::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        class IncompleteTraceroutes; //type: Cfm::Global::IncompleteTraceroutes
        class MaintenancePoints; //type: Cfm::Global::MaintenancePoints
        class GlobalConfigurationErrors; //type: Cfm::Global::GlobalConfigurationErrors
        class MepConfigurationErrors; //type: Cfm::Global::MepConfigurationErrors
        class TracerouteCaches; //type: Cfm::Global::TracerouteCaches
        class LocalMeps; //type: Cfm::Global::LocalMeps
        class PeerMePv2S; //type: Cfm::Global::PeerMePv2S

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors> global_configuration_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes> incomplete_traceroutes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps> local_meps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MaintenancePoints> maintenance_points;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors> mep_configuration_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S> peer_me_pv2s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches> traceroute_caches;
        
}; // Cfm::Global


class Cfm::Global::GlobalConfigurationErrors : public ydk::Entity
{
    public:
        GlobalConfigurationErrors();
        ~GlobalConfigurationErrors();

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

        class GlobalConfigurationError; //type: Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError> > global_configuration_error;
        
}; // Cfm::Global::GlobalConfigurationErrors


class Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError : public ydk::Entity
{
    public:
        GlobalConfigurationError();
        ~GlobalConfigurationError();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf bridge_domain_is_configured; //type: boolean
        ydk::YLeaf l2_fib_download_error; //type: boolean
        class BridgeDomainId; //type: Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId> bridge_domain_id;
        
}; // Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError


class Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId : public ydk::Entity
{
    public:
        BridgeDomainId();
        ~BridgeDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_id_format; //type: CfmBagBdidFmt
        ydk::YLeaf group; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ce_id; //type: uint16
        ydk::YLeaf remote_ce_id; //type: uint16
        ydk::YLeaf evi; //type: uint32

}; // Cfm::Global::GlobalConfigurationErrors::GlobalConfigurationError::BridgeDomainId


class Cfm::Global::IncompleteTraceroutes : public ydk::Entity
{
    public:
        IncompleteTraceroutes();
        ~IncompleteTraceroutes();

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

        class IncompleteTraceroute; //type: Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute> > incomplete_traceroute;
        
}; // Cfm::Global::IncompleteTraceroutes


class Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute : public ydk::Entity
{
    public:
        IncompleteTraceroute();
        ~IncompleteTraceroute();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf transaction_id; //type: int32
        ydk::YLeaf time_left; //type: uint64
        class TracerouteInformation; //type: Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation> traceroute_information;
        
}; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute


class Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation : public ydk::Entity
{
    public:
        TracerouteInformation();
        ~TracerouteInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf source_mep_id; //type: uint16
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf source_mac_address; //type: string
        ydk::YLeaf target_mac_address; //type: string
        ydk::YLeaf directed_mac_address; //type: string
        ydk::YLeaf target_mep_id; //type: uint16
        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf transaction_id; //type: uint32
        class Options; //type: Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options> options;
        
}; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation


class Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options : public ydk::Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: CfmPmLtMode
        class BasicOptions; //type: Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions
        class ExploratoryOptions; //type: Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions> basic_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions> exploratory_options;
        
}; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options


class Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions : public ydk::Entity
{
    public:
        BasicOptions();
        ~BasicOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto; //type: boolean
        ydk::YLeaf fdb_only; //type: boolean

}; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::BasicOptions


class Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions : public ydk::Entity
{
    public:
        ExploratoryOptions();
        ~ExploratoryOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_model; //type: CfmPmEltDelayModel
        ydk::YLeaf delay_constant_factor; //type: uint32
        ydk::YLeaf reply_filter; //type: CfmPmElmReplyFilter

}; // Cfm::Global::IncompleteTraceroutes::IncompleteTraceroute::TracerouteInformation::Options::ExploratoryOptions


class Cfm::Global::LocalMeps : public ydk::Entity
{
    public:
        LocalMeps();
        ~LocalMeps();

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

        class LocalMep; //type: Cfm::Global::LocalMeps::LocalMep

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep> > local_mep;
        
}; // Cfm::Global::LocalMeps


class Cfm::Global::LocalMeps::LocalMep : public ydk::Entity
{
    public:
        LocalMep();
        ~LocalMep();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf domain_xr; //type: string
        ydk::YLeaf service_xr; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf mep_id_xr; //type: uint16
        ydk::YLeaf interface_xr; //type: string
        ydk::YLeaf interface_state; //type: string
        ydk::YLeaf interworking_state; //type: CfmBagIwState
        ydk::YLeaf stp_state; //type: CfmBagStpState
        ydk::YLeaf mep_direction; //type: CfmBagDirection
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf peer_meps_detected; //type: uint32
        ydk::YLeaf peer_meps_with_errors_detected; //type: uint32
        ydk::YLeaf remote_defect; //type: boolean
        ydk::YLeaf fault_notification_state; //type: CfmPmMepFngState
        ydk::YLeaf ccm_generation_enabled; //type: boolean
        ydk::YLeaf ccm_interval; //type: CfmBagCcmInterval
        ydk::YLeaf ccm_offload; //type: CfmBagCcmOffload
        ydk::YLeaf highest_defect; //type: CfmPmMepDefect
        ydk::YLeaf rdi_defect; //type: boolean
        ydk::YLeaf mac_status_defect; //type: boolean
        ydk::YLeaf peer_mep_ccm_defect; //type: boolean
        ydk::YLeaf error_ccm_defect; //type: boolean
        ydk::YLeaf cross_connect_ccm_defect; //type: boolean
        ydk::YLeaf next_lbm_id; //type: uint32
        ydk::YLeaf next_ltm_id; //type: uint32
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf efd_triggered; //type: boolean
        ydk::YLeaf standby; //type: boolean
        ydk::YLeaf hairpin; //type: boolean
        ydk::YLeaf defects_ignored; //type: boolean
        class Statistics; //type: Cfm::Global::LocalMeps::LocalMep::Statistics
        class AisStatistics; //type: Cfm::Global::LocalMeps::LocalMep::AisStatistics
        class Defects; //type: Cfm::Global::LocalMeps::LocalMep::Defects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics> ais_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Defects> defects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Statistics> statistics;
        
}; // Cfm::Global::LocalMeps::LocalMep


class Cfm::Global::LocalMeps::LocalMep::AisStatistics : public ydk::Entity
{
    public:
        AisStatistics();
        ~AisStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf interval; //type: CfmBagAisInterval
        ydk::YLeaf sending_ais; //type: CfmPmAisTransmit
        ydk::YLeaf receiving_ais; //type: CfmPmAisReceive
        ydk::YLeaf last_interval; //type: CfmBagAisInterval
        ydk::YLeaf last_mac_address; //type: string
        class SendingStart; //type: Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart
        class ReceivingStart; //type: Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart> receiving_start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart> sending_start;
        
}; // Cfm::Global::LocalMeps::LocalMep::AisStatistics


class Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart : public ydk::Entity
{
    public:
        ReceivingStart();
        ~ReceivingStart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart


class Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart : public ydk::Entity
{
    public:
        SendingStart();
        ~SendingStart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart


class Cfm::Global::LocalMeps::LocalMep::Defects : public ydk::Entity
{
    public:
        Defects();
        ~Defects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais_received; //type: boolean
        ydk::YLeaf peer_meps_that_timed_out; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf auto_missing; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf local_port_status; //type: boolean
        ydk::YLeaf peer_port_status; //type: boolean
        class RemoteMepsDefects; //type: Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects> remote_meps_defects;
        
}; // Cfm::Global::LocalMeps::LocalMep::Defects


class Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects : public ydk::Entity
{
    public:
        RemoteMepsDefects();
        ~RemoteMepsDefects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loss_threshold_exceeded; //type: boolean
        ydk::YLeaf invalid_level; //type: boolean
        ydk::YLeaf invalid_maid; //type: boolean
        ydk::YLeaf invalid_ccm_interval; //type: boolean
        ydk::YLeaf received_our_mac; //type: boolean
        ydk::YLeaf received_our_mep_id; //type: boolean
        ydk::YLeaf received_rdi; //type: boolean

}; // Cfm::Global::LocalMeps::LocalMep::Defects::RemoteMepsDefects


class Cfm::Global::LocalMeps::LocalMep::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccms_sent; //type: uint64
        ydk::YLeaf ccms_received; //type: uint64
        ydk::YLeaf ccms_out_of_sequence; //type: uint64
        ydk::YLeaf ccms_discarded; //type: uint64
        ydk::YLeaf lb_ms_sent; //type: uint64
        ydk::YLeaf lb_rs_sent; //type: uint64
        ydk::YLeaf lb_rs_received; //type: uint64
        ydk::YLeaf lb_rs_out_of_sequence; //type: uint64
        ydk::YLeaf lb_rs_bad_data; //type: uint64
        ydk::YLeaf lb_ms_received; //type: uint64
        ydk::YLeaf lt_rs_received_unexpected; //type: uint64
        ydk::YLeaf ai_ss_sent; //type: uint64
        ydk::YLeaf ai_ss_received; //type: uint64
        ydk::YLeaf lc_ks_received; //type: uint64
        ydk::YLeaf dm_ms_sent; //type: uint64
        ydk::YLeaf dm_ms_received; //type: uint64
        ydk::YLeaf dm_rs_sent; //type: uint64
        ydk::YLeaf dm_rs_received; //type: uint64
        ydk::YLeaf sl_ms_sent; //type: uint64
        ydk::YLeaf sl_ms_received; //type: uint64
        ydk::YLeaf sl_rs_sent; //type: uint64
        ydk::YLeaf sl_rs_received; //type: uint64
        ydk::YLeaf lm_ms_sent; //type: uint64
        ydk::YLeaf lm_ms_received; //type: uint64
        ydk::YLeaf lm_rs_sent; //type: uint64
        ydk::YLeaf lm_rs_received; //type: uint64
        ydk::YLeaf bn_ms_received; //type: uint64
        ydk::YLeaf bn_ms_discarded; //type: uint64

}; // Cfm::Global::LocalMeps::LocalMep::Statistics


class Cfm::Global::MaintenancePoints : public ydk::Entity
{
    public:
        MaintenancePoints();
        ~MaintenancePoints();

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

        class MaintenancePoint; //type: Cfm::Global::MaintenancePoints::MaintenancePoint

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MaintenancePoints::MaintenancePoint> > maintenance_point;
        
}; // Cfm::Global::MaintenancePoints


class Cfm::Global::MaintenancePoints::MaintenancePoint : public ydk::Entity
{
    public:
        MaintenancePoint();
        ~MaintenancePoint();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf mep_has_error; //type: boolean
        ydk::YLeaf mac_address; //type: string
        class MaintenancePoint_; //type: Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_> maintenance_point;
        
}; // Cfm::Global::MaintenancePoints::MaintenancePoint


class Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_ : public ydk::Entity
{
    public:
        MaintenancePoint_();
        ~MaintenancePoint_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf maintenance_point_type; //type: CfmMaMpVariety
        ydk::YLeaf mep_id; //type: uint16

}; // Cfm::Global::MaintenancePoints::MaintenancePoint::MaintenancePoint_


class Cfm::Global::MepConfigurationErrors : public ydk::Entity
{
    public:
        MepConfigurationErrors();
        ~MepConfigurationErrors();

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

        class MepConfigurationError; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError> > mep_configuration_error;
        
}; // Cfm::Global::MepConfigurationErrors


class Cfm::Global::MepConfigurationErrors::MepConfigurationError : public ydk::Entity
{
    public:
        MepConfigurationError();
        ~MepConfigurationError();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf ccm_interval; //type: CfmBagCcmInterval
        ydk::YLeaf no_domain; //type: boolean
        ydk::YLeaf no_service; //type: boolean
        ydk::YLeaf bridge_domain_mismatch; //type: boolean
        ydk::YLeaf level_conflict; //type: boolean
        ydk::YLeaf ccm_interval_not_supported; //type: boolean
        ydk::YLeaf offload_out_of_resources; //type: boolean
        ydk::YLeaf offload_multiple_local_mep; //type: boolean
        ydk::YLeaf offload_no_cross_check; //type: boolean
        ydk::YLeaf offload_multiple_peer_meps; //type: boolean
        ydk::YLeaf offload_mep_direction_not_supported; //type: boolean
        ydk::YLeaf ais_configured; //type: boolean
        ydk::YLeaf bundle_level0; //type: boolean
        ydk::YLeaf bridge_domain_not_in_bd_infra; //type: boolean
        ydk::YLeaf maid_format_not_supported; //type: boolean
        ydk::YLeaf fatal_offload_error; //type: boolean
        ydk::YLeaf satellite_limitation; //type: boolean
        ydk::YLeaf sla_loopback_operations_disabled; //type: boolean
        ydk::YLeaf sla_synthetic_loss_operations_disabled; //type: boolean
        ydk::YLeaf sla_delay_measurement_operations_disabled; //type: boolean
        ydk::YLeaf no_valid_mac_address; //type: boolean
        ydk::YLeaf no_interface_type; //type: boolean
        ydk::YLeaf not_in_im; //type: boolean
        ydk::YLeaf no_mlacp; //type: boolean
        ydk::YLeaf satellite_error_string; //type: string
        ydk::YLeaf satellite_id; //type: uint16
        class Mep; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep
        class ServiceBridgeDomain; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain
        class InterfaceBridgeDomain; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain
        class SatelliteCapabilities; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain> interface_bridge_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep> mep;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities> satellite_capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain> service_bridge_domain;
        
}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError


class Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain : public ydk::Entity
{
    public:
        InterfaceBridgeDomain();
        ~InterfaceBridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_id_format; //type: CfmBagBdidFmt
        ydk::YLeaf group; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ce_id; //type: uint16
        ydk::YLeaf remote_ce_id; //type: uint16
        ydk::YLeaf evi; //type: uint32

}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain


class Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep : public ydk::Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf maintenance_point_type; //type: CfmMaMpVariety
        ydk::YLeaf mep_id; //type: uint16

}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep


class Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities : public ydk::Entity
{
    public:
        SatelliteCapabilities();
        ~SatelliteCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Loopback; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback
        class DelayMeasurement; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement
        class SyntheticLossMeasurement; //type: Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement> delay_measurement;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback> loopback;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement> synthetic_loss_measurement;
        
}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities


class Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement : public ydk::Entity
{
    public:
        DelayMeasurement();
        ~DelayMeasurement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf responder; //type: boolean
        ydk::YLeaf controller; //type: boolean

}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement


class Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback : public ydk::Entity
{
    public:
        Loopback();
        ~Loopback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf responder; //type: boolean
        ydk::YLeaf controller; //type: boolean

}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback


class Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement : public ydk::Entity
{
    public:
        SyntheticLossMeasurement();
        ~SyntheticLossMeasurement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf responder; //type: boolean
        ydk::YLeaf controller; //type: boolean

}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement


class Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain : public ydk::Entity
{
    public:
        ServiceBridgeDomain();
        ~ServiceBridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain_id_format; //type: CfmBagBdidFmt
        ydk::YLeaf group; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ce_id; //type: uint16
        ydk::YLeaf remote_ce_id; //type: uint16
        ydk::YLeaf evi; //type: uint32

}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain


class Cfm::Global::PeerMePv2S : public ydk::Entity
{
    public:
        PeerMePv2S();
        ~PeerMePv2S();

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

        class PeerMePv2; //type: Cfm::Global::PeerMePv2S::PeerMePv2

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2> > peer_me_pv2;
        
}; // Cfm::Global::PeerMePv2S


class Cfm::Global::PeerMePv2S::PeerMePv2 : public ydk::Entity
{
    public:
        PeerMePv2();
        ~PeerMePv2();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf local_mep_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf peer_mep_id; //type: uint32
        ydk::YLeaf peer_mac_address; //type: string
        ydk::YLeaf domain_xr; //type: string
        ydk::YLeaf service_xr; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf mep_id; //type: uint16
        ydk::YLeaf interface_xr; //type: string
        ydk::YLeaf mep_direction; //type: CfmBagDirection
        ydk::YLeaf standby; //type: boolean
        class PeerMep; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep> peer_mep;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep : public ydk::Entity
{
    public:
        PeerMep();
        ~PeerMep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mep_id; //type: uint16
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf cross_check_state; //type: CfmPmRmepXcState
        ydk::YLeaf peer_mep_state; //type: CfmPmRmepState
        ydk::YLeaf ccm_offload; //type: CfmBagCcmOffload
        class ErrorState; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState
        class LastUpDownTime; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime
        class LastCcmReceived; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived
        class Statistics; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState> error_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived> last_ccm_received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime> last_up_down_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics> statistics;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState : public ydk::Entity
{
    public:
        ErrorState();
        ~ErrorState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loss_threshold_exceeded; //type: boolean
        ydk::YLeaf invalid_level; //type: boolean
        ydk::YLeaf invalid_maid; //type: boolean
        ydk::YLeaf invalid_ccm_interval; //type: boolean
        ydk::YLeaf received_our_mac; //type: boolean
        ydk::YLeaf received_our_mep_id; //type: boolean
        ydk::YLeaf received_rdi; //type: boolean

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::ErrorState


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived : public ydk::Entity
{
    public:
        LastCcmReceived();
        ~LastCcmReceived();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_status; //type: CfmPmPortStatus
        ydk::YLeaf interface_status; //type: CfmPmIntfStatus
        ydk::YLeaf additional_interface_status; //type: CfmPmAddlIntfStatus
        ydk::YLeaf raw_data; //type: string
        class Header; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header
        class SenderId; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId
        class MepName; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName
        class OrganizationSpecificTlv; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv
        class UnknownTlv; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName> mep_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv> > organization_specific_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId> sender_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv> > unknown_tlv;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf interval; //type: CfmBagCcmInterval
        ydk::YLeaf rdi; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf mep_id; //type: uint16
        ydk::YLeaf mdid_format; //type: uint8
        ydk::YLeaf short_ma_name_format; //type: uint8
        class Mdid; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid
        class ShortMaName; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid> mdid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName> short_ma_name;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid : public ydk::Entity
{
    public:
        Mdid();
        ~Mdid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mdid_format_value; //type: CfmBagMdidFmt
        ydk::YLeaf dns_like_name; //type: string
        ydk::YLeaf string_name; //type: string
        ydk::YLeaf mdid_data; //type: string
        class MacName; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName> mac_name;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName : public ydk::Entity
{
    public:
        MacName();
        ~MacName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf integer; //type: uint16

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName : public ydk::Entity
{
    public:
        ShortMaName();
        ~ShortMaName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf short_ma_name_format_value; //type: CfmBagSmanFmt
        ydk::YLeaf vlan_id_name; //type: uint16
        ydk::YLeaf string_name; //type: string
        ydk::YLeaf integer_name; //type: uint16
        ydk::YLeaf icc_based; //type: string
        ydk::YLeaf short_ma_name_data; //type: string
        class VpnIdName; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName> vpn_id_name;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName : public ydk::Entity
{
    public:
        VpnIdName();
        ~VpnIdName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: uint32
        ydk::YLeaf index_; //type: uint32

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName : public ydk::Entity
{
    public:
        MepName();
        ~MepName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::MepName


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv : public ydk::Entity
{
    public:
        OrganizationSpecificTlv();
        ~OrganizationSpecificTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: string
        ydk::YLeaf subtype; //type: uint8
        ydk::YLeaf value_; //type: string

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId : public ydk::Entity
{
    public:
        SenderId();
        ~SenderId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf management_address_domain; //type: string
        ydk::YLeaf management_address; //type: string
        class ChassisId; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId> chassis_id;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId : public ydk::Entity
{
    public:
        ChassisId();
        ~ChassisId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_id_type; //type: CfmPmChassisIdFmt
        ydk::YLeaf chassis_id_type_value; //type: uint8
        ydk::YLeaf chassis_id; //type: string
        class ChassisIdValue; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue> chassis_id_value;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue : public ydk::Entity
{
    public:
        ChassisIdValue();
        ~ChassisIdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_id_format; //type: CfmPmIdFmt
        ydk::YLeaf chassis_id_string; //type: string
        ydk::YLeaf chassis_id_mac; //type: string
        ydk::YLeaf chassis_id_raw; //type: string

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf typecode; //type: uint8
        ydk::YLeaf value_; //type: string

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime : public ydk::Entity
{
    public:
        LastUpDownTime();
        ~LastUpDownTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::LastUpDownTime


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ccms_received; //type: uint64
        ydk::YLeaf ccms_wrong_level; //type: uint64
        ydk::YLeaf ccms_invalid_maid; //type: uint64
        ydk::YLeaf ccms_invalid_interval; //type: uint64
        ydk::YLeaf ccms_invalid_source_mac_address; //type: uint64
        ydk::YLeaf ccms_our_mep_id; //type: uint64
        ydk::YLeaf ccms_rdi; //type: uint64
        ydk::YLeaf ccms_out_of_sequence; //type: uint64
        ydk::YLeaf last_ccm_sequence_number; //type: uint32
        class LastCcmReceivedTime; //type: Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime> last_ccm_received_time;
        
}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics


class Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime : public ydk::Entity
{
    public:
        LastCcmReceivedTime();
        ~LastCcmReceivedTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Cfm::Global::PeerMePv2S::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime


class Cfm::Global::TracerouteCaches : public ydk::Entity
{
    public:
        TracerouteCaches();
        ~TracerouteCaches();

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

        class TracerouteCache; //type: Cfm::Global::TracerouteCaches::TracerouteCache

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache> > traceroute_cache;
        
}; // Cfm::Global::TracerouteCaches


class Cfm::Global::TracerouteCaches::TracerouteCache : public ydk::Entity
{
    public:
        TracerouteCache();
        ~TracerouteCache();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf mep_id; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf transaction_id; //type: int32
        ydk::YLeaf replies_dropped; //type: uint32
        class TracerouteInformation; //type: Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation
        class LinktraceReply; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply
        class ExploratoryLinktraceReply; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply> > exploratory_linktrace_reply;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply> > linktrace_reply;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation> traceroute_information;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply : public ydk::Entity
{
    public:
        ExploratoryLinktraceReply();
        ~ExploratoryLinktraceReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf raw_data; //type: string
        class Header; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header
        class SenderId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId
        class ReplyIngress; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress
        class ReplyEgress; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress
        class LastHop; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop
        class OrganizationSpecificTlv; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv
        class UnknownTlv; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop> last_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv> > organization_specific_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress> reply_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress> reply_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId> sender_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv> > unknown_tlv;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf forwarded; //type: boolean
        ydk::YLeaf terminal_mep; //type: boolean
        ydk::YLeaf reply_filter_unknown; //type: boolean
        ydk::YLeaf transaction_id; //type: uint32
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf relay_action; //type: CfmPmElrRelayAction
        ydk::YLeaf next_hop_timeout; //type: uint32
        ydk::YLeaf delay_model; //type: CfmPmEltDelayModel

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::Header


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop : public ydk::Entity
{
    public:
        LastHop();
        ~LastHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_hop_format; //type: CfmPmLastHopFmt
        ydk::YLeaf host_name; //type: string
        class EgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId> egress_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId : public ydk::Entity
{
    public:
        EgressId();
        ~EgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop::EgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv : public ydk::Entity
{
    public:
        OrganizationSpecificTlv();
        ~OrganizationSpecificTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: string
        ydk::YLeaf subtype; //type: uint8
        ydk::YLeaf value_; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::OrganizationSpecificTlv


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress : public ydk::Entity
{
    public:
        ReplyEgress();
        ~ReplyEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: CfmPmElrEgressAction
        ydk::YLeaf mac_address; //type: string
        class LastEgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId
        class NextEgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId
        class PortId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId> last_egress_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId> next_egress_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId> port_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId : public ydk::Entity
{
    public:
        LastEgressId();
        ~LastEgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::LastEgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId : public ydk::Entity
{
    public:
        NextEgressId();
        ~NextEgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::NextEgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId : public ydk::Entity
{
    public:
        PortId();
        ~PortId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_type; //type: CfmPmPortIdFmt
        ydk::YLeaf port_id_type_value; //type: uint8
        ydk::YLeaf port_id; //type: string
        class PortIdValue; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue> port_id_value;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue : public ydk::Entity
{
    public:
        PortIdValue();
        ~PortIdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_format; //type: CfmPmIdFmt
        ydk::YLeaf port_id_string; //type: string
        ydk::YLeaf port_id_mac; //type: string
        ydk::YLeaf port_id_raw; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress::PortId::PortIdValue


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress : public ydk::Entity
{
    public:
        ReplyIngress();
        ~ReplyIngress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: CfmPmElrIngressAction
        ydk::YLeaf mac_address; //type: string
        class LastEgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId
        class NextEgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId
        class PortId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId> last_egress_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId> next_egress_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId> port_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId : public ydk::Entity
{
    public:
        LastEgressId();
        ~LastEgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::LastEgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId : public ydk::Entity
{
    public:
        NextEgressId();
        ~NextEgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::NextEgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId : public ydk::Entity
{
    public:
        PortId();
        ~PortId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_type; //type: CfmPmPortIdFmt
        ydk::YLeaf port_id_type_value; //type: uint8
        ydk::YLeaf port_id; //type: string
        class PortIdValue; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue> port_id_value;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue : public ydk::Entity
{
    public:
        PortIdValue();
        ~PortIdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_format; //type: CfmPmIdFmt
        ydk::YLeaf port_id_string; //type: string
        ydk::YLeaf port_id_mac; //type: string
        ydk::YLeaf port_id_raw; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress::PortId::PortIdValue


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId : public ydk::Entity
{
    public:
        SenderId();
        ~SenderId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf management_address_domain; //type: string
        ydk::YLeaf management_address; //type: string
        class ChassisId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId> chassis_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId : public ydk::Entity
{
    public:
        ChassisId();
        ~ChassisId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_id_type; //type: CfmPmChassisIdFmt
        ydk::YLeaf chassis_id_type_value; //type: uint8
        ydk::YLeaf chassis_id; //type: string
        class ChassisIdValue; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue> chassis_id_value;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue : public ydk::Entity
{
    public:
        ChassisIdValue();
        ~ChassisIdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_id_format; //type: CfmPmIdFmt
        ydk::YLeaf chassis_id_string; //type: string
        ydk::YLeaf chassis_id_mac; //type: string
        ydk::YLeaf chassis_id_raw; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId::ChassisId::ChassisIdValue


class Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf typecode; //type: uint8
        ydk::YLeaf value_; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::UnknownTlv


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply : public ydk::Entity
{
    public:
        LinktraceReply();
        ~LinktraceReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf raw_data; //type: string
        class Header; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header
        class SenderId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId
        class EgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId
        class ReplyIngress; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress
        class ReplyEgress; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress
        class LastHop; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop
        class OrganizationSpecificTlv; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv
        class UnknownTlv; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId> egress_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop> last_hop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv> > organization_specific_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress> reply_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress> reply_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId> sender_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv> > unknown_tlv;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId : public ydk::Entity
{
    public:
        EgressId();
        ~EgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LastEgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId
        class NextEgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId> last_egress_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId> next_egress_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId : public ydk::Entity
{
    public:
        LastEgressId();
        ~LastEgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::LastEgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId : public ydk::Entity
{
    public:
        NextEgressId();
        ~NextEgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId::NextEgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf use_fdb_only; //type: boolean
        ydk::YLeaf forwarded; //type: boolean
        ydk::YLeaf terminal_mep; //type: boolean
        ydk::YLeaf transaction_id; //type: uint32
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf relay_action; //type: CfmPmRelayAction

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop : public ydk::Entity
{
    public:
        LastHop();
        ~LastHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_hop_format; //type: CfmPmLastHopFmt
        ydk::YLeaf host_name; //type: string
        class EgressId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId> egress_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId : public ydk::Entity
{
    public:
        EgressId();
        ~EgressId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unique_id; //type: uint16
        ydk::YLeaf mac_address; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop::EgressId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv : public ydk::Entity
{
    public:
        OrganizationSpecificTlv();
        ~OrganizationSpecificTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: string
        ydk::YLeaf subtype; //type: uint8
        ydk::YLeaf value_; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::OrganizationSpecificTlv


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress : public ydk::Entity
{
    public:
        ReplyEgress();
        ~ReplyEgress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: CfmPmEgressAction
        ydk::YLeaf mac_address; //type: string
        class PortId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId> port_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId : public ydk::Entity
{
    public:
        PortId();
        ~PortId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_type; //type: CfmPmPortIdFmt
        ydk::YLeaf port_id_type_value; //type: uint8
        ydk::YLeaf port_id; //type: string
        class PortIdValue; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue> port_id_value;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue : public ydk::Entity
{
    public:
        PortIdValue();
        ~PortIdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_format; //type: CfmPmIdFmt
        ydk::YLeaf port_id_string; //type: string
        ydk::YLeaf port_id_mac; //type: string
        ydk::YLeaf port_id_raw; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress::PortId::PortIdValue


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress : public ydk::Entity
{
    public:
        ReplyIngress();
        ~ReplyIngress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: CfmPmIngressAction
        ydk::YLeaf mac_address; //type: string
        class PortId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId> port_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId : public ydk::Entity
{
    public:
        PortId();
        ~PortId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_type; //type: CfmPmPortIdFmt
        ydk::YLeaf port_id_type_value; //type: uint8
        ydk::YLeaf port_id; //type: string
        class PortIdValue; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue> port_id_value;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue : public ydk::Entity
{
    public:
        PortIdValue();
        ~PortIdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_id_format; //type: CfmPmIdFmt
        ydk::YLeaf port_id_string; //type: string
        ydk::YLeaf port_id_mac; //type: string
        ydk::YLeaf port_id_raw; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress::PortId::PortIdValue


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId : public ydk::Entity
{
    public:
        SenderId();
        ~SenderId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf management_address_domain; //type: string
        ydk::YLeaf management_address; //type: string
        class ChassisId; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId> chassis_id;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId : public ydk::Entity
{
    public:
        ChassisId();
        ~ChassisId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_id_type; //type: CfmPmChassisIdFmt
        ydk::YLeaf chassis_id_type_value; //type: uint8
        ydk::YLeaf chassis_id; //type: string
        class ChassisIdValue; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue> chassis_id_value;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue : public ydk::Entity
{
    public:
        ChassisIdValue();
        ~ChassisIdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_id_format; //type: CfmPmIdFmt
        ydk::YLeaf chassis_id_string; //type: string
        ydk::YLeaf chassis_id_mac; //type: string
        ydk::YLeaf chassis_id_raw; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId::ChassisId::ChassisIdValue


class Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf typecode; //type: uint8
        ydk::YLeaf value_; //type: string

}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::UnknownTlv


class Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation : public ydk::Entity
{
    public:
        TracerouteInformation();
        ~TracerouteInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf source_mep_id; //type: uint16
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf source_mac_address; //type: string
        ydk::YLeaf target_mac_address; //type: string
        ydk::YLeaf directed_mac_address; //type: string
        ydk::YLeaf target_mep_id; //type: uint16
        ydk::YLeaf timestamp; //type: uint64
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf transaction_id; //type: uint32
        class Options; //type: Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options> options;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation


class Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options : public ydk::Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: CfmPmLtMode
        class BasicOptions; //type: Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions
        class ExploratoryOptions; //type: Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions> basic_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions> exploratory_options;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options


class Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions : public ydk::Entity
{
    public:
        BasicOptions();
        ~BasicOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_auto; //type: boolean
        ydk::YLeaf fdb_only; //type: boolean

}; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::BasicOptions


class Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions : public ydk::Entity
{
    public:
        ExploratoryOptions();
        ~ExploratoryOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_model; //type: CfmPmEltDelayModel
        ydk::YLeaf delay_constant_factor; //type: uint32
        ydk::YLeaf reply_filter; //type: CfmPmElmReplyFilter

}; // Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation::Options::ExploratoryOptions


class Cfm::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Cfm::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node> > node;
        
}; // Cfm::Nodes


class Cfm::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node; //type: string
        class InterfaceAises; //type: Cfm::Nodes::Node::InterfaceAises
        class InterfaceStatistics; //type: Cfm::Nodes::Node::InterfaceStatistics
        class Summary; //type: Cfm::Nodes::Node::Summary
        class CcmLearningDatabases; //type: Cfm::Nodes::Node::CcmLearningDatabases

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::CcmLearningDatabases> ccm_learning_databases;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises> interface_aises;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::Summary> summary;
        
}; // Cfm::Nodes::Node


class Cfm::Nodes::Node::CcmLearningDatabases : public ydk::Entity
{
    public:
        CcmLearningDatabases();
        ~CcmLearningDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CcmLearningDatabase; //type: Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase> > ccm_learning_database;
        
}; // Cfm::Nodes::Node::CcmLearningDatabases


class Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase : public ydk::Entity
{
    public:
        CcmLearningDatabase();
        ~CcmLearningDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf service; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf domain_xr; //type: string
        ydk::YLeaf level; //type: CfmBagMdLevel
        ydk::YLeaf service_xr; //type: string
        ydk::YLeaf source_mac_address; //type: string
        ydk::YLeaf ingress_interface; //type: uint32
        ydk::YLeaf stale; //type: boolean
        ydk::YLeaf ingress_interface_string; //type: string

}; // Cfm::Nodes::Node::CcmLearningDatabases::CcmLearningDatabase


class Cfm::Nodes::Node::InterfaceAises : public ydk::Entity
{
    public:
        InterfaceAises();
        ~InterfaceAises();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceAis; //type: Cfm::Nodes::Node::InterfaceAises::InterfaceAis

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis> > interface_ais;
        
}; // Cfm::Nodes::Node::InterfaceAises


class Cfm::Nodes::Node::InterfaceAises::InterfaceAis : public ydk::Entity
{
    public:
        InterfaceAis();
        ~InterfaceAis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf direction; //type: CfmAisDir
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_state; //type: string
        ydk::YLeaf interworking_state; //type: CfmBagIwState
        ydk::YLeaf stp_state; //type: CfmBagStpState
        class Statistics; //type: Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics> statistics;
        
}; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis


class Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: CfmBagDirection
        ydk::YLeaf lowest_level; //type: CfmBagMdLevel
        ydk::YLeaf transmission_level; //type: CfmBagMdLevel
        ydk::YLeaf transmission_interval; //type: CfmBagAisInterval
        ydk::YLeaf sent_packets; //type: uint32
        ydk::YLeafList via_level; //type: list of  CfmBagMdLevel
        class Defects; //type: Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects
        class LastStarted; //type: Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects> defects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted> last_started;
        
}; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics


class Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects : public ydk::Entity
{
    public:
        Defects();
        ~Defects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais_received; //type: boolean
        ydk::YLeaf peer_meps_that_timed_out; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf auto_missing; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf local_port_status; //type: boolean
        ydk::YLeaf peer_port_status; //type: boolean
        class RemoteMepsDefects; //type: Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects> remote_meps_defects;
        
}; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects


class Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects : public ydk::Entity
{
    public:
        RemoteMepsDefects();
        ~RemoteMepsDefects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loss_threshold_exceeded; //type: boolean
        ydk::YLeaf invalid_level; //type: boolean
        ydk::YLeaf invalid_maid; //type: boolean
        ydk::YLeaf invalid_ccm_interval; //type: boolean
        ydk::YLeaf received_our_mac; //type: boolean
        ydk::YLeaf received_our_mep_id; //type: boolean
        ydk::YLeaf received_rdi; //type: boolean

}; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::Defects::RemoteMepsDefects


class Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted : public ydk::Entity
{
    public:
        LastStarted();
        ~LastStarted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Cfm::Nodes::Node::InterfaceAises::InterfaceAis::Statistics::LastStarted


class Cfm::Nodes::Node::InterfaceStatistics : public ydk::Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatistic; //type: Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic> > interface_statistic;
        
}; // Cfm::Nodes::Node::InterfaceStatistics


class Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic : public ydk::Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_xr; //type: string
        class Statistics; //type: Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics> statistics;
        
}; // Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic


class Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_packets; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64
        ydk::YLeaf last_malformed_opcode; //type: CfmBagOpcode
        ydk::YLeaf last_malformed_reason; //type: CfmPmPktAction

}; // Cfm::Nodes::Node::InterfaceStatistics::InterfaceStatistic::Statistics


class Cfm::Nodes::Node::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domains; //type: uint32
        ydk::YLeaf services; //type: uint32
        ydk::YLeaf ccm_rate; //type: uint32
        ydk::YLeaf local_meps; //type: uint32
        ydk::YLeaf operational_local_meps; //type: uint32
        ydk::YLeaf down_meps; //type: uint32
        ydk::YLeaf up_meps; //type: uint32
        ydk::YLeaf offloaded; //type: uint32
        ydk::YLeaf offloaded_at3_3ms; //type: uint32
        ydk::YLeaf offloaded_at10ms; //type: uint32
        ydk::YLeaf disabled_misconfigured; //type: uint32
        ydk::YLeaf disabled_out_of_resources; //type: uint32
        ydk::YLeaf disabled_operational_error; //type: uint32
        ydk::YLeaf peer_meps; //type: uint32
        ydk::YLeaf operational_peer_meps; //type: uint32
        ydk::YLeaf peer_meps_with_defects; //type: uint32
        ydk::YLeaf peer_meps_without_defects; //type: uint32
        ydk::YLeaf peer_meps_timed_out; //type: uint32
        ydk::YLeaf mips; //type: uint32
        ydk::YLeaf interfaces; //type: uint32
        ydk::YLeaf bridge_domains_and_xconnects; //type: uint32
        ydk::YLeaf traceroute_cache_entries; //type: uint32
        ydk::YLeaf traceroute_cache_replies; //type: uint32
        ydk::YLeaf ccm_learning_db_entries; //type: uint32
        ydk::YLeaf issu_role; //type: CfmBagIssuRole
        ydk::YLeaf bnm_enabled_links; //type: uint32

}; // Cfm::Nodes::Node::Summary

class CfmPmLtMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cfm_pm_lt_mode_basic;
        static const ydk::Enum::YLeaf cfm_pm_lt_mode_exploratory;

};

class CfmPmRmepXcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cross_check_ok;
        static const ydk::Enum::YLeaf cross_check_missing;
        static const ydk::Enum::YLeaf cross_check_extra;

};

class CfmBagCcmInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interval_none;
        static const ydk::Enum::YLeaf interval3_3ms;
        static const ydk::Enum::YLeaf interval10ms;
        static const ydk::Enum::YLeaf interval100ms;
        static const ydk::Enum::YLeaf interval1s;
        static const ydk::Enum::YLeaf interval10s;
        static const ydk::Enum::YLeaf interval1m;
        static const ydk::Enum::YLeaf interval10m;

};

class SlaOperTestPatternScheme : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hex;
        static const ydk::Enum::YLeaf pseudo_random;

};

class SlaBucketSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf buckets_per_probe;
        static const ydk::Enum::YLeaf probes_per_bucket;

};

class SlaOperOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operation_type_configured;
        static const ydk::Enum::YLeaf operation_type_ondemand;

};

class CfmPmIntfStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_status_up;
        static const ydk::Enum::YLeaf interface_status_down;
        static const ydk::Enum::YLeaf interface_status_testing;
        static const ydk::Enum::YLeaf interface_status_unknown;
        static const ydk::Enum::YLeaf interface_status_dormant;
        static const ydk::Enum::YLeaf interface_status_not_present;
        static const ydk::Enum::YLeaf interface_status_lower_layer_down;

};

class CfmBagCcmOffload : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf offload_none;
        static const ydk::Enum::YLeaf offload_software;
        static const ydk::Enum::YLeaf offload_hardware;

};

class CfmPmEltDelayModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf delay_model_invalid;
        static const ydk::Enum::YLeaf delay_model_logarithmic;
        static const ydk::Enum::YLeaf delay_model_constant;

};

class SlaOperBucket : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bucket_type_bins;
        static const ydk::Enum::YLeaf bucket_type_samples;

};

class CfmPmAisTransmit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transmit_none;
        static const ydk::Enum::YLeaf transmit_ais;
        static const ydk::Enum::YLeaf transmit_ais_direct;

};

class CfmAisDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class CfmPmElmReplyFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reply_filter_not_present;
        static const ydk::Enum::YLeaf reply_filter_default;
        static const ydk::Enum::YLeaf reply_filter_vlan_topology;
        static const ydk::Enum::YLeaf reply_filter_spanning_tree;
        static const ydk::Enum::YLeaf reply_filter_all_ports;

};

class CfmPmLastHopFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last_hop_none;
        static const ydk::Enum::YLeaf last_hop_host_name;
        static const ydk::Enum::YLeaf last_hop_egress_id;

};

class CfmBagMdLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level0;
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level3;
        static const ydk::Enum::YLeaf level4;
        static const ydk::Enum::YLeaf level5;
        static const ydk::Enum::YLeaf level6;
        static const ydk::Enum::YLeaf level7;
        static const ydk::Enum::YLeaf level_invalid;

};

class SlaOperPacketPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf priority_none;
        static const ydk::Enum::YLeaf priority_cos;

};

class CfmBagBdidFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf bd_id;
        static const ydk::Enum::YLeaf xc_p2p_id;
        static const ydk::Enum::YLeaf xc_mp2mp_id;
        static const ydk::Enum::YLeaf fxc_vlan_aware_id;
        static const ydk::Enum::YLeaf fxc_vlan_unaware_id;
        static const ydk::Enum::YLeaf down_only;

};

class CfmMaMpVariety : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mip;
        static const ydk::Enum::YLeaf up_mep;
        static const ydk::Enum::YLeaf downmep;
        static const ydk::Enum::YLeaf unknown_mep;

};

class CfmBagMdidFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mdid_null;
        static const ydk::Enum::YLeaf mdid_dns_like;
        static const ydk::Enum::YLeaf mdid_mac_address;
        static const ydk::Enum::YLeaf mdid_string;
        static const ydk::Enum::YLeaf mdid_unknown;

};

class CfmPmElrRelayAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf elr_relay_hit;
        static const ydk::Enum::YLeaf elr_relay_fdb;
        static const ydk::Enum::YLeaf elr_relay_flood;
        static const ydk::Enum::YLeaf elr_relay_drop;

};

class CfmBagDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direction_up;
        static const ydk::Enum::YLeaf direction_down;
        static const ydk::Enum::YLeaf direction_invalid;

};

class CfmPmMepDefect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf defect_none;
        static const ydk::Enum::YLeaf defect_rdi_ccm;
        static const ydk::Enum::YLeaf defect_ma_cstatus;
        static const ydk::Enum::YLeaf defect_remote_ccm;
        static const ydk::Enum::YLeaf defect_error_ccm;
        static const ydk::Enum::YLeaf defect_cross_connect_ccm;

};

class CfmPmChassisIdFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf chassis_id_chassis_component;
        static const ydk::Enum::YLeaf chassis_id_interface_alias;
        static const ydk::Enum::YLeaf chassis_id_port_component;
        static const ydk::Enum::YLeaf chassis_id_mac_address;
        static const ydk::Enum::YLeaf chassis_id_network_address;
        static const ydk::Enum::YLeaf chassis_id_interface_name;
        static const ydk::Enum::YLeaf chassis_id_local;
        static const ydk::Enum::YLeaf chassis_id_unknown_type;

};

class CfmPmPktAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packet_processed;
        static const ydk::Enum::YLeaf packet_forwarded;
        static const ydk::Enum::YLeaf unknown_opcode;
        static const ydk::Enum::YLeaf filter_level;
        static const ydk::Enum::YLeaf filter_blocked;
        static const ydk::Enum::YLeaf filter_local_mac;
        static const ydk::Enum::YLeaf malformed_ccm_size;
        static const ydk::Enum::YLeaf malformed_ccm_mep_id;
        static const ydk::Enum::YLeaf malformed_too_short;
        static const ydk::Enum::YLeaf malformed_destination_mac_unicast;
        static const ydk::Enum::YLeaf malformed_destination_mac_multicast;
        static const ydk::Enum::YLeaf malformed_tlv_offset;
        static const ydk::Enum::YLeaf malformed_lbm_source_mac;
        static const ydk::Enum::YLeaf malformed_ltr_relay_action;
        static const ydk::Enum::YLeaf malformed_ltr_reply_tlv;
        static const ydk::Enum::YLeaf malformed_lt_origin;
        static const ydk::Enum::YLeaf malformed_ltm_target;
        static const ydk::Enum::YLeaf malformed_source_mac;
        static const ydk::Enum::YLeaf malformed_header_too_short;
        static const ydk::Enum::YLeaf malformed_tlv_header_overrun;
        static const ydk::Enum::YLeaf malformed_tlv_overrun;
        static const ydk::Enum::YLeaf malformed_duplicate_sender_id;
        static const ydk::Enum::YLeaf malformed_duplicate_port_status;
        static const ydk::Enum::YLeaf malformed_duplicate_interface_status;
        static const ydk::Enum::YLeaf malformed_wrong_tlv;
        static const ydk::Enum::YLeaf malformed_duplicate_data;
        static const ydk::Enum::YLeaf malformed_duplicate_ltr_egress_id;
        static const ydk::Enum::YLeaf malformed_duplicate_reply_ingress;
        static const ydk::Enum::YLeaf malformed_duplicate_reply_egress;
        static const ydk::Enum::YLeaf malformed_duplicate_ltm_egress_id;
        static const ydk::Enum::YLeaf malformed_sender_id_size;
        static const ydk::Enum::YLeaf malformed_chassis_id_size;
        static const ydk::Enum::YLeaf malformed_mgmt_address_domain_size;
        static const ydk::Enum::YLeaf malformed_mgmt_address_size;
        static const ydk::Enum::YLeaf malformed_port_status_size;
        static const ydk::Enum::YLeaf malformed_port_status;
        static const ydk::Enum::YLeaf malformed_interface_status_size;
        static const ydk::Enum::YLeaf malformed_interface_status;
        static const ydk::Enum::YLeaf malformed_organization_specific_tlv_size;
        static const ydk::Enum::YLeaf malformed_duplicate_mep_name;
        static const ydk::Enum::YLeaf malformed_duplicate_additional_interface_status;
        static const ydk::Enum::YLeaf malformed_ltr_egress_id_size;
        static const ydk::Enum::YLeaf malformed_reply_ingress_size;
        static const ydk::Enum::YLeaf malformed_ingress_action;
        static const ydk::Enum::YLeaf malformed_reply_ingress_mac;
        static const ydk::Enum::YLeaf malformed_ingress_port_length_size;
        static const ydk::Enum::YLeaf malformed_ingress_port_id_length;
        static const ydk::Enum::YLeaf malformed_ingress_port_id_size;
        static const ydk::Enum::YLeaf malformed_reply_egress_size;
        static const ydk::Enum::YLeaf malformed_egress_action;
        static const ydk::Enum::YLeaf malformed_reply_egress_mac;
        static const ydk::Enum::YLeaf malformed_egress_port_length_size;
        static const ydk::Enum::YLeaf malformed_egress_port_id_length;
        static const ydk::Enum::YLeaf malformed_egress_port_id_size;
        static const ydk::Enum::YLeaf malformed_ltm_egress_id_size;
        static const ydk::Enum::YLeaf malformed_mep_name_size;
        static const ydk::Enum::YLeaf malformed_mep_name_name_length;
        static const ydk::Enum::YLeaf malformed_additional_interface_status_size;
        static const ydk::Enum::YLeaf malformed_additional_interface_status;
        static const ydk::Enum::YLeaf malformed_ccm_interval;
        static const ydk::Enum::YLeaf malformed_mdid_mac_address_length;
        static const ydk::Enum::YLeaf malformed_mdid_length;
        static const ydk::Enum::YLeaf malformed_sman_length;
        static const ydk::Enum::YLeaf malformed_sman2_byte_length;
        static const ydk::Enum::YLeaf malformed_sman_vpn_id_length;
        static const ydk::Enum::YLeaf malformed_elr_no_reply_tlv;
        static const ydk::Enum::YLeaf malformed_separate_elr_reply_egress;
        static const ydk::Enum::YLeaf malformed_dcm_destination_multicast;
        static const ydk::Enum::YLeaf malformed_dcm_embed_length;
        static const ydk::Enum::YLeaf malformed_dcm_embed_level;
        static const ydk::Enum::YLeaf malformed_dcm_embed_version;
        static const ydk::Enum::YLeaf malformed_elr_relay_action;
        static const ydk::Enum::YLeaf malformed_elr_tt_ls;
        static const ydk::Enum::YLeaf malformed_elr_ttl_ingress;
        static const ydk::Enum::YLeaf malformed_elr_ttl_egress;
        static const ydk::Enum::YLeaf malformed_elm_destination_unicast;
        static const ydk::Enum::YLeaf malformed_elm_egress_id;
        static const ydk::Enum::YLeaf malformed_dcm_embed_oui;
        static const ydk::Enum::YLeaf malformed_dcm_embed_opcode;
        static const ydk::Enum::YLeaf malformed_elm_constant_zero;
        static const ydk::Enum::YLeaf malformed_elr_timeout_zero;
        static const ydk::Enum::YLeaf malformed_duplicate_test;
        static const ydk::Enum::YLeaf malformed_dmm_source_mac;
        static const ydk::Enum::YLeaf malformed_test_size;
        static const ydk::Enum::YLeaf malformed_dmr_time_stamps;
        static const ydk::Enum::YLeaf malformed_dm_time_stamp_fmt;
        static const ydk::Enum::YLeaf malformed_ais_interval;
        static const ydk::Enum::YLeaf filter_interface_down;
        static const ydk::Enum::YLeaf filter_forward_standby;
        static const ydk::Enum::YLeaf malformed_sman_icc_based_length;
        static const ydk::Enum::YLeaf filter_foward_issu_secondary;
        static const ydk::Enum::YLeaf filter_response_standby;
        static const ydk::Enum::YLeaf filter_response_issu_secondary;

};

class CfmPmPortStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_status_blocked;
        static const ydk::Enum::YLeaf port_status_up;
        static const ydk::Enum::YLeaf port_status_unknown;

};

class CfmBagOpcode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reserved;
        static const ydk::Enum::YLeaf ccm;
        static const ydk::Enum::YLeaf lbr;
        static const ydk::Enum::YLeaf lbm;
        static const ydk::Enum::YLeaf ltr;
        static const ydk::Enum::YLeaf ltm;

};

class CfmBagSmanFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sman_vlan_id;
        static const ydk::Enum::YLeaf sman_string;
        static const ydk::Enum::YLeaf sman_uint16;
        static const ydk::Enum::YLeaf sman_vpn_id;
        static const ydk::Enum::YLeaf sman_icc;
        static const ydk::Enum::YLeaf sman_unknown;

};

class CfmPmElrEgressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf elr_egress_ok;
        static const ydk::Enum::YLeaf elr_egress_down;
        static const ydk::Enum::YLeaf elr_egress_blocked;
        static const ydk::Enum::YLeaf elr_egress_vid;
        static const ydk::Enum::YLeaf elr_egress_mac;

};

class CfmPmPortIdFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_id_interface_alias;
        static const ydk::Enum::YLeaf port_id_port_component;
        static const ydk::Enum::YLeaf port_id_mac_address;
        static const ydk::Enum::YLeaf port_id_network_address;
        static const ydk::Enum::YLeaf port_id_interface_name;
        static const ydk::Enum::YLeaf port_id_agent_circuit_id;
        static const ydk::Enum::YLeaf port_id_local;
        static const ydk::Enum::YLeaf port_id_unknown;

};

class CfmBagAisInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ais_interval_none;
        static const ydk::Enum::YLeaf ais_interval1s;
        static const ydk::Enum::YLeaf ais_interval1m;

};

class CfmPmEgressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress_ok;
        static const ydk::Enum::YLeaf egress_down;
        static const ydk::Enum::YLeaf egress_blocked;
        static const ydk::Enum::YLeaf egress_vid;

};

class SlaRecordableMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf metric_invalid;
        static const ydk::Enum::YLeaf metric_round_trip_delay;
        static const ydk::Enum::YLeaf metric_one_way_delay_sd;
        static const ydk::Enum::YLeaf metric_one_way_delay_ds;
        static const ydk::Enum::YLeaf metric_round_trip_jitter;
        static const ydk::Enum::YLeaf metric_one_way_jitter_sd;
        static const ydk::Enum::YLeaf metric_one_way_jitter_ds;
        static const ydk::Enum::YLeaf metric_one_way_flr_sd;
        static const ydk::Enum::YLeaf metric_one_way_flr_ds;

};

class CfmPmRelayAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relay_hit;
        static const ydk::Enum::YLeaf relay_fdb;
        static const ydk::Enum::YLeaf relay_mpdb;

};

class CfmBagStpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_up;
        static const ydk::Enum::YLeaf stp_blocked;
        static const ydk::Enum::YLeaf stp_unknown;

};

class CfmPmAisReceive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf receive_none;
        static const ydk::Enum::YLeaf receive_ais;
        static const ydk::Enum::YLeaf receive_lck;
        static const ydk::Enum::YLeaf receive_direct;

};

class CfmPmElrIngressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf elr_ingress_ok;
        static const ydk::Enum::YLeaf elr_ingress_down;
        static const ydk::Enum::YLeaf elr_ingress_blocked;
        static const ydk::Enum::YLeaf elr_ingress_vid;

};

class CfmPmMepFngState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fng_reset;
        static const ydk::Enum::YLeaf fng_defect;
        static const ydk::Enum::YLeaf fng_report_defect;
        static const ydk::Enum::YLeaf fng_defect_reported;
        static const ydk::Enum::YLeaf fng_defect_clearing;

};

class CfmPmRmepState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer_mep_idle;
        static const ydk::Enum::YLeaf peer_mep_start;
        static const ydk::Enum::YLeaf peer_mep_failed;
        static const ydk::Enum::YLeaf peer_mep_ok;

};

class CfmPmIngressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ingress_ok;
        static const ydk::Enum::YLeaf ingress_down;
        static const ydk::Enum::YLeaf ingress_blocked;
        static const ydk::Enum::YLeaf ingress_vid;

};

class CfmBagIwState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interworking_up;
        static const ydk::Enum::YLeaf interworking_test;

};

class CfmPmAddlIntfStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf administratively_down;
        static const ydk::Enum::YLeaf remote_excessive_errors;
        static const ydk::Enum::YLeaf local_excessive_errors;

};

class CfmBagIssuRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

};

class CfmPmIdFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf id_format_is_string;
        static const ydk::Enum::YLeaf id_format_is_mac_address;
        static const ydk::Enum::YLeaf id_format_is_raw_hex;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_OPER_ */

