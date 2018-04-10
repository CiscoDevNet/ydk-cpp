#ifndef _FIT_
#define _FIT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace fit {

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

        class Asic; //type: Set::Asic

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic> > asic;
        
}; // Set


class Set::Asic : public ydk::Entity
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
        class Instance; //type: Set::Asic::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance> > instance;
        
}; // Set::Asic


class Set::Asic::Instance : public ydk::Entity
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
        class FaultInjection; //type: Set::Asic::Instance::FaultInjection

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection> fault_injection;
        
}; // Set::Asic::Instance


class Set::Asic::Instance::FaultInjection : public ydk::Entity
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

        class Module; //type: Set::Asic::Instance::FaultInjection::Module

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module> > module;
        
}; // Set::Asic::Instance::FaultInjection


class Set::Asic::Instance::FaultInjection::Module : public ydk::Entity
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
        class FaultType; //type: Set::Asic::Instance::FaultInjection::Module::FaultType

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType> fault_type;
        
}; // Set::Asic::Instance::FaultInjection::Module


class Set::Asic::Instance::FaultInjection::Module::FaultType : public ydk::Entity
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

        class Ecc; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc
        class Parity; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity
        class Other; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc> ecc;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity> parity;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other> other;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc : public ydk::Entity
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

        class All; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All
        class BlockNameLst; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All> all;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst> > block_name_lst;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All : public ydk::Entity
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

        class Threshold; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold> > threshold;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst : public ydk::Entity
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
        class One; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One
        class Continuous; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous
        class Stop; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One> one;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous> continuous;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop> stop;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One : public ydk::Entity
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

        class Rate; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate> rate;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate : public ydk::Entity
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

        class ErrorNumber; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber> > error_number;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber : public ydk::Entity
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
        class Duration; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration> > duration;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous : public ydk::Entity
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

        class Rate; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate> rate;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate : public ydk::Entity
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

        class ErrorNumber; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber> > error_number;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber : public ydk::Entity
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
        class Duration; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration> > duration;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop : public ydk::Entity
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

        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop


class Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity : public ydk::Entity
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

        class All; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All
        class BlockNameLst; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All> all;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst> > block_name_lst;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All : public ydk::Entity
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

        class Threshold; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold> > threshold;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst : public ydk::Entity
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
        class One; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One
        class Continuous; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous
        class Stop; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One> one;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous> continuous;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop> stop;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One : public ydk::Entity
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

        class Rate; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate> rate;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate : public ydk::Entity
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

        class ErrorNumber; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber> > error_number;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber : public ydk::Entity
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
        class Duration; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration> > duration;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous : public ydk::Entity
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

        class Rate; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate> rate;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate : public ydk::Entity
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

        class ErrorNumber; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber> > error_number;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber : public ydk::Entity
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
        class Duration; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration> > duration;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop : public ydk::Entity
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

        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop


class Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other : public ydk::Entity
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

        class All; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All
        class BlockNameLst; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All> all;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst> > block_name_lst;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All : public ydk::Entity
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

        class Threshold; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold> > threshold;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst : public ydk::Entity
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
        class One; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One
        class Continuous; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous
        class Stop; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One> one;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous> continuous;
        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop> stop;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One : public ydk::Entity
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

        class Rate; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate> rate;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate : public ydk::Entity
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

        class ErrorNumber; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber> > error_number;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber : public ydk::Entity
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
        class Duration; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration> > duration;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous : public ydk::Entity
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

        class Rate; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location

        std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate> rate;
        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate : public ydk::Entity
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

        class ErrorNumber; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber> > error_number;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber : public ydk::Entity
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
        class Duration; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration> > duration;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration : public ydk::Entity
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
        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop : public ydk::Entity
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

        class Location; //type: Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location

        std::vector<std::shared_ptr<cisco_ios_xr::fit::Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location> > location;
        
}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop


class Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location : public ydk::Entity
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

}; // Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location


}
}

#endif /* _FIT_ */

