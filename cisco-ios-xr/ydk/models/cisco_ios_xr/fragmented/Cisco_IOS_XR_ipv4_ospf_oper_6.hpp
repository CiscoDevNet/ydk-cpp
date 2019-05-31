#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_6_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_next_hop_value_type; //type: OspfShNnhValTypes
        ydk::YLeaf neighbor_next_hop_ip_addr; //type: string
        ydk::YLeaf neighbor_next_hop_intf_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::NeighborNextHop


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas : public ydk::Entity
{
    public:
        BackupRouteAreas();
        ~BackupRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea

        ydk::YList backup_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea : public ydk::Entity
{
    public:
        BackupRouteArea();
        ~BackupRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo> route_info;
        ydk::YList route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        ydk::YLeaf route_label_type; //type: uint8
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf route_sspf_label; //type: uint32
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_interface_snmp_index; //type: uint32
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_path_id; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        ydk::YLeaf route_path_is_rsvp_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_excl_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_sspf_path; //type: boolean
        class RouteBackupPath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath
        class NeighborNextHop; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath> route_backup_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        ydk::YList neighbor_next_hop;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath : public ydk::Entity
{
    public:
        RouteBackupPath();
        ~RouteBackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup_route_interface_name; //type: string
        ydk::YLeaf backup_route_next_hop_address; //type: string
        ydk::YLeaf backup_route_source; //type: string
        ydk::YLeaf backup_metric; //type: uint32
        ydk::YLeaf primary_path; //type: boolean
        ydk::YLeaf line_card_disjoint; //type: boolean
        ydk::YLeaf downstream; //type: boolean
        ydk::YLeaf node_protect; //type: boolean
        ydk::YLeaf srlg_disjoint; //type: boolean
        ydk::YLeaf lfa_type; //type: Lfa
        ydk::YLeaf backup_remote_lfa; //type: string
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf backup_tunnel_interface_name; //type: string
        ydk::YLeaf interface_disjoint; //type: boolean
        class BackupRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair

        ydk::YList backup_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair : public ydk::Entity
{
    public:
        BackupRepair();
        ~BackupRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        ydk::YList microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_next_hop_value_type; //type: OspfShNnhValTypes
        ydk::YLeaf neighbor_next_hop_ip_addr; //type: string
        ydk::YLeaf neighbor_next_hop_intf_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::NeighborNextHop


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations : public ydk::Entity
{
    public:
        RouteAreaInformations();
        ~RouteAreaInformations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteAreaInformation; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation

        ydk::YList route_area_information;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation : public ydk::Entity
{
    public:
        RouteAreaInformation();
        ~RouteAreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo> route_info;
        ydk::YList route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        ydk::YLeaf route_label_type; //type: uint8
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf route_sspf_label; //type: uint32
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_interface_snmp_index; //type: uint32
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        ydk::YLeaf route_path_id; //type: uint32
        ydk::YLeaf route_path_is_rsvp_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_excl_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_sspf_path; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath
        class NeighborNextHop; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        ydk::YList neighbor_next_hop;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        ydk::YList microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_next_hop_value_type; //type: OspfShNnhValTypes
        ydk::YLeaf neighbor_next_hop_ip_addr; //type: string
        ydk::YLeaf neighbor_next_hop_intf_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::NeighborNextHop


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas : public ydk::Entity
{
    public:
        MulticastIntactRouteAreas();
        ~MulticastIntactRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastIntactRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea

        ydk::YList multicast_intact_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea : public ydk::Entity
{
    public:
        MulticastIntactRouteArea();
        ~MulticastIntactRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo> route_info;
        ydk::YList route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        ydk::YLeaf route_label_type; //type: uint8
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf route_sspf_label; //type: uint32
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_interface_snmp_index; //type: uint32
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        ydk::YLeaf route_path_id; //type: uint32
        ydk::YLeaf route_path_is_rsvp_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_excl_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_sspf_path; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath
        class NeighborNextHop; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        ydk::YList neighbor_next_hop;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        ydk::YList microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_next_hop_value_type; //type: OspfShNnhValTypes
        ydk::YLeaf neighbor_next_hop_ip_addr; //type: string
        ydk::YLeaf neighbor_next_hop_intf_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::NeighborNextHop


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation : public ydk::Entity
{
    public:
        SummaryAreaInformation();
        ~SummaryAreaInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failures; //type: uint32
        ydk::YLeaf failure_address; //type: string
        class FailureTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime
        class Common; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime> failure_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common> common;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime : public ydk::Entity
{
    public:
        FailureTime();
        ~FailureTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common : public ydk::Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_type1s; //type: uint32
        ydk::YLeaf external_type2s; //type: uint32
        ydk::YLeaf external_nssa_type1s; //type: uint32
        ydk::YLeaf external_nssa_type2s; //type: uint32
        ydk::YLeaf inter_areas; //type: uint32
        ydk::YLeaf intra_areas; //type: uint32
        ydk::YLeaf total; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas : public ydk::Entity
{
    public:
        LocalRouteAreas();
        ~LocalRouteAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalRouteArea; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea

        ydk::YList local_route_area;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea : public ydk::Entity
{
    public:
        LocalRouteArea();
        ~LocalRouteArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo> route_info;
        ydk::YList route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        ydk::YLeaf route_label_type; //type: uint8
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf route_sspf_label; //type: uint32
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_interface_snmp_index; //type: uint32
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        ydk::YLeaf route_path_id; //type: uint32
        ydk::YLeaf route_path_is_rsvp_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_excl_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_sspf_path; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath
        class NeighborNextHop; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        ydk::YList neighbor_next_hop;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        ydk::YList microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_next_hop_value_type; //type: OspfShNnhValTypes
        ydk::YLeaf neighbor_next_hop_ip_addr; //type: string
        ydk::YLeaf neighbor_next_hop_intf_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::NeighborNextHop


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable : public ydk::Entity
{
    public:
        RouteTable();
        ~RouteTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route

        ydk::YList route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo> route_info;
        ydk::YList route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        ydk::YLeaf route_label_type; //type: uint8
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf route_sspf_label; //type: uint32
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_interface_snmp_index; //type: uint32
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        ydk::YLeaf route_path_id; //type: uint32
        ydk::YLeaf route_path_is_rsvp_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_excl_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_sspf_path; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath
        class NeighborNextHop; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        ydk::YList neighbor_next_hop;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        ydk::YList microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_next_hop_value_type; //type: OspfShNnhValTypes
        ydk::YLeaf neighbor_next_hop_ip_addr; //type: string
        ydk::YLeaf neighbor_next_hop_intf_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::NeighborNextHop


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes : public ydk::Entity
{
    public:
        ExternalRoutes();
        ~ExternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExternalRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute

        ydk::YList external_route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute : public ydk::Entity
{
    public:
        ExternalRoute();
        ~ExternalRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        class RouteInformation_; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_
        class ProtocolName; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName
        class RouteExtendedCommunity; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_> route_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName> protocol_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity> route_extended_community;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_ : public ydk::Entity
{
    public:
        RouteInformation_();
        ~RouteInformation_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_prefix; //type: string
        ydk::YLeaf route_prefix_length; //type: uint32
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf route_type; //type: OspfRoute
        ydk::YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo> route_info;
        ydk::YList route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo : public ydk::Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_area_id; //type: uint32
        ydk::YLeaf route_te_metric; //type: uint32
        ydk::YLeaf route_rib_version; //type: uint32
        ydk::YLeaf route_spf_version; //type: uint64
        ydk::YLeaf route_forward_distance; //type: uint32
        ydk::YLeaf route_source; //type: uint16
        ydk::YLeaf route_spf_priority; //type: uint8
        ydk::YLeaf route_auto_excluded; //type: boolean
        ydk::YLeaf route_srte_prefix_registered; //type: boolean
        ydk::YLeaf route_srte_nbr_registered; //type: uint16
        ydk::YLeaf route_label_type; //type: uint8
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf route_sspf_label; //type: uint32
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime> route_update_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime> route_fail_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime : public ydk::Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime : public ydk::Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_interface_name; //type: string
        ydk::YLeaf route_interface_snmp_index; //type: uint32
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        ydk::YLeaf route_path_id; //type: uint32
        ydk::YLeaf route_path_is_rsvp_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_path; //type: boolean
        ydk::YLeaf route_path_is_sr_excl_path; //type: boolean
        ydk::YLeaf route_path_is_sr_te_sspf_path; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath
        class NeighborNextHop; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::NeighborNextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        ydk::YList neighbor_next_hop;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath : public ydk::Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf microloop_repair_list_size; //type: uint32
        ydk::YLeaf microloop_tunnel_interface_name; //type: string
        ydk::YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        ydk::YList microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public ydk::Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_id; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::NeighborNextHop : public ydk::Entity
{
    public:
        NeighborNextHop();
        ~NeighborNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_next_hop_value_type; //type: OspfShNnhValTypes
        ydk::YLeaf neighbor_next_hop_ip_addr; //type: string
        ydk::YLeaf neighbor_next_hop_intf_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::NeighborNextHop


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName : public ydk::Entity
{
    public:
        ProtocolName();
        ~ProtocolName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity : public ydk::Entity
{
    public:
        RouteExtendedCommunity();
        ~RouteExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_community_domain_id_value; //type: string
        ydk::YLeaf extended_communityl_domain_id_type; //type: uint16
        ydk::YLeaf extended_community_area_id; //type: uint32
        ydk::YLeaf extended_community_router_id; //type: string
        ydk::YLeaf extended_community_route_type; //type: uint8
        ydk::YLeaf extended_community_options; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation : public ydk::Entity
{
    public:
        InterfaceInformation();
        ~InterfaceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinks; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks
        class InterfaceBriefs; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs
        class Interfaces; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks> virtual_links;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces> interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks : public ydk::Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLink; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink

        ydk::YList virtual_link;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_name; //type: string
        ydk::YLeaf virtual_link_name_xr; //type: string
        ydk::YLeaf virtual_link_neighbor_id; //type: string
        ydk::YLeaf virtual_link_state; //type: OspfInterfaceState
        ydk::YLeaf virtual_link_demand_circuit; //type: boolean
        ydk::YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf transit_area; //type: string
        ydk::YLeaf virtual_link_interface_name; //type: string
        ydk::YLeaf virtual_link_cost; //type: uint16
        ydk::YLeaf virual_link_transmission_delay; //type: uint16
        ydk::YLeaf virtual_link_hello_interval; //type: uint32
        ydk::YLeaf virtual_link_hello_interval_ms; //type: uint32
        ydk::YLeaf virtual_link_dead_interval; //type: uint32
        ydk::YLeaf virtual_link_wait_interval; //type: uint32
        ydk::YLeaf virtaul_link_retransmission_interval; //type: uint32
        ydk::YLeaf virtual_link_next_hello; //type: uint32
        ydk::YLeaf virtual_link_next_hello_ms; //type: uint32
        ydk::YLeaf virtual_link_passive; //type: boolean
        ydk::YLeaf virtual_link_authentication_type; //type: Authentication
        ydk::YLeaf virtual_link_youngest_md_key; //type: boolean
        ydk::YLeaf virtual_link_youngest_md_key_id; //type: uint16
        ydk::YLeaf virtual_link_old_md_key_count; //type: uint32
        ydk::YLeaf keychain_name; //type: string
        ydk::YLeaf virtual_link_keychain_key_conf; //type: boolean
        ydk::YLeaf virtual_link_keychain_id; //type: uint64
        ydk::YLeaf virtual_link_keychain_alg; //type: OspfCrytographicAlgo
        ydk::YLeaf virtual_link_nsf_enabled; //type: boolean
        ydk::YLeaf virtual_link_nsf; //type: boolean
        ydk::YLeaf virtual_link_last_nsf; //type: uint32
        class VirtualLinkNeighbor; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor
        class VirtualLinkMdKey; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;
        ydk::YList virtual_link_md_key;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor : public ydk::Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_suppress_hello; //type: boolean
        ydk::YLeaf virtual_link_state; //type: NeighborState
        class VirtualLinkRetransmissoin; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin> virtual_link_retransmissoin;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin : public ydk::Entity
{
    public:
        VirtualLinkRetransmissoin();
        ~VirtualLinkRetransmissoin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dbd_retransmission_count; //type: uint32
        ydk::YLeaf dbd_retransmission_total_count; //type: uint32
        ydk::YLeaf area_flooding_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmission_count; //type: uint32
        ydk::YLeaf number_of_retransmissions; //type: uint32
        ydk::YLeaf area_first_flood_information; //type: uint32
        ydk::YLeaf area_first_flood_information_index; //type: uint32
        ydk::YLeaf as_first_flood_information; //type: uint32
        ydk::YLeaf as_first_flood_information_index; //type: uint32
        ydk::YLeaf area_next_flood_information; //type: uint32
        ydk::YLeaf area_next_flood_information_index; //type: uint32
        ydk::YLeaf as_next_flood_information; //type: uint32
        ydk::YLeaf as_next_flood_information_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey : public ydk::Entity
{
    public:
        VirtualLinkMdKey();
        ~VirtualLinkMdKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs : public ydk::Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceBrief; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief

        ydk::YList interface_brief;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        ydk::YList interface_madj;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface

        ydk::YList interface;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_state; //type: InterfaceState
        ydk::YLeaf interface_line_state; //type: boolean
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_sid; //type: uint32
        ydk::YLeaf interface_sid_php_off; //type: boolean
        ydk::YLeaf interface_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_strict_spf_sid; //type: uint32
        ydk::YLeaf interface_strict_spf_sid_php_off; //type: boolean
        ydk::YLeaf interface_strict_spf_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_router_id; //type: string
        ydk::YLeaf network_type; //type: Interface
        ydk::YLeaf ip_mtu; //type: uint16
        ydk::YLeaf maximum_packet_size; //type: uint16
        ydk::YLeaf interface_tunnel_flags; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf interface_bandwidth; //type: uint32
        ydk::YLeaf cfg_cost_fallback; //type: boolean
        ydk::YLeaf interface_cost_fallback; //type: uint16
        ydk::YLeaf cost_fallback_active; //type: boolean
        ydk::YLeaf configured_ldp_sync; //type: boolean
        ydk::YLeaf configured_ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf interface_ldp_sync; //type: boolean
        ydk::YLeaf configured_demand_circuit; //type: boolean
        ydk::YLeaf interface_demand_circuit; //type: boolean
        ydk::YLeaf interface_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf transmission_delay; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_priority; //type: uint8
        ydk::YLeaf designated_router; //type: boolean
        ydk::YLeaf designated_router_id; //type: string
        ydk::YLeaf designated_router_address; //type: string
        ydk::YLeaf backup_designated_router; //type: boolean
        ydk::YLeaf backup_designated_router_id; //type: string
        ydk::YLeaf backup_designated_router_address; //type: string
        ydk::YLeaf network_lsa_flush_timer; //type: uint32
        ydk::YLeaf interface_lsa_filter; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_interval_ms; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf wait_interval; //type: uint32
        ydk::YLeaf interface_retransmission_interrval; //type: uint32
        ydk::YLeaf interface_nsf_enabled; //type: boolean
        ydk::YLeaf interface_nsf; //type: boolean
        ydk::YLeaf interface_last_nsf; //type: uint32
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf next_hello_time; //type: uint32
        ydk::YLeaf next_hello_time_ms; //type: uint32
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf ttl_security_hop_count; //type: uint32
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        ydk::YLeaf prefix_suppress_primary_addresses; //type: boolean
        ydk::YLeaf prefix_suppress_secondary_addresses; //type: boolean
        ydk::YLeaf is_loopback_stub_network; //type: boolean
        ydk::YLeaf interface_ack_list_count; //type: uint32
        ydk::YLeaf interface_ack_list_high_watermark; //type: uint32
        ydk::YLeaf registered_for_link_down_fast_detection; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time; //type: uint32
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time_remaining; //type: uint32
        ydk::YLeaf fast_reroute_type; //type: Ipfrr
        ydk::YLeaf fast_reroute_topology_independent_lfa; //type: boolean
        ydk::YLeaf interface_unnum; //type: string
        ydk::YLeaf interface_forw; //type: boolean
        ydk::YLeaf interface_pri_labels; //type: uint8
        ydk::YLeaf interface_bkp_labels; //type: uint8
        ydk::YLeaf interface_srte_labels; //type: uint8
        ydk::YLeaf pm_delay_set; //type: boolean
        ydk::YLeaf link_delay_avg; //type: uint32
        ydk::YLeaf link_delay_min; //type: uint32
        ydk::YLeaf link_delay_max; //type: uint32
        ydk::YLeaf link_delay_var; //type: uint32
        ydk::YLeaf pm_loss_set; //type: boolean
        ydk::YLeaf link_loss; //type: uint32
        ydk::YLeaf pmbw_util_set; //type: boolean
        ydk::YLeaf total_bandwidth; //type: uint32
        ydk::YLeaf rsvpte_bandwidth; //type: uint32
        ydk::YLeaf remote_lfa; //type: uint8
        ydk::YLeaf srte_metric_set; //type: boolean
        ydk::YLeaf srte_metric; //type: uint32
        ydk::YLeaf srte_app_weight; //type: uint32
        ydk::YLeaf srte_ext_admin_group_set; //type: boolean
        ydk::YLeaf interface_weight; //type: uint32
        class InterfaceBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation
        class ActiveInterface; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface
        class Srlg; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg
        class SrteteExtAdminGroup; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::SrteteExtAdminGroup
        class InterfaceNeighbor; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj
        class IpfrrTiebreakers; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers
        class IpSecAddr; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr
        class SrAdjSid; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::SrAdjSid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface> active_interface;
        ydk::YList srlg;
        ydk::YList srtete_ext_admin_group;
        ydk::YList interface_neighbor;
        ydk::YList interface_madj;
        ydk::YList ipfrr_tiebreakers;
        ydk::YList ip_sec_addr;
        ydk::YList sr_adj_sid;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation : public ydk::Entity
{
    public:
        InterfaceBfdInformation();
        ~InterfaceBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface : public ydk::Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf interface_area_flood_index; //type: uint32
        ydk::YLeaf interface_as_flood_index; //type: uint32
        ydk::YLeaf interface_flood_length; //type: uint32
        ydk::YLeaf interface_area_next_flood; //type: uint32
        ydk::YLeaf interface_area_next_flood_index; //type: uint32
        ydk::YLeaf interface_as_next_flood; //type: uint32
        ydk::YLeaf interface_as_next_flood_index; //type: uint32
        ydk::YLeaf flood_scan_length; //type: uint32
        ydk::YLeaf maximum_flood_length; //type: uint32
        ydk::YLeaf last_flood_time; //type: uint32
        ydk::YLeaf maximum_flood_time; //type: uint32
        ydk::YLeaf interface_flood_pacing_timer; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf suppress_hello_count; //type: uint16
        ydk::YLeaf interface_authentication_type; //type: Authentication
        ydk::YLeaf youngest_md_key; //type: boolean
        ydk::YLeaf old_md5_key_neighbor_count; //type: uint32
        ydk::YLeaf youngest_md_key_id; //type: uint16
        ydk::YLeaf keychain_name; //type: string
        ydk::YLeaf keychain_key_conf; //type: boolean
        ydk::YLeaf keychain_id; //type: uint64
        ydk::YLeaf keychain_alg; //type: OspfCrytographicAlgo
        class MdKeys; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys

        ydk::YList md_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys : public ydk::Entity
{
    public:
        MdKeys();
        ~MdKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::SrteteExtAdminGroup : public ydk::Entity
{
    public:
        SrteteExtAdminGroup();
        ~SrteteExtAdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::SrteteExtAdminGroup


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor : public ydk::Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_id; //type: string
        ydk::YLeaf interface_neighbor_cost; //type: uint32
        ydk::YLeaf neighbor_dr; //type: boolean
        ydk::YLeaf neighbor_bdr; //type: boolean
        ydk::YLeaf suppress_hello; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers : public ydk::Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: IpfrrTbrkr
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr : public ydk::Entity
{
    public:
        IpSecAddr();
        ~IpSecAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary_addr; //type: string
        ydk::YLeaf secondary_prefix; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::SrAdjSid : public ydk::Entity
{
    public:
        SrAdjSid();
        ~SrAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adj_sid_label; //type: uint32
        ydk::YLeaf protected_adj_sid; //type: boolean
        ydk::YLeaf adj_sid_is_active; //type: boolean
        ydk::YLeaf adj_sid_inactive_reason; //type: OspfSrAdjSidInactiveReason

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::SrAdjSid


class Ospf::Processes::Process::DefaultVrf::BorderRouters : public ydk::Entity
{
    public:
        BorderRouters();
        ~BorderRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BorderRouter; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter

        ydk::YList border_router;
        
}; // Ospf::Processes::Process::DefaultVrf::BorderRouters


class Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter : public ydk::Entity
{
    public:
        BorderRouter();
        ~BorderRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf border_router_id; //type: string
        ydk::YLeaf border_router_id_xr; //type: string
        class BorderRouterPath; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath

        ydk::YList border_router_path;
        
}; // Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter


class Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath : public ydk::Entity
{
    public:
        BorderRouterPath();
        ~BorderRouterPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf border_router_route_type; //type: OspfRoute
        ydk::YLeaf border_router_route_metric; //type: uint32
        ydk::YLeaf border_router_next_hop; //type: string
        ydk::YLeaf border_router_next_hop_interface_name; //type: string
        ydk::YLeaf border_router_type; //type: OspfBr
        ydk::YLeaf border_router_area_id; //type: string
        ydk::YLeaf spf_version; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath


class Ospf::Processes::Process::DefaultVrf::ProcessInformation : public ydk::Entity
{
    public:
        ProcessInformation();
        ~ProcessInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolAreas; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas
        class ProtocolSummary; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary
        class Redistributions; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions
        class ProcessAreas; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas
        class ProcessSummary; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas> protocol_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary> protocol_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions> redistributions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas> process_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary> process_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas : public ydk::Entity
{
    public:
        ProtocolAreas();
        ~ProtocolAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolArea; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea

        ydk::YList protocol_area;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea : public ydk::Entity
{
    public:
        ProtocolArea();
        ~ProtocolArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf protcol_area; //type: string
        ydk::YLeaf protocol_mpls; //type: boolean
        ydk::YLeaf protocol_area_dist_list_in; //type: string
        class ProtocolInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface

        ydk::YList protocol_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface : public ydk::Entity
{
    public:
        ProtocolInterface();
        ~ProtocolInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_interface_name; //type: string
        ydk::YLeaf protocol_authentication_type; //type: Authentication
        ydk::YLeaf protocol_interface_dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary : public ydk::Entity
{
    public:
        ProtocolSummary();
        ~ProtocolSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_router_id; //type: string
        ydk::YLeaf protocol_distance; //type: uint32
        ydk::YLeaf administrative_distance_inter_area; //type: uint32
        ydk::YLeaf administrative_distance_external; //type: uint32
        ydk::YLeaf protocol_nsf; //type: boolean
        ydk::YLeaf dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution

        ydk::YList redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf process_name; //type: string
        ydk::YLeaf metric_flag; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf classless; //type: boolean
        ydk::YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol : public ydk::Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas : public ydk::Entity
{
    public:
        ProcessAreas();
        ~ProcessAreas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProcessArea; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea

        ydk::YList process_area;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea : public ydk::Entity
{
    public:
        ProcessArea();
        ~ProcessArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf area_id_string; //type: string
        ydk::YLeaf backbone_area_active; //type: boolean
        ydk::YLeaf area_interface_count; //type: uint16
        ydk::YLeaf area_stub; //type: boolean
        ydk::YLeaf area_total_stub; //type: boolean
        ydk::YLeaf stub_default_cost; //type: uint16
        ydk::YLeaf area_nssa; //type: boolean
        ydk::YLeaf nssa_no_redistribution; //type: boolean
        ydk::YLeaf nssa_translate; //type: boolean
        ydk::YLeaf nssa_translate_always; //type: boolean
        ydk::YLeaf nssa_default; //type: boolean
        ydk::YLeaf te_enabled; //type: boolean
        ydk::YLeaf te_topology_version; //type: uint32
        ydk::YLeaf external_out; //type: boolean
        ydk::YLeaf summary_in; //type: boolean
        ydk::YLeaf segment_routing; //type: SrDp
        ydk::YLeaf sr_strict_spf_cap; //type: boolean
        ydk::YLeaf sr_strict_spfsids_available; //type: boolean
        ydk::YLeaf sr_microloop_avoidance_active; //type: boolean
        ydk::YLeaf sr_microloop_avoidance_event_type; //type: SrUloopEvent
        ydk::YLeaf sr_microloop_avoidance_near_end_id; //type: string
        ydk::YLeaf sr_microloop_avoidance_far_end_id; //type: string
        ydk::YLeaf sr_microloop_avoidance_pseudonode_id; //type: string
        ydk::YLeaf authentication_type; //type: Authentication
        ydk::YLeaf spf_count; //type: uint32
        ydk::YLeaf area_policy_in; //type: boolean
        ydk::YLeaf area_policy_in_name; //type: string
        ydk::YLeaf area_policy_out; //type: boolean
        ydk::YLeaf area_policy_out_name; //type: string
        ydk::YLeaf area_lsa_count; //type: uint32
        ydk::YLeaf area_lsa_checksum; //type: uint32
        ydk::YLeaf area_opaque_lsa_count; //type: uint32
        ydk::YLeaf area_opaque_lsa_checksum; //type: uint32
        ydk::YLeaf area_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf indication_lsa_count; //type: uint32
        ydk::YLeaf dna_lsa_count; //type: uint32
        ydk::YLeaf flood_list_length; //type: uint32
        ydk::YLeaf area_lfa_interface_count; //type: uint32
        ydk::YLeaf area_per_prefix_lfa_interface_count; //type: uint32
        ydk::YLeaf area_lfa_revision; //type: uint32
        ydk::YLeaf area_adj_stag_num_nbr_forming; //type: uint16
        ydk::YLeaf area_num_nbr_full; //type: uint16
        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange

        ydk::YList area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange : public ydk::Entity
{
    public:
        AreaRange();
        ~AreaRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_prefix; //type: string
        ydk::YLeaf range_mask; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf advertise_flag; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary : public ydk::Entity
{
    public:
        ProcessSummary();
        ~ProcessSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role_standby; //type: boolean
        ydk::YLeaf role; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_switchover_on_restart; //type: boolean
        ydk::YLeaf igp_intact_on; //type: boolean
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf tos_options; //type: uint8
        ydk::YLeaf opaque_capable; //type: boolean
        ydk::YLeaf area_border_router; //type: boolean
        ydk::YLeaf as_border_router; //type: boolean
        ydk::YLeaf vrf_lite_enabled; //type: boolean
        ydk::YLeaf capability_prefer_type7; //type: boolean
        ydk::YLeaf maximum_metric_start; //type: boolean
        ydk::YLeaf maximum_metric_start_timer; //type: uint32
        ydk::YLeaf maximum_metric_set_reason; //type: MaxMetricSetReason
        ydk::YLeaf maximum_metric_abr_off_mode; //type: boolean
        ydk::YLeaf maximum_metric_abr_off_reasons; //type: OspfMaxMetricAbrOffReasons
        ydk::YLeaf maximum_metric_abr_off_buffer_time; //type: uint32
        ydk::YLeaf spf_start_time; //type: uint32
        ydk::YLeaf spf_hold_time; //type: uint32
        ydk::YLeaf spf_maximum_time; //type: uint32
        ydk::YLeaf spf_prefix_priority; //type: boolean
        ydk::YLeaf spf_prefix_priority_route_policy; //type: string
        ydk::YLeaf lsa_start_time; //type: int32
        ydk::YLeaf lsa_hold_time; //type: uint32
        ydk::YLeaf lsa_maximum_time; //type: uint32
        ydk::YLeaf minimum_lsa_interval; //type: uint32
        ydk::YLeaf lsa_refresh_interval; //type: uint32
        ydk::YLeaf minimum_lsa_arrival_interval; //type: uint32
        ydk::YLeaf if_flood_pacing_interval; //type: uint16
        ydk::YLeaf if_retrans_pacing_interval; //type: uint16
        ydk::YLeaf adj_stag_init_num_nbr; //type: uint16
        ydk::YLeaf adj_stag_max_num_nbr; //type: uint16
        ydk::YLeaf adj_stagger_enabled; //type: boolean
        ydk::YLeaf adj_stag_num_nbr_forming; //type: uint16
        ydk::YLeaf number_nbrs_full; //type: uint16
        ydk::YLeaf as_lsa_count; //type: uint32
        ydk::YLeaf as_lsa_checksum; //type: uint32
        ydk::YLeaf opaque_lsa_count; //type: uint32
        ydk::YLeaf opaque_lsa_checksum; //type: uint32
        ydk::YLeaf as_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf as_dna_lsa_count; //type: uint32
        ydk::YLeaf area_count; //type: uint16
        ydk::YLeaf normal_area_count; //type: uint16
        ydk::YLeaf stub_area_count; //type: uint16
        ydk::YLeaf nssa_area_count; //type: uint16
        ydk::YLeaf maximum_interfaces; //type: uint32
        ydk::YLeaf as_lsa_flood_list_length; //type: uint32
        ydk::YLeaf nsf_enabled; //type: boolean
        ydk::YLeaf last_nsf_time; //type: uint32
        ydk::YLeaf nsf_time; //type: uint32
        ydk::YLeaf redistribution_limit; //type: uint32
        ydk::YLeaf redistribution_threshold; //type: uint32
        ydk::YLeaf redistribution_limit_warn; //type: boolean
        ydk::YLeaf graceful_shutdown_retention_time; //type: uint32
        ydk::YLeaf graceful_shutdown_state; //type: GsState
        ydk::YLeaf table_prefix_limit_reached; //type: boolean
        ydk::YLeaf non_self_lsa_count; //type: uint32
        ydk::YLeaf max_lsa_enabled; //type: boolean
        ydk::YLeaf max_lsa_limit; //type: uint32
        ydk::YLeaf max_lsa_treshold; //type: uint32
        ydk::YLeaf max_lsa_warning_only; //type: boolean
        ydk::YLeaf max_lsa_ignore_time; //type: uint32
        ydk::YLeaf max_lsa_reset_time; //type: uint32
        ydk::YLeaf max_lsa_ignore_limit; //type: uint32
        ydk::YLeaf max_lsa_ignore_count; //type: uint32
        ydk::YLeaf max_lsa_ignore_timer; //type: uint32
        ydk::YLeaf max_lsa_reset_timer; //type: uint32
        ydk::YLeaf context_name; //type: string
        ydk::YLeaf snmp_trap_enabled; //type: boolean
        ydk::YLeaf ucmp; //type: boolean
        ydk::YLeaf ucmp_prefix_list; //type: string
        ydk::YLeaf ucmp_variance; //type: int32
        ydk::YLeaf ucmp_delay; //type: uint32
        ydk::YLeaf microloop_avoidance_type; //type: UloopAvoidance
        ydk::YLeaf microloop_avoidance_delay; //type: uint32
        ydk::YLeaf microloop_avoidance_active; //type: boolean
        ydk::YLeaf microloop_avoidance_delay_expiry; //type: uint32
        ydk::YLeaf lsd_connected; //type: boolean
        ydk::YLeaf lsd_registered; //type: boolean
        ydk::YLeaf lsd_bound; //type: boolean
        ydk::YLeaf lsd_connection_revision; //type: uint32
        ydk::YLeaf srgb_configured; //type: boolean
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_end; //type: uint32
        ydk::YLeaf srgb_status; //type: OspfSrgbStatus
        ydk::YLeaf sr_strict_spf_cap; //type: boolean
        ydk::YLeaf srlb_start; //type: uint32
        ydk::YLeaf srlb_end; //type: uint32
        ydk::YLeaf srlb_status; //type: OspfSrlbStatus
        class DomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId
        class MaximumMetric; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric
        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId> domain_id;
        ydk::YList maximum_metric;
        ydk::YList redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrimaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId> primary_domain_id;
        ydk::YList secondary_domain_id;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId : public ydk::Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId : public ydk::Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_id_type; //type: uint16
        ydk::YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric : public ydk::Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_metric_reason; //type: uint8
        ydk::YLeaf max_metric_enabled; //type: boolean
        ydk::YLeaf unset_maximum_metric; //type: boolean
        ydk::YLeaf saved_unset_maximum_metric; //type: boolean
        ydk::YLeaf maximum_metric_start_time; //type: uint32
        ydk::YLeaf saved_startup_time; //type: uint32
        ydk::YLeaf maximum_metric_include_stubs; //type: boolean
        ydk::YLeaf maximum_metric_summary_lsa; //type: boolean
        ydk::YLeaf maximum_metric_summary_lsa_metric; //type: uint32
        ydk::YLeaf maximum_metric_external_lsa; //type: boolean
        ydk::YLeaf maximum_metric_external_lsa_metric; //type: uint32
        ydk::YLeaf maximum_metric_originated_for; //type: uint32
        ydk::YLeaf maximum_metric_unset_reason; //type: MaxMetricUnsetReason
        class MaximumMetricTimeUnset; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset> maximum_metric_time_unset;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset : public ydk::Entity
{
    public:
        MaximumMetricTimeUnset();
        ~MaximumMetricTimeUnset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf second; //type: uint32
        ydk::YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_flag; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf classless; //type: boolean
        ydk::YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol : public ydk::Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_type; //type: RedistProtocol
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol


class Ospf::Processes::Process::DefaultVrf::Areas : public ydk::Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Area; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area

        ydk::YList area;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas


class Ospf::Processes::Process::DefaultVrf::Areas::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        class FloodListAreaTable; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors
        class InterfaceBriefs; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs
        class Requests; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests
        class Retransmissions; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions
        class AreaStatistics; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics
        class NeighborDetails; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails
        class Interfaces; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable> flood_list_area_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions> retransmissions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails> neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces> interfaces;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable : public ydk::Entity
{
    public:
        FloodListAreaTable();
        ~FloodListAreaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood

        ydk::YList flood;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood : public ydk::Entity
{
    public:
        Flood();
        ~Flood();

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
        ydk::YLeaf flood_interface_name; //type: string
        ydk::YLeaf flood_pacing_timer; //type: uint32
        ydk::YLeaf flood_lsa_count; //type: uint32
        class AreaFlood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood

        ydk::YList area_flood;
        ydk::YList as_flood;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood : public ydk::Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood : public ydk::Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_status_flag; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs : public ydk::Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceBrief; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief

        ydk::YList interface_brief;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

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
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        ydk::YList interface_madj;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request

        ydk::YList request;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf request_neighbor_id; //type: string
        ydk::YLeaf request_neighbor_address; //type: string
        ydk::YLeaf request_interface_name; //type: string
        class Request_; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_

        ydk::YList request;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_ : public ydk::Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions : public ydk::Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Retransmission; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission

        ydk::YList retransmission;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission : public ydk::Entity
{
    public:
        Retransmission();
        ~Retransmission();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf retransmission_neighbor_id; //type: string
        ydk::YLeaf retransmission_neighbor_ip_address; //type: string
        ydk::YLeaf retransmission_interface_name; //type: string
        ydk::YLeaf retransmission_timer; //type: uint32
        ydk::YLeaf retransmission_count; //type: uint32
        class RetransmissionAreaDb; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb

        ydk::YList retransmission_area_db;
        ydk::YList retransmission_asdb;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb : public ydk::Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb : public ydk::Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics : public ydk::Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries : public ydk::Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        ydk::YList interface_stats_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

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
        ydk::YLeaf handle; //type: string
        ydk::YLeaf if_name_str; //type: string
        class IfEntry; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        ydk::YList if_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf madj_intf; //type: boolean
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_id_str; //type: string
        class IfStat; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        ydk::YList if_stat;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
{
    public:
        IfStat();
        ~IfStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails : public ydk::Entity
{
    public:
        NeighborDetails();
        ~NeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborDetail; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail

        ydk::YList neighbor_detail;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail : public ydk::Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

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
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_area_id; //type: string
        ydk::YLeaf state_change_count; //type: uint16
        ydk::YLeaf neighbor_cost; //type: uint16
        ydk::YLeaf neighbor_filter; //type: boolean
        ydk::YLeaf neighbor_designated_router_address; //type: string
        ydk::YLeaf neighbor_backup_designated_router_address; //type: string
        ydk::YLeaf interface_type; //type: Interface
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf next_poll_interval; //type: uint32
        ydk::YLeaf neighbor_option; //type: uint8
        ydk::YLeaf pending_events; //type: uint16
        ydk::YLeaf neighbor_lls_option; //type: uint32
        ydk::YLeaf oob_resynchronization; //type: boolean
        ydk::YLeaf nsf_router_state; //type: NsfRtr
        ydk::YLeaf last_oob_time; //type: uint32
        ydk::YLeaf lfa_interface; //type: string
        ydk::YLeaf lfa_next_hop; //type: string
        ydk::YLeaf lfa_neighbor_id; //type: string
        ydk::YLeaf lfa_neighbor_revision; //type: uint32
        ydk::YLeaf neighbor_ack_list_count; //type: uint32
        ydk::YLeaf neighbor_ack_list_high_watermark; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint16
        class NeighborSummary; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation
        class AdjacencySid; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        ydk::YList adjacency_sid;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary : public ydk::Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_status_flag; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation : public ydk::Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf bfd_status_flag; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public ydk::Entity
{
    public:
        NeighborRetransmissionInformation();
        ~NeighborRetransmissionInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dbd_retransmission_count; //type: uint32
        ydk::YLeaf dbd_retransmission_total_count; //type: uint32
        ydk::YLeaf area_flooding_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmission_count; //type: uint32
        ydk::YLeaf number_of_retransmissions; //type: uint32
        ydk::YLeaf area_first_flood_information; //type: uint32
        ydk::YLeaf area_first_flood_information_index; //type: uint32
        ydk::YLeaf as_first_flood_information; //type: uint32
        ydk::YLeaf as_first_flood_information_index; //type: uint32
        ydk::YLeaf area_next_flood_information; //type: uint32
        ydk::YLeaf area_next_flood_information_index; //type: uint32
        ydk::YLeaf as_next_flood_information; //type: uint32
        ydk::YLeaf as_next_flood_information_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adj_sid_label; //type: uint32
        ydk::YLeaf protected_adj_sid; //type: boolean
        ydk::YLeaf adj_sid_has_backup; //type: boolean
        ydk::YLeaf configured_adj_sid; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::AdjacencySid


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface

        ydk::YList interface;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_state; //type: InterfaceState
        ydk::YLeaf interface_line_state; //type: boolean
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_sid; //type: uint32
        ydk::YLeaf interface_sid_php_off; //type: boolean
        ydk::YLeaf interface_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_strict_spf_sid; //type: uint32
        ydk::YLeaf interface_strict_spf_sid_php_off; //type: boolean
        ydk::YLeaf interface_strict_spf_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_router_id; //type: string
        ydk::YLeaf network_type; //type: Interface
        ydk::YLeaf ip_mtu; //type: uint16
        ydk::YLeaf maximum_packet_size; //type: uint16
        ydk::YLeaf interface_tunnel_flags; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf interface_bandwidth; //type: uint32
        ydk::YLeaf cfg_cost_fallback; //type: boolean
        ydk::YLeaf interface_cost_fallback; //type: uint16
        ydk::YLeaf cost_fallback_active; //type: boolean
        ydk::YLeaf configured_ldp_sync; //type: boolean
        ydk::YLeaf configured_ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf interface_ldp_sync; //type: boolean
        ydk::YLeaf configured_demand_circuit; //type: boolean
        ydk::YLeaf interface_demand_circuit; //type: boolean
        ydk::YLeaf interface_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf transmission_delay; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_priority; //type: uint8
        ydk::YLeaf designated_router; //type: boolean
        ydk::YLeaf designated_router_id; //type: string
        ydk::YLeaf designated_router_address; //type: string
        ydk::YLeaf backup_designated_router; //type: boolean
        ydk::YLeaf backup_designated_router_id; //type: string
        ydk::YLeaf backup_designated_router_address; //type: string
        ydk::YLeaf network_lsa_flush_timer; //type: uint32
        ydk::YLeaf interface_lsa_filter; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_interval_ms; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf wait_interval; //type: uint32
        ydk::YLeaf interface_retransmission_interrval; //type: uint32
        ydk::YLeaf interface_nsf_enabled; //type: boolean
        ydk::YLeaf interface_nsf; //type: boolean
        ydk::YLeaf interface_last_nsf; //type: uint32
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf next_hello_time; //type: uint32
        ydk::YLeaf next_hello_time_ms; //type: uint32
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf ttl_security_hop_count; //type: uint32
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        ydk::YLeaf prefix_suppress_primary_addresses; //type: boolean
        ydk::YLeaf prefix_suppress_secondary_addresses; //type: boolean
        ydk::YLeaf is_loopback_stub_network; //type: boolean
        ydk::YLeaf interface_ack_list_count; //type: uint32
        ydk::YLeaf interface_ack_list_high_watermark; //type: uint32
        ydk::YLeaf registered_for_link_down_fast_detection; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time; //type: uint32
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time_remaining; //type: uint32
        ydk::YLeaf fast_reroute_type; //type: Ipfrr
        ydk::YLeaf fast_reroute_topology_independent_lfa; //type: boolean
        ydk::YLeaf interface_unnum; //type: string
        ydk::YLeaf interface_forw; //type: boolean
        ydk::YLeaf interface_pri_labels; //type: uint8
        ydk::YLeaf interface_bkp_labels; //type: uint8
        ydk::YLeaf interface_srte_labels; //type: uint8
        ydk::YLeaf pm_delay_set; //type: boolean
        ydk::YLeaf link_delay_avg; //type: uint32
        ydk::YLeaf link_delay_min; //type: uint32
        ydk::YLeaf link_delay_max; //type: uint32
        ydk::YLeaf link_delay_var; //type: uint32
        ydk::YLeaf pm_loss_set; //type: boolean
        ydk::YLeaf link_loss; //type: uint32
        ydk::YLeaf pmbw_util_set; //type: boolean
        ydk::YLeaf total_bandwidth; //type: uint32
        ydk::YLeaf rsvpte_bandwidth; //type: uint32
        ydk::YLeaf remote_lfa; //type: uint8
        ydk::YLeaf srte_metric_set; //type: boolean
        ydk::YLeaf srte_metric; //type: uint32
        ydk::YLeaf srte_app_weight; //type: uint32
        ydk::YLeaf srte_ext_admin_group_set; //type: boolean
        ydk::YLeaf interface_weight; //type: uint32
        class InterfaceBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation
        class ActiveInterface; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface
        class Srlg; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg
        class SrteteExtAdminGroup; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::SrteteExtAdminGroup
        class InterfaceNeighbor; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj
        class IpfrrTiebreakers; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers
        class IpSecAddr; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr
        class SrAdjSid; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::SrAdjSid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface> active_interface;
        ydk::YList srlg;
        ydk::YList srtete_ext_admin_group;
        ydk::YList interface_neighbor;
        ydk::YList interface_madj;
        ydk::YList ipfrr_tiebreakers;
        ydk::YList ip_sec_addr;
        ydk::YList sr_adj_sid;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation : public ydk::Entity
{
    public:
        InterfaceBfdInformation();
        ~InterfaceBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface : public ydk::Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf interface_area_flood_index; //type: uint32
        ydk::YLeaf interface_as_flood_index; //type: uint32
        ydk::YLeaf interface_flood_length; //type: uint32
        ydk::YLeaf interface_area_next_flood; //type: uint32
        ydk::YLeaf interface_area_next_flood_index; //type: uint32
        ydk::YLeaf interface_as_next_flood; //type: uint32
        ydk::YLeaf interface_as_next_flood_index; //type: uint32
        ydk::YLeaf flood_scan_length; //type: uint32
        ydk::YLeaf maximum_flood_length; //type: uint32
        ydk::YLeaf last_flood_time; //type: uint32
        ydk::YLeaf maximum_flood_time; //type: uint32
        ydk::YLeaf interface_flood_pacing_timer; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf suppress_hello_count; //type: uint16
        ydk::YLeaf interface_authentication_type; //type: Authentication
        ydk::YLeaf youngest_md_key; //type: boolean
        ydk::YLeaf old_md5_key_neighbor_count; //type: uint32
        ydk::YLeaf youngest_md_key_id; //type: uint16
        ydk::YLeaf keychain_name; //type: string
        ydk::YLeaf keychain_key_conf; //type: boolean
        ydk::YLeaf keychain_id; //type: uint64
        ydk::YLeaf keychain_alg; //type: OspfCrytographicAlgo
        class MdKeys; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys

        ydk::YList md_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys : public ydk::Entity
{
    public:
        MdKeys();
        ~MdKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::Srlg


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::SrteteExtAdminGroup : public ydk::Entity
{
    public:
        SrteteExtAdminGroup();
        ~SrteteExtAdminGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::SrteteExtAdminGroup


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor : public ydk::Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_id; //type: string
        ydk::YLeaf interface_neighbor_cost; //type: uint32
        ydk::YLeaf neighbor_dr; //type: boolean
        ydk::YLeaf neighbor_bdr; //type: boolean
        ydk::YLeaf suppress_hello; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers : public ydk::Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: IpfrrTbrkr
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr : public ydk::Entity
{
    public:
        IpSecAddr();
        ~IpSecAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary_addr; //type: string
        ydk::YLeaf secondary_prefix; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpSecAddr


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::SrAdjSid : public ydk::Entity
{
    public:
        SrAdjSid();
        ~SrAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adj_sid_label; //type: uint32
        ydk::YLeaf protected_adj_sid; //type: boolean
        ydk::YLeaf adj_sid_is_active; //type: boolean
        ydk::YLeaf adj_sid_inactive_reason; //type: OspfSrAdjSidInactiveReason

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::SrAdjSid


class Ospf::Processes::Process::DefaultVrf::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DatabaseAreas; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas
        class DatabaseSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries
        class DatabaseSummaryAs; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs
        class Lsas; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas
        class LsaSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas> database_areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries> database_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs> database_summary_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas> lsas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries> lsa_summaries;
        
}; // Ospf::Processes::Process::DefaultVrf::Database


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_6_ */

