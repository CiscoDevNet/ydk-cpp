#ifndef _CISCO_IOS_XR_SYSADMIN_CLEAR_NCS5502_
#define _CISCO_IOS_XR_SYSADMIN_CLEAR_NCS5502_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_clear_ncs5502 {

class Clear : public ydk::Entity
{
    public:
        Clear();
        ~Clear();

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

        class Controller; //type: Clear::Controller
        class ClearAsicErrorsGrp; //type: Clear::ClearAsicErrorsGrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller> controller;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp> clear_asic_errors_grp;
        
}; // Clear


class Clear::Controller : public ydk::Entity
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

        class Switch; //type: Clear::Controller::Switch
        class Fabric; //type: Clear::Controller::Fabric

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller::Switch> switch_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller::Fabric> fabric;
        
}; // Clear::Controller


class Clear::Controller::Switch : public ydk::Entity
{
    public:
        Switch();
        ~Switch();

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

        class Oper; //type: Clear::Controller::Switch::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller::Switch::Oper> oper;
        
}; // Clear::Controller::Switch


class Clear::Controller::Switch::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

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

        class Fdb; //type: Clear::Controller::Switch::Oper::Fdb
        class Statistics; //type: Clear::Controller::Switch::Oper::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller::Switch::Oper::Fdb> fdb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller::Switch::Oper::Statistics> statistics;
        
}; // Clear::Controller::Switch::Oper


class Clear::Controller::Switch::Oper::Fdb : public ydk::Entity
{
    public:
        Fdb();
        ~Fdb();

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

        class Location; //type: Clear::Controller::Switch::Oper::Fdb::Location

        ydk::YList location;
        
}; // Clear::Controller::Switch::Oper::Fdb


class Clear::Controller::Switch::Oper::Fdb::Location : public ydk::Entity
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

}; // Clear::Controller::Switch::Oper::Fdb::Location


class Clear::Controller::Switch::Oper::Statistics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Clear::Controller::Switch::Oper::Statistics::Location

        ydk::YList location;
        
}; // Clear::Controller::Switch::Oper::Statistics


class Clear::Controller::Switch::Oper::Statistics::Location : public ydk::Entity
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

}; // Clear::Controller::Switch::Oper::Statistics::Location


class Clear::Controller::Fabric : public ydk::Entity
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

        class Counter; //type: Clear::Controller::Fabric::Counter
        class ClearStatistics; //type: Clear::Controller::Fabric::ClearStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller::Fabric::Counter> counter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::Controller::Fabric::ClearStatistics> clear_statistics;
        
}; // Clear::Controller::Fabric


class Clear::Controller::Fabric::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

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

        class Plane; //type: Clear::Controller::Fabric::Counter::Plane

        ydk::YList plane;
        
}; // Clear::Controller::Fabric::Counter


class Clear::Controller::Fabric::Counter::Plane : public ydk::Entity
{
    public:
        Plane();
        ~Plane();

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

        ydk::YLeaf planeid; //type: string

}; // Clear::Controller::Fabric::Counter::Plane


class Clear::Controller::Fabric::ClearStatistics : public ydk::Entity
{
    public:
        ClearStatistics();
        ~ClearStatistics();

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

        class Plane; //type: Clear::Controller::Fabric::ClearStatistics::Plane

        ydk::YList plane;
        
}; // Clear::Controller::Fabric::ClearStatistics


class Clear::Controller::Fabric::ClearStatistics::Plane : public ydk::Entity
{
    public:
        Plane();
        ~Plane();

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

        ydk::YLeaf planeid; //type: string

}; // Clear::Controller::Fabric::ClearStatistics::Plane


class Clear::ClearAsicErrorsGrp : public ydk::Entity
{
    public:
        ClearAsicErrorsGrp();
        ~ClearAsicErrorsGrp();

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

        class ClearDevice; //type: Clear::ClearAsicErrorsGrp::ClearDevice

        ydk::YList clear_device;
        
}; // Clear::ClearAsicErrorsGrp


class Clear::ClearAsicErrorsGrp::ClearDevice : public ydk::Entity
{
    public:
        ClearDevice();
        ~ClearDevice();

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

        ydk::YLeaf device_name; //type: string
        class Instance; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance
        class AllInstances; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances

        ydk::YList instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances> all_instances;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance : public ydk::Entity
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

        ydk::YLeaf instance_num; //type: uint32
        class Sbe; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe
        class Mbe; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe
        class Parity; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity
        class Generic; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic
        class Crc; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc
        class Reset; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset
        class Barrier; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier
        class Unexpected; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected
        class Link; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link
        class OorThresh; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh
        class Bp; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp
        class Io; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io
        class Ucode; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode
        class Config; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config
        class Indirect; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect
        class Nonerr; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr
        class Summary; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary
        class All; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe> sbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe> mbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity> parity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic> generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc> crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset> reset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier> barrier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected> unexpected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link> link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh> oor_thresh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io> io;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode> ucode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect> indirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr> nonerr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All> all;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe : public ydk::Entity
{
    public:
        Sbe();
        ~Sbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe : public ydk::Entity
{
    public:
        Mbe();
        ~Mbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic : public ydk::Entity
{
    public:
        Generic();
        ~Generic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc : public ydk::Entity
{
    public:
        Crc();
        ~Crc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier : public ydk::Entity
{
    public:
        Barrier();
        ~Barrier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected : public ydk::Entity
{
    public:
        Unexpected();
        ~Unexpected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh : public ydk::Entity
{
    public:
        OorThresh();
        ~OorThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io : public ydk::Entity
{
    public:
        Io();
        ~Io();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode : public ydk::Entity
{
    public:
        Ucode();
        ~Ucode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect : public ydk::Entity
{
    public:
        Indirect();
        ~Indirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr : public ydk::Entity
{
    public:
        Nonerr();
        ~Nonerr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary : public ydk::Entity
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

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class History; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History
        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History> history;
        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances : public ydk::Entity
{
    public:
        AllInstances();
        ~AllInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sbe; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe
        class Mbe; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe
        class Parity; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity
        class Generic; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic
        class Crc; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc
        class Reset; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset
        class Barrier; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier
        class Unexpected; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected
        class Link; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link
        class OorThresh; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh
        class Bp; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp
        class Io; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io
        class Ucode; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode
        class Config; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config
        class Indirect; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect
        class Nonerr; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr
        class Summary; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary
        class All; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe> sbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe> mbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity> parity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic> generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc> crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset> reset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier> barrier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected> unexpected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link> link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh> oor_thresh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io> io;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode> ucode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect> indirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr> nonerr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All> all;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe : public ydk::Entity
{
    public:
        Sbe();
        ~Sbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe : public ydk::Entity
{
    public:
        Mbe();
        ~Mbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic : public ydk::Entity
{
    public:
        Generic();
        ~Generic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc : public ydk::Entity
{
    public:
        Crc();
        ~Crc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier : public ydk::Entity
{
    public:
        Barrier();
        ~Barrier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected : public ydk::Entity
{
    public:
        Unexpected();
        ~Unexpected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh : public ydk::Entity
{
    public:
        OorThresh();
        ~OorThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io : public ydk::Entity
{
    public:
        Io();
        ~Io();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode : public ydk::Entity
{
    public:
        Ucode();
        ~Ucode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect : public ydk::Entity
{
    public:
        Indirect();
        ~Indirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr : public ydk::Entity
{
    public:
        Nonerr();
        ~Nonerr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary : public ydk::Entity
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

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class History; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History
        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_clear_ncs5502::Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History> history;
        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location

        ydk::YList location;
        
}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location


class Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location : public ydk::Entity
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

}; // Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CLEAR_NCS5502_ */

