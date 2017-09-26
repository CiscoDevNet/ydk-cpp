#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_3_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


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
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation> > route_area_information;
        
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
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath> > route_path;
        
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
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo


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
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime> failure_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route> > route;
        
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
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath> > route_path;
        
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
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo


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
        ydk::YLeaf route_next_hop_address; //type: string
        ydk::YLeaf route_source; //type: string
        ydk::YLeaf route_lsaid; //type: string
        ydk::YLeaf route_path_is_mcast_intact; //type: boolean
        ydk::YLeaf route_path_is_ucmp_path; //type: boolean
        ydk::YLeaf route_metric; //type: uint32
        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf area_id; //type: uint32
        ydk::YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
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


class Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation : public ydk::Entity
{
    public:
        SummaryInformation();
        ~SummaryInformation();

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
        class FailureTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime
        class Common; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common> common;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime> failure_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation


class Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::Common


class Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::SummaryInformation::FailureTime


class Ospf::Processes::Process::DefaultVrf::Statistics : public ydk::Entity
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

        class SpfStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats
        class RibBatchStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats
        class IssuStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats
        class RibThreadStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats
        class NsrPlStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats
        class NsrStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats
        class FrrStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats
        class TeStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::TeStats
        class ProtocolStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats
        class RawIoStats; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats
        class InterfaceStatsEntries; //type: Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats> frr_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries> interface_stats_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats> issu_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats> nsr_pl_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats> nsr_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats> protocol_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats> raw_io_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats> rib_batch_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats> rib_thread_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats> spf_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::TeStats> te_stats;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics


class Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats : public ydk::Entity
{
    public:
        FrrStats();
        ~FrrStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fs_paths; //type: uint32
        ydk::YLeaf fs_paths_eligible; //type: uint32
        ydk::YLeaf fs_paths_protected; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Statistics::FrrStats


class Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries : public ydk::Entity
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

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries


class Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
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
        class IfEntry; //type: Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
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
        class IfStat; //type: Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat> > if_stat;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats : public ydk::Entity
{
    public:
        IssuStats();
        ~IssuStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_rev; //type: int32
        ydk::YLeaf nsr_fsm_state; //type: int32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf nsr_nodeid; //type: uint32
        ydk::YLeaf nsr_peer_version; //type: uint32
        ydk::YLeaf nsr_peer_nodeid; //type: uint32
        ydk::YLeaf nsr_mtu; //type: uint32
        ydk::YLeaf nsr_nbr_qad_qid; //type: uint32
        ydk::YLeaf nsr_lsa_qad_qid; //type: uint32
        ydk::YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_nbr_seq_no; //type: uint32
        ydk::YLeaf nsr_intf_seq_no; //type: uint32
        ydk::YLeaf nsr_tmr_quant; //type: int32
        ydk::YLeaf nsr_conn_to_active_attempts; //type: uint64
        ydk::YLeaf nsr_conn_to_active_fails; //type: uint64
        ydk::YLeaf nsr_conn_to_active_opens; //type: uint64
        ydk::YLeaf nsr_conn_to_active_closes; //type: uint64
        ydk::YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdSched; //type: Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched
        class NsrRtrThdSched; //type: Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched> nsr_thd_sched;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched : public ydk::Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched : public ydk::Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::Statistics::IssuStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats : public ydk::Entity
{
    public:
        NsrPlStats();
        ~NsrPlStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NcdPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri> > ncd_pri;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri : public ydk::Entity
{
    public:
        NcdPri();
        ~NcdPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NumSent; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent
        class NumRecv; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv
        class NumSentDrop; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop
        class NumRecvDrop; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv> > num_recv;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent> > num_sent;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop> > num_sent_drop;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv : public ydk::Entity
{
    public:
        NumRecv();
        ~NumRecv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecv


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop : public ydk::Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlRecvDropArray; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray> > nsr_pl_recv_drop_array;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray : public ydk::Entity
{
    public:
        NsrPlRecvDropArray();
        ~NsrPlRecvDropArray();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent : public ydk::Entity
{
    public:
        NumSent();
        ~NumSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSent


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop : public ydk::Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlSendDropArray; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray> > nsr_pl_send_drop_array;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray : public ydk::Entity
{
    public:
        NsrPlSendDropArray();
        ~NsrPlSendDropArray();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats : public ydk::Entity
{
    public:
        NsrStats();
        ~NsrStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_rev; //type: int32
        ydk::YLeaf nsr_fsm_state; //type: int32
        ydk::YLeaf nsr_version; //type: uint32
        ydk::YLeaf nsr_nodeid; //type: uint32
        ydk::YLeaf nsr_peer_version; //type: uint32
        ydk::YLeaf nsr_peer_nodeid; //type: uint32
        ydk::YLeaf nsr_mtu; //type: uint32
        ydk::YLeaf nsr_nbr_qad_qid; //type: uint32
        ydk::YLeaf nsr_lsa_qad_qid; //type: uint32
        ydk::YLeaf nsr_nbr_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_lsa_qad_mdata_count; //type: uint32
        ydk::YLeaf nsr_nbr_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_lsa_init_sync_pend_count; //type: int32
        ydk::YLeaf nsr_nbr_seq_no; //type: uint32
        ydk::YLeaf nsr_intf_seq_no; //type: uint32
        ydk::YLeaf nsr_tmr_quant; //type: int32
        ydk::YLeaf nsr_conn_to_active_attempts; //type: uint64
        ydk::YLeaf nsr_conn_to_active_fails; //type: uint64
        ydk::YLeaf nsr_conn_to_active_opens; //type: uint64
        ydk::YLeaf nsr_conn_to_active_closes; //type: uint64
        ydk::YLeaf nsr_conn_to_active_errors; //type: uint64
        class NsrThdSched; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched
        class NsrRtrThdSched; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched> nsr_rtr_thd_sched;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched> nsr_thd_sched;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched : public ydk::Entity
{
    public:
        NsrRtrThdSched();
        ~NsrRtrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched : public ydk::Entity
{
    public:
        NsrThdSched();
        ~NsrThdSched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_pulse_quant; //type: int32
        ydk::YLeaf nsr_events_in_q; //type: uint32
        ydk::YLeaf nsr_events_tx; //type: uint64
        ydk::YLeaf nsr_events_rx; //type: uint64
        ydk::YLeaf nsr_bad_pulses_rx; //type: uint64
        ydk::YLeaf nsr_good_pulses_rx; //type: uint64
        ydk::YLeaf nsr_pulses_tx; //type: uint64
        ydk::YLeaf nsr_pulse_tx_fails; //type: uint64
        class NsrPri; //type: Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri> > nsr_pri;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched


class Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri : public ydk::Entity
{
    public:
        NsrPri();
        ~NsrPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nsr_sched_pri; //type: uint32
        ydk::YLeaf nsr_sched_quant; //type: uint8
        ydk::YLeaf nsr_sched_remain_quant; //type: uint8
        ydk::YLeaf nsr_sched_evs_in_q; //type: uint16
        ydk::YLeaf nsr_sched_max_evs; //type: uint16
        ydk::YLeaf nsr_sched_peak_q_len; //type: uint16
        ydk::YLeaf nsr_sched_evs_qd; //type: uint64
        ydk::YLeaf nsr_sched_enq_fails; //type: uint64
        ydk::YLeaf nsr_sched_evs_deqd; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::Statistics::NsrStats::NsrThdSched::NsrPri


class Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats : public ydk::Entity
{
    public:
        ProtocolStats();
        ~ProtocolStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inputs; //type: uint32
        ydk::YLeaf input_hello; //type: uint32
        ydk::YLeaf input_dbdes; //type: uint32
        ydk::YLeaf input_dbdes_lsa; //type: uint32
        ydk::YLeaf input_req; //type: uint32
        ydk::YLeaf input_req_lsa; //type: uint32
        ydk::YLeaf input_lsupd; //type: uint32
        ydk::YLeaf input_lsupd_lsa; //type: uint32
        ydk::YLeaf input_ack; //type: uint32
        ydk::YLeaf input_ack_lsa; //type: uint32
        ydk::YLeaf checksumerr; //type: uint32
        ydk::YLeaf input_autherr; //type: uint32
        ydk::YLeaf outputs; //type: uint32
        ydk::YLeaf output_hello; //type: uint32
        ydk::YLeaf output_dbdes; //type: uint32
        ydk::YLeaf output_dbdes_lsa; //type: uint32
        ydk::YLeaf output_req; //type: uint32
        ydk::YLeaf output_req_lsa; //type: uint32
        ydk::YLeaf output_lsupd; //type: uint32
        ydk::YLeaf output_lsupd_lsa; //type: uint32
        ydk::YLeaf output_ack; //type: uint32
        ydk::YLeaf output_ack_lsa; //type: uint32
        ydk::YLeaf output_autherr; //type: uint32
        ydk::YLeaf h_input_dbdes; //type: uint32
        ydk::YLeaf h_input_req; //type: uint32
        ydk::YLeaf h_input_lsupd; //type: uint32
        ydk::YLeaf h_input_ack; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Statistics::ProtocolStats


class Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats : public ydk::Entity
{
    public:
        RawIoStats();
        ~RawIoStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_sent; //type: uint32
        ydk::YLeaf out_bytes_sent; //type: uint32
        ydk::YLeaf out_no_conn_discarded; //type: uint32
        ydk::YLeaf out_null_src_discarded; //type: uint32
        ydk::YLeaf out_no_pak_discarded; //type: uint32
        ydk::YLeaf out_ipv4_hdr_err_discarded; //type: uint32
        ydk::YLeaf out_send_pak_err_discarded; //type: uint32
        ydk::YLeaf in_rcv; //type: uint32
        ydk::YLeaf in_bytes_rcv; //type: uint32
        ydk::YLeaf in_short_msg_discarded; //type: uint32
        ydk::YLeaf in_no_mem_discarded; //type: uint32
        ydk::YLeaf in_raw_event; //type: uint32
        ydk::YLeaf disconnects; //type: uint32
        ydk::YLeaf in_standby_discarded; //type: uint32
        ydk::YLeaf nsr_not_ready_discarded; //type: uint32
        ydk::YLeaf raw_connected; //type: boolean
        ydk::YLeaf sl_raw_connected; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Statistics::RawIoStats


class Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats : public ydk::Entity
{
    public:
        RibBatchStats();
        ~RibBatchStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PriorityBatch; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch> > priority_batch;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats


class Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch : public ydk::Entity
{
    public:
        PriorityBatch();
        ~PriorityBatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf batches_sent; //type: uint32
        ydk::YLeaf routes_sent; //type: uint32
        ydk::YLeaf routes_pending; //type: uint32
        ydk::YLeaf max_routes; //type: uint32
        ydk::YLeaf paths_sent; //type: uint32
        ydk::YLeaf paths_pending; //type: uint32
        ydk::YLeaf paths_add; //type: uint32
        ydk::YLeaf paths_add_errs; //type: uint32
        ydk::YLeaf paths_del; //type: uint32
        ydk::YLeaf paths_del_errs; //type: uint32
        ydk::YLeaf lfas_pending; //type: uint32
        ydk::YLeaf lfas_add; //type: uint32
        ydk::YLeaf lfas_del; //type: uint32
        ydk::YLeaf lfas_sent; //type: uint32
        ydk::YLeaf priority_level; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibBatchStats::PriorityBatch


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats : public ydk::Entity
{
    public:
        RibThreadStats();
        ~RibThreadStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Internalwq; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq
        class Ribqueue; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq> internalwq;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue> > ribqueue;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq : public ydk::Entity
{
    public:
        Internalwq();
        ~Internalwq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wq_thread_active; //type: boolean
        ydk::YLeaf wq_dqtime; //type: uint64
        ydk::YLeaf wqe_qtime; //type: uint64
        ydk::YLeaf wq_len_cur; //type: int32
        ydk::YLeaf wq_len_max; //type: int32
        ydk::YLeaf wq_total_queued; //type: uint32
        ydk::YLeaf wq_total_dequeued; //type: uint32
        ydk::YLeaf rib_version; //type: uint32
        ydk::YLeaf rib_pkts_sent; //type: uint32
        ydk::YLeaf rib_signals; //type: uint32
        ydk::YLeaf rib_send_errs; //type: uint32
        ydk::YLeaf rib_queue_errs; //type: uint32
        ydk::YLeaf rib_pfx_limit_errs; //type: uint32
        ydk::YLeaf rib_dequeue_errs; //type: uint32
        ydk::YLeaf rib_empty_batches; //type: uint32
        ydk::YLeaf rib_drop_before; //type: uint32
        ydk::YLeaf rib_drop_after; //type: uint32
        ydk::YLeaf rib_drop_conn; //type: uint32
        ydk::YLeaf rib_table_not_created; //type: uint32
        ydk::YLeaf priority_level; //type: string
        ydk::YLeaf rib_base_clock; //type: uint64
        class RibBaseTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime> rib_base_time;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime : public ydk::Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Internalwq::RibBaseTime


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue : public ydk::Entity
{
    public:
        Ribqueue();
        ~Ribqueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wq_thread_active; //type: boolean
        ydk::YLeaf wq_dqtime; //type: uint64
        ydk::YLeaf wqe_qtime; //type: uint64
        ydk::YLeaf wq_len_cur; //type: int32
        ydk::YLeaf wq_len_max; //type: int32
        ydk::YLeaf wq_total_queued; //type: uint32
        ydk::YLeaf wq_total_dequeued; //type: uint32
        ydk::YLeaf rib_version; //type: uint32
        ydk::YLeaf rib_pkts_sent; //type: uint32
        ydk::YLeaf rib_signals; //type: uint32
        ydk::YLeaf rib_send_errs; //type: uint32
        ydk::YLeaf rib_queue_errs; //type: uint32
        ydk::YLeaf rib_pfx_limit_errs; //type: uint32
        ydk::YLeaf rib_dequeue_errs; //type: uint32
        ydk::YLeaf rib_empty_batches; //type: uint32
        ydk::YLeaf rib_drop_before; //type: uint32
        ydk::YLeaf rib_drop_after; //type: uint32
        ydk::YLeaf rib_drop_conn; //type: uint32
        ydk::YLeaf rib_table_not_created; //type: uint32
        ydk::YLeaf priority_level; //type: string
        ydk::YLeaf rib_base_clock; //type: uint64
        class RibBaseTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime> rib_base_time;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue


class Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime : public ydk::Entity
{
    public:
        RibBaseTime();
        ~RibBaseTime();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats : public ydk::Entity
{
    public:
        SpfStats();
        ~SpfStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfHeader; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader
        class OsRuntime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime
        class OsSumRuntime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime
        class OsExRuntime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime
        class Runtime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime> > os_ex_runtime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime> > os_runtime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime> > os_sum_runtime;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime> > runtime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader> spf_header;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime : public ydk::Entity
{
    public:
        OsExRuntime();
        ~OsExRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sp_adv_rtr_id; //type: uint32
        ydk::YLeaf sp_dest_count; //type: uint32
        ydk::YLeaf sp_dest_addr; //type: uint32
        class SpStartTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime
        class SpDuration; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration> sp_duration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime> sp_start_time;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration : public ydk::Entity
{
    public:
        SpDuration();
        ~SpDuration();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpDuration


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime : public ydk::Entity
{
    public:
        SpStartTime();
        ~SpStartTime();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsExRuntime::SpStartTime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime : public ydk::Entity
{
    public:
        OsRuntime();
        ~OsRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si_area_id_str; //type: string
        ydk::YLeaf si_change_flags; //type: uint16
        class SiStartTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime
        class SiDuration; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration> si_duration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime> si_start_time;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration : public ydk::Entity
{
    public:
        SiDuration();
        ~SiDuration();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiDuration


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime : public ydk::Entity
{
    public:
        SiStartTime();
        ~SiStartTime();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsRuntime::SiStartTime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime : public ydk::Entity
{
    public:
        OsSumRuntime();
        ~OsSumRuntime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sp_adv_rtr_id; //type: uint32
        ydk::YLeaf sp_dest_count; //type: uint32
        ydk::YLeaf sp_dest_addr; //type: uint32
        class SpStartTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime
        class SpDuration; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration> sp_duration;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime> sp_start_time;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration : public ydk::Entity
{
    public:
        SpDuration();
        ~SpDuration();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpDuration


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime : public ydk::Entity
{
    public:
        SpStartTime();
        ~SpStartTime();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::OsSumRuntime::SpStartTime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime : public ydk::Entity
{
    public:
        Runtime();
        ~Runtime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_start_time; //type: uint32
        ydk::YLeaf lsa_change_cnt; //type: int16
        class GblSpfTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime
        class LsaInfo; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo
        class AreaStat; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat> > area_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime> gbl_spf_time;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo> > lsa_info;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat : public ydk::Entity
{
    public:
        AreaStat();
        ~AreaStat();

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
        class SpfTime; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime
        class LsaTypeCnt; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt> > lsa_type_cnt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime> spf_time;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt : public ydk::Entity
{
    public:
        LsaTypeCnt();
        ~LsaTypeCnt();

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

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime : public ydk::Entity
{
    public:
        SpfTime();
        ~SpfTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_dijkstra; //type: uint32
        ydk::YLeaf spf_intra_prefix; //type: uint32
        ydk::YLeaf spf_intra_prefix_del; //type: uint32
        ydk::YLeaf spf_inter_prefix; //type: uint32
        ydk::YLeaf spf_inter_prefix_del; //type: uint32
        ydk::YLeaf spf_ext_prefix; //type: uint32
        ydk::YLeaf spf_ext_prefix_del; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime : public ydk::Entity
{
    public:
        GblSpfTime();
        ~GblSpfTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_dijkstra; //type: uint32
        ydk::YLeaf spf_intra_prefix; //type: uint32
        ydk::YLeaf spf_intra_prefix_del; //type: uint32
        ydk::YLeaf spf_inter_prefix; //type: uint32
        ydk::YLeaf spf_inter_prefix_del; //type: uint32
        ydk::YLeaf spf_ext_prefix; //type: uint32
        ydk::YLeaf spf_ext_prefix_del; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::GblSpfTime


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo : public ydk::Entity
{
    public:
        LsaInfo();
        ~LsaInfo();

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
        ydk::YLeaf adv_rtr; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf flush; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::Runtime::LsaInfo


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader : public ydk::Entity
{
    public:
        SpfHeader();
        ~SpfHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf spf_count; //type: uint32
        class AreaSumm; //type: Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm> > area_summ;
        
}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader


class Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm : public ydk::Entity
{
    public:
        AreaSumm();
        ~AreaSumm();

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
        ydk::YLeaf spf_count; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Statistics::SpfStats::SpfHeader::AreaSumm


class Ospf::Processes::Process::DefaultVrf::Statistics::TeStats : public ydk::Entity
{
    public:
        TeStats();
        ~TeStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf te_connected; //type: boolean
        ydk::YLeaf control_disconnects; //type: uint32
        ydk::YLeaf te_disconnects; //type: uint32
        ydk::YLeaf adj_gets; //type: uint32
        ydk::YLeaf link_floods; //type: uint32
        ydk::YLeaf link_fragment_floods; //type: uint32
        ydk::YLeaf lsp_gets; //type: uint32
        ydk::YLeaf tunnel_announces; //type: uint32
        ydk::YLeaf total_tunnels; //type: uint32
        ydk::YLeaf control_batch_reads; //type: uint32
        ydk::YLeaf control_batch_writes; //type: uint32
        ydk::YLeaf link_batch_reads; //type: uint32
        ydk::YLeaf link_batch_writes; //type: uint32
        ydk::YLeaf adj_changes; //type: uint32
        ydk::YLeaf fragment_deletes; //type: uint32
        ydk::YLeaf fragment_announces; //type: uint32
        ydk::YLeaf data_trans_completes; //type: uint32
        ydk::YLeaf pce_listen; //type: uint32
        ydk::YLeaf pce_stoplisten; //type: uint32
        ydk::YLeaf pce_flood; //type: uint32
        ydk::YLeaf pce_get; //type: uint32
        ydk::YLeaf pce_br_lookup; //type: uint32
        ydk::YLeaf pce_br_lkup_num_dests; //type: uint32
        ydk::YLeaf pce_br_resp_fails; //type: uint32
        ydk::YLeaf pce_node_announce_batches; //type: uint32
        ydk::YLeaf pce_node_delete_batches; //type: uint32
        ydk::YLeaf pce_num_node_announce; //type: uint32
        ydk::YLeaf pce_num_node_delete; //type: uint32
        ydk::YLeaf pce_node_send_fails; //type: uint32
        ydk::YLeaf te_sr_path_reg_idt_recvd; //type: boolean
        ydk::YLeaf te_sr_idt_sent; //type: boolean
        ydk::YLeaf sr_num_area_enabled; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Statistics::TeStats


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix> > summary_prefix;
        
}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes


class Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

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
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf summary_prefix; //type: string
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf summary_metric; //type: uint32
        ydk::YLeaf summary_metric_type; //type: ExMetric
        ydk::YLeaf summary_tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix


class Ospf::Processes::Process::Srms : public ydk::Entity
{
    public:
        Srms();
        ~Srms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Ospf::Processes::Process::Srms::Policy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy> policy;
        
}; // Ospf::Processes::Process::Srms


class Ospf::Processes::Process::Srms::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyIpv4; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4> policy_ipv4;
        
}; // Ospf::Processes::Process::Srms::Policy


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4 : public ydk::Entity
{
    public:
        PolicyIpv4();
        ~PolicyIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyIpv4Backup; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup
        class PolicyIpv4Active; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active> policy_ipv4_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup> policy_ipv4_backup;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active : public ydk::Entity
{
    public:
        PolicyIpv4Active();
        ~PolicyIpv4Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi> > policy_mi;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr> addr;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup : public ydk::Entity
{
    public:
        PolicyIpv4Backup();
        ~PolicyIpv4Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyMi; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi> > policy_mi;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi : public ydk::Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi_id; //type: string
        ydk::YLeaf src; //type: SrmsMiSrcEB
        ydk::YLeaf router; //type: string
        ydk::YLeaf area; //type: string
        ydk::YLeaf prefix; //type: uint8
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_count; //type: uint32
        ydk::YLeaf last_prefix; //type: string
        ydk::YLeaf last_sid_index; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlagEB
        class Addr; //type: Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr> addr;
        
}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi


class Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr : public ydk::Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: SrmsMiAfEB
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr


class Ospf::Processes::Process::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ospf::Processes::Process::Vrfs::Vrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf> > vrf;
        
}; // Ospf::Processes::Process::Vrfs


class Ospf::Processes::Process::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class InterfaceVrfInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation
        class FloodListTable; //type: Ospf::Processes::Process::Vrfs::Vrf::FloodListTable
        class MplsTe; //type: Ospf::Processes::Process::Vrfs::Vrf::MplsTe
        class Statistics; //type: Ospf::Processes::Process::Vrfs::Vrf::Statistics
        class AdjacencyInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation
        class RouteInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::RouteInformation
        class InterfaceInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation
        class BorderRouters; //type: Ospf::Processes::Process::Vrfs::Vrf::BorderRouters
        class ProcessInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation
        class Areas; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas
        class Database; //type: Ospf::Processes::Process::Vrfs::Vrf::Database
        class SummaryPrefixes; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes
        class AreaStatistics; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics
        class OspfSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::OspfSummary
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation> adjacency_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas> areas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::BorderRouters> border_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::FloodListTable> flood_list_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation> interface_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::InterfaceVrfInformation> interface_vrf_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::MplsTe> mpls_te;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::OspfSummary> ospf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::ProcessInformation> process_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::RouteInformation> route_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        
}; // Ospf::Processes::Process::Vrfs::Vrf


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation : public ydk::Entity
{
    public:
        AdjacencyInformation();
        ~AdjacencyInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors
        class Requests; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests
        class Retransmissions; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions
        class NeighborDetails; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails> neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions> retransmissions;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails : public ydk::Entity
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

        class NeighborDetail; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail> > neighbor_detail;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail : public ydk::Entity
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
        ydk::YLeaf adjacency_sid_label; //type: uint32
        ydk::YLeaf adjacency_sid_protected; //type: boolean
        ydk::YLeaf adjacency_sid_unprotected_label; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint16
        class NeighborSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary : public ydk::Entity
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
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor> > neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests : public ydk::Entity
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

        class Request; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request> > request;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request : public ydk::Entity
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
        class Request_; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_> > request;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_ : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions : public ydk::Entity
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

        class Retransmission; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission> > retransmission;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission : public ydk::Entity
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
        class RetransmissionAreaDb; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics : public ydk::Entity
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

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries : public ydk::Entity
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

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
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
        class IfEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
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
        class IfStat; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat> > if_stat;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::Vrfs::Vrf::Areas : public ydk::Entity
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

        class Area; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area> > area;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area : public ydk::Entity
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

        ydk::YLeaf area_id; //type: int32
        class FloodListAreaTable; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors
        class InterfaceBriefs; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs
        class Requests; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests
        class Retransmissions; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions
        class AreaStatistics; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics
        class NeighborDetails; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails
        class Interfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics> area_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable> flood_list_area_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails> neighbor_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Retransmissions> retransmissions;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics : public ydk::Entity
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

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries : public ydk::Entity
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

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public ydk::Entity
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
        class IfEntry; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public ydk::Entity
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
        class IfStat; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat> > if_stat;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable : public ydk::Entity
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

        class Flood; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood> > flood;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood : public ydk::Entity
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
        class AreaFlood; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood> > as_flood;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListAreaTable::Flood::AsFlood


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs : public ydk::Entity
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

        class InterfaceBrief; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief> > interface_brief;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief : public ydk::Entity
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
        class InterfaceMadj; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj> > interface_madj;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface> > interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface : public ydk::Entity
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
        class InterfaceBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation
        class ActiveInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface
        class Srlg; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg
        class InterfaceNeighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor
        class InterfaceMadj; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj
        class IpfrrTiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers
        class IpSecAddr; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface> active_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj> > interface_madj;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor> > interface_neighbor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr> > ip_sec_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg> > srlg;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface : public ydk::Entity
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
        ydk::YLeaf keychain_id; //type: uint64
        class MdKeys; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys> > md_keys;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::ActiveInterface::MdKeys


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceMadj


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::Srlg


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails : public ydk::Entity
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

        class NeighborDetail; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail> > neighbor_detail;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail : public ydk::Entity
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
        ydk::YLeaf adjacency_sid_label; //type: uint32
        ydk::YLeaf adjacency_sid_protected; //type: boolean
        ydk::YLeaf adjacency_sid_unprotected_label; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint16
        class NeighborSummary; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary : public ydk::Entity
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
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor> > neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor : public ydk::Entity
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
        ydk::YLeaf neighbor_address_xr; //type: string
        ydk::YLeaf neighbor_interface_name; //type: string
        ydk::YLeaf neighbor_dr_priority; //type: uint8
        ydk::YLeaf neighbor_state; //type: NeighborState
        ydk::YLeaf dr_bdr_state; //type: DrBdrState
        ydk::YLeaf neighbor_dead_timer; //type: uint32
        ydk::YLeaf neighbor_up_time; //type: uint32
        ydk::YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests : public ydk::Entity
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

        class Request; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request> > request;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request : public ydk::Entity
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
        class Request_; //type: Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_> > request;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request


class Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_ : public ydk::Entity
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

}; // Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Requests::Request::Request_


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_3_ */

