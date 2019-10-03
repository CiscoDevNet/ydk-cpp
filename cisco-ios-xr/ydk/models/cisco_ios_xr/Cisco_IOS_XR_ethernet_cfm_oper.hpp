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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global> global;
        
}; // Cfm


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

        ydk::YList node;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceAises> interface_aises;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Nodes::Node::CcmLearningDatabases> ccm_learning_databases;
        
}; // Cfm::Nodes::Node


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

        ydk::YList interface_ais;
        
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

        ydk::YList interface_statistic;
        
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

        ydk::YList ccm_learning_database;
        
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
        class PeerMePv2s; //type: Cfm::Global::PeerMePv2s

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::IncompleteTraceroutes> incomplete_traceroutes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MaintenancePoints> maintenance_points;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::GlobalConfigurationErrors> global_configuration_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors> mep_configuration_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches> traceroute_caches;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps> local_meps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s> peer_me_pv2s;
        
}; // Cfm::Global


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

        ydk::YList incomplete_traceroute;
        
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
        ydk::YLeaf transaction_id; //type: uint32
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

        ydk::YList maintenance_point;
        
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

        ydk::YList global_configuration_error;
        
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

        ydk::YList mep_configuration_error;
        
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
        ydk::YLeaf sman_format_not_supported; //type: boolean
        ydk::YLeaf mdid_format_not_supported; //type: boolean
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::Mep> mep;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::ServiceBridgeDomain> service_bridge_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::InterfaceBridgeDomain> interface_bridge_domain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities> satellite_capabilities;
        
}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::Loopback> loopback;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::DelayMeasurement> delay_measurement;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities::SyntheticLossMeasurement> synthetic_loss_measurement;
        
}; // Cfm::Global::MepConfigurationErrors::MepConfigurationError::SatelliteCapabilities


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

        ydk::YList traceroute_cache;
        
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
        ydk::YLeaf transaction_id; //type: uint32
        ydk::YLeaf replies_dropped; //type: uint32
        class TracerouteInformation; //type: Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation
        class LinktraceReply; //type: Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply
        class ExploratoryLinktraceReply; //type: Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::TracerouteInformation> traceroute_information;
        ydk::YList linktrace_reply;
        ydk::YList exploratory_linktrace_reply;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::SenderId> sender_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::EgressId> egress_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyIngress> reply_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::ReplyEgress> reply_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply::LastHop> last_hop;
        ydk::YList organization_specific_tlv;
        ydk::YList unknown_tlv;
        
}; // Cfm::Global::TracerouteCaches::TracerouteCache::LinktraceReply


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
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::SenderId> sender_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyIngress> reply_ingress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::ReplyEgress> reply_egress;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::TracerouteCaches::TracerouteCache::ExploratoryLinktraceReply::LastHop> last_hop;
        ydk::YList organization_specific_tlv;
        ydk::YList unknown_tlv;
        
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

        ydk::YList local_mep;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics> ais_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::Defects> defects;
        
}; // Cfm::Global::LocalMeps::LocalMep


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::SendingStart> sending_start;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::LocalMeps::LocalMep::AisStatistics::ReceivingStart> receiving_start;
        
}; // Cfm::Global::LocalMeps::LocalMep::AisStatistics


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


class Cfm::Global::PeerMePv2s : public ydk::Entity
{
    public:
        PeerMePv2s();
        ~PeerMePv2s();

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

        class PeerMePv2; //type: Cfm::Global::PeerMePv2s::PeerMePv2

        ydk::YList peer_me_pv2;
        
}; // Cfm::Global::PeerMePv2s


class Cfm::Global::PeerMePv2s::PeerMePv2 : public ydk::Entity
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
        class PeerMep; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep> peer_mep;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep : public ydk::Entity
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
        class ErrorState; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::ErrorState
        class LastUpDownTime; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastUpDownTime
        class LastCcmReceived; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived
        class Statistics; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::ErrorState> error_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastUpDownTime> last_up_down_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived> last_ccm_received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics> statistics;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::ErrorState : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::ErrorState


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastUpDownTime : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastUpDownTime


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived : public ydk::Entity
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
        class Header; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header
        class SenderId; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId
        class MepName; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::MepName
        class OrganizationSpecificTlv; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv
        class UnknownTlv; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId> sender_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::MepName> mep_name;
        ydk::YList organization_specific_tlv;
        ydk::YList unknown_tlv;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header : public ydk::Entity
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
        class Mdid; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid
        class ShortMaName; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid> mdid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName> short_ma_name;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid : public ydk::Entity
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
        class MacName; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName> mac_name;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::Mdid::MacName


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName : public ydk::Entity
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
        class VpnIdName; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName> vpn_id_name;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::Header::ShortMaName::VpnIdName


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId : public ydk::Entity
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
        class ChassisId; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId> chassis_id;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId : public ydk::Entity
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
        class ChassisIdValue; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue> chassis_id_value;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::SenderId::ChassisId::ChassisIdValue


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::MepName : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::MepName


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::OrganizationSpecificTlv


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::LastCcmReceived::UnknownTlv


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics : public ydk::Entity
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
        class LastCcmReceivedTime; //type: Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ethernet_cfm_oper::Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime> last_ccm_received_time;
        
}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics


class Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime : public ydk::Entity
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

}; // Cfm::Global::PeerMePv2s::PeerMePv2::PeerMep::Statistics::LastCcmReceivedTime

class CfmPmElrIngressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf elr_ingress_ok;
        static const ydk::Enum::YLeaf elr_ingress_down;
        static const ydk::Enum::YLeaf elr_ingress_blocked;
        static const ydk::Enum::YLeaf elr_ingress_vid;

        static int get_enum_value(const std::string & name) {
            if (name == "elr-ingress-ok") return 1;
            if (name == "elr-ingress-down") return 2;
            if (name == "elr-ingress-blocked") return 3;
            if (name == "elr-ingress-vid") return 4;
            return -1;
        }
};

class CfmPmRelayAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relay_hit;
        static const ydk::Enum::YLeaf relay_fdb;
        static const ydk::Enum::YLeaf relay_mpdb;

        static int get_enum_value(const std::string & name) {
            if (name == "relay-hit") return 1;
            if (name == "relay-fdb") return 2;
            if (name == "relay-mpdb") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "sman-vlan-id") return 1;
            if (name == "sman-string") return 2;
            if (name == "sman-uint16") return 3;
            if (name == "sman-vpn-id") return 4;
            if (name == "sman-icc") return 32;
            if (name == "sman-unknown") return 33;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "defect-none") return 0;
            if (name == "defect-rdi-ccm") return 1;
            if (name == "defect-ma-cstatus") return 2;
            if (name == "defect-remote-ccm") return 3;
            if (name == "defect-error-ccm") return 4;
            if (name == "defect-cross-connect-ccm") return 5;
            return -1;
        }
};

class CfmPmElrEgressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf elr_egress_ok;
        static const ydk::Enum::YLeaf elr_egress_down;
        static const ydk::Enum::YLeaf elr_egress_blocked;
        static const ydk::Enum::YLeaf elr_egress_vid;
        static const ydk::Enum::YLeaf elr_egress_mac;

        static int get_enum_value(const std::string & name) {
            if (name == "elr-egress-ok") return 1;
            if (name == "elr-egress-down") return 2;
            if (name == "elr-egress-blocked") return 3;
            if (name == "elr-egress-vid") return 4;
            if (name == "elr-egress-mac") return 255;
            return -1;
        }
};

class CfmPmIngressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ingress_ok;
        static const ydk::Enum::YLeaf ingress_down;
        static const ydk::Enum::YLeaf ingress_blocked;
        static const ydk::Enum::YLeaf ingress_vid;

        static int get_enum_value(const std::string & name) {
            if (name == "ingress-ok") return 1;
            if (name == "ingress-down") return 2;
            if (name == "ingress-blocked") return 3;
            if (name == "ingress-vid") return 4;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "interval-none") return 0;
            if (name == "interval3-3ms") return 1;
            if (name == "interval10ms") return 2;
            if (name == "interval100ms") return 3;
            if (name == "interval1s") return 4;
            if (name == "interval10s") return 5;
            if (name == "interval1m") return 6;
            if (name == "interval10m") return 7;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "chassis-id-chassis-component") return 1;
            if (name == "chassis-id-interface-alias") return 2;
            if (name == "chassis-id-port-component") return 3;
            if (name == "chassis-id-mac-address") return 4;
            if (name == "chassis-id-network-address") return 5;
            if (name == "chassis-id-interface-name") return 6;
            if (name == "chassis-id-local") return 7;
            if (name == "chassis-id-unknown-type") return 8;
            return -1;
        }
};

class SlaOperOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operation_type_configured;
        static const ydk::Enum::YLeaf operation_type_ondemand;

        static int get_enum_value(const std::string & name) {
            if (name == "operation-type-configured") return 0;
            if (name == "operation-type-ondemand") return 1;
            return -1;
        }
};

class CfmPmLastHopFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf last_hop_none;
        static const ydk::Enum::YLeaf last_hop_host_name;
        static const ydk::Enum::YLeaf last_hop_egress_id;

        static int get_enum_value(const std::string & name) {
            if (name == "last-hop-none") return 0;
            if (name == "last-hop-host-name") return 1;
            if (name == "last-hop-egress-id") return 2;
            return -1;
        }
};

class CfmPmIdFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf id_format_is_string;
        static const ydk::Enum::YLeaf id_format_is_mac_address;
        static const ydk::Enum::YLeaf id_format_is_raw_hex;

        static int get_enum_value(const std::string & name) {
            if (name == "id-format-is-string") return 0;
            if (name == "id-format-is-mac-address") return 1;
            if (name == "id-format-is-raw-hex") return 2;
            return -1;
        }
};

class CfmPmRmepState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer_mep_idle;
        static const ydk::Enum::YLeaf peer_mep_start;
        static const ydk::Enum::YLeaf peer_mep_failed;
        static const ydk::Enum::YLeaf peer_mep_ok;

        static int get_enum_value(const std::string & name) {
            if (name == "peer-mep-idle") return 1;
            if (name == "peer-mep-start") return 2;
            if (name == "peer-mep-failed") return 3;
            if (name == "peer-mep-ok") return 4;
            return -1;
        }
};

class CfmBagCcmOffload : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf offload_none;
        static const ydk::Enum::YLeaf offload_software;
        static const ydk::Enum::YLeaf offload_hardware;

        static int get_enum_value(const std::string & name) {
            if (name == "offload-none") return 0;
            if (name == "offload-software") return 1;
            if (name == "offload-hardware") return 2;
            return -1;
        }
};

class CfmPmAisReceive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf receive_none;
        static const ydk::Enum::YLeaf receive_ais;
        static const ydk::Enum::YLeaf receive_lck;
        static const ydk::Enum::YLeaf receive_direct;

        static int get_enum_value(const std::string & name) {
            if (name == "receive-none") return 0;
            if (name == "receive-ais") return 1;
            if (name == "receive-lck") return 2;
            if (name == "receive-direct") return 3;
            return -1;
        }
};

class CfmMaMpVariety : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mip;
        static const ydk::Enum::YLeaf up_mep;
        static const ydk::Enum::YLeaf downmep;
        static const ydk::Enum::YLeaf unknown_mep;

        static int get_enum_value(const std::string & name) {
            if (name == "mip") return 0;
            if (name == "up-mep") return 1;
            if (name == "downmep") return 2;
            if (name == "unknown-mep") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "packet-processed") return 0;
            if (name == "packet-forwarded") return 1;
            if (name == "unknown-opcode") return 2;
            if (name == "filter-level") return 3;
            if (name == "filter-blocked") return 4;
            if (name == "filter-local-mac") return 5;
            if (name == "malformed-ccm-size") return 6;
            if (name == "malformed-ccm-mep-id") return 7;
            if (name == "malformed-too-short") return 8;
            if (name == "malformed-destination-mac-unicast") return 9;
            if (name == "malformed-destination-mac-multicast") return 10;
            if (name == "malformed-tlv-offset") return 11;
            if (name == "malformed-lbm-source-mac") return 12;
            if (name == "malformed-ltr-relay-action") return 13;
            if (name == "malformed-ltr-reply-tlv") return 14;
            if (name == "malformed-lt-origin") return 15;
            if (name == "malformed-ltm-target") return 16;
            if (name == "malformed-source-mac") return 17;
            if (name == "malformed-header-too-short") return 18;
            if (name == "malformed-tlv-header-overrun") return 19;
            if (name == "malformed-tlv-overrun") return 20;
            if (name == "malformed-duplicate-sender-id") return 21;
            if (name == "malformed-duplicate-port-status") return 22;
            if (name == "malformed-duplicate-interface-status") return 23;
            if (name == "malformed-wrong-tlv") return 24;
            if (name == "malformed-duplicate-data") return 25;
            if (name == "malformed-duplicate-ltr-egress-id") return 26;
            if (name == "malformed-duplicate-reply-ingress") return 27;
            if (name == "malformed-duplicate-reply-egress") return 28;
            if (name == "malformed-duplicate-ltm-egress-id") return 29;
            if (name == "malformed-sender-id-size") return 30;
            if (name == "malformed-chassis-id-size") return 31;
            if (name == "malformed-mgmt-address-domain-size") return 32;
            if (name == "malformed-mgmt-address-size") return 33;
            if (name == "malformed-port-status-size") return 34;
            if (name == "malformed-port-status") return 35;
            if (name == "malformed-interface-status-size") return 36;
            if (name == "malformed-interface-status") return 37;
            if (name == "malformed-organization-specific-tlv-size") return 38;
            if (name == "malformed-duplicate-mep-name") return 39;
            if (name == "malformed-duplicate-additional-interface-status") return 40;
            if (name == "malformed-ltr-egress-id-size") return 41;
            if (name == "malformed-reply-ingress-size") return 42;
            if (name == "malformed-ingress-action") return 43;
            if (name == "malformed-reply-ingress-mac") return 44;
            if (name == "malformed-ingress-port-length-size") return 45;
            if (name == "malformed-ingress-port-id-length") return 46;
            if (name == "malformed-ingress-port-id-size") return 47;
            if (name == "malformed-reply-egress-size") return 48;
            if (name == "malformed-egress-action") return 49;
            if (name == "malformed-reply-egress-mac") return 50;
            if (name == "malformed-egress-port-length-size") return 51;
            if (name == "malformed-egress-port-id-length") return 52;
            if (name == "malformed-egress-port-id-size") return 53;
            if (name == "malformed-ltm-egress-id-size") return 54;
            if (name == "malformed-mep-name-size") return 55;
            if (name == "malformed-mep-name-name-length") return 56;
            if (name == "malformed-additional-interface-status-size") return 57;
            if (name == "malformed-additional-interface-status") return 58;
            if (name == "malformed-ccm-interval") return 59;
            if (name == "malformed-mdid-mac-address-length") return 60;
            if (name == "malformed-mdid-length") return 61;
            if (name == "malformed-sman-length") return 62;
            if (name == "malformed-sman2-byte-length") return 63;
            if (name == "malformed-sman-vpn-id-length") return 64;
            if (name == "malformed-elr-no-reply-tlv") return 65;
            if (name == "malformed-separate-elr-reply-egress") return 66;
            if (name == "malformed-dcm-destination-multicast") return 67;
            if (name == "malformed-dcm-embed-length") return 68;
            if (name == "malformed-dcm-embed-level") return 69;
            if (name == "malformed-dcm-embed-version") return 70;
            if (name == "malformed-elr-relay-action") return 71;
            if (name == "malformed-elr-tt-ls") return 73;
            if (name == "malformed-elr-ttl-ingress") return 74;
            if (name == "malformed-elr-ttl-egress") return 75;
            if (name == "malformed-elm-destination-unicast") return 76;
            if (name == "malformed-elm-egress-id") return 77;
            if (name == "malformed-dcm-embed-oui") return 78;
            if (name == "malformed-dcm-embed-opcode") return 79;
            if (name == "malformed-elm-constant-zero") return 80;
            if (name == "malformed-elr-timeout-zero") return 81;
            if (name == "malformed-duplicate-test") return 82;
            if (name == "malformed-dmm-source-mac") return 83;
            if (name == "malformed-test-size") return 84;
            if (name == "malformed-dmr-time-stamps") return 85;
            if (name == "malformed-dm-time-stamp-fmt") return 86;
            if (name == "malformed-ais-interval") return 87;
            if (name == "filter-interface-down") return 88;
            if (name == "filter-forward-standby") return 89;
            if (name == "malformed-sman-icc-based-length") return 90;
            if (name == "filter-foward-issu-secondary") return 120;
            if (name == "filter-response-standby") return 121;
            if (name == "filter-response-issu-secondary") return 122;
            return -1;
        }
};

class SlaBucketSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf buckets_per_probe;
        static const ydk::Enum::YLeaf probes_per_bucket;

        static int get_enum_value(const std::string & name) {
            if (name == "buckets-per-probe") return 0;
            if (name == "probes-per-bucket") return 1;
            return -1;
        }
};

class CfmPmEltDelayModel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf delay_model_invalid;
        static const ydk::Enum::YLeaf delay_model_logarithmic;
        static const ydk::Enum::YLeaf delay_model_constant;

        static int get_enum_value(const std::string & name) {
            if (name == "delay-model-invalid") return 0;
            if (name == "delay-model-logarithmic") return 1;
            if (name == "delay-model-constant") return 2;
            return -1;
        }
};

class CfmPmAisTransmit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transmit_none;
        static const ydk::Enum::YLeaf transmit_ais;
        static const ydk::Enum::YLeaf transmit_ais_direct;

        static int get_enum_value(const std::string & name) {
            if (name == "transmit-none") return 0;
            if (name == "transmit-ais") return 1;
            if (name == "transmit-ais-direct") return 2;
            return -1;
        }
};

class CfmPmElrRelayAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf elr_relay_hit;
        static const ydk::Enum::YLeaf elr_relay_fdb;
        static const ydk::Enum::YLeaf elr_relay_flood;
        static const ydk::Enum::YLeaf elr_relay_drop;

        static int get_enum_value(const std::string & name) {
            if (name == "elr-relay-hit") return 1;
            if (name == "elr-relay-fdb") return 2;
            if (name == "elr-relay-flood") return 3;
            if (name == "elr-relay-drop") return 4;
            return -1;
        }
};

class CfmPmPortStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_status_blocked;
        static const ydk::Enum::YLeaf port_status_up;
        static const ydk::Enum::YLeaf port_status_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "port-status-blocked") return 1;
            if (name == "port-status-up") return 2;
            if (name == "port-status-unknown") return 3;
            return -1;
        }
};

class CfmBagIwState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interworking_up;
        static const ydk::Enum::YLeaf interworking_test;

        static int get_enum_value(const std::string & name) {
            if (name == "interworking-up") return 0;
            if (name == "interworking-test") return 1;
            return -1;
        }
};

class CfmBagMdidFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mdid_null;
        static const ydk::Enum::YLeaf mdid_dns_like;
        static const ydk::Enum::YLeaf mdid_mac_address;
        static const ydk::Enum::YLeaf mdid_string;
        static const ydk::Enum::YLeaf mdid_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "mdid-null") return 1;
            if (name == "mdid-dns-like") return 2;
            if (name == "mdid-mac-address") return 3;
            if (name == "mdid-string") return 4;
            if (name == "mdid-unknown") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 0;
            if (name == "bd-id") return 1;
            if (name == "xc-p2p-id") return 2;
            if (name == "xc-mp2mp-id") return 3;
            if (name == "fxc-vlan-aware-id") return 4;
            if (name == "fxc-vlan-unaware-id") return 5;
            if (name == "down-only") return 6;
            return -1;
        }
};

class CfmBagIssuRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "primary") return 1;
            if (name == "secondary") return 2;
            return -1;
        }
};

class CfmBagStpState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stp_up;
        static const ydk::Enum::YLeaf stp_blocked;
        static const ydk::Enum::YLeaf stp_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "stp-up") return 0;
            if (name == "stp-blocked") return 1;
            if (name == "stp-unknown") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "level0") return 0;
            if (name == "level1") return 1;
            if (name == "level2") return 2;
            if (name == "level3") return 3;
            if (name == "level4") return 4;
            if (name == "level5") return 5;
            if (name == "level6") return 6;
            if (name == "level7") return 7;
            if (name == "level-invalid") return 8;
            return -1;
        }
};

class SlaOperPacketPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf priority_none;
        static const ydk::Enum::YLeaf priority_cos;

        static int get_enum_value(const std::string & name) {
            if (name == "priority-none") return 0;
            if (name == "priority-cos") return 1;
            return -1;
        }
};

class CfmBagAisInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ais_interval_none;
        static const ydk::Enum::YLeaf ais_interval1s;
        static const ydk::Enum::YLeaf ais_interval1m;

        static int get_enum_value(const std::string & name) {
            if (name == "ais-interval-none") return 0;
            if (name == "ais-interval1s") return 4;
            if (name == "ais-interval1m") return 6;
            return -1;
        }
};

class CfmPmRmepXcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cross_check_ok;
        static const ydk::Enum::YLeaf cross_check_missing;
        static const ydk::Enum::YLeaf cross_check_extra;

        static int get_enum_value(const std::string & name) {
            if (name == "cross-check-ok") return 0;
            if (name == "cross-check-missing") return 1;
            if (name == "cross-check-extra") return 2;
            return -1;
        }
};

class CfmPmLtMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cfm_pm_lt_mode_basic;
        static const ydk::Enum::YLeaf cfm_pm_lt_mode_exploratory;

        static int get_enum_value(const std::string & name) {
            if (name == "cfm-pm-lt-mode-basic") return 1;
            if (name == "cfm-pm-lt-mode-exploratory") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "interface-status-up") return 1;
            if (name == "interface-status-down") return 2;
            if (name == "interface-status-testing") return 3;
            if (name == "interface-status-unknown") return 4;
            if (name == "interface-status-dormant") return 5;
            if (name == "interface-status-not-present") return 6;
            if (name == "interface-status-lower-layer-down") return 7;
            return -1;
        }
};

class CfmBagDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direction_up;
        static const ydk::Enum::YLeaf direction_down;
        static const ydk::Enum::YLeaf direction_invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "direction-up") return 0;
            if (name == "direction-down") return 1;
            if (name == "direction-invalid") return 2;
            return -1;
        }
};

class CfmPmEgressAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress_ok;
        static const ydk::Enum::YLeaf egress_down;
        static const ydk::Enum::YLeaf egress_blocked;
        static const ydk::Enum::YLeaf egress_vid;

        static int get_enum_value(const std::string & name) {
            if (name == "egress-ok") return 1;
            if (name == "egress-down") return 2;
            if (name == "egress-blocked") return 3;
            if (name == "egress-vid") return 4;
            return -1;
        }
};

class CfmPmElmReplyFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reply_filter_not_present;
        static const ydk::Enum::YLeaf reply_filter_default;
        static const ydk::Enum::YLeaf reply_filter_vlan_topology;
        static const ydk::Enum::YLeaf reply_filter_spanning_tree;
        static const ydk::Enum::YLeaf reply_filter_all_ports;

        static int get_enum_value(const std::string & name) {
            if (name == "reply-filter-not-present") return 0;
            if (name == "reply-filter-default") return 1;
            if (name == "reply-filter-vlan-topology") return 2;
            if (name == "reply-filter-spanning-tree") return 3;
            if (name == "reply-filter-all-ports") return 4;
            return -1;
        }
};

class CfmAisDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class CfmPmAddlIntfStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf administratively_down;
        static const ydk::Enum::YLeaf remote_excessive_errors;
        static const ydk::Enum::YLeaf local_excessive_errors;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "administratively-down") return 1;
            if (name == "remote-excessive-errors") return 2;
            if (name == "local-excessive-errors") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "reserved") return 0;
            if (name == "ccm") return 1;
            if (name == "lbr") return 2;
            if (name == "lbm") return 3;
            if (name == "ltr") return 4;
            if (name == "ltm") return 5;
            return -1;
        }
};

class SlaOperTestPatternScheme : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hex;
        static const ydk::Enum::YLeaf pseudo_random;

        static int get_enum_value(const std::string & name) {
            if (name == "hex") return 0;
            if (name == "pseudo-random") return 1;
            return -1;
        }
};

class CfmPmMepFngState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fng_reset;
        static const ydk::Enum::YLeaf fng_defect;
        static const ydk::Enum::YLeaf fng_report_defect;
        static const ydk::Enum::YLeaf fng_defect_reported;
        static const ydk::Enum::YLeaf fng_defect_clearing;

        static int get_enum_value(const std::string & name) {
            if (name == "fng-reset") return 1;
            if (name == "fng-defect") return 2;
            if (name == "fng-report-defect") return 3;
            if (name == "fng-defect-reported") return 4;
            if (name == "fng-defect-clearing") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "port-id-interface-alias") return 1;
            if (name == "port-id-port-component") return 2;
            if (name == "port-id-mac-address") return 3;
            if (name == "port-id-network-address") return 4;
            if (name == "port-id-interface-name") return 5;
            if (name == "port-id-agent-circuit-id") return 6;
            if (name == "port-id-local") return 7;
            if (name == "port-id-unknown") return 8;
            return -1;
        }
};

class SlaOperBucket : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bucket_type_bins;
        static const ydk::Enum::YLeaf bucket_type_samples;

        static int get_enum_value(const std::string & name) {
            if (name == "bucket-type-bins") return 0;
            if (name == "bucket-type-samples") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "metric-invalid") return 0;
            if (name == "metric-round-trip-delay") return 1;
            if (name == "metric-one-way-delay-sd") return 2;
            if (name == "metric-one-way-delay-ds") return 3;
            if (name == "metric-round-trip-jitter") return 4;
            if (name == "metric-one-way-jitter-sd") return 5;
            if (name == "metric-one-way-jitter-ds") return 6;
            if (name == "metric-one-way-flr-sd") return 7;
            if (name == "metric-one-way-flr-ds") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_OPER_ */

