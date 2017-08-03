#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_7_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ls_type; //type: Lsa
        ydk::YLeaf lsid; //type: string
        ydk::YLeaf advertising_router; //type: string
        ydk::YLeaf lsa_area_id; //type: string
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf dn_age_lsa; //type: boolean
        ydk::YLeaf nsf; //type: boolean
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries::LsaSummary::LsaHeader


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf summary_prefix; //type: string
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf summary_metric; //type: uint32
        ydk::YLeaf summary_metric_type; //type: ExMetric
        ydk::YLeaf summary_tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix


class Ospf::Processes::Process::DefaultVrf::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries : public ydk::Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf handle; //type: string
        ydk::YLeaf if_name_str; //type: string
        class IfEntry; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf madj_intf; //type: boolean
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_id_str; //type: string
        class IfStat; //type: Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat> > if_stat;
        
}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
{
    public:
        IfStat();
        ~IfStat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::DefaultVrf::OspfSummary : public ydk::Entity
{
    public:
        OspfSummary();
        ~OspfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sa_num_nbrs; //type: uint32
        ydk::YLeaf sa_num_nbrs_up; //type: uint32
        ydk::YLeaf sa_num_intf; //type: uint32
        ydk::YLeaf sa_num_intf_up; //type: uint32
        ydk::YLeaf sa_num_vintf_up; //type: uint32
        ydk::YLeaf sa_num_slintf_up; //type: uint32
        ydk::YLeaf sa_num_areas; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_rtr; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_net; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_sum_net; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_sum_asb; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_ase; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_mospf; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_7ase; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_8_ignore; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_link; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_area; //type: uint32
        ydk::YLeaf sa_lsa_cnt_type_opq_as; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::OspfSummary


class Ospf::Processes::Process::DefaultVrf::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topologies; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies> topologies;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute


class Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies : public ydk::Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology> > topology;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies


class Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ipfrr_topo_area_id; //type: string
        ydk::YLeaf ipfrr_router_id; //type: string
        ydk::YLeaf ipfrr_area_revision; //type: uint32
        class IpfrrTopo; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo> > ipfrr_topo;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology


class Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo : public ydk::Entity
{
    public:
        IpfrrTopo();
        ~IpfrrTopo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf distance_reverse; //type: uint32
        ydk::YLeaf type4; //type: boolean
        ydk::YLeaf revision; //type: uint32
        ydk::YLeaf neighbor_sourced; //type: boolean
        ydk::YLeaf dr; //type: boolean
        ydk::YLeaf poison; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_7_ */

