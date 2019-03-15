#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_0_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs55A1 {

class Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

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

        class Controller; //type: Set::Controller

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller> controller;
        
}; // Set


class Set::Controller : public ydk::Entity
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

        class Asic; //type: Set::Controller::Asic

        ydk::YList asic;
        
}; // Set::Controller


class Set::Controller::Asic : public ydk::Entity
{
    public:
        Asic();
        ~Asic();

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

        ydk::YLeaf asic_name; //type: string
        class Instance; //type: Set::Controller::Asic::Instance

        ydk::YList instance;
        
}; // Set::Controller::Asic


class Set::Controller::Asic::Instance : public ydk::Entity
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

        ydk::YLeaf instance_ids; //type: uint32
        class FaultInjection; //type: Set::Controller::Asic::Instance::FaultInjection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection> fault_injection;
        
}; // Set::Controller::Asic::Instance


class Set::Controller::Asic::Instance::FaultInjection : public ydk::Entity
{
    public:
        FaultInjection();
        ~FaultInjection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Module; //type: Set::Controller::Asic::Instance::FaultInjection::Module

        ydk::YList module;
        
}; // Set::Controller::Asic::Instance::FaultInjection


class Set::Controller::Asic::Instance::FaultInjection::Module : public ydk::Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf module_name; //type: string
        class FaultType; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType> fault_type;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType : public ydk::Entity
{
    public:
        FaultType();
        ~FaultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ecc; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc
        class Parity; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity
        class Other; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc> ecc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity> parity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other> other;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc : public ydk::Entity
{
    public:
        Ecc();
        ~Ecc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All
        class BlockNameLst; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All> all;
        ydk::YList block_name_lst;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All : public ydk::Entity
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

        class Threshold; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location

        ydk::YList threshold;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst : public ydk::Entity
{
    public:
        BlockNameLst();
        ~BlockNameLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_name; //type: string
        class One; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One
        class Continuous; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous
        class Stop; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One> one;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous> continuous;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop> stop;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One : public ydk::Entity
{
    public:
        One();
        ~One();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate> rate;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErrorNumber; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber

        ydk::YList error_number;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber : public ydk::Entity
{
    public:
        ErrorNumber();
        ~ErrorNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_errs; //type: uint32
        class Duration; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration

        ydk::YList duration;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous : public ydk::Entity
{
    public:
        Continuous();
        ~Continuous();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate> rate;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErrorNumber; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber

        ydk::YList error_number;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber : public ydk::Entity
{
    public:
        ErrorNumber();
        ~ErrorNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_errs; //type: uint32
        class Duration; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration

        ydk::YList duration;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop : public ydk::Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity : public ydk::Entity
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

        class All; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All
        class BlockNameLst; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All> all;
        ydk::YList block_name_lst;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All : public ydk::Entity
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

        class Threshold; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location

        ydk::YList threshold;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst : public ydk::Entity
{
    public:
        BlockNameLst();
        ~BlockNameLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_name; //type: string
        class One; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One
        class Continuous; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous
        class Stop; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One> one;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous> continuous;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop> stop;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One : public ydk::Entity
{
    public:
        One();
        ~One();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate> rate;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErrorNumber; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber

        ydk::YList error_number;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber : public ydk::Entity
{
    public:
        ErrorNumber();
        ~ErrorNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_errs; //type: uint32
        class Duration; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration

        ydk::YList duration;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous : public ydk::Entity
{
    public:
        Continuous();
        ~Continuous();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate> rate;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErrorNumber; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber

        ydk::YList error_number;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber : public ydk::Entity
{
    public:
        ErrorNumber();
        ~ErrorNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_errs; //type: uint32
        class Duration; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration

        ydk::YList duration;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop : public ydk::Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other : public ydk::Entity
{
    public:
        Other();
        ~Other();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All
        class BlockNameLst; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All> all;
        ydk::YList block_name_lst;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All : public ydk::Entity
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

        class Threshold; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location

        ydk::YList threshold;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst : public ydk::Entity
{
    public:
        BlockNameLst();
        ~BlockNameLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_name; //type: string
        class One; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One
        class Continuous; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous
        class Stop; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One> one;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous> continuous;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop> stop;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One : public ydk::Entity
{
    public:
        One();
        ~One();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate> rate;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErrorNumber; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber

        ydk::YList error_number;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber : public ydk::Entity
{
    public:
        ErrorNumber();
        ~ErrorNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_errs; //type: uint32
        class Duration; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration

        ydk::YList duration;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous : public ydk::Entity
{
    public:
        Continuous();
        ~Continuous();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rate; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate> rate;
        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErrorNumber; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber

        ydk::YList error_number;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber : public ydk::Entity
{
    public:
        ErrorNumber();
        ~ErrorNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_errs; //type: uint32
        class Duration; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration

        ydk::YList duration;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_seconds; //type: uint32
        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop : public ydk::Entity
{
    public:
        Stop();
        ~Stop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location

        ydk::YList location;
        
}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop


class Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location : public ydk::Entity
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

        ydk::YLeaf fit_location_name; //type: string

}; // Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location

class Controller : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Fabric; //type: Controller::Fabric
        class SfeOper; //type: Controller::SfeOper
        class FabricAction; //type: Controller::FabricAction
        class CardMgr; //type: Controller::CardMgr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric> fabric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::SfeOper> sfe_oper;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::FabricAction> fabric_action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::CardMgr> card_mgr;
        
}; // Controller


class Controller::Fabric : public ydk::Entity
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

        class Fabric_; //type: Controller::Fabric::Fabric_
        class Oper; //type: Controller::Fabric::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Fabric_> fabric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper> oper;
        
}; // Controller::Fabric


class Controller::Fabric::Fabric_ : public ydk::Entity
{
    public:
        Fabric_();
        ~Fabric_();

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

        class Fsdbagg; //type: Controller::Fabric::Fabric_::Fsdbagg
        class Fgid; //type: Controller::Fabric::Fabric_::Fgid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Fabric_::Fsdbagg> fsdbagg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Fabric_::Fgid> fgid;
        
}; // Controller::Fabric::Fabric_


class Controller::Fabric::Fabric_::Fsdbagg : public ydk::Entity
{
    public:
        Fsdbagg();
        ~Fsdbagg();

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

        class Plane; //type: Controller::Fabric::Fabric_::Fsdbagg::Plane

        ydk::YList plane;
        
}; // Controller::Fabric::Fabric_::Fsdbagg


class Controller::Fabric::Fabric_::Fsdbagg::Plane : public ydk::Entity
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

        ydk::YLeaf plane_id; //type: string
        ydk::YLeaf shutdown; //type: empty

}; // Controller::Fabric::Fabric_::Fsdbagg::Plane


class Controller::Fabric::Fabric_::Fgid : public ydk::Entity
{
    public:
        Fgid();
        ~Fgid();

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

        class Resource; //type: Controller::Fabric::Fabric_::Fgid::Resource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Fabric_::Fgid::Resource> resource;
        
}; // Controller::Fabric::Fabric_::Fgid


class Controller::Fabric::Fabric_::Fgid::Resource : public ydk::Entity
{
    public:
        Resource();
        ~Resource();

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

        class Sdr; //type: Controller::Fabric::Fabric_::Fgid::Resource::Sdr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Fabric_::Fgid::Resource::Sdr> sdr;
        
}; // Controller::Fabric::Fabric_::Fgid::Resource


class Controller::Fabric::Fabric_::Fgid::Resource::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        class Allocation; //type: Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation> allocation;
        
}; // Controller::Fabric::Fabric_::Fgid::Resource::Sdr


class Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation : public ydk::Entity
{
    public:
        Allocation();
        ~Allocation();

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

        ydk::YLeaf percent; //type: int32

}; // Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation


class Controller::Fabric::Oper : public ydk::Entity
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

        class Fgid; //type: Controller::Fabric::Oper::Fgid
        class FsdbaggActive; //type: Controller::Fabric::Oper::FsdbaggActive
        class FsdbaggLink; //type: Controller::Fabric::Oper::FsdbaggLink
        class FsdbaggSfeAsicType; //type: Controller::Fabric::Oper::FsdbaggSfeAsicType
        class FsdbaggStandby; //type: Controller::Fabric::Oper::FsdbaggStandby
        class FabHealth; //type: Controller::Fabric::Oper::FabHealth
        class FsdbAggregator; //type: Controller::Fabric::Oper::FsdbAggregator
        class Link; //type: Controller::Fabric::Oper::Link
        class Sfe; //type: Controller::Fabric::Oper::Sfe
        class FsdbPla; //type: Controller::Fabric::Oper::FsdbPla
        class FsdbSrvr; //type: Controller::Fabric::Oper::FsdbSrvr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid> fgid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive> fsdbagg_active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggLink> fsdbagg_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggSfeAsicType> fsdbagg_sfe_asic_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggStandby> fsdbagg_standby;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FabHealth> fab_health;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbAggregator> fsdb_aggregator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Link> link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Sfe> sfe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbPla> fsdb_pla;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbSrvr> fsdb_srvr;
        
}; // Controller::Fabric::Oper


class Controller::Fabric::Oper::Fgid : public ydk::Entity
{
    public:
        Fgid();
        ~Fgid();

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

        class Information; //type: Controller::Fabric::Oper::Fgid::Information
        class Resource; //type: Controller::Fabric::Oper::Fgid::Resource
        class Statistics; //type: Controller::Fabric::Oper::Fgid::Statistics
        class FgidMgr; //type: Controller::Fabric::Oper::Fgid::FgidMgr
        class ProgramError; //type: Controller::Fabric::Oper::Fgid::ProgramError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::Resource> resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::FgidMgr> fgid_mgr;
        ydk::YList program_error;
        
}; // Controller::Fabric::Oper::Fgid


class Controller::Fabric::Oper::Fgid::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

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

        class Id; //type: Controller::Fabric::Oper::Fgid::Information::Id

        ydk::YList id;
        
}; // Controller::Fabric::Oper::Fgid::Information


class Controller::Fabric::Oper::Fgid::Information::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

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

        ydk::YLeaf fgid_id; //type: int32
        ydk::YLeaf total_asso_fabricq_ids; //type: int32
        ydk::YLeaf asso_client_info; //type: string
        class HexBitmaps; //type: Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps
        class BinaryBitmaps; //type: Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps
        class AssoFabricqIds; //type: Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds
        class Drivers; //type: Controller::Fabric::Oper::Fgid::Information::Id::Drivers

        ydk::YList hex_bitmaps;
        ydk::YList binary_bitmaps;
        ydk::YList asso_fabricq_ids;
        ydk::YList drivers;
        
}; // Controller::Fabric::Oper::Fgid::Information::Id


class Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps : public ydk::Entity
{
    public:
        HexBitmaps();
        ~HexBitmaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_number; //type: int32
        ydk::YLeaf bitmap; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps


class Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps : public ydk::Entity
{
    public:
        BinaryBitmaps();
        ~BinaryBitmaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_number; //type: int32
        ydk::YLeaf bitmap; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps


class Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds : public ydk::Entity
{
    public:
        AssoFabricqIds();
        ~AssoFabricqIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fabricq_id; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds


class Controller::Fabric::Oper::Fgid::Information::Id::Drivers : public ydk::Entity
{
    public:
        Drivers();
        ~Drivers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_number; //type: int32
        class Clients; //type: Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients

        ydk::YList clients;
        
}; // Controller::Fabric::Oper::Fgid::Information::Id::Drivers


class Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_idx; //type: int32
        ydk::YLeaf show_asic_0; //type: boolean
        ydk::YLeaf asic_0_bitmap; //type: string
        ydk::YLeaf show_asic_1; //type: boolean
        ydk::YLeaf asic_1_bitmap; //type: string
        ydk::YLeaf show_asic_2; //type: boolean
        ydk::YLeaf asic_2_bitmap; //type: string
        ydk::YLeaf show_asic_3; //type: boolean
        ydk::YLeaf asic_3_bitmap; //type: string
        ydk::YLeaf show_asic_4; //type: boolean
        ydk::YLeaf asic_4_bitmap; //type: string
        ydk::YLeaf show_asic_5; //type: boolean
        ydk::YLeaf asic_5_bitmap; //type: string
        ydk::YLeaf show_asic_6; //type: boolean
        ydk::YLeaf asic_6_bitmap; //type: string
        ydk::YLeaf show_asic_7; //type: boolean
        ydk::YLeaf asic_7_bitmap; //type: string
        ydk::YLeaf show_asic_8; //type: boolean
        ydk::YLeaf asic_8_bitmap; //type: string
        ydk::YLeaf show_asic_9; //type: boolean
        ydk::YLeaf asic_9_bitmap; //type: string
        ydk::YLeaf show_asic_10; //type: boolean
        ydk::YLeaf asic_10_bitmap; //type: string
        ydk::YLeaf show_asic_11; //type: boolean
        ydk::YLeaf asic_11_bitmap; //type: string
        ydk::YLeaf show_asic_12; //type: boolean
        ydk::YLeaf asic_12_bitmap; //type: string
        ydk::YLeaf show_asic_13; //type: boolean
        ydk::YLeaf asic_13_bitmap; //type: string
        ydk::YLeaf show_asic_14; //type: boolean
        ydk::YLeaf asic_14_bitmap; //type: string
        ydk::YLeaf show_asic_15; //type: boolean
        ydk::YLeaf asic_15_bitmap; //type: string
        ydk::YLeaf show_asic_16; //type: boolean
        ydk::YLeaf asic_16_bitmap; //type: string
        ydk::YLeaf show_asic_17; //type: boolean
        ydk::YLeaf asic_17_bitmap; //type: string
        ydk::YLeaf show_asic_18; //type: boolean
        ydk::YLeaf asic_18_bitmap; //type: string
        ydk::YLeaf show_asic_19; //type: boolean
        ydk::YLeaf asic_19_bitmap; //type: string
        ydk::YLeaf show_asic_20; //type: boolean
        ydk::YLeaf asic_20_bitmap; //type: string
        ydk::YLeaf show_asic_21; //type: boolean
        ydk::YLeaf asic_21_bitmap; //type: string
        ydk::YLeaf show_asic_22; //type: boolean
        ydk::YLeaf asic_22_bitmap; //type: string
        ydk::YLeaf show_asic_23; //type: boolean
        ydk::YLeaf asic_23_bitmap; //type: string
        ydk::YLeaf show_asic_24; //type: boolean
        ydk::YLeaf asic_24_bitmap; //type: string
        ydk::YLeaf show_asic_25; //type: boolean
        ydk::YLeaf asic_25_bitmap; //type: string
        ydk::YLeaf show_asic_26; //type: boolean
        ydk::YLeaf asic_26_bitmap; //type: string
        ydk::YLeaf show_asic_27; //type: boolean
        ydk::YLeaf asic_27_bitmap; //type: string
        ydk::YLeaf show_asic_28; //type: boolean
        ydk::YLeaf asic_28_bitmap; //type: string
        ydk::YLeaf show_asic_29; //type: boolean
        ydk::YLeaf asic_29_bitmap; //type: string
        ydk::YLeaf show_asic_30; //type: boolean
        ydk::YLeaf asic_30_bitmap; //type: string
        ydk::YLeaf show_asic_31; //type: boolean
        ydk::YLeaf asic_31_bitmap; //type: string
        ydk::YLeaf show_asic_32; //type: boolean
        ydk::YLeaf asic_32_bitmap; //type: string
        ydk::YLeaf show_asic_33; //type: boolean
        ydk::YLeaf asic_33_bitmap; //type: string
        ydk::YLeaf show_asic_34; //type: boolean
        ydk::YLeaf asic_34_bitmap; //type: string
        ydk::YLeaf show_asic_35; //type: boolean
        ydk::YLeaf asic_35_bitmap; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients


class Controller::Fabric::Oper::Fgid::Resource : public ydk::Entity
{
    public:
        Resource();
        ~Resource();

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

        class Sdr; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr

        ydk::YList sdr;
        
}; // Controller::Fabric::Oper::Fgid::Resource


class Controller::Fabric::Oper::Fgid::Resource::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        ydk::YLeaf sdr_name; //type: string
        ydk::YLeaf description; //type: string
        class Application; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr::Application

        ydk::YList application;
        
}; // Controller::Fabric::Oper::Fgid::Resource::Sdr


class Controller::Fabric::Oper::Fgid::Resource::Sdr::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_name; //type: string
        ydk::YLeaf description; //type: string
        class IdsRange; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange

        ydk::YList ids_range;
        
}; // Controller::Fabric::Oper::Fgid::Resource::Sdr::Application


class Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange : public ydk::Entity
{
    public:
        IdsRange();
        ~IdsRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: int32
        ydk::YLeaf elements; //type: int32
        class FgidIds; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds

        ydk::YList fgid_ids;
        
}; // Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange


class Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds : public ydk::Entity
{
    public:
        FgidIds();
        ~FgidIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fgid_id; //type: string
        ydk::YLeaf line_idx; //type: int32
        ydk::YLeaf sdr_name_h; //type: string
        ydk::YLeaf app_name_h; //type: string

}; // Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds


class Controller::Fabric::Oper::Fgid::Statistics : public ydk::Entity
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

        class All; //type: Controller::Fabric::Oper::Fgid::Statistics::All
        class Sdr; //type: Controller::Fabric::Oper::Fgid::Statistics::Sdr
        class Pool; //type: Controller::Fabric::Oper::Fgid::Statistics::Pool
        class System; //type: Controller::Fabric::Oper::Fgid::Statistics::System

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::Statistics::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::Statistics::Sdr> sdr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::Statistics::Pool> pool;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::Fgid::Statistics::System> system;
        
}; // Controller::Fabric::Oper::Fgid::Statistics


class Controller::Fabric::Oper::Fgid::Statistics::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class StatsList; //type: Controller::Fabric::Oper::Fgid::Statistics::All::StatsList
        class SdrList; //type: Controller::Fabric::Oper::Fgid::Statistics::All::SdrList
        class PoolList; //type: Controller::Fabric::Oper::Fgid::Statistics::All::PoolList

        ydk::YList stats_list;
        ydk::YList sdr_list;
        ydk::YList pool_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::All


class Controller::Fabric::Oper::Fgid::Statistics::All::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

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

        ydk::YLeaf system_stats; //type: int32
        ydk::YLeaf system_total_fgids; //type: uint32
        ydk::YLeaf system_inuse_fgids; //type: uint32
        ydk::YLeaf system_hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::All::StatsList


class Controller::Fabric::Oper::Fgid::Statistics::All::SdrList : public ydk::Entity
{
    public:
        SdrList();
        ~SdrList();

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

        ydk::YLeaf sdr_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf sdr_total_fgids; //type: uint32
        ydk::YLeaf sdr_inuse_fgids; //type: uint32
        ydk::YLeaf sdr_hwm_fgids; //type: uint32
        class Application; //type: Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application

        ydk::YList application;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::All::SdrList


class Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf app_id; //type: uint32
        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf inuse_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application


class Controller::Fabric::Oper::Fgid::Statistics::All::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

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

        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf pool_type; //type: string
        ydk::YLeaf start_fgid; //type: string
        ydk::YLeaf total_fgids; //type: uint32
        ydk::YLeaf current_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::All::PoolList


class Controller::Fabric::Oper::Fgid::Statistics::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        class SdrList; //type: Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList

        ydk::YList sdr_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::Sdr


class Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList : public ydk::Entity
{
    public:
        SdrList();
        ~SdrList();

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

        ydk::YLeaf sdr_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf sdr_total_fgids; //type: uint32
        ydk::YLeaf sdr_inuse_fgids; //type: uint32
        ydk::YLeaf sdr_hwm_fgids; //type: uint32
        class Application; //type: Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application

        ydk::YList application;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList


class Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf app_id; //type: uint32
        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf inuse_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application


class Controller::Fabric::Oper::Fgid::Statistics::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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

        class PoolList; //type: Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList

        ydk::YList pool_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::Pool


class Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

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

        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf pool_type; //type: string
        ydk::YLeaf start_fgid; //type: string
        ydk::YLeaf total_fgids; //type: uint32
        ydk::YLeaf current_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList


class Controller::Fabric::Oper::Fgid::Statistics::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        class StatsList; //type: Controller::Fabric::Oper::Fgid::Statistics::System::StatsList

        ydk::YList stats_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::System


class Controller::Fabric::Oper::Fgid::Statistics::System::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

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

        ydk::YLeaf system_stats; //type: int32
        ydk::YLeaf system_total_fgids; //type: uint32
        ydk::YLeaf system_inuse_fgids; //type: uint32
        ydk::YLeaf system_hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::System::StatsList


class Controller::Fabric::Oper::Fgid::FgidMgr : public ydk::Entity
{
    public:
        FgidMgr();
        ~FgidMgr();

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

        class Trace; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace

        ydk::YList trace;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace : public ydk::Entity
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
        class Location; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location

        ydk::YList location;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location : public ydk::Entity
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
        class AllOptions; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions : public ydk::Entity
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
        class TraceBlocks; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
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

}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks


class Controller::Fabric::Oper::Fgid::ProgramError : public ydk::Entity
{
    public:
        ProgramError();
        ~ProgramError();

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

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Rack; //type: Controller::Fabric::Oper::Fgid::ProgramError::Rack

        ydk::YList rack;
        
}; // Controller::Fabric::Oper::Fgid::ProgramError


class Controller::Fabric::Oper::Fgid::ProgramError::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: int32
        ydk::YLeaf rack_id_str; //type: string
        ydk::YLeaf fgids_in_error; //type: string
        ydk::YLeaf found_fgids_in_error; //type: boolean
        ydk::YLeaf total_error_fgids; //type: int32
        ydk::YLeaf incorrect_fgids_range; //type: boolean
        ydk::YLeaf cmd_not_supported; //type: boolean

}; // Controller::Fabric::Oper::Fgid::ProgramError::Rack


class Controller::Fabric::Oper::FsdbaggActive : public ydk::Entity
{
    public:
        FsdbaggActive();
        ~FsdbaggActive();

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

        class Plane; //type: Controller::Fabric::Oper::FsdbaggActive::Plane
        class Bundle; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle
        class Statistics; //type: Controller::Fabric::Oper::FsdbaggActive::Statistics

        ydk::YList plane;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Bundle> bundle;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Statistics> statistics;
        
}; // Controller::Fabric::Oper::FsdbaggActive


class Controller::Fabric::Oper::FsdbaggActive::Plane : public ydk::Entity
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
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf ucast_oper_state; //type: string
        ydk::YLeaf mcast_oper_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf ucast_cnt_up; //type: int32
        ydk::YLeaf ucast_cnt_some_up; //type: int32
        ydk::YLeaf ucast_cnt_dn; //type: int32
        ydk::YLeaf mcast_cnt_up; //type: int32
        ydk::YLeaf mcast_cnt_some_up; //type: int32
        ydk::YLeaf mcast_cnt_dn; //type: int32
        ydk::YLeaf total_bundles; //type: int32
        ydk::YLeaf down_bundles; //type: int32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf ucast_lost_cells; //type: uint32
        ydk::YLeaf mcast_lost_cells; //type: uint32
        ydk::YLeaf last_clear_ts; //type: string
        ydk::YLeaf last_clear_reason; //type: string
        ydk::YLeaf last_clear_req_ts; //type: string
        ydk::YLeaf last_clear_status; //type: string
        ydk::YLeaf is_asic_internal_error; //type: boolean
        ydk::YLeaf asic_internal_drops; //type: uint64
        ydk::YLeaf asic_location_drops; //type: string
        ydk::YLeaf ppu_state; //type: string
        class AsicInternalError; //type: Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError

        ydk::YList asic_internal_error;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Plane


class Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError : public ydk::Entity
{
    public:
        AsicInternalError();
        ~AsicInternalError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_number; //type: int64
        ydk::YLeaf asic_location; //type: string
        ydk::YLeaf link_crc_error; //type: boolean
        ydk::YLeaf link_size_error; //type: boolean
        ydk::YLeaf link_mis_align_error; //type: boolean
        ydk::YLeaf link_code_group_error; //type: boolean
        ydk::YLeaf link_no_sig_lock_error; //type: boolean
        ydk::YLeaf link_no_sign_accept_error; //type: boolean
        ydk::YLeaf link_token_error; //type: boolean
        ydk::YLeaf error_token_count; //type: boolean
        ydk::YLeaf last_asic_internal_error_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError


class Controller::Fabric::Oper::FsdbaggActive::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

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

        class Summary; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary
        class All; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::All
        class Port; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port
        class Location; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Bundle::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port> port;
        ydk::YList location;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class BundleSummaryList; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList

        ydk::YList bundle_summary_list;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList : public ydk::Entity
{
    public:
        BundleSummaryList();
        ~BundleSummaryList();

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

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf total_bundles; //type: uint32
        ydk::YLeaf down_bundles; //type: uint32
        ydk::YLeaf bundles_not_connected; //type: uint32
        ydk::YLeaf total_bports; //type: uint32
        ydk::YLeaf down_bports; //type: uint32
        ydk::YLeaf bports_not_connected; //type: uint32

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList


class Controller::Fabric::Oper::FsdbaggActive::Bundle::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class BundleAllList; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList

        ydk::YList bundle_all_list;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::All


class Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList : public ydk::Entity
{
    public:
        BundleAllList();
        ~BundleAllList();

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

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bundle_id; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf plane_id; //type: uint32
        ydk::YLeaf total_links; //type: uint32
        ydk::YLeaf down_links; //type: uint32
        ydk::YLeaf bport1; //type: string
        ydk::YLeaf bport2; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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

        class All; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All
        class Location; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All> all;
        ydk::YList location;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class BportAllList; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList
        class Statistics; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics

        ydk::YList bport_all_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics> statistics;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList : public ydk::Entity
{
    public:
        BportAllList();
        ~BportAllList();

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

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bport_id; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics : public ydk::Entity
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

        class BportStatsAllRacks; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks

        ydk::YList bport_stats_all_racks;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks : public ydk::Entity
{
    public:
        BportStatsAllRacks();
        ~BportStatsAllRacks();

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

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf total_racks; //type: uint32
        class BportStatsRack; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack

        ydk::YList bport_stats_rack;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack : public ydk::Entity
{
    public:
        BportStatsRack();
        ~BportStatsRack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf rack_num_str; //type: string
        class BportStats; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats

        ydk::YList bport_stats;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats : public ydk::Entity
{
    public:
        BportStats();
        ~BportStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bport_id; //type: string
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf last_clear_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location : public ydk::Entity
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

        ydk::YLeaf loc_str; //type: string
        class BportAllList; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList
        class Statistics; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics

        ydk::YList bport_all_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics> statistics;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList : public ydk::Entity
{
    public:
        BportAllList();
        ~BportAllList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bport_id; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf down_flags; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics : public ydk::Entity
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

        class BportStatsAllRacks; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks

        ydk::YList bport_stats_all_racks;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks : public ydk::Entity
{
    public:
        BportStatsAllRacks();
        ~BportStatsAllRacks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf total_racks; //type: uint32
        class BportStatsRack; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack

        ydk::YList bport_stats_rack;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack : public ydk::Entity
{
    public:
        BportStatsRack();
        ~BportStatsRack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int32
        ydk::YLeaf rack_num_str; //type: string
        class BportStats; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats

        ydk::YList bport_stats;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats : public ydk::Entity
{
    public:
        BportStats();
        ~BportStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bport_id; //type: string
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf last_clear_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Location : public ydk::Entity
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

        ydk::YLeaf loc_str; //type: string
        class BundleAllList; //type: Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList

        ydk::YList bundle_all_list;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Location


class Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList : public ydk::Entity
{
    public:
        BundleAllList();
        ~BundleAllList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: int64
        ydk::YLeaf bundle_id; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf plane_id; //type: uint32
        ydk::YLeaf total_links; //type: uint32
        ydk::YLeaf down_links; //type: uint32
        ydk::YLeaf bport1; //type: string
        ydk::YLeaf bport2; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList


class Controller::Fabric::Oper::FsdbaggActive::Statistics : public ydk::Entity
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

        class Plane; //type: Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane

        ydk::YList plane;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Statistics


class Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane : public ydk::Entity
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
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf ucast_oper_state; //type: string
        ydk::YLeaf mcast_oper_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf ucast_cnt_up; //type: int32
        ydk::YLeaf ucast_cnt_some_up; //type: int32
        ydk::YLeaf ucast_cnt_dn; //type: int32
        ydk::YLeaf mcast_cnt_up; //type: int32
        ydk::YLeaf mcast_cnt_some_up; //type: int32
        ydk::YLeaf mcast_cnt_dn; //type: int32
        ydk::YLeaf total_bundles; //type: int32
        ydk::YLeaf down_bundles; //type: int32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf ucast_lost_cells; //type: uint32
        ydk::YLeaf mcast_lost_cells; //type: uint32
        ydk::YLeaf last_clear_ts; //type: string
        ydk::YLeaf last_clear_reason; //type: string
        ydk::YLeaf last_clear_req_ts; //type: string
        ydk::YLeaf last_clear_status; //type: string
        ydk::YLeaf is_asic_internal_error; //type: boolean
        ydk::YLeaf asic_internal_drops; //type: uint64
        ydk::YLeaf asic_location_drops; //type: string
        ydk::YLeaf ppu_state; //type: string
        class AsicInternalError; //type: Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError

        ydk::YList asic_internal_error;
        
}; // Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane


class Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError : public ydk::Entity
{
    public:
        AsicInternalError();
        ~AsicInternalError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_number; //type: int64
        ydk::YLeaf asic_location; //type: string
        ydk::YLeaf link_crc_error; //type: boolean
        ydk::YLeaf link_size_error; //type: boolean
        ydk::YLeaf link_mis_align_error; //type: boolean
        ydk::YLeaf link_code_group_error; //type: boolean
        ydk::YLeaf link_no_sig_lock_error; //type: boolean
        ydk::YLeaf link_no_sign_accept_error; //type: boolean
        ydk::YLeaf link_token_error; //type: boolean
        ydk::YLeaf error_token_count; //type: boolean
        ydk::YLeaf last_asic_internal_error_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError


class Controller::Fabric::Oper::FsdbaggLink : public ydk::Entity
{
    public:
        FsdbaggLink();
        ~FsdbaggLink();

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

        class Port; //type: Controller::Fabric::Oper::FsdbaggLink::Port

        ydk::YList port;
        
}; // Controller::Fabric::Oper::FsdbaggLink


class Controller::Fabric::Oper::FsdbaggLink::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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

        ydk::YLeaf portname; //type: string
        ydk::YLeaf description; //type: string

}; // Controller::Fabric::Oper::FsdbaggLink::Port


class Controller::Fabric::Oper::FsdbaggSfeAsicType : public ydk::Entity
{
    public:
        FsdbaggSfeAsicType();
        ~FsdbaggSfeAsicType();

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

        class AsicTypes; //type: Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes

        ydk::YList asic_types;
        
}; // Controller::Fabric::Oper::FsdbaggSfeAsicType


class Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes : public ydk::Entity
{
    public:
        AsicTypes();
        ~AsicTypes();

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

        ydk::YLeaf asicname; //type: string
        ydk::YLeaf description; //type: string
        class Block; //type: Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block

        ydk::YList block;
        
}; // Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes


class Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf blockname; //type: string
        ydk::YLeaf description; //type: string

}; // Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block


class Controller::Fabric::Oper::FsdbaggStandby : public ydk::Entity
{
    public:
        FsdbaggStandby();
        ~FsdbaggStandby();

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

        class Plane; //type: Controller::Fabric::Oper::FsdbaggStandby::Plane
        class Statistics; //type: Controller::Fabric::Oper::FsdbaggStandby::Statistics

        ydk::YList plane;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs55A1::Controller::Fabric::Oper::FsdbaggStandby::Statistics> statistics;
        
}; // Controller::Fabric::Oper::FsdbaggStandby


class Controller::Fabric::Oper::FsdbaggStandby::Plane : public ydk::Entity
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
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf ucast_oper_state; //type: string
        ydk::YLeaf mcast_oper_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf ucast_cnt_up; //type: int32
        ydk::YLeaf ucast_cnt_some_up; //type: int32
        ydk::YLeaf ucast_cnt_dn; //type: int32
        ydk::YLeaf mcast_cnt_up; //type: int32
        ydk::YLeaf mcast_cnt_some_up; //type: int32
        ydk::YLeaf mcast_cnt_dn; //type: int32
        ydk::YLeaf total_bundles; //type: int32
        ydk::YLeaf down_bundles; //type: int32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf ucast_lost_cells; //type: uint32
        ydk::YLeaf mcast_lost_cells; //type: uint32
        ydk::YLeaf last_clear_ts; //type: string
        ydk::YLeaf last_clear_reason; //type: string
        ydk::YLeaf last_clear_req_ts; //type: string
        ydk::YLeaf last_clear_status; //type: string
        ydk::YLeaf is_asic_internal_error; //type: boolean
        ydk::YLeaf asic_internal_drops; //type: uint64
        ydk::YLeaf asic_location_drops; //type: string
        ydk::YLeaf ppu_state; //type: string
        class AsicInternalError; //type: Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError

        ydk::YList asic_internal_error;
        
}; // Controller::Fabric::Oper::FsdbaggStandby::Plane


class Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError : public ydk::Entity
{
    public:
        AsicInternalError();
        ~AsicInternalError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_number; //type: int64
        ydk::YLeaf asic_location; //type: string
        ydk::YLeaf link_crc_error; //type: boolean
        ydk::YLeaf link_size_error; //type: boolean
        ydk::YLeaf link_mis_align_error; //type: boolean
        ydk::YLeaf link_code_group_error; //type: boolean
        ydk::YLeaf link_no_sig_lock_error; //type: boolean
        ydk::YLeaf link_no_sign_accept_error; //type: boolean
        ydk::YLeaf link_token_error; //type: boolean
        ydk::YLeaf error_token_count; //type: boolean
        ydk::YLeaf last_asic_internal_error_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError


class Controller::Fabric::Oper::FsdbaggStandby::Statistics : public ydk::Entity
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

        class Plane; //type: Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane

        ydk::YList plane;
        
}; // Controller::Fabric::Oper::FsdbaggStandby::Statistics


class Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane : public ydk::Entity
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
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf ucast_oper_state; //type: string
        ydk::YLeaf mcast_oper_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf ucast_cnt_up; //type: int32
        ydk::YLeaf ucast_cnt_some_up; //type: int32
        ydk::YLeaf ucast_cnt_dn; //type: int32
        ydk::YLeaf mcast_cnt_up; //type: int32
        ydk::YLeaf mcast_cnt_some_up; //type: int32
        ydk::YLeaf mcast_cnt_dn; //type: int32
        ydk::YLeaf total_bundles; //type: int32
        ydk::YLeaf down_bundles; //type: int32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_ce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_ce_cells; //type: uint64
        ydk::YLeaf rx_uce_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_uce_cells; //type: uint64
        ydk::YLeaf rx_pe_cells_is_overflow; //type: boolean
        ydk::YLeaf rx_pe_cells; //type: uint64
        ydk::YLeaf ucast_lost_cells; //type: uint32
        ydk::YLeaf mcast_lost_cells; //type: uint32
        ydk::YLeaf last_clear_ts; //type: string
        ydk::YLeaf last_clear_reason; //type: string
        ydk::YLeaf last_clear_req_ts; //type: string
        ydk::YLeaf last_clear_status; //type: string
        ydk::YLeaf is_asic_internal_error; //type: boolean
        ydk::YLeaf asic_internal_drops; //type: uint64
        ydk::YLeaf asic_location_drops; //type: string
        ydk::YLeaf ppu_state; //type: string
        class AsicInternalError; //type: Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError

        ydk::YList asic_internal_error;
        
}; // Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane


class Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError : public ydk::Entity
{
    public:
        AsicInternalError();
        ~AsicInternalError();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asic_number; //type: int64
        ydk::YLeaf asic_location; //type: string
        ydk::YLeaf link_crc_error; //type: boolean
        ydk::YLeaf link_size_error; //type: boolean
        ydk::YLeaf link_mis_align_error; //type: boolean
        ydk::YLeaf link_code_group_error; //type: boolean
        ydk::YLeaf link_no_sig_lock_error; //type: boolean
        ydk::YLeaf link_no_sign_accept_error; //type: boolean
        ydk::YLeaf link_token_error; //type: boolean
        ydk::YLeaf error_token_count; //type: boolean
        ydk::YLeaf last_asic_internal_error_ts; //type: string

}; // Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError


class Controller::Fabric::Oper::FabHealth : public ydk::Entity
{
    public:
        FabHealth();
        ~FabHealth();

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

        class SysInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList

        ydk::YList sys_info_list;
        
}; // Controller::Fabric::Oper::FabHealth


class Controller::Fabric::Oper::FabHealth::SysInfoList : public ydk::Entity
{
    public:
        SysInfoList();
        ~SysInfoList();

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

        ydk::YLeaf index_key; //type: int32
        ydk::YLeaf aggr_status; //type: boolean
        ydk::YLeaf available_rack_ids; //type: string
        ydk::YLeaf rack_id_separator; //type: string
        ydk::YLeaf available_fm_loc; //type: string
        ydk::YLeaf fm_loc_separator; //type: string
        ydk::YLeaf rack_total; //type: uint32
        ydk::YLeaf rack_lcc; //type: uint32
        ydk::YLeaf rack_fcc; //type: uint32
        ydk::YLeaf plane_up; //type: uint32
        ydk::YLeaf plane_dn; //type: uint32
        ydk::YLeaf plane_mcast_dn; //type: uint32
        ydk::YLeaf plane_admin_dn; //type: uint32
        ydk::YLeaf show_sys_plane_detail; //type: boolean
        ydk::YLeaf sfe_asics_total; //type: uint32
        ydk::YLeaf sfe_asics_up; //type: uint32
        ydk::YLeaf sfe_asics_dn; //type: uint32
        ydk::YLeaf fia_asics_total; //type: uint32
        ydk::YLeaf fia_asics_up; //type: uint32
        ydk::YLeaf fia_asics_dn; //type: uint32
        class SysPlaneInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList
        class RackInfoList; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList
        class FsdbStatus; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus
        class SfeStatus; //type: Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus

        ydk::YList sys_plane_info_list;
        ydk::YList rack_info_list;
        ydk::YList fsdb_status;
        ydk::YList sfe_status;
        
}; // Controller::Fabric::Oper::FabHealth::SysInfoList


class Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList : public ydk::Entity
{
    public:
        SysPlaneInfoList();
        ~SysPlaneInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plane_id; //type: int32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf plane_state; //type: string
        ydk::YLeaf plane_mode; //type: string
        ydk::YLeaf racks_w_plane_fault; //type: int32
        ydk::YLeaf is_data_drop; //type: boolean

}; // Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS55A1_0_ */

