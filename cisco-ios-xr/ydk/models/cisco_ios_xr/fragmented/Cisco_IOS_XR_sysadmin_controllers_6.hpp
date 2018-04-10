#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_6_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_4.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_5.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {


class Controller::Switch::Oper::Esd::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf process_name; //type: string
        class Trace; //type: Controller::Switch::Oper::Esd::Instance::Trace

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Esd::Instance::Trace> > trace;
        
}; // Controller::Switch::Oper::Esd::Instance


class Controller::Switch::Oper::Esd::Instance::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Esd::Instance::Trace::Location> > location;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace


class Controller::Switch::Oper::Esd::Instance::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions> > all_options;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace::Location


class Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions


class Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Switch::Oper::Esd::Instance::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent : public ydk::Entity
{
    public:
        MgmtAgent();
        ~MgmtAgent();

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

        class Esdma; //type: Controller::Switch::Oper::MgmtAgent::Esdma
        class Connections; //type: Controller::Switch::Oper::MgmtAgent::Connections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Esdma> esdma;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Connections> connections;
        
}; // Controller::Switch::Oper::MgmtAgent


class Controller::Switch::Oper::MgmtAgent::Esdma : public ydk::Entity
{
    public:
        Esdma();
        ~Esdma();

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

        class Trace; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Esdma::Trace> > trace;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location> > location;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions> > all_options;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions


class Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Switch::Oper::MgmtAgent::Esdma::Trace::Location::AllOptions::TraceBlocks


class Controller::Switch::Oper::MgmtAgent::Connections : public ydk::Entity
{
    public:
        Connections();
        ~Connections();

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

        ydk::YLeaf sdr_nm_num_clients; //type: uint32
        ydk::YLeaf esd_client_num_clients; //type: uint32
        ydk::YLeaf mlap_client_num_clients; //type: uint32
        class EsdmaInfo; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo
        class SdrNmClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId
        class EsdClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId
        class MlapClientId; //type: Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo> esdma_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId> > sdr_nm_client_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId> > esd_client_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId> > mlap_client_id;
        
}; // Controller::Switch::Oper::MgmtAgent::Connections


class Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo : public ydk::Entity
{
    public:
        EsdmaInfo();
        ~EsdmaInfo();

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

        ydk::YLeaf active_esdma_address; //type: string

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdmaInfo


class Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId : public ydk::Entity
{
    public:
        SdrNmClientId();
        ~SdrNmClientId();

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

        ydk::YLeaf sdr_nm_ip_address; //type: string
        ydk::YLeaf sdr_nm_port_num; //type: uint16

}; // Controller::Switch::Oper::MgmtAgent::Connections::SdrNmClientId


class Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId : public ydk::Entity
{
    public:
        EsdClientId();
        ~EsdClientId();

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

        ydk::YLeaf esd_client_ip_address; //type: string
        ydk::YLeaf esd_client_port_num; //type: uint16
        ydk::YLeaf esd_client_location; //type: string
        ydk::YLeaf esd_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum
        ydk::YLeaf esd_client_sdr_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::EsdClientId


class Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId : public ydk::Entity
{
    public:
        MlapClientId();
        ~MlapClientId();

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

        ydk::YLeaf mlap_client_ip_address; //type: string
        ydk::YLeaf mlap_client_port_num; //type: uint16
        ydk::YLeaf mlap_client_location; //type: string
        ydk::YLeaf mlap_client_switch_info_cached; //type: EsdmaSwitchYesNoEnum

}; // Controller::Switch::Oper::MgmtAgent::Connections::MlapClientId


class Controller::Switch::Oper::PortState : public ydk::Entity
{
    public:
        PortState();
        ~PortState();

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

        class Location; //type: Controller::Switch::Oper::PortState::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::PortState::Location> > location;
        
}; // Controller::Switch::Oper::PortState


class Controller::Switch::Oper::PortState::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        class PortIter; //type: Controller::Switch::Oper::PortState::Location::PortIter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::PortState::Location::PortIter> > port_iter;
        
}; // Controller::Switch::Oper::PortState::Location


class Controller::Switch::Oper::PortState::Location::PortIter : public ydk::Entity
{
    public:
        PortIter();
        ~PortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: int32

}; // Controller::Switch::Oper::PortState::Location::PortIter


class Controller::Switch::Oper::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

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

        class Location; //type: Controller::Switch::Oper::Trunk::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Trunk::Location> > location;
        
}; // Controller::Switch::Oper::Trunk


class Controller::Switch::Oper::Trunk::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf rack; //type: EsdmaRackNumEnum
        ydk::YLeaf card; //type: EsdmaCpu
        ydk::YLeaf switch_id; //type: EsdmaSwitchTypeEnum
        ydk::YLeaf trunk_member_count; //type: uint32
        ydk::YLeaf trunk_name; //type: string
        class TrunkMemberPortIter; //type: Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter> > trunk_member_port_iter;
        
}; // Controller::Switch::Oper::Trunk::Location


class Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter : public ydk::Entity
{
    public:
        TrunkMemberPortIter();
        ~TrunkMemberPortIter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trunk_member_port; //type: uint32
        ydk::YLeaf trunk_member_status; //type: EsdmaTrunkMemberStatus

}; // Controller::Switch::Oper::Trunk::Location::TrunkMemberPortIter


class Controller::FabricAction : public ydk::Entity
{
    public:
        FabricAction();
        ~FabricAction();

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

        class Fabric; //type: Controller::FabricAction::Fabric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::FabricAction::Fabric> fabric;
        
}; // Controller::FabricAction


class Controller::FabricAction::Fabric : public ydk::Entity
{
    public:
        Fabric();
        ~Fabric();

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

        class Ppu; //type: Controller::FabricAction::Fabric::Ppu

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::FabricAction::Fabric::Ppu> ppu;
        
}; // Controller::FabricAction::Fabric


class Controller::FabricAction::Fabric::Ppu : public ydk::Entity
{
    public:
        Ppu();
        ~Ppu();

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


}; // Controller::FabricAction::Fabric::Ppu


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_6_ */

