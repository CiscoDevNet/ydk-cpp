#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_7_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_3.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_6.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {


class Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail : public ydk::Entity
{
    public:
        PerLevelAdvertisingDetail();
        ~PerLevelAdvertisingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        ydk::YLeaf advertising_origin; //type: IsisShRouteAdvOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_propagated; //type: boolean
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf is_external_reachability; //type: boolean
        ydk::YLeaf is_interarea; //type: boolean
        class SummarizationStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;
        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus : public ydk::Entity
{
    public:
        SummarizationStatus();
        ~SummarizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class SummaryPrefix; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix : public ydk::Entity
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
        ydk::YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


class Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4FlexRouteTables::Ipv4FlexRouteTable::Ipv4FlexRoute::PerLevelAdvertisingDetail::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes : public ydk::Entity
{
    public:
        Ipv4Routes();
        ~Ipv4Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Route; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route

        ydk::YList ipv4_route;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route : public ydk::Entity
{
    public:
        Ipv4Route();
        ~Ipv4Route();

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
        class ConnectedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus
        class RedistributedStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus
        class NativeStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus
        class PerLevelAdvertisingDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus> connected_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus> redistributed_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus> native_status;
        ydk::YList per_level_advertising_detail;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus : public ydk::Entity
{
    public:
        ConnectedStatus();
        ~ConnectedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class ConnectedDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails> connected_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails : public ydk::Entity
{
    public:
        ConnectedDetails();
        ~ConnectedDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface

        ydk::YList interface;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface : public ydk::Entity
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

        ydk::YLeaf entry; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::ConnectedStatus::ConnectedDetails::Interface


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus : public ydk::Entity
{
    public:
        RedistributedStatus();
        ~RedistributedStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class RedistributionDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails> redistribution_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails : public ydk::Entity
{
    public:
        RedistributionDetails();
        ~RedistributionDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisShRouteRedistDetail; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail

        ydk::YList isis_sh_route_redist_detail;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail : public ydk::Entity
{
    public:
        IsisShRouteRedistDetail();
        ~IsisShRouteRedistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        class Owner; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner> owner;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner : public ydk::Entity
{
    public:
        Owner();
        ~Owner();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: IsisRedistProto
        ydk::YLeaf isis_instance_id; //type: string
        ydk::YLeaf ospf_process_id; //type: string
        ydk::YLeaf ospfv3_process_id; //type: string
        ydk::YLeaf bgp_as_number; //type: string
        ydk::YLeaf eigrp_as_number; //type: string
        ydk::YLeaf application_name; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::RedistributedStatus::RedistributionDetails::IsisShRouteRedistDetail::Owner


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus : public ydk::Entity
{
    public:
        NativeStatus();
        ~NativeStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class NativeDetails; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails> native_details;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails : public ydk::Entity
{
    public:
        NativeDetails();
        ~NativeDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: IsisPrefixPriority
        class Primary; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary
        class Backup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary> primary;
        ydk::YList backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: IsisPrefixOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf multicast_metric; //type: uint32
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf administrative_distance; //type: uint16
        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource

        ydk::YList paths;
        ydk::YList ucmp_next_hop;
        ydk::YList multicast_path;
        ydk::YList srte_path;
        ydk::YList explicit_path;
        ydk::YList source;
        ydk::YList multicast_source;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Paths::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop : public ydk::Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf total_ucmp_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup> frr_backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath : public ydk::Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath : public ydk::Entity
{
    public:
        SrtePath();
        ~SrtePath();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::SrtePath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath : public ydk::Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::ExplicitPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource : public ydk::Entity
{
    public:
        MulticastSource();
        ~MulticastSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Primary::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: IsisPrefixOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf multicast_metric; //type: uint32
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf administrative_distance; //type: uint16
        class Paths; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths
        class UcmpNextHop; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop
        class MulticastPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath
        class SrtePath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath
        class ExplicitPath; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath
        class Source; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source
        class MulticastSource; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource

        ydk::YList paths;
        ydk::YList ucmp_next_hop;
        ydk::YList multicast_path;
        ydk::YList srte_path;
        ydk::YList explicit_path;
        ydk::YList source;
        ydk::YList multicast_source;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Paths::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop : public ydk::Entity
{
    public:
        UcmpNextHop();
        ~UcmpNextHop();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf total_ucmp_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup> frr_backup;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::UcmpNextHop::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath : public ydk::Entity
{
    public:
        MulticastPath();
        ~MulticastPath();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath : public ydk::Entity
{
    public:
        SrtePath();
        ~SrtePath();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::SrtePath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath : public ydk::Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf tunnel_interface; //type: string
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf is_te_tunnel_interface; //type: boolean
        ydk::YLeaf is_sr_exclude_tunnel_interface; //type: boolean
        class FrrBackup; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup
        class UloopExplicit; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit
        class Nnh; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup> frr_backup;
        ydk::YList uloop_explicit;
        ydk::YList nnh;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup : public ydk::Entity
{
    public:
        FrrBackup();
        ~FrrBackup();

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
        ydk::YLeaf egress_interface; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf tunnel_egress_interface; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf remote_lfa_system_id; //type: string
        ydk::YLeaf remote_lfa_router_id; //type: string
        ydk::YLeaf remote_lfa_system_pid; //type: string
        ydk::YLeaf remote_lfa_router_pid; //type: string
        ydk::YLeaf total_backup_distance; //type: uint32
        ydk::YLeaf segment_routing_sid_value; //type: uint32
        ydk::YLeaf num_sid; //type: uint32
        ydk::YLeaf backup_repair_list_size; //type: uint32
        ydk::YLeaf tilfa_computation; //type: IsisTilfaComputation
        ydk::YLeaf prefix_source_node_id; //type: string
        ydk::YLeaf is_downstream; //type: boolean
        ydk::YLeaf is_lc_disjoint; //type: boolean
        ydk::YLeaf is_node_protecting; //type: boolean
        ydk::YLeaf is_primary_path; //type: boolean
        ydk::YLeaf is_srlg_disjoint; //type: boolean
        ydk::YLeaf is_remote_lfa; //type: boolean
        ydk::YLeaf is_epcfrr_lfa; //type: boolean
        ydk::YLeaf is_strict_spflfa; //type: boolean
        ydk::YLeaf is_tunnel_requested; //type: boolean
        ydk::YLeaf weight; //type: uint32
        class SegmentRoutingSidValueEntry; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry
        class BackupRepair; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair

        ydk::YList segment_routing_sid_value_entry;
        ydk::YList backup_repair;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry : public ydk::Entity
{
    public:
        SegmentRoutingSidValueEntry();
        ~SegmentRoutingSidValueEntry();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::SegmentRoutingSidValueEntry


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair : public ydk::Entity
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

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::FrrBackup::BackupRepair


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit : public ydk::Entity
{
    public:
        UloopExplicit();
        ~UloopExplicit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repair_element_node_id; //type: string
        ydk::YLeaf repair_ipv4_addr; //type: string
        ydk::YLeaf repair_ipv6_addr; //type: string
        ydk::YLeaf repair_label; //type: uint32
        ydk::YLeaf repair_element_type; //type: uint32
        ydk::YLeaf repair_strict_spf_label; //type: uint32

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::UloopExplicit


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh : public ydk::Entity
{
    public:
        Nnh();
        ~Nnh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id_set; //type: boolean
        ydk::YLeaf ipv4_set; //type: boolean
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf ipv4_address; //type: string

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::ExplicitPath::Nnh


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::Source::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource : public ydk::Entity
{
    public:
        MulticastSource();
        ~MulticastSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_lsp_id; //type: string
        ydk::YLeaf source_address; //type: string
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid

        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::NativeStatus::NativeDetails::Backup::MulticastSource::NodalSid


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail : public ydk::Entity
{
    public:
        PerLevelAdvertisingDetail();
        ~PerLevelAdvertisingDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        ydk::YLeaf advertising_origin; //type: IsisShRouteAdvOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf is_propagated; //type: boolean
        ydk::YLeaf is_external_metric; //type: boolean
        ydk::YLeaf is_external_reachability; //type: boolean
        ydk::YLeaf is_interarea; //type: boolean
        class SummarizationStatus; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus
        class Tags; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags
        class NodalSid; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus> summarization_status;
        ydk::YList tags;
        ydk::YList nodal_sid;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus : public ydk::Entity
{
    public:
        SummarizationStatus();
        ~SummarizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_valid; //type: IsisValid
        class SummaryPrefix; //type: Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix> summary_prefix;
        
}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix : public ydk::Entity
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
        ydk::YLeaf prefix_length; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::SummarizationStatus::SummaryPrefix


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags : public ydk::Entity
{
    public:
        Tags();
        ~Tags();

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

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::Tags


class Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid : public ydk::Entity
{
    public:
        NodalSid();
        ~NodalSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_value; //type: uint32
        ydk::YLeaf rflag; //type: uint8
        ydk::YLeaf nflag; //type: uint8
        ydk::YLeaf pflag; //type: uint8
        ydk::YLeaf eflag; //type: uint8
        ydk::YLeaf vflag; //type: uint8
        ydk::YLeaf lflag; //type: uint8
        ydk::YLeaf algorithm; //type: uint8

}; // Isis::Instances::Instance::Topologies::Topology::Ipv4Routes::Ipv4Route::PerLevelAdvertisingDetail::NodalSid


class Isis::Instances::Instance::NsrStatus : public ydk::Entity
{
    public:
        NsrStatus();
        ~NsrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_vm_state; //type: uint16
        class IsisNsrPeer; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer
        class IsisNsrInfra; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrPeer> isis_nsr_peer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra> isis_nsr_infra;
        
}; // Isis::Instances::Instance::NsrStatus


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer : public ydk::Entity
{
    public:
        IsisNsrPeer();
        ~IsisNsrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FullSyncAchieved; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved
        class ManSyncCount; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount
        class NsrChgCount; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount
        class Uptime; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime
        class UptimeValid; //type: Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid

        ydk::YList full_sync_achieved;
        ydk::YList man_sync_count;
        ydk::YList nsr_chg_count;
        ydk::YList uptime;
        ydk::YList uptime_valid;
        
}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved : public ydk::Entity
{
    public:
        FullSyncAchieved();
        ~FullSyncAchieved();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::FullSyncAchieved


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount : public ydk::Entity
{
    public:
        ManSyncCount();
        ~ManSyncCount();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::ManSyncCount


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount : public ydk::Entity
{
    public:
        NsrChgCount();
        ~NsrChgCount();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::NsrChgCount


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime : public ydk::Entity
{
    public:
        Uptime();
        ~Uptime();

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

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid : public ydk::Entity
{
    public:
        UptimeValid();
        ~UptimeValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra : public ydk::Entity
{
    public:
        IsisNsrInfra();
        ~IsisNsrInfra();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gen; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen
        class Pm; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm
        class Ds; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds
        class Te; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te
        class Ncd; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd
        class NiiIdb; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen> gen;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm> pm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds> ds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te> te;
        ydk::YList ncd;
        ydk::YList nii_idb;
        
}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen : public ydk::Entity
{
    public:
        Gen();
        ~Gen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf my_nodeid; //type: uint32
        ydk::YLeaf my_process_id; //type: uint32
        ydk::YLeaf pm_issu_role; //type: uint8
        ydk::YLeaf pm_ha_role; //type: uint8
        ydk::YLeaf sysmgr_ha_role; //type: uint8
        ydk::YLeaf nsr_send_ready; //type: uint8
        ydk::YLeaf nsr_send_unready; //type: uint8
        ydk::YLeaf nsr_send_err; //type: uint32
        ydk::YLeaf nsr_recv_err; //type: uint32
        ydk::YLeaf retry_flag; //type: uint32
        ydk::YLeaf nsr_enabled; //type: boolean
        ydk::YLeaf nsr_configured; //type: boolean
        ydk::YLeaf nsf_configured; //type: boolean
        ydk::YLeaf failover; //type: boolean
        ydk::YLeaf lanid_req_needed; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm : public ydk::Entity
{
    public:
        Pm();
        ~Pm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reg; //type: uint8
        ydk::YLeaf conn_cb; //type: uint8
        ydk::YLeaf disconn_cb; //type: uint8
        ydk::YLeaf conn_status; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds : public ydk::Entity
{
    public:
        Ds();
        ~Ds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf conn; //type: uint8
        ydk::YLeaf conn_cb; //type: uint8
        ydk::YLeaf pub; //type: uint8
        ydk::YLeaf pub_cb; //type: uint8
        ydk::YLeaf reg; //type: uint8
        ydk::YLeaf reg_cb; //type: uint8
        ydk::YLeaf unreg; //type: uint8
        ydk::YLeaf unreg_cb; //type: uint8
        ydk::YLeaf disconn_cb; //type: uint8
        ydk::YLeaf notify_cb; //type: uint8
        ydk::YLeaf notify_peer_xr; //type: string
        ydk::YLeaf del_cb; //type: uint8
        ydk::YLeaf remove_srv; //type: uint8
        ydk::YLeaf conn_status; //type: boolean
        class ConnTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs
        class ConnCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs
        class PubTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs
        class PubCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs
        class RegTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs
        class RegCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs
        class UnregTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs
        class UnregCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs
        class DisconnCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs
        class NotifyCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs
        class DelCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs
        class RemoveSrvTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs
        class ConnStatusTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs
        class NotifyPeer; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs> conn_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs> conn_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs> pub_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs> pub_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs> reg_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs> reg_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs> unreg_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs> unreg_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs> disconn_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs> notify_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs> del_cb_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs> remove_srv_ts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs> conn_status_ts;
        ydk::YList notify_peer;
        
}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs : public ydk::Entity
{
    public:
        ConnTs();
        ~ConnTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs : public ydk::Entity
{
    public:
        ConnCbTs();
        ~ConnCbTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs : public ydk::Entity
{
    public:
        PubTs();
        ~PubTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs : public ydk::Entity
{
    public:
        PubCbTs();
        ~PubCbTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs : public ydk::Entity
{
    public:
        RegTs();
        ~RegTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs : public ydk::Entity
{
    public:
        RegCbTs();
        ~RegCbTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs : public ydk::Entity
{
    public:
        UnregTs();
        ~UnregTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs : public ydk::Entity
{
    public:
        UnregCbTs();
        ~UnregCbTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs : public ydk::Entity
{
    public:
        DisconnCbTs();
        ~DisconnCbTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs : public ydk::Entity
{
    public:
        NotifyCbTs();
        ~NotifyCbTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs : public ydk::Entity
{
    public:
        DelCbTs();
        ~DelCbTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs : public ydk::Entity
{
    public:
        RemoveSrvTs();
        ~RemoveSrvTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs : public ydk::Entity
{
    public:
        ConnStatusTs();
        ~ConnStatusTs();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer : public ydk::Entity
{
    public:
        NotifyPeer();
        ~NotifyPeer();

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
        ydk::YLeaf nano_seconds; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te : public ydk::Entity
{
    public:
        Te();
        ~Te();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: uint8
        ydk::YLeaf conn_up; //type: uint8
        ydk::YLeaf te_link_cb; //type: uint8
        ydk::YLeaf te_tunnel_cb; //type: uint8
        ydk::YLeaf adv_sync_data; //type: uint8
        ydk::YLeaf link_purge_time_on; //type: uint8
        ydk::YLeaf tunnel_purge_time_on; //type: uint8
        ydk::YLeaf has_info_from_te; //type: uint8

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd : public ydk::Entity
{
    public:
        Ncd();
        ~Ncd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vm_idx; //type: uint8
        ydk::YLeaf conn_up; //type: boolean
        ydk::YLeaf endp_hdl; //type: uint8
        ydk::YLeaf chksum; //type: uint16
        ydk::YLeaf send_seqnum; //type: uint32
        ydk::YLeaf recv_cnt; //type: uint32

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb : public ydk::Entity
{
    public:
        NiiIdb();
        ~NiiIdb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exist; //type: boolean
        ydk::YLeaf brought_up; //type: boolean
        ydk::YLeaf retry_timer; //type: boolean
        ydk::YLeaf running; //type: boolean
        ydk::YLeaf has_adj; //type: boolean

}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb


class Isis::Instances::Instance::Interfaces : public ydk::Entity
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

        class Interface; //type: Isis::Instances::Instance::Interfaces::Interface

        ydk::YList interface;
        
}; // Isis::Instances::Instance::Interfaces


class Isis::Instances::Instance::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf configured_circuit_type; //type: IsisLevels
        ydk::YLeaf mesh_group; //type: uint32
        ydk::YLeaf is_type; //type: IsisLevels
        ydk::YLeaf nsr_intf; //type: boolean
        class ConfiguredStatus; //type: Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus
        class InterfaceStatusAndData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus> configured_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData> interface_status_and_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface


class Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus : public ydk::Entity
{
    public:
        ConfiguredStatus();
        ~ConfiguredStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency_form_status; //type: boolean
        ydk::YLeaf adv_prefix_status; //type: boolean

}; // Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData : public ydk::Entity
{
    public:
        InterfaceStatusAndData();
        ~InterfaceStatusAndData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled
        class Enabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled> disabled;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled> enabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled : public ydk::Entity
{
    public:
        Enabled();
        ~Enabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_media_type; //type: IsisMediaClass
        ydk::YLeaf enabled_circuit_type; //type: IsisLevels
        ydk::YLeaf local_circuit_number; //type: uint8
        ydk::YLeaf rsi_srlg_registered; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32
        class AdjacencyFormStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus
        class AdvPrefixStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus
        class P2pData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData
        class BfdData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData
        class ClnsData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData
        class UnderlyingInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface
        class PerAreaData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData
        class PerTopologyData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData
        class PerAddressFamilyData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus> adjacency_form_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus> adv_prefix_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData> p2p_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData> bfd_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData> clns_data;
        ydk::YList underlying_interface;
        ydk::YList per_area_data;
        ydk::YList per_topology_data;
        ydk::YList per_address_family_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus : public ydk::Entity
{
    public:
        AdjacencyFormStatus();
        ~AdjacencyFormStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAdjFormDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus : public ydk::Entity
{
    public:
        AdvPrefixStatus();
        ~AdvPrefixStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisEnabled
        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled> disabled;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled : public ydk::Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfAdvPrefixDisabledReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData : public ydk::Entity
{
    public:
        P2pData();
        ~P2pData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_until_next_iih; //type: uint32
        ydk::YLeaf retransmit_lsp_queue_size; //type: uint32
        ydk::YLeaf retransmit_lsp_interval; //type: uint32
        ydk::YLeaf extended_circuit_number; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData : public ydk::Entity
{
    public:
        BfdData();
        ~BfdData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ipv6_enabled; //type: boolean
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf multiplier; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData : public ydk::Entity
{
    public:
        ClnsData();
        ~ClnsData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_until_next_lsp; //type: uint32
        ydk::YLeaf lsp_transmit_requested_flag; //type: boolean
        ydk::YLeaf lsp_transmitted_flag; //type: boolean
        ydk::YLeaf lsp_txmitd_b2b_limit; //type: uint32
        ydk::YLeaf lsp_txmt_b2b_msecs; //type: uint32
        ydk::YLeaf last_lsp_level_transmitted; //type: IsisLevel
        ydk::YLeaf last_lsp_id_transmitted; //type: string
        class ClnsStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus
        class MtuInfo; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo
        class SnpaState; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState
        class MediaSpecificState; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus> clns_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo> mtu_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState> snpa_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState> media_specific_state;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus : public ydk::Entity
{
    public:
        ClnsStatus();
        ~ClnsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisUp
        class ClnsDownInfo; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo> clns_down_info;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo : public ydk::Entity
{
    public:
        ClnsDownInfo();
        ~ClnsDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfClnsProtoDownReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo : public ydk::Entity
{
    public:
        MtuInfo();
        ~MtuInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisValid
        ydk::YLeaf mtu; //type: uint32
        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid> invalid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid : public ydk::Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfClnsMtuInvalidReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState : public ydk::Entity
{
    public:
        SnpaState();
        ~SnpaState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisKnown
        class Unknown; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown
        class Known; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown> unknown;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known> known;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown : public ydk::Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfClnsSnpaUnknownReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known : public ydk::Entity
{
    public:
        Known();
        ~Known();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snpa; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState : public ydk::Entity
{
    public:
        MediaSpecificState();
        ~MediaSpecificState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clns_media_type; //type: IsisMediaClass
        class ClnsLanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData
        class ClnsP2pData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData> clns_lan_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData> clns_p2p_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData : public ydk::Entity
{
    public:
        ClnsLanData();
        ~ClnsLanData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerAreaData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData

        ydk::YList per_area_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData : public ydk::Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisLevel
        class MulticastStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus> multicast_status;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus : public ydk::Entity
{
    public:
        MulticastStatus();
        ~MulticastStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisValid
        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid> invalid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid : public ydk::Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfMcastInvalidReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData : public ydk::Entity
{
    public:
        ClnsP2pData();
        ~ClnsP2pData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2pOverLanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData> p2p_over_lan_data;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData : public ydk::Entity
{
    public:
        P2pOverLanData();
        ~P2pOverLanData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus> multicast_status;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus : public ydk::Entity
{
    public:
        MulticastStatus();
        ~MulticastStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: IsisValid
        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid> invalid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid : public ydk::Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_code; //type: IsisIfMcastInvalidReason

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_7_ */

