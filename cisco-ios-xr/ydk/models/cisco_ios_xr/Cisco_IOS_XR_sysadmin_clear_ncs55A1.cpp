
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_clear_ncs55A1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_clear_ncs55A1 {

Clear::Clear()
    :
    controller(std::make_shared<Clear::Controller>())
    , clear_asic_errors_grp(std::make_shared<Clear::ClearAsicErrorsGrp>())
{
    controller->parent = this;
    clear_asic_errors_grp->parent = this;

    yang_name = "clear"; yang_parent_name = "Cisco-IOS-XR-sysadmin-clear-ncs55A1"; is_top_level_class = true; has_list_ancestor = false; 
}

Clear::~Clear()
{
}

bool Clear::has_data() const
{
    if (is_presence_container) return true;
    return (controller !=  nullptr && controller->has_data())
	|| (clear_asic_errors_grp !=  nullptr && clear_asic_errors_grp->has_data());
}

bool Clear::has_operation() const
{
    return is_set(yfilter)
	|| (controller !=  nullptr && controller->has_operation())
	|| (clear_asic_errors_grp !=  nullptr && clear_asic_errors_grp->has_operation());
}

std::string Clear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Clear::Controller>();
        }
        return controller;
    }

    if(child_yang_name == "clear-asic-errors-grp")
    {
        if(clear_asic_errors_grp == nullptr)
        {
            clear_asic_errors_grp = std::make_shared<Clear::ClearAsicErrorsGrp>();
        }
        return clear_asic_errors_grp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controller != nullptr)
    {
        _children["controller"] = controller;
    }

    if(clear_asic_errors_grp != nullptr)
    {
        _children["clear-asic-errors-grp"] = clear_asic_errors_grp;
    }

    return _children;
}

void Clear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Clear::clone_ptr() const
{
    return std::make_shared<Clear>();
}

std::string Clear::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Clear::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Clear::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Clear::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Clear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "clear-asic-errors-grp")
        return true;
    return false;
}

Clear::Controller::Controller()
    :
    fabric(std::make_shared<Clear::Controller::Fabric>())
{
    fabric->parent = this;

    yang_name = "controller"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::~Controller()
{
}

bool Clear::Controller::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data());
}

bool Clear::Controller::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation());
}

std::string Clear::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Clear::Controller::Fabric>();
        }
        return fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fabric != nullptr)
    {
        _children["fabric"] = fabric;
    }

    return _children;
}

void Clear::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric")
        return true;
    return false;
}

Clear::Controller::Fabric::Fabric()
    :
    counter(std::make_shared<Clear::Controller::Fabric::Counter>())
    , clear_statistics(std::make_shared<Clear::Controller::Fabric::ClearStatistics>())
{
    counter->parent = this;
    clear_statistics->parent = this;

    yang_name = "fabric"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Fabric::~Fabric()
{
}

bool Clear::Controller::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (counter !=  nullptr && counter->has_data())
	|| (clear_statistics !=  nullptr && clear_statistics->has_data());
}

bool Clear::Controller::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (clear_statistics !=  nullptr && clear_statistics->has_operation());
}

std::string Clear::Controller::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Clear::Controller::Fabric::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "clear_statistics")
    {
        if(clear_statistics == nullptr)
        {
            clear_statistics = std::make_shared<Clear::Controller::Fabric::ClearStatistics>();
        }
        return clear_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(clear_statistics != nullptr)
    {
        _children["clear_statistics"] = clear_statistics;
    }

    return _children;
}

void Clear::Controller::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "clear_statistics")
        return true;
    return false;
}

Clear::Controller::Fabric::Counter::Counter()
    :
    plane(this, {"planeid"})
{

    yang_name = "counter"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Fabric::Counter::~Counter()
{
}

bool Clear::Controller::Fabric::Counter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Fabric::Counter::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Fabric::Counter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Fabric::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto ent_ = std::make_shared<Clear::Controller::Fabric::Counter::Plane>();
        ent_->parent = this;
        plane.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Fabric::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : plane.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::Controller::Fabric::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Clear::Controller::Fabric::Counter::Plane::Plane()
    :
    planeid{YType::str, "planeid"}
{

    yang_name = "plane"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Fabric::Counter::Plane::~Plane()
{
}

bool Clear::Controller::Fabric::Counter::Plane::has_data() const
{
    if (is_presence_container) return true;
    return planeid.is_set;
}

bool Clear::Controller::Fabric::Counter::Plane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter);
}

std::string Clear::Controller::Fabric::Counter::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/controller/fabric/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::Counter::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(planeid, "planeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Counter::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Fabric::Counter::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Fabric::Counter::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Controller::Fabric::Counter::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Fabric::Counter::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
}

bool Clear::Controller::Fabric::Counter::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "planeid")
        return true;
    return false;
}

Clear::Controller::Fabric::ClearStatistics::ClearStatistics()
    :
    plane(this, {"planeid"})
{

    yang_name = "clear_statistics"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Fabric::ClearStatistics::~ClearStatistics()
{
}

bool Clear::Controller::Fabric::ClearStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Fabric::ClearStatistics::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Fabric::ClearStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::ClearStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear_statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::ClearStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Fabric::ClearStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto ent_ = std::make_shared<Clear::Controller::Fabric::ClearStatistics::Plane>();
        ent_->parent = this;
        plane.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Fabric::ClearStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : plane.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::Controller::Fabric::ClearStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::ClearStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::ClearStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Clear::Controller::Fabric::ClearStatistics::Plane::Plane()
    :
    planeid{YType::str, "planeid"}
{

    yang_name = "plane"; yang_parent_name = "clear_statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Controller::Fabric::ClearStatistics::Plane::~Plane()
{
}

bool Clear::Controller::Fabric::ClearStatistics::Plane::has_data() const
{
    if (is_presence_container) return true;
    return planeid.is_set;
}

bool Clear::Controller::Fabric::ClearStatistics::Plane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter);
}

std::string Clear::Controller::Fabric::ClearStatistics::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/controller/fabric/clear_statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::ClearStatistics::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(planeid, "planeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::ClearStatistics::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Controller::Fabric::ClearStatistics::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Controller::Fabric::ClearStatistics::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Controller::Fabric::ClearStatistics::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Fabric::ClearStatistics::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
}

bool Clear::Controller::Fabric::ClearStatistics::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "planeid")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearAsicErrorsGrp()
    :
    clear_device(this, {"device_name"})
{

    yang_name = "clear-asic-errors-grp"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::ClearAsicErrorsGrp::~ClearAsicErrorsGrp()
{
}

bool Clear::ClearAsicErrorsGrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clear_device.len(); index++)
    {
        if(clear_device[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::has_operation() const
{
    for (std::size_t index=0; index<clear_device.len(); index++)
    {
        if(clear_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::ClearAsicErrorsGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-asic-errors-grp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clear-device")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice>();
        ent_->parent = this;
        clear_device.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clear_device.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-device")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::ClearDevice()
    :
    device_name{YType::str, "device-name"}
        ,
    instance(this, {"instance_num"})
    , all_instances(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances>())
{
    all_instances->parent = this;

    yang_name = "clear-device"; yang_parent_name = "clear-asic-errors-grp"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::~ClearDevice()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return device_name.is_set
	|| (all_instances !=  nullptr && all_instances->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| (all_instances !=  nullptr && all_instances->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear-ncs55A1:clear/clear-asic-errors-grp/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-device";
    ADD_KEY_TOKEN(device_name, "device-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "all-instances")
    {
        if(all_instances == nullptr)
        {
            all_instances = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances>();
        }
        return all_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(all_instances != nullptr)
    {
        _children["all-instances"] = all_instances;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "all-instances" || name == "device-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Instance()
    :
    instance_num{YType::uint32, "instance-num"}
        ,
    sbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe>())
    , mbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe>())
    , parity(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity>())
    , generic(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic>())
    , crc(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc>())
    , reset(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset>())
    , barrier(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier>())
    , unexpected(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected>())
    , link(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link>())
    , oor_thresh(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh>())
    , bp(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp>())
    , io(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io>())
    , ucode(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode>())
    , config(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config>())
    , indirect(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect>())
    , nonerr(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr>())
    , summary(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary>())
    , all(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All>())
{
    sbe->parent = this;
    mbe->parent = this;
    parity->parent = this;
    generic->parent = this;
    crc->parent = this;
    reset->parent = this;
    barrier->parent = this;
    unexpected->parent = this;
    link->parent = this;
    oor_thresh->parent = this;
    bp->parent = this;
    io->parent = this;
    ucode->parent = this;
    config->parent = this;
    indirect->parent = this;
    nonerr->parent = this;
    summary->parent = this;
    all->parent = this;

    yang_name = "instance"; yang_parent_name = "clear-device"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::~Instance()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_num.is_set
	|| (sbe !=  nullptr && sbe->has_data())
	|| (mbe !=  nullptr && mbe->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (generic !=  nullptr && generic->has_data())
	|| (crc !=  nullptr && crc->has_data())
	|| (reset !=  nullptr && reset->has_data())
	|| (barrier !=  nullptr && barrier->has_data())
	|| (unexpected !=  nullptr && unexpected->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (oor_thresh !=  nullptr && oor_thresh->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (io !=  nullptr && io->has_data())
	|| (ucode !=  nullptr && ucode->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (indirect !=  nullptr && indirect->has_data())
	|| (nonerr !=  nullptr && nonerr->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_num.yfilter)
	|| (sbe !=  nullptr && sbe->has_operation())
	|| (mbe !=  nullptr && mbe->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (generic !=  nullptr && generic->has_operation())
	|| (crc !=  nullptr && crc->has_operation())
	|| (reset !=  nullptr && reset->has_operation())
	|| (barrier !=  nullptr && barrier->has_operation())
	|| (unexpected !=  nullptr && unexpected->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (oor_thresh !=  nullptr && oor_thresh->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (io !=  nullptr && io->has_operation())
	|| (ucode !=  nullptr && ucode->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (indirect !=  nullptr && indirect->has_operation())
	|| (nonerr !=  nullptr && nonerr->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_num, "instance-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_num.is_set || is_set(instance_num.yfilter)) leaf_name_data.push_back(instance_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sbe")
    {
        if(sbe == nullptr)
        {
            sbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe>();
        }
        return sbe;
    }

    if(child_yang_name == "mbe")
    {
        if(mbe == nullptr)
        {
            mbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe>();
        }
        return mbe;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "generic")
    {
        if(generic == nullptr)
        {
            generic = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic>();
        }
        return generic;
    }

    if(child_yang_name == "crc")
    {
        if(crc == nullptr)
        {
            crc = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc>();
        }
        return crc;
    }

    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset>();
        }
        return reset;
    }

    if(child_yang_name == "barrier")
    {
        if(barrier == nullptr)
        {
            barrier = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier>();
        }
        return barrier;
    }

    if(child_yang_name == "unexpected")
    {
        if(unexpected == nullptr)
        {
            unexpected = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected>();
        }
        return unexpected;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link>();
        }
        return link;
    }

    if(child_yang_name == "oor-thresh")
    {
        if(oor_thresh == nullptr)
        {
            oor_thresh = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh>();
        }
        return oor_thresh;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "io")
    {
        if(io == nullptr)
        {
            io = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io>();
        }
        return io;
    }

    if(child_yang_name == "ucode")
    {
        if(ucode == nullptr)
        {
            ucode = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode>();
        }
        return ucode;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config>();
        }
        return config;
    }

    if(child_yang_name == "indirect")
    {
        if(indirect == nullptr)
        {
            indirect = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect>();
        }
        return indirect;
    }

    if(child_yang_name == "nonerr")
    {
        if(nonerr == nullptr)
        {
            nonerr = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr>();
        }
        return nonerr;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sbe != nullptr)
    {
        _children["sbe"] = sbe;
    }

    if(mbe != nullptr)
    {
        _children["mbe"] = mbe;
    }

    if(parity != nullptr)
    {
        _children["parity"] = parity;
    }

    if(generic != nullptr)
    {
        _children["generic"] = generic;
    }

    if(crc != nullptr)
    {
        _children["crc"] = crc;
    }

    if(reset != nullptr)
    {
        _children["reset"] = reset;
    }

    if(barrier != nullptr)
    {
        _children["barrier"] = barrier;
    }

    if(unexpected != nullptr)
    {
        _children["unexpected"] = unexpected;
    }

    if(link != nullptr)
    {
        _children["link"] = link;
    }

    if(oor_thresh != nullptr)
    {
        _children["oor-thresh"] = oor_thresh;
    }

    if(bp != nullptr)
    {
        _children["bp"] = bp;
    }

    if(io != nullptr)
    {
        _children["io"] = io;
    }

    if(ucode != nullptr)
    {
        _children["ucode"] = ucode;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(indirect != nullptr)
    {
        _children["indirect"] = indirect;
    }

    if(nonerr != nullptr)
    {
        _children["nonerr"] = nonerr;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-num")
    {
        instance_num = value;
        instance_num.value_namespace = name_space;
        instance_num.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-num")
    {
        instance_num.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbe" || name == "mbe" || name == "parity" || name == "generic" || name == "crc" || name == "reset" || name == "barrier" || name == "unexpected" || name == "link" || name == "oor-thresh" || name == "bp" || name == "io" || name == "ucode" || name == "config" || name == "indirect" || name == "nonerr" || name == "summary" || name == "all" || name == "instance-num")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Sbe()
    :
    location(this, {"location_name"})
{

    yang_name = "sbe"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::~Sbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "sbe"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Mbe()
    :
    location(this, {"location_name"})
{

    yang_name = "mbe"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::~Mbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "mbe"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Parity()
    :
    location(this, {"location_name"})
{

    yang_name = "parity"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::~Parity()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Generic()
    :
    location(this, {"location_name"})
{

    yang_name = "generic"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::~Generic()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "generic"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Crc()
    :
    location(this, {"location_name"})
{

    yang_name = "crc"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::~Crc()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "crc"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Reset()
    :
    location(this, {"location_name"})
{

    yang_name = "reset"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::~Reset()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "reset"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Barrier()
    :
    location(this, {"location_name"})
{

    yang_name = "barrier"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::~Barrier()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "barrier"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Unexpected()
    :
    location(this, {"location_name"})
{

    yang_name = "unexpected"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::~Unexpected()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "unexpected"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Link()
    :
    location(this, {"location_name"})
{

    yang_name = "link"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::~Link()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::OorThresh()
    :
    location(this, {"location_name"})
{

    yang_name = "oor-thresh"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::~OorThresh()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-thresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "oor-thresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Bp()
    :
    location(this, {"location_name"})
{

    yang_name = "bp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::~Bp()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Io()
    :
    location(this, {"location_name"})
{

    yang_name = "io"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::~Io()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "io"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Ucode()
    :
    location(this, {"location_name"})
{

    yang_name = "ucode"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::~Ucode()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "ucode"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Config()
    :
    location(this, {"location_name"})
{

    yang_name = "config"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::~Config()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Indirect()
    :
    location(this, {"location_name"})
{

    yang_name = "indirect"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::~Indirect()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "indirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Nonerr()
    :
    location(this, {"location_name"})
{

    yang_name = "nonerr"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::~Nonerr()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonerr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "nonerr"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Summary()
    :
    location(this, {"location_name"})
{

    yang_name = "summary"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::~Summary()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::All()
    :
    history(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History>())
    , location(this, {"location_name"})
{
    history->parent = this;

    yang_name = "all"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::~All()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (history !=  nullptr && history->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History>();
        }
        return history;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::History()
    :
    location(this, {"location_name"})
{

    yang_name = "history"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::~History()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::AllInstances()
    :
    sbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe>())
    , mbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe>())
    , parity(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity>())
    , generic(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic>())
    , crc(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc>())
    , reset(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset>())
    , barrier(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier>())
    , unexpected(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected>())
    , link(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link>())
    , oor_thresh(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh>())
    , bp(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp>())
    , io(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io>())
    , ucode(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode>())
    , config(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config>())
    , indirect(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect>())
    , nonerr(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr>())
    , summary(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary>())
    , all(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All>())
{
    sbe->parent = this;
    mbe->parent = this;
    parity->parent = this;
    generic->parent = this;
    crc->parent = this;
    reset->parent = this;
    barrier->parent = this;
    unexpected->parent = this;
    link->parent = this;
    oor_thresh->parent = this;
    bp->parent = this;
    io->parent = this;
    ucode->parent = this;
    config->parent = this;
    indirect->parent = this;
    nonerr->parent = this;
    summary->parent = this;
    all->parent = this;

    yang_name = "all-instances"; yang_parent_name = "clear-device"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::~AllInstances()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::has_data() const
{
    if (is_presence_container) return true;
    return (sbe !=  nullptr && sbe->has_data())
	|| (mbe !=  nullptr && mbe->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (generic !=  nullptr && generic->has_data())
	|| (crc !=  nullptr && crc->has_data())
	|| (reset !=  nullptr && reset->has_data())
	|| (barrier !=  nullptr && barrier->has_data())
	|| (unexpected !=  nullptr && unexpected->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (oor_thresh !=  nullptr && oor_thresh->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (io !=  nullptr && io->has_data())
	|| (ucode !=  nullptr && ucode->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (indirect !=  nullptr && indirect->has_data())
	|| (nonerr !=  nullptr && nonerr->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::has_operation() const
{
    return is_set(yfilter)
	|| (sbe !=  nullptr && sbe->has_operation())
	|| (mbe !=  nullptr && mbe->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (generic !=  nullptr && generic->has_operation())
	|| (crc !=  nullptr && crc->has_operation())
	|| (reset !=  nullptr && reset->has_operation())
	|| (barrier !=  nullptr && barrier->has_operation())
	|| (unexpected !=  nullptr && unexpected->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (oor_thresh !=  nullptr && oor_thresh->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (io !=  nullptr && io->has_operation())
	|| (ucode !=  nullptr && ucode->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (indirect !=  nullptr && indirect->has_operation())
	|| (nonerr !=  nullptr && nonerr->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sbe")
    {
        if(sbe == nullptr)
        {
            sbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe>();
        }
        return sbe;
    }

    if(child_yang_name == "mbe")
    {
        if(mbe == nullptr)
        {
            mbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe>();
        }
        return mbe;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "generic")
    {
        if(generic == nullptr)
        {
            generic = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic>();
        }
        return generic;
    }

    if(child_yang_name == "crc")
    {
        if(crc == nullptr)
        {
            crc = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc>();
        }
        return crc;
    }

    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset>();
        }
        return reset;
    }

    if(child_yang_name == "barrier")
    {
        if(barrier == nullptr)
        {
            barrier = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier>();
        }
        return barrier;
    }

    if(child_yang_name == "unexpected")
    {
        if(unexpected == nullptr)
        {
            unexpected = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected>();
        }
        return unexpected;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link>();
        }
        return link;
    }

    if(child_yang_name == "oor-thresh")
    {
        if(oor_thresh == nullptr)
        {
            oor_thresh = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh>();
        }
        return oor_thresh;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "io")
    {
        if(io == nullptr)
        {
            io = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io>();
        }
        return io;
    }

    if(child_yang_name == "ucode")
    {
        if(ucode == nullptr)
        {
            ucode = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode>();
        }
        return ucode;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config>();
        }
        return config;
    }

    if(child_yang_name == "indirect")
    {
        if(indirect == nullptr)
        {
            indirect = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect>();
        }
        return indirect;
    }

    if(child_yang_name == "nonerr")
    {
        if(nonerr == nullptr)
        {
            nonerr = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr>();
        }
        return nonerr;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sbe != nullptr)
    {
        _children["sbe"] = sbe;
    }

    if(mbe != nullptr)
    {
        _children["mbe"] = mbe;
    }

    if(parity != nullptr)
    {
        _children["parity"] = parity;
    }

    if(generic != nullptr)
    {
        _children["generic"] = generic;
    }

    if(crc != nullptr)
    {
        _children["crc"] = crc;
    }

    if(reset != nullptr)
    {
        _children["reset"] = reset;
    }

    if(barrier != nullptr)
    {
        _children["barrier"] = barrier;
    }

    if(unexpected != nullptr)
    {
        _children["unexpected"] = unexpected;
    }

    if(link != nullptr)
    {
        _children["link"] = link;
    }

    if(oor_thresh != nullptr)
    {
        _children["oor-thresh"] = oor_thresh;
    }

    if(bp != nullptr)
    {
        _children["bp"] = bp;
    }

    if(io != nullptr)
    {
        _children["io"] = io;
    }

    if(ucode != nullptr)
    {
        _children["ucode"] = ucode;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(indirect != nullptr)
    {
        _children["indirect"] = indirect;
    }

    if(nonerr != nullptr)
    {
        _children["nonerr"] = nonerr;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbe" || name == "mbe" || name == "parity" || name == "generic" || name == "crc" || name == "reset" || name == "barrier" || name == "unexpected" || name == "link" || name == "oor-thresh" || name == "bp" || name == "io" || name == "ucode" || name == "config" || name == "indirect" || name == "nonerr" || name == "summary" || name == "all")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Sbe()
    :
    location(this, {"location_name"})
{

    yang_name = "sbe"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::~Sbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "sbe"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Mbe()
    :
    location(this, {"location_name"})
{

    yang_name = "mbe"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::~Mbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "mbe"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Parity()
    :
    location(this, {"location_name"})
{

    yang_name = "parity"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::~Parity()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Generic()
    :
    location(this, {"location_name"})
{

    yang_name = "generic"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::~Generic()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "generic"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Crc()
    :
    location(this, {"location_name"})
{

    yang_name = "crc"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::~Crc()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "crc"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Reset()
    :
    location(this, {"location_name"})
{

    yang_name = "reset"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::~Reset()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "reset"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Barrier()
    :
    location(this, {"location_name"})
{

    yang_name = "barrier"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::~Barrier()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "barrier"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Unexpected()
    :
    location(this, {"location_name"})
{

    yang_name = "unexpected"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::~Unexpected()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "unexpected"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Link()
    :
    location(this, {"location_name"})
{

    yang_name = "link"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::~Link()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::OorThresh()
    :
    location(this, {"location_name"})
{

    yang_name = "oor-thresh"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::~OorThresh()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-thresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "oor-thresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Bp()
    :
    location(this, {"location_name"})
{

    yang_name = "bp"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::~Bp()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Io()
    :
    location(this, {"location_name"})
{

    yang_name = "io"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::~Io()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "io"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Ucode()
    :
    location(this, {"location_name"})
{

    yang_name = "ucode"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::~Ucode()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "ucode"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Config()
    :
    location(this, {"location_name"})
{

    yang_name = "config"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::~Config()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Indirect()
    :
    location(this, {"location_name"})
{

    yang_name = "indirect"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::~Indirect()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "indirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Nonerr()
    :
    location(this, {"location_name"})
{

    yang_name = "nonerr"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::~Nonerr()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonerr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "nonerr"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Summary()
    :
    location(this, {"location_name"})
{

    yang_name = "summary"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::~Summary()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::All()
    :
    history(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History>())
    , location(this, {"location_name"})
{
    history->parent = this;

    yang_name = "all"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::~All()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (history !=  nullptr && history->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History>();
        }
        return history;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::History()
    :
    location(this, {"location_name"})
{

    yang_name = "history"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::~History()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}


}
}

