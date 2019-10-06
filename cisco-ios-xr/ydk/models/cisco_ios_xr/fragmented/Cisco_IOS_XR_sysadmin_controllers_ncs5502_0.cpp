
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_1.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_3.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5502 {

Set::Set()
    :
    controller(std::make_shared<Set::Controller>())
{
    controller->parent = this;

    yang_name = "set"; yang_parent_name = "Cisco-IOS-XR-sysadmin-controllers-ncs5502"; is_top_level_class = true; has_list_ancestor = false; 
}

Set::~Set()
{
}

bool Set::has_data() const
{
    if (is_presence_container) return true;
    return (controller !=  nullptr && controller->has_data());
}

bool Set::has_operation() const
{
    return is_set(yfilter)
	|| (controller !=  nullptr && controller->has_operation());
}

std::string Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Set::Controller>();
        }
        return controller;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controller != nullptr)
    {
        _children["controller"] = controller;
    }

    return _children;
}

void Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Set::clone_ptr() const
{
    return std::make_shared<Set>();
}

std::string Set::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Set::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Set::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Set::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Set::Controller::Controller()
    :
    asic(this, {"asic_name"})
{

    yang_name = "controller"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = false; 
}

Set::Controller::~Controller()
{
}

bool Set::Controller::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::has_operation() const
{
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:set/" << get_segment_path();
    return path_buffer.str();
}

std::string Set::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic>();
        ent_->parent = this;
        asic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic")
        return true;
    return false;
}

Set::Controller::Asic::Asic()
    :
    asic_name{YType::str, "asic-name"}
        ,
    instance(this, {"instance_ids"})
{

    yang_name = "asic"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Set::Controller::Asic::~Asic()
{
}

bool Set::Controller::Asic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return asic_name.is_set;
}

bool Set::Controller::Asic::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_name.yfilter);
}

std::string Set::Controller::Asic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:set/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Set::Controller::Asic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic";
    ADD_KEY_TOKEN(asic_name, "asic-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_name.is_set || is_set(asic_name.yfilter)) leaf_name_data.push_back(asic_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::get_children() const
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

    return _children;
}

void Set::Controller::Asic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-name")
    {
        asic_name = value;
        asic_name.value_namespace = name_space;
        asic_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-name")
    {
        asic_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "asic-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::Instance()
    :
    instance_ids{YType::uint32, "instance-ids"}
        ,
    fault_injection(std::make_shared<Set::Controller::Asic::Instance::FaultInjection>())
{
    fault_injection->parent = this;

    yang_name = "instance"; yang_parent_name = "asic"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::~Instance()
{
}

bool Set::Controller::Asic::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_ids.is_set
	|| (fault_injection !=  nullptr && fault_injection->has_data());
}

bool Set::Controller::Asic::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_ids.yfilter)
	|| (fault_injection !=  nullptr && fault_injection->has_operation());
}

std::string Set::Controller::Asic::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_ids, "instance-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_ids.is_set || is_set(instance_ids.yfilter)) leaf_name_data.push_back(instance_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-injection")
    {
        if(fault_injection == nullptr)
        {
            fault_injection = std::make_shared<Set::Controller::Asic::Instance::FaultInjection>();
        }
        return fault_injection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fault_injection != nullptr)
    {
        _children["fault-injection"] = fault_injection;
    }

    return _children;
}

void Set::Controller::Asic::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-ids")
    {
        instance_ids = value;
        instance_ids.value_namespace = name_space;
        instance_ids.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-ids")
    {
        instance_ids.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-injection" || name == "instance-ids")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::FaultInjection()
    :
    module(this, {"module_name"})
{

    yang_name = "fault-injection"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::~FaultInjection()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<module.len(); index++)
    {
        if(module[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::has_operation() const
{
    for (std::size_t index=0; index<module.len(); index++)
    {
        if(module[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-injection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module>();
        ent_->parent = this;
        module.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : module.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::Module()
    :
    module_name{YType::str, "module-name"}
        ,
    fault_type(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType>())
{
    fault_type->parent = this;

    yang_name = "module"; yang_parent_name = "fault-injection"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::~Module()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::has_data() const
{
    if (is_presence_container) return true;
    return module_name.is_set
	|| (fault_type !=  nullptr && fault_type->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_name.yfilter)
	|| (fault_type !=  nullptr && fault_type->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";
    ADD_KEY_TOKEN(module_name, "module-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_name.is_set || is_set(module_name.yfilter)) leaf_name_data.push_back(module_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type")
    {
        if(fault_type == nullptr)
        {
            fault_type = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType>();
        }
        return fault_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fault_type != nullptr)
    {
        _children["fault-type"] = fault_type;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-name")
    {
        module_name = value;
        module_name.value_namespace = name_space;
        module_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-name")
    {
        module_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type" || name == "module-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::FaultType()
    :
    ecc(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc>())
    , parity(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity>())
    , other(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other>())
{
    ecc->parent = this;
    parity->parent = this;
    other->parent = this;

    yang_name = "fault-type"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::~FaultType()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::has_data() const
{
    if (is_presence_container) return true;
    return (ecc !=  nullptr && ecc->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (other !=  nullptr && other->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::has_operation() const
{
    return is_set(yfilter)
	|| (ecc !=  nullptr && ecc->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (other !=  nullptr && other->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ecc")
    {
        if(ecc == nullptr)
        {
            ecc = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc>();
        }
        return ecc;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "other")
    {
        if(other == nullptr)
        {
            other = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other>();
        }
        return other;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ecc != nullptr)
    {
        _children["ecc"] = ecc;
    }

    if(parity != nullptr)
    {
        _children["parity"] = parity;
    }

    if(other != nullptr)
    {
        _children["other"] = other;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ecc" || name == "parity" || name == "other")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::Ecc()
    :
    all(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "ecc"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::~Ecc()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst>();
        ent_->parent = this;
        block_name_lst.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    count_ = 0;
    for (auto ent_ : block_name_lst.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "ecc"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::~All()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_operation() const
{
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold>();
        ent_->parent = this;
        threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::~Threshold()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "ecc"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::~BlockNameLst()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(one != nullptr)
    {
        _children["one"] = one;
    }

    if(continuous != nullptr)
    {
        _children["continuous"] = continuous;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::~One()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : error_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : duration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : error_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : duration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::~Stop()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::Parity()
    :
    all(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "parity"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::~Parity()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst>();
        ent_->parent = this;
        block_name_lst.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    count_ = 0;
    for (auto ent_ : block_name_lst.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::~All()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_operation() const
{
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold>();
        ent_->parent = this;
        threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::~Threshold()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::~BlockNameLst()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(one != nullptr)
    {
        _children["one"] = one;
    }

    if(continuous != nullptr)
    {
        _children["continuous"] = continuous;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::~One()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : error_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : duration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : error_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : duration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::~Stop()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::Other()
    :
    all(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "other"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::~Other()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst>();
        ent_->parent = this;
        block_name_lst.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    count_ = 0;
    for (auto ent_ : block_name_lst.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "other"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::~All()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_operation() const
{
    for (std::size_t index=0; index<threshold.len(); index++)
    {
        if(threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold>();
        ent_->parent = this;
        threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::~Threshold()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "other"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::~BlockNameLst()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(one != nullptr)
    {
        _children["one"] = one;
    }

    if(continuous != nullptr)
    {
        _children["continuous"] = continuous;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::~One()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : error_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : duration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : error_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : duration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::~Stop()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_children() const
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

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Controller::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Controller::Controller()
    :
    fabric(std::make_shared<Controller::Fabric>())
    , sfe_oper(std::make_shared<Controller::SfeOper>())
    , switch_(std::make_shared<Controller::Switch>())
    , fabric_action(std::make_shared<Controller::FabricAction>())
    , card_mgr(std::make_shared<Controller::CardMgr>())
{
    fabric->parent = this;
    sfe_oper->parent = this;
    switch_->parent = this;
    fabric_action->parent = this;
    card_mgr->parent = this;

    yang_name = "controller"; yang_parent_name = "Cisco-IOS-XR-sysadmin-controllers-ncs5502"; is_top_level_class = true; has_list_ancestor = false; 
}

Controller::~Controller()
{
}

bool Controller::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data())
	|| (sfe_oper !=  nullptr && sfe_oper->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (fabric_action !=  nullptr && fabric_action->has_data())
	|| (card_mgr !=  nullptr && card_mgr->has_data());
}

bool Controller::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation())
	|| (sfe_oper !=  nullptr && sfe_oper->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (fabric_action !=  nullptr && fabric_action->has_operation())
	|| (card_mgr !=  nullptr && card_mgr->has_operation());
}

std::string Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::Fabric>();
        }
        return fabric;
    }

    if(child_yang_name == "sfe_oper")
    {
        if(sfe_oper == nullptr)
        {
            sfe_oper = std::make_shared<Controller::SfeOper>();
        }
        return sfe_oper;
    }

    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Controller::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "fabric_action")
    {
        if(fabric_action == nullptr)
        {
            fabric_action = std::make_shared<Controller::FabricAction>();
        }
        return fabric_action;
    }

    if(child_yang_name == "card_mgr")
    {
        if(card_mgr == nullptr)
        {
            card_mgr = std::make_shared<Controller::CardMgr>();
        }
        return card_mgr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fabric != nullptr)
    {
        _children["fabric"] = fabric;
    }

    if(sfe_oper != nullptr)
    {
        _children["sfe_oper"] = sfe_oper;
    }

    if(switch_ != nullptr)
    {
        _children["switch"] = switch_;
    }

    if(fabric_action != nullptr)
    {
        _children["fabric_action"] = fabric_action;
    }

    if(card_mgr != nullptr)
    {
        _children["card_mgr"] = card_mgr;
    }

    return _children;
}

void Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Controller::clone_ptr() const
{
    return std::make_shared<Controller>();
}

std::string Controller::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Controller::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Controller::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Controller::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric" || name == "sfe_oper" || name == "switch" || name == "fabric_action" || name == "card_mgr")
        return true;
    return false;
}

Controller::Fabric::Fabric()
    :
    fabric(std::make_shared<Controller::Fabric::Fabric_>())
    , oper(std::make_shared<Controller::Fabric::Oper>())
{
    fabric->parent = this;
    oper->parent = this;

    yang_name = "fabric"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::~Fabric()
{
}

bool Controller::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data())
	|| (oper !=  nullptr && oper->has_data());
}

bool Controller::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation())
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Controller::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::Fabric::Fabric_>();
        }
        return fabric;
    }

    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Controller::Fabric::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fabric != nullptr)
    {
        _children["fabric"] = fabric;
    }

    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    return _children;
}

void Controller::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric" || name == "oper")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fabric_()
    :
    fsdbagg(std::make_shared<Controller::Fabric::Fabric_::Fsdbagg>())
    , fgid(std::make_shared<Controller::Fabric::Fabric_::Fgid>())
{
    fsdbagg->parent = this;
    fgid->parent = this;

    yang_name = "fabric"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::~Fabric_()
{
}

bool Controller::Fabric::Fabric_::has_data() const
{
    if (is_presence_container) return true;
    return (fsdbagg !=  nullptr && fsdbagg->has_data())
	|| (fgid !=  nullptr && fgid->has_data());
}

bool Controller::Fabric::Fabric_::has_operation() const
{
    return is_set(yfilter)
	|| (fsdbagg !=  nullptr && fsdbagg->has_operation())
	|| (fgid !=  nullptr && fgid->has_operation());
}

std::string Controller::Fabric::Fabric_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Fabric_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsdbagg")
    {
        if(fsdbagg == nullptr)
        {
            fsdbagg = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg>();
        }
        return fsdbagg;
    }

    if(child_yang_name == "fgid")
    {
        if(fgid == nullptr)
        {
            fgid = std::make_shared<Controller::Fabric::Fabric_::Fgid>();
        }
        return fgid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Fabric_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fsdbagg != nullptr)
    {
        _children["fsdbagg"] = fsdbagg;
    }

    if(fgid != nullptr)
    {
        _children["fgid"] = fgid;
    }

    return _children;
}

void Controller::Fabric::Fabric_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsdbagg" || name == "fgid")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Fsdbagg()
    :
    plane(this, {"plane_id"})
{

    yang_name = "fsdbagg"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fsdbagg::~Fsdbagg()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Fabric_::Fsdbagg::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Fabric_::Fsdbagg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fsdbagg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Fabric_::Fsdbagg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Fabric_::Fsdbagg::Plane>();
        ent_->parent = this;
        plane.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Fabric_::Fsdbagg::get_children() const
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

void Controller::Fabric::Fabric_::Fsdbagg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fsdbagg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::Plane()
    :
    plane_id{YType::str, "plane_id"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "plane"; yang_parent_name = "fsdbagg"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fsdbagg::Plane::~Plane()
{
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::has_data() const
{
    if (is_presence_container) return true;
    return plane_id.is_set
	|| shutdown.is_set;
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/fabric/fsdbagg/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fsdbagg::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(plane_id, "plane_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fsdbagg::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Fabric_::Fsdbagg::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Fabric_::Fsdbagg::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Fabric_::Fsdbagg::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Controller::Fabric::Fabric_::Fsdbagg::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane_id" || name == "shutdown")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Fgid()
    :
    resource(std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource>())
{
    resource->parent = this;

    yang_name = "fgid"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::~Fgid()
{
}

bool Controller::Fabric::Fabric_::Fgid::has_data() const
{
    if (is_presence_container) return true;
    return (resource !=  nullptr && resource->has_data());
}

bool Controller::Fabric::Fabric_::Fgid::has_operation() const
{
    return is_set(yfilter)
	|| (resource !=  nullptr && resource->has_operation());
}

std::string Controller::Fabric::Fabric_::Fgid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Fabric_::Fgid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource>();
        }
        return resource;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Fabric_::Fgid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(resource != nullptr)
    {
        _children["resource"] = resource;
    }

    return _children;
}

void Controller::Fabric::Fabric_::Fgid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fgid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fgid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Resource::Resource()
    :
    sdr(std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr>())
{
    sdr->parent = this;

    yang_name = "resource"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::Resource::~Resource()
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::has_data() const
{
    if (is_presence_container) return true;
    return (sdr !=  nullptr && sdr->has_data());
}

bool Controller::Fabric::Fabric_::Fgid::Resource::has_operation() const
{
    return is_set(yfilter)
	|| (sdr !=  nullptr && sdr->has_operation());
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/fabric/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Fabric_::Fgid::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr>();
        }
        return sdr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Fabric_::Fgid::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sdr != nullptr)
    {
        _children["sdr"] = sdr;
    }

    return _children;
}

void Controller::Fabric::Fabric_::Fgid::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fgid::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Sdr()
    :
    allocation(std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation>())
{
    allocation->parent = this;

    yang_name = "sdr"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::~Sdr()
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::has_data() const
{
    if (is_presence_container) return true;
    return (allocation !=  nullptr && allocation->has_data());
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::has_operation() const
{
    return is_set(yfilter)
	|| (allocation !=  nullptr && allocation->has_operation());
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/fabric/fgid/resource/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation")
    {
        if(allocation == nullptr)
        {
            allocation = std::make_shared<Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation>();
        }
        return allocation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allocation != nullptr)
    {
        _children["allocation"] = allocation;
    }

    return _children;
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation")
        return true;
    return false;
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::Allocation()
    :
    percent{YType::int32, "percent"}
{

    yang_name = "allocation"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::~Allocation()
{
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set;
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/fabric/fgid/resource/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Controller::Fabric::Fabric_::Fgid::Resource::Sdr::Allocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Controller::Fabric::Oper::Oper()
    :
    fgid(std::make_shared<Controller::Fabric::Oper::Fgid>())
    , fsdbagg_active(std::make_shared<Controller::Fabric::Oper::FsdbaggActive>())
    , fsdbagg_link(std::make_shared<Controller::Fabric::Oper::FsdbaggLink>())
    , fsdbagg_sfe_asic_type(std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType>())
    , fsdbagg_standby(std::make_shared<Controller::Fabric::Oper::FsdbaggStandby>())
    , fab_health(std::make_shared<Controller::Fabric::Oper::FabHealth>())
    , fsdb_aggregator(std::make_shared<Controller::Fabric::Oper::FsdbAggregator>())
    , link(std::make_shared<Controller::Fabric::Oper::Link>())
    , sfe(std::make_shared<Controller::Fabric::Oper::Sfe>())
    , fsdb_pla(std::make_shared<Controller::Fabric::Oper::FsdbPla>())
    , fsdb_srvr(std::make_shared<Controller::Fabric::Oper::FsdbSrvr>())
{
    fgid->parent = this;
    fsdbagg_active->parent = this;
    fsdbagg_link->parent = this;
    fsdbagg_sfe_asic_type->parent = this;
    fsdbagg_standby->parent = this;
    fab_health->parent = this;
    fsdb_aggregator->parent = this;
    link->parent = this;
    sfe->parent = this;
    fsdb_pla->parent = this;
    fsdb_srvr->parent = this;

    yang_name = "oper"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::~Oper()
{
}

bool Controller::Fabric::Oper::has_data() const
{
    if (is_presence_container) return true;
    return (fgid !=  nullptr && fgid->has_data())
	|| (fsdbagg_active !=  nullptr && fsdbagg_active->has_data())
	|| (fsdbagg_link !=  nullptr && fsdbagg_link->has_data())
	|| (fsdbagg_sfe_asic_type !=  nullptr && fsdbagg_sfe_asic_type->has_data())
	|| (fsdbagg_standby !=  nullptr && fsdbagg_standby->has_data())
	|| (fab_health !=  nullptr && fab_health->has_data())
	|| (fsdb_aggregator !=  nullptr && fsdb_aggregator->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (sfe !=  nullptr && sfe->has_data())
	|| (fsdb_pla !=  nullptr && fsdb_pla->has_data())
	|| (fsdb_srvr !=  nullptr && fsdb_srvr->has_data());
}

bool Controller::Fabric::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (fgid !=  nullptr && fgid->has_operation())
	|| (fsdbagg_active !=  nullptr && fsdbagg_active->has_operation())
	|| (fsdbagg_link !=  nullptr && fsdbagg_link->has_operation())
	|| (fsdbagg_sfe_asic_type !=  nullptr && fsdbagg_sfe_asic_type->has_operation())
	|| (fsdbagg_standby !=  nullptr && fsdbagg_standby->has_operation())
	|| (fab_health !=  nullptr && fab_health->has_operation())
	|| (fsdb_aggregator !=  nullptr && fsdb_aggregator->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (sfe !=  nullptr && sfe->has_operation())
	|| (fsdb_pla !=  nullptr && fsdb_pla->has_operation())
	|| (fsdb_srvr !=  nullptr && fsdb_srvr->has_operation());
}

std::string Controller::Fabric::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fgid")
    {
        if(fgid == nullptr)
        {
            fgid = std::make_shared<Controller::Fabric::Oper::Fgid>();
        }
        return fgid;
    }

    if(child_yang_name == "fsdbagg_active")
    {
        if(fsdbagg_active == nullptr)
        {
            fsdbagg_active = std::make_shared<Controller::Fabric::Oper::FsdbaggActive>();
        }
        return fsdbagg_active;
    }

    if(child_yang_name == "fsdbagg_link")
    {
        if(fsdbagg_link == nullptr)
        {
            fsdbagg_link = std::make_shared<Controller::Fabric::Oper::FsdbaggLink>();
        }
        return fsdbagg_link;
    }

    if(child_yang_name == "fsdbagg_sfe_asic_type")
    {
        if(fsdbagg_sfe_asic_type == nullptr)
        {
            fsdbagg_sfe_asic_type = std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType>();
        }
        return fsdbagg_sfe_asic_type;
    }

    if(child_yang_name == "fsdbagg_standby")
    {
        if(fsdbagg_standby == nullptr)
        {
            fsdbagg_standby = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby>();
        }
        return fsdbagg_standby;
    }

    if(child_yang_name == "fab_health")
    {
        if(fab_health == nullptr)
        {
            fab_health = std::make_shared<Controller::Fabric::Oper::FabHealth>();
        }
        return fab_health;
    }

    if(child_yang_name == "fsdb-aggregator")
    {
        if(fsdb_aggregator == nullptr)
        {
            fsdb_aggregator = std::make_shared<Controller::Fabric::Oper::FsdbAggregator>();
        }
        return fsdb_aggregator;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Controller::Fabric::Oper::Link>();
        }
        return link;
    }

    if(child_yang_name == "sfe")
    {
        if(sfe == nullptr)
        {
            sfe = std::make_shared<Controller::Fabric::Oper::Sfe>();
        }
        return sfe;
    }

    if(child_yang_name == "fsdb_pla")
    {
        if(fsdb_pla == nullptr)
        {
            fsdb_pla = std::make_shared<Controller::Fabric::Oper::FsdbPla>();
        }
        return fsdb_pla;
    }

    if(child_yang_name == "fsdb_srvr")
    {
        if(fsdb_srvr == nullptr)
        {
            fsdb_srvr = std::make_shared<Controller::Fabric::Oper::FsdbSrvr>();
        }
        return fsdb_srvr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fgid != nullptr)
    {
        _children["fgid"] = fgid;
    }

    if(fsdbagg_active != nullptr)
    {
        _children["fsdbagg_active"] = fsdbagg_active;
    }

    if(fsdbagg_link != nullptr)
    {
        _children["fsdbagg_link"] = fsdbagg_link;
    }

    if(fsdbagg_sfe_asic_type != nullptr)
    {
        _children["fsdbagg_sfe_asic_type"] = fsdbagg_sfe_asic_type;
    }

    if(fsdbagg_standby != nullptr)
    {
        _children["fsdbagg_standby"] = fsdbagg_standby;
    }

    if(fab_health != nullptr)
    {
        _children["fab_health"] = fab_health;
    }

    if(fsdb_aggregator != nullptr)
    {
        _children["fsdb-aggregator"] = fsdb_aggregator;
    }

    if(link != nullptr)
    {
        _children["link"] = link;
    }

    if(sfe != nullptr)
    {
        _children["sfe"] = sfe;
    }

    if(fsdb_pla != nullptr)
    {
        _children["fsdb_pla"] = fsdb_pla;
    }

    if(fsdb_srvr != nullptr)
    {
        _children["fsdb_srvr"] = fsdb_srvr;
    }

    return _children;
}

void Controller::Fabric::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid" || name == "fsdbagg_active" || name == "fsdbagg_link" || name == "fsdbagg_sfe_asic_type" || name == "fsdbagg_standby" || name == "fab_health" || name == "fsdb-aggregator" || name == "link" || name == "sfe" || name == "fsdb_pla" || name == "fsdb_srvr")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Fgid()
    :
    information(std::make_shared<Controller::Fabric::Oper::Fgid::Information>())
    , resource(std::make_shared<Controller::Fabric::Oper::Fgid::Resource>())
    , statistics(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics>())
    , fgid_mgr(std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr>())
    , program_error(this, {"start", "end"})
{
    information->parent = this;
    resource->parent = this;
    statistics->parent = this;
    fgid_mgr->parent = this;

    yang_name = "fgid"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::~Fgid()
{
}

bool Controller::Fabric::Oper::Fgid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<program_error.len(); index++)
    {
        if(program_error[index]->has_data())
            return true;
    }
    return (information !=  nullptr && information->has_data())
	|| (resource !=  nullptr && resource->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (fgid_mgr !=  nullptr && fgid_mgr->has_data());
}

bool Controller::Fabric::Oper::Fgid::has_operation() const
{
    for (std::size_t index=0; index<program_error.len(); index++)
    {
        if(program_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation())
	|| (resource !=  nullptr && resource->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (fgid_mgr !=  nullptr && fgid_mgr->has_operation());
}

std::string Controller::Fabric::Oper::Fgid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Controller::Fabric::Oper::Fgid::Information>();
        }
        return information;
    }

    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Controller::Fabric::Oper::Fgid::Resource>();
        }
        return resource;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "fgid_mgr")
    {
        if(fgid_mgr == nullptr)
        {
            fgid_mgr = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr>();
        }
        return fgid_mgr;
    }

    if(child_yang_name == "program_error")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::ProgramError>();
        ent_->parent = this;
        program_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(resource != nullptr)
    {
        _children["resource"] = resource;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(fgid_mgr != nullptr)
    {
        _children["fgid_mgr"] = fgid_mgr;
    }

    count_ = 0;
    for (auto ent_ : program_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "resource" || name == "statistics" || name == "fgid_mgr" || name == "program_error")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Information()
    :
    id(this, {"fgid_id"})
{

    yang_name = "information"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Information::~Information()
{
}

bool Controller::Fabric::Oper::Fgid::Information::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Information::has_operation() const
{
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id>();
        ent_->parent = this;
        id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Id()
    :
    fgid_id{YType::int32, "fgid_id"},
    total_asso_fabricq_ids{YType::int32, "total_asso_fabricq_ids"},
    asso_client_info{YType::str, "asso_client_info"}
        ,
    hex_bitmaps(this, {"rack_number"})
    , binary_bitmaps(this, {"rack_number"})
    , asso_fabricq_ids(this, {"fabricq_id"})
    , drivers(this, {"rack_number"})
{

    yang_name = "id"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Information::Id::~Id()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hex_bitmaps.len(); index++)
    {
        if(hex_bitmaps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<binary_bitmaps.len(); index++)
    {
        if(binary_bitmaps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<asso_fabricq_ids.len(); index++)
    {
        if(asso_fabricq_ids[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<drivers.len(); index++)
    {
        if(drivers[index]->has_data())
            return true;
    }
    return fgid_id.is_set
	|| total_asso_fabricq_ids.is_set
	|| asso_client_info.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_operation() const
{
    for (std::size_t index=0; index<hex_bitmaps.len(); index++)
    {
        if(hex_bitmaps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<binary_bitmaps.len(); index++)
    {
        if(binary_bitmaps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<asso_fabricq_ids.len(); index++)
    {
        if(asso_fabricq_ids[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<drivers.len(); index++)
    {
        if(drivers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fgid_id.yfilter)
	|| ydk::is_set(total_asso_fabricq_ids.yfilter)
	|| ydk::is_set(asso_client_info.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    ADD_KEY_TOKEN(fgid_id, "fgid_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid_id.is_set || is_set(fgid_id.yfilter)) leaf_name_data.push_back(fgid_id.get_name_leafdata());
    if (total_asso_fabricq_ids.is_set || is_set(total_asso_fabricq_ids.yfilter)) leaf_name_data.push_back(total_asso_fabricq_ids.get_name_leafdata());
    if (asso_client_info.is_set || is_set(asso_client_info.yfilter)) leaf_name_data.push_back(asso_client_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex_bitmaps")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps>();
        ent_->parent = this;
        hex_bitmaps.append(ent_);
        return ent_;
    }

    if(child_yang_name == "binary_bitmaps")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps>();
        ent_->parent = this;
        binary_bitmaps.append(ent_);
        return ent_;
    }

    if(child_yang_name == "asso_fabricq_ids")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds>();
        ent_->parent = this;
        asso_fabricq_ids.append(ent_);
        return ent_;
    }

    if(child_yang_name == "drivers")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::Drivers>();
        ent_->parent = this;
        drivers.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hex_bitmaps.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : binary_bitmaps.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : asso_fabricq_ids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : drivers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgid_id")
    {
        fgid_id = value;
        fgid_id.value_namespace = name_space;
        fgid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_asso_fabricq_ids")
    {
        total_asso_fabricq_ids = value;
        total_asso_fabricq_ids.value_namespace = name_space;
        total_asso_fabricq_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asso_client_info")
    {
        asso_client_info = value;
        asso_client_info.value_namespace = name_space;
        asso_client_info.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgid_id")
    {
        fgid_id.yfilter = yfilter;
    }
    if(value_path == "total_asso_fabricq_ids")
    {
        total_asso_fabricq_ids.yfilter = yfilter;
    }
    if(value_path == "asso_client_info")
    {
        asso_client_info.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex_bitmaps" || name == "binary_bitmaps" || name == "asso_fabricq_ids" || name == "drivers" || name == "fgid_id" || name == "total_asso_fabricq_ids" || name == "asso_client_info")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::HexBitmaps()
    :
    rack_number{YType::int32, "rack_number"},
    bitmap{YType::str, "bitmap"}
{

    yang_name = "hex_bitmaps"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::~HexBitmaps()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_data() const
{
    if (is_presence_container) return true;
    return rack_number.is_set
	|| bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex_bitmaps";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (bitmap.is_set || is_set(bitmap.yfilter)) leaf_name_data.push_back(bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitmap")
    {
        bitmap = value;
        bitmap.value_namespace = name_space;
        bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "bitmap")
    {
        bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_number" || name == "bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::BinaryBitmaps()
    :
    rack_number{YType::int32, "rack_number"},
    bitmap{YType::str, "bitmap"}
{

    yang_name = "binary_bitmaps"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::~BinaryBitmaps()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_data() const
{
    if (is_presence_container) return true;
    return rack_number.is_set
	|| bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binary_bitmaps";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (bitmap.is_set || is_set(bitmap.yfilter)) leaf_name_data.push_back(bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitmap")
    {
        bitmap = value;
        bitmap.value_namespace = name_space;
        bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "bitmap")
    {
        bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_number" || name == "bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::AssoFabricqIds()
    :
    fabricq_id{YType::str, "fabricq_id"}
{

    yang_name = "asso_fabricq_ids"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::~AssoFabricqIds()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_data() const
{
    if (is_presence_container) return true;
    return fabricq_id.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabricq_id.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asso_fabricq_ids";
    ADD_KEY_TOKEN(fabricq_id, "fabricq_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabricq_id.is_set || is_set(fabricq_id.yfilter)) leaf_name_data.push_back(fabricq_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabricq_id")
    {
        fabricq_id = value;
        fabricq_id.value_namespace = name_space;
        fabricq_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabricq_id")
    {
        fabricq_id.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabricq_id")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Drivers()
    :
    rack_number{YType::int32, "rack_number"}
        ,
    clients(this, {"client_idx"})
{

    yang_name = "drivers"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::~Drivers()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients.len(); index++)
    {
        if(clients[index]->has_data())
            return true;
    }
    return rack_number.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_operation() const
{
    for (std::size_t index=0; index<clients.len(); index++)
    {
        if(clients[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drivers";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients>();
        ent_->parent = this;
        clients.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clients.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "rack_number")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::Clients()
    :
    client_idx{YType::int32, "client_idx"},
    show_asic_0{YType::boolean, "show_asic_0"},
    asic_0_bitmap{YType::str, "asic_0_bitmap"},
    show_asic_1{YType::boolean, "show_asic_1"},
    asic_1_bitmap{YType::str, "asic_1_bitmap"},
    show_asic_2{YType::boolean, "show_asic_2"},
    asic_2_bitmap{YType::str, "asic_2_bitmap"},
    show_asic_3{YType::boolean, "show_asic_3"},
    asic_3_bitmap{YType::str, "asic_3_bitmap"},
    show_asic_4{YType::boolean, "show_asic_4"},
    asic_4_bitmap{YType::str, "asic_4_bitmap"},
    show_asic_5{YType::boolean, "show_asic_5"},
    asic_5_bitmap{YType::str, "asic_5_bitmap"},
    show_asic_6{YType::boolean, "show_asic_6"},
    asic_6_bitmap{YType::str, "asic_6_bitmap"},
    show_asic_7{YType::boolean, "show_asic_7"},
    asic_7_bitmap{YType::str, "asic_7_bitmap"},
    show_asic_8{YType::boolean, "show_asic_8"},
    asic_8_bitmap{YType::str, "asic_8_bitmap"},
    show_asic_9{YType::boolean, "show_asic_9"},
    asic_9_bitmap{YType::str, "asic_9_bitmap"},
    show_asic_10{YType::boolean, "show_asic_10"},
    asic_10_bitmap{YType::str, "asic_10_bitmap"},
    show_asic_11{YType::boolean, "show_asic_11"},
    asic_11_bitmap{YType::str, "asic_11_bitmap"},
    show_asic_12{YType::boolean, "show_asic_12"},
    asic_12_bitmap{YType::str, "asic_12_bitmap"},
    show_asic_13{YType::boolean, "show_asic_13"},
    asic_13_bitmap{YType::str, "asic_13_bitmap"},
    show_asic_14{YType::boolean, "show_asic_14"},
    asic_14_bitmap{YType::str, "asic_14_bitmap"},
    show_asic_15{YType::boolean, "show_asic_15"},
    asic_15_bitmap{YType::str, "asic_15_bitmap"},
    show_asic_16{YType::boolean, "show_asic_16"},
    asic_16_bitmap{YType::str, "asic_16_bitmap"},
    show_asic_17{YType::boolean, "show_asic_17"},
    asic_17_bitmap{YType::str, "asic_17_bitmap"},
    show_asic_18{YType::boolean, "show_asic_18"},
    asic_18_bitmap{YType::str, "asic_18_bitmap"},
    show_asic_19{YType::boolean, "show_asic_19"},
    asic_19_bitmap{YType::str, "asic_19_bitmap"},
    show_asic_20{YType::boolean, "show_asic_20"},
    asic_20_bitmap{YType::str, "asic_20_bitmap"},
    show_asic_21{YType::boolean, "show_asic_21"},
    asic_21_bitmap{YType::str, "asic_21_bitmap"},
    show_asic_22{YType::boolean, "show_asic_22"},
    asic_22_bitmap{YType::str, "asic_22_bitmap"},
    show_asic_23{YType::boolean, "show_asic_23"},
    asic_23_bitmap{YType::str, "asic_23_bitmap"},
    show_asic_24{YType::boolean, "show_asic_24"},
    asic_24_bitmap{YType::str, "asic_24_bitmap"},
    show_asic_25{YType::boolean, "show_asic_25"},
    asic_25_bitmap{YType::str, "asic_25_bitmap"},
    show_asic_26{YType::boolean, "show_asic_26"},
    asic_26_bitmap{YType::str, "asic_26_bitmap"},
    show_asic_27{YType::boolean, "show_asic_27"},
    asic_27_bitmap{YType::str, "asic_27_bitmap"},
    show_asic_28{YType::boolean, "show_asic_28"},
    asic_28_bitmap{YType::str, "asic_28_bitmap"},
    show_asic_29{YType::boolean, "show_asic_29"},
    asic_29_bitmap{YType::str, "asic_29_bitmap"},
    show_asic_30{YType::boolean, "show_asic_30"},
    asic_30_bitmap{YType::str, "asic_30_bitmap"},
    show_asic_31{YType::boolean, "show_asic_31"},
    asic_31_bitmap{YType::str, "asic_31_bitmap"},
    show_asic_32{YType::boolean, "show_asic_32"},
    asic_32_bitmap{YType::str, "asic_32_bitmap"},
    show_asic_33{YType::boolean, "show_asic_33"},
    asic_33_bitmap{YType::str, "asic_33_bitmap"},
    show_asic_34{YType::boolean, "show_asic_34"},
    asic_34_bitmap{YType::str, "asic_34_bitmap"},
    show_asic_35{YType::boolean, "show_asic_35"},
    asic_35_bitmap{YType::str, "asic_35_bitmap"}
{

    yang_name = "clients"; yang_parent_name = "drivers"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::~Clients()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_data() const
{
    if (is_presence_container) return true;
    return client_idx.is_set
	|| show_asic_0.is_set
	|| asic_0_bitmap.is_set
	|| show_asic_1.is_set
	|| asic_1_bitmap.is_set
	|| show_asic_2.is_set
	|| asic_2_bitmap.is_set
	|| show_asic_3.is_set
	|| asic_3_bitmap.is_set
	|| show_asic_4.is_set
	|| asic_4_bitmap.is_set
	|| show_asic_5.is_set
	|| asic_5_bitmap.is_set
	|| show_asic_6.is_set
	|| asic_6_bitmap.is_set
	|| show_asic_7.is_set
	|| asic_7_bitmap.is_set
	|| show_asic_8.is_set
	|| asic_8_bitmap.is_set
	|| show_asic_9.is_set
	|| asic_9_bitmap.is_set
	|| show_asic_10.is_set
	|| asic_10_bitmap.is_set
	|| show_asic_11.is_set
	|| asic_11_bitmap.is_set
	|| show_asic_12.is_set
	|| asic_12_bitmap.is_set
	|| show_asic_13.is_set
	|| asic_13_bitmap.is_set
	|| show_asic_14.is_set
	|| asic_14_bitmap.is_set
	|| show_asic_15.is_set
	|| asic_15_bitmap.is_set
	|| show_asic_16.is_set
	|| asic_16_bitmap.is_set
	|| show_asic_17.is_set
	|| asic_17_bitmap.is_set
	|| show_asic_18.is_set
	|| asic_18_bitmap.is_set
	|| show_asic_19.is_set
	|| asic_19_bitmap.is_set
	|| show_asic_20.is_set
	|| asic_20_bitmap.is_set
	|| show_asic_21.is_set
	|| asic_21_bitmap.is_set
	|| show_asic_22.is_set
	|| asic_22_bitmap.is_set
	|| show_asic_23.is_set
	|| asic_23_bitmap.is_set
	|| show_asic_24.is_set
	|| asic_24_bitmap.is_set
	|| show_asic_25.is_set
	|| asic_25_bitmap.is_set
	|| show_asic_26.is_set
	|| asic_26_bitmap.is_set
	|| show_asic_27.is_set
	|| asic_27_bitmap.is_set
	|| show_asic_28.is_set
	|| asic_28_bitmap.is_set
	|| show_asic_29.is_set
	|| asic_29_bitmap.is_set
	|| show_asic_30.is_set
	|| asic_30_bitmap.is_set
	|| show_asic_31.is_set
	|| asic_31_bitmap.is_set
	|| show_asic_32.is_set
	|| asic_32_bitmap.is_set
	|| show_asic_33.is_set
	|| asic_33_bitmap.is_set
	|| show_asic_34.is_set
	|| asic_34_bitmap.is_set
	|| show_asic_35.is_set
	|| asic_35_bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_idx.yfilter)
	|| ydk::is_set(show_asic_0.yfilter)
	|| ydk::is_set(asic_0_bitmap.yfilter)
	|| ydk::is_set(show_asic_1.yfilter)
	|| ydk::is_set(asic_1_bitmap.yfilter)
	|| ydk::is_set(show_asic_2.yfilter)
	|| ydk::is_set(asic_2_bitmap.yfilter)
	|| ydk::is_set(show_asic_3.yfilter)
	|| ydk::is_set(asic_3_bitmap.yfilter)
	|| ydk::is_set(show_asic_4.yfilter)
	|| ydk::is_set(asic_4_bitmap.yfilter)
	|| ydk::is_set(show_asic_5.yfilter)
	|| ydk::is_set(asic_5_bitmap.yfilter)
	|| ydk::is_set(show_asic_6.yfilter)
	|| ydk::is_set(asic_6_bitmap.yfilter)
	|| ydk::is_set(show_asic_7.yfilter)
	|| ydk::is_set(asic_7_bitmap.yfilter)
	|| ydk::is_set(show_asic_8.yfilter)
	|| ydk::is_set(asic_8_bitmap.yfilter)
	|| ydk::is_set(show_asic_9.yfilter)
	|| ydk::is_set(asic_9_bitmap.yfilter)
	|| ydk::is_set(show_asic_10.yfilter)
	|| ydk::is_set(asic_10_bitmap.yfilter)
	|| ydk::is_set(show_asic_11.yfilter)
	|| ydk::is_set(asic_11_bitmap.yfilter)
	|| ydk::is_set(show_asic_12.yfilter)
	|| ydk::is_set(asic_12_bitmap.yfilter)
	|| ydk::is_set(show_asic_13.yfilter)
	|| ydk::is_set(asic_13_bitmap.yfilter)
	|| ydk::is_set(show_asic_14.yfilter)
	|| ydk::is_set(asic_14_bitmap.yfilter)
	|| ydk::is_set(show_asic_15.yfilter)
	|| ydk::is_set(asic_15_bitmap.yfilter)
	|| ydk::is_set(show_asic_16.yfilter)
	|| ydk::is_set(asic_16_bitmap.yfilter)
	|| ydk::is_set(show_asic_17.yfilter)
	|| ydk::is_set(asic_17_bitmap.yfilter)
	|| ydk::is_set(show_asic_18.yfilter)
	|| ydk::is_set(asic_18_bitmap.yfilter)
	|| ydk::is_set(show_asic_19.yfilter)
	|| ydk::is_set(asic_19_bitmap.yfilter)
	|| ydk::is_set(show_asic_20.yfilter)
	|| ydk::is_set(asic_20_bitmap.yfilter)
	|| ydk::is_set(show_asic_21.yfilter)
	|| ydk::is_set(asic_21_bitmap.yfilter)
	|| ydk::is_set(show_asic_22.yfilter)
	|| ydk::is_set(asic_22_bitmap.yfilter)
	|| ydk::is_set(show_asic_23.yfilter)
	|| ydk::is_set(asic_23_bitmap.yfilter)
	|| ydk::is_set(show_asic_24.yfilter)
	|| ydk::is_set(asic_24_bitmap.yfilter)
	|| ydk::is_set(show_asic_25.yfilter)
	|| ydk::is_set(asic_25_bitmap.yfilter)
	|| ydk::is_set(show_asic_26.yfilter)
	|| ydk::is_set(asic_26_bitmap.yfilter)
	|| ydk::is_set(show_asic_27.yfilter)
	|| ydk::is_set(asic_27_bitmap.yfilter)
	|| ydk::is_set(show_asic_28.yfilter)
	|| ydk::is_set(asic_28_bitmap.yfilter)
	|| ydk::is_set(show_asic_29.yfilter)
	|| ydk::is_set(asic_29_bitmap.yfilter)
	|| ydk::is_set(show_asic_30.yfilter)
	|| ydk::is_set(asic_30_bitmap.yfilter)
	|| ydk::is_set(show_asic_31.yfilter)
	|| ydk::is_set(asic_31_bitmap.yfilter)
	|| ydk::is_set(show_asic_32.yfilter)
	|| ydk::is_set(asic_32_bitmap.yfilter)
	|| ydk::is_set(show_asic_33.yfilter)
	|| ydk::is_set(asic_33_bitmap.yfilter)
	|| ydk::is_set(show_asic_34.yfilter)
	|| ydk::is_set(asic_34_bitmap.yfilter)
	|| ydk::is_set(show_asic_35.yfilter)
	|| ydk::is_set(asic_35_bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    ADD_KEY_TOKEN(client_idx, "client_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_idx.is_set || is_set(client_idx.yfilter)) leaf_name_data.push_back(client_idx.get_name_leafdata());
    if (show_asic_0.is_set || is_set(show_asic_0.yfilter)) leaf_name_data.push_back(show_asic_0.get_name_leafdata());
    if (asic_0_bitmap.is_set || is_set(asic_0_bitmap.yfilter)) leaf_name_data.push_back(asic_0_bitmap.get_name_leafdata());
    if (show_asic_1.is_set || is_set(show_asic_1.yfilter)) leaf_name_data.push_back(show_asic_1.get_name_leafdata());
    if (asic_1_bitmap.is_set || is_set(asic_1_bitmap.yfilter)) leaf_name_data.push_back(asic_1_bitmap.get_name_leafdata());
    if (show_asic_2.is_set || is_set(show_asic_2.yfilter)) leaf_name_data.push_back(show_asic_2.get_name_leafdata());
    if (asic_2_bitmap.is_set || is_set(asic_2_bitmap.yfilter)) leaf_name_data.push_back(asic_2_bitmap.get_name_leafdata());
    if (show_asic_3.is_set || is_set(show_asic_3.yfilter)) leaf_name_data.push_back(show_asic_3.get_name_leafdata());
    if (asic_3_bitmap.is_set || is_set(asic_3_bitmap.yfilter)) leaf_name_data.push_back(asic_3_bitmap.get_name_leafdata());
    if (show_asic_4.is_set || is_set(show_asic_4.yfilter)) leaf_name_data.push_back(show_asic_4.get_name_leafdata());
    if (asic_4_bitmap.is_set || is_set(asic_4_bitmap.yfilter)) leaf_name_data.push_back(asic_4_bitmap.get_name_leafdata());
    if (show_asic_5.is_set || is_set(show_asic_5.yfilter)) leaf_name_data.push_back(show_asic_5.get_name_leafdata());
    if (asic_5_bitmap.is_set || is_set(asic_5_bitmap.yfilter)) leaf_name_data.push_back(asic_5_bitmap.get_name_leafdata());
    if (show_asic_6.is_set || is_set(show_asic_6.yfilter)) leaf_name_data.push_back(show_asic_6.get_name_leafdata());
    if (asic_6_bitmap.is_set || is_set(asic_6_bitmap.yfilter)) leaf_name_data.push_back(asic_6_bitmap.get_name_leafdata());
    if (show_asic_7.is_set || is_set(show_asic_7.yfilter)) leaf_name_data.push_back(show_asic_7.get_name_leafdata());
    if (asic_7_bitmap.is_set || is_set(asic_7_bitmap.yfilter)) leaf_name_data.push_back(asic_7_bitmap.get_name_leafdata());
    if (show_asic_8.is_set || is_set(show_asic_8.yfilter)) leaf_name_data.push_back(show_asic_8.get_name_leafdata());
    if (asic_8_bitmap.is_set || is_set(asic_8_bitmap.yfilter)) leaf_name_data.push_back(asic_8_bitmap.get_name_leafdata());
    if (show_asic_9.is_set || is_set(show_asic_9.yfilter)) leaf_name_data.push_back(show_asic_9.get_name_leafdata());
    if (asic_9_bitmap.is_set || is_set(asic_9_bitmap.yfilter)) leaf_name_data.push_back(asic_9_bitmap.get_name_leafdata());
    if (show_asic_10.is_set || is_set(show_asic_10.yfilter)) leaf_name_data.push_back(show_asic_10.get_name_leafdata());
    if (asic_10_bitmap.is_set || is_set(asic_10_bitmap.yfilter)) leaf_name_data.push_back(asic_10_bitmap.get_name_leafdata());
    if (show_asic_11.is_set || is_set(show_asic_11.yfilter)) leaf_name_data.push_back(show_asic_11.get_name_leafdata());
    if (asic_11_bitmap.is_set || is_set(asic_11_bitmap.yfilter)) leaf_name_data.push_back(asic_11_bitmap.get_name_leafdata());
    if (show_asic_12.is_set || is_set(show_asic_12.yfilter)) leaf_name_data.push_back(show_asic_12.get_name_leafdata());
    if (asic_12_bitmap.is_set || is_set(asic_12_bitmap.yfilter)) leaf_name_data.push_back(asic_12_bitmap.get_name_leafdata());
    if (show_asic_13.is_set || is_set(show_asic_13.yfilter)) leaf_name_data.push_back(show_asic_13.get_name_leafdata());
    if (asic_13_bitmap.is_set || is_set(asic_13_bitmap.yfilter)) leaf_name_data.push_back(asic_13_bitmap.get_name_leafdata());
    if (show_asic_14.is_set || is_set(show_asic_14.yfilter)) leaf_name_data.push_back(show_asic_14.get_name_leafdata());
    if (asic_14_bitmap.is_set || is_set(asic_14_bitmap.yfilter)) leaf_name_data.push_back(asic_14_bitmap.get_name_leafdata());
    if (show_asic_15.is_set || is_set(show_asic_15.yfilter)) leaf_name_data.push_back(show_asic_15.get_name_leafdata());
    if (asic_15_bitmap.is_set || is_set(asic_15_bitmap.yfilter)) leaf_name_data.push_back(asic_15_bitmap.get_name_leafdata());
    if (show_asic_16.is_set || is_set(show_asic_16.yfilter)) leaf_name_data.push_back(show_asic_16.get_name_leafdata());
    if (asic_16_bitmap.is_set || is_set(asic_16_bitmap.yfilter)) leaf_name_data.push_back(asic_16_bitmap.get_name_leafdata());
    if (show_asic_17.is_set || is_set(show_asic_17.yfilter)) leaf_name_data.push_back(show_asic_17.get_name_leafdata());
    if (asic_17_bitmap.is_set || is_set(asic_17_bitmap.yfilter)) leaf_name_data.push_back(asic_17_bitmap.get_name_leafdata());
    if (show_asic_18.is_set || is_set(show_asic_18.yfilter)) leaf_name_data.push_back(show_asic_18.get_name_leafdata());
    if (asic_18_bitmap.is_set || is_set(asic_18_bitmap.yfilter)) leaf_name_data.push_back(asic_18_bitmap.get_name_leafdata());
    if (show_asic_19.is_set || is_set(show_asic_19.yfilter)) leaf_name_data.push_back(show_asic_19.get_name_leafdata());
    if (asic_19_bitmap.is_set || is_set(asic_19_bitmap.yfilter)) leaf_name_data.push_back(asic_19_bitmap.get_name_leafdata());
    if (show_asic_20.is_set || is_set(show_asic_20.yfilter)) leaf_name_data.push_back(show_asic_20.get_name_leafdata());
    if (asic_20_bitmap.is_set || is_set(asic_20_bitmap.yfilter)) leaf_name_data.push_back(asic_20_bitmap.get_name_leafdata());
    if (show_asic_21.is_set || is_set(show_asic_21.yfilter)) leaf_name_data.push_back(show_asic_21.get_name_leafdata());
    if (asic_21_bitmap.is_set || is_set(asic_21_bitmap.yfilter)) leaf_name_data.push_back(asic_21_bitmap.get_name_leafdata());
    if (show_asic_22.is_set || is_set(show_asic_22.yfilter)) leaf_name_data.push_back(show_asic_22.get_name_leafdata());
    if (asic_22_bitmap.is_set || is_set(asic_22_bitmap.yfilter)) leaf_name_data.push_back(asic_22_bitmap.get_name_leafdata());
    if (show_asic_23.is_set || is_set(show_asic_23.yfilter)) leaf_name_data.push_back(show_asic_23.get_name_leafdata());
    if (asic_23_bitmap.is_set || is_set(asic_23_bitmap.yfilter)) leaf_name_data.push_back(asic_23_bitmap.get_name_leafdata());
    if (show_asic_24.is_set || is_set(show_asic_24.yfilter)) leaf_name_data.push_back(show_asic_24.get_name_leafdata());
    if (asic_24_bitmap.is_set || is_set(asic_24_bitmap.yfilter)) leaf_name_data.push_back(asic_24_bitmap.get_name_leafdata());
    if (show_asic_25.is_set || is_set(show_asic_25.yfilter)) leaf_name_data.push_back(show_asic_25.get_name_leafdata());
    if (asic_25_bitmap.is_set || is_set(asic_25_bitmap.yfilter)) leaf_name_data.push_back(asic_25_bitmap.get_name_leafdata());
    if (show_asic_26.is_set || is_set(show_asic_26.yfilter)) leaf_name_data.push_back(show_asic_26.get_name_leafdata());
    if (asic_26_bitmap.is_set || is_set(asic_26_bitmap.yfilter)) leaf_name_data.push_back(asic_26_bitmap.get_name_leafdata());
    if (show_asic_27.is_set || is_set(show_asic_27.yfilter)) leaf_name_data.push_back(show_asic_27.get_name_leafdata());
    if (asic_27_bitmap.is_set || is_set(asic_27_bitmap.yfilter)) leaf_name_data.push_back(asic_27_bitmap.get_name_leafdata());
    if (show_asic_28.is_set || is_set(show_asic_28.yfilter)) leaf_name_data.push_back(show_asic_28.get_name_leafdata());
    if (asic_28_bitmap.is_set || is_set(asic_28_bitmap.yfilter)) leaf_name_data.push_back(asic_28_bitmap.get_name_leafdata());
    if (show_asic_29.is_set || is_set(show_asic_29.yfilter)) leaf_name_data.push_back(show_asic_29.get_name_leafdata());
    if (asic_29_bitmap.is_set || is_set(asic_29_bitmap.yfilter)) leaf_name_data.push_back(asic_29_bitmap.get_name_leafdata());
    if (show_asic_30.is_set || is_set(show_asic_30.yfilter)) leaf_name_data.push_back(show_asic_30.get_name_leafdata());
    if (asic_30_bitmap.is_set || is_set(asic_30_bitmap.yfilter)) leaf_name_data.push_back(asic_30_bitmap.get_name_leafdata());
    if (show_asic_31.is_set || is_set(show_asic_31.yfilter)) leaf_name_data.push_back(show_asic_31.get_name_leafdata());
    if (asic_31_bitmap.is_set || is_set(asic_31_bitmap.yfilter)) leaf_name_data.push_back(asic_31_bitmap.get_name_leafdata());
    if (show_asic_32.is_set || is_set(show_asic_32.yfilter)) leaf_name_data.push_back(show_asic_32.get_name_leafdata());
    if (asic_32_bitmap.is_set || is_set(asic_32_bitmap.yfilter)) leaf_name_data.push_back(asic_32_bitmap.get_name_leafdata());
    if (show_asic_33.is_set || is_set(show_asic_33.yfilter)) leaf_name_data.push_back(show_asic_33.get_name_leafdata());
    if (asic_33_bitmap.is_set || is_set(asic_33_bitmap.yfilter)) leaf_name_data.push_back(asic_33_bitmap.get_name_leafdata());
    if (show_asic_34.is_set || is_set(show_asic_34.yfilter)) leaf_name_data.push_back(show_asic_34.get_name_leafdata());
    if (asic_34_bitmap.is_set || is_set(asic_34_bitmap.yfilter)) leaf_name_data.push_back(asic_34_bitmap.get_name_leafdata());
    if (show_asic_35.is_set || is_set(show_asic_35.yfilter)) leaf_name_data.push_back(show_asic_35.get_name_leafdata());
    if (asic_35_bitmap.is_set || is_set(asic_35_bitmap.yfilter)) leaf_name_data.push_back(asic_35_bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client_idx")
    {
        client_idx = value;
        client_idx.value_namespace = name_space;
        client_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_0")
    {
        show_asic_0 = value;
        show_asic_0.value_namespace = name_space;
        show_asic_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_0_bitmap")
    {
        asic_0_bitmap = value;
        asic_0_bitmap.value_namespace = name_space;
        asic_0_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_1")
    {
        show_asic_1 = value;
        show_asic_1.value_namespace = name_space;
        show_asic_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_1_bitmap")
    {
        asic_1_bitmap = value;
        asic_1_bitmap.value_namespace = name_space;
        asic_1_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_2")
    {
        show_asic_2 = value;
        show_asic_2.value_namespace = name_space;
        show_asic_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_2_bitmap")
    {
        asic_2_bitmap = value;
        asic_2_bitmap.value_namespace = name_space;
        asic_2_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_3")
    {
        show_asic_3 = value;
        show_asic_3.value_namespace = name_space;
        show_asic_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_3_bitmap")
    {
        asic_3_bitmap = value;
        asic_3_bitmap.value_namespace = name_space;
        asic_3_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_4")
    {
        show_asic_4 = value;
        show_asic_4.value_namespace = name_space;
        show_asic_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_4_bitmap")
    {
        asic_4_bitmap = value;
        asic_4_bitmap.value_namespace = name_space;
        asic_4_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_5")
    {
        show_asic_5 = value;
        show_asic_5.value_namespace = name_space;
        show_asic_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_5_bitmap")
    {
        asic_5_bitmap = value;
        asic_5_bitmap.value_namespace = name_space;
        asic_5_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_6")
    {
        show_asic_6 = value;
        show_asic_6.value_namespace = name_space;
        show_asic_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_6_bitmap")
    {
        asic_6_bitmap = value;
        asic_6_bitmap.value_namespace = name_space;
        asic_6_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_7")
    {
        show_asic_7 = value;
        show_asic_7.value_namespace = name_space;
        show_asic_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_7_bitmap")
    {
        asic_7_bitmap = value;
        asic_7_bitmap.value_namespace = name_space;
        asic_7_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_8")
    {
        show_asic_8 = value;
        show_asic_8.value_namespace = name_space;
        show_asic_8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_8_bitmap")
    {
        asic_8_bitmap = value;
        asic_8_bitmap.value_namespace = name_space;
        asic_8_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_9")
    {
        show_asic_9 = value;
        show_asic_9.value_namespace = name_space;
        show_asic_9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_9_bitmap")
    {
        asic_9_bitmap = value;
        asic_9_bitmap.value_namespace = name_space;
        asic_9_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_10")
    {
        show_asic_10 = value;
        show_asic_10.value_namespace = name_space;
        show_asic_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_10_bitmap")
    {
        asic_10_bitmap = value;
        asic_10_bitmap.value_namespace = name_space;
        asic_10_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_11")
    {
        show_asic_11 = value;
        show_asic_11.value_namespace = name_space;
        show_asic_11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_11_bitmap")
    {
        asic_11_bitmap = value;
        asic_11_bitmap.value_namespace = name_space;
        asic_11_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_12")
    {
        show_asic_12 = value;
        show_asic_12.value_namespace = name_space;
        show_asic_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_12_bitmap")
    {
        asic_12_bitmap = value;
        asic_12_bitmap.value_namespace = name_space;
        asic_12_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_13")
    {
        show_asic_13 = value;
        show_asic_13.value_namespace = name_space;
        show_asic_13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_13_bitmap")
    {
        asic_13_bitmap = value;
        asic_13_bitmap.value_namespace = name_space;
        asic_13_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_14")
    {
        show_asic_14 = value;
        show_asic_14.value_namespace = name_space;
        show_asic_14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_14_bitmap")
    {
        asic_14_bitmap = value;
        asic_14_bitmap.value_namespace = name_space;
        asic_14_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_15")
    {
        show_asic_15 = value;
        show_asic_15.value_namespace = name_space;
        show_asic_15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_15_bitmap")
    {
        asic_15_bitmap = value;
        asic_15_bitmap.value_namespace = name_space;
        asic_15_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_16")
    {
        show_asic_16 = value;
        show_asic_16.value_namespace = name_space;
        show_asic_16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_16_bitmap")
    {
        asic_16_bitmap = value;
        asic_16_bitmap.value_namespace = name_space;
        asic_16_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_17")
    {
        show_asic_17 = value;
        show_asic_17.value_namespace = name_space;
        show_asic_17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_17_bitmap")
    {
        asic_17_bitmap = value;
        asic_17_bitmap.value_namespace = name_space;
        asic_17_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_18")
    {
        show_asic_18 = value;
        show_asic_18.value_namespace = name_space;
        show_asic_18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_18_bitmap")
    {
        asic_18_bitmap = value;
        asic_18_bitmap.value_namespace = name_space;
        asic_18_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_19")
    {
        show_asic_19 = value;
        show_asic_19.value_namespace = name_space;
        show_asic_19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_19_bitmap")
    {
        asic_19_bitmap = value;
        asic_19_bitmap.value_namespace = name_space;
        asic_19_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_20")
    {
        show_asic_20 = value;
        show_asic_20.value_namespace = name_space;
        show_asic_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_20_bitmap")
    {
        asic_20_bitmap = value;
        asic_20_bitmap.value_namespace = name_space;
        asic_20_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_21")
    {
        show_asic_21 = value;
        show_asic_21.value_namespace = name_space;
        show_asic_21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_21_bitmap")
    {
        asic_21_bitmap = value;
        asic_21_bitmap.value_namespace = name_space;
        asic_21_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_22")
    {
        show_asic_22 = value;
        show_asic_22.value_namespace = name_space;
        show_asic_22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_22_bitmap")
    {
        asic_22_bitmap = value;
        asic_22_bitmap.value_namespace = name_space;
        asic_22_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_23")
    {
        show_asic_23 = value;
        show_asic_23.value_namespace = name_space;
        show_asic_23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_23_bitmap")
    {
        asic_23_bitmap = value;
        asic_23_bitmap.value_namespace = name_space;
        asic_23_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_24")
    {
        show_asic_24 = value;
        show_asic_24.value_namespace = name_space;
        show_asic_24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_24_bitmap")
    {
        asic_24_bitmap = value;
        asic_24_bitmap.value_namespace = name_space;
        asic_24_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_25")
    {
        show_asic_25 = value;
        show_asic_25.value_namespace = name_space;
        show_asic_25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_25_bitmap")
    {
        asic_25_bitmap = value;
        asic_25_bitmap.value_namespace = name_space;
        asic_25_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_26")
    {
        show_asic_26 = value;
        show_asic_26.value_namespace = name_space;
        show_asic_26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_26_bitmap")
    {
        asic_26_bitmap = value;
        asic_26_bitmap.value_namespace = name_space;
        asic_26_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_27")
    {
        show_asic_27 = value;
        show_asic_27.value_namespace = name_space;
        show_asic_27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_27_bitmap")
    {
        asic_27_bitmap = value;
        asic_27_bitmap.value_namespace = name_space;
        asic_27_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_28")
    {
        show_asic_28 = value;
        show_asic_28.value_namespace = name_space;
        show_asic_28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_28_bitmap")
    {
        asic_28_bitmap = value;
        asic_28_bitmap.value_namespace = name_space;
        asic_28_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_29")
    {
        show_asic_29 = value;
        show_asic_29.value_namespace = name_space;
        show_asic_29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_29_bitmap")
    {
        asic_29_bitmap = value;
        asic_29_bitmap.value_namespace = name_space;
        asic_29_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_30")
    {
        show_asic_30 = value;
        show_asic_30.value_namespace = name_space;
        show_asic_30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_30_bitmap")
    {
        asic_30_bitmap = value;
        asic_30_bitmap.value_namespace = name_space;
        asic_30_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_31")
    {
        show_asic_31 = value;
        show_asic_31.value_namespace = name_space;
        show_asic_31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_31_bitmap")
    {
        asic_31_bitmap = value;
        asic_31_bitmap.value_namespace = name_space;
        asic_31_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_32")
    {
        show_asic_32 = value;
        show_asic_32.value_namespace = name_space;
        show_asic_32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_32_bitmap")
    {
        asic_32_bitmap = value;
        asic_32_bitmap.value_namespace = name_space;
        asic_32_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_33")
    {
        show_asic_33 = value;
        show_asic_33.value_namespace = name_space;
        show_asic_33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_33_bitmap")
    {
        asic_33_bitmap = value;
        asic_33_bitmap.value_namespace = name_space;
        asic_33_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_34")
    {
        show_asic_34 = value;
        show_asic_34.value_namespace = name_space;
        show_asic_34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_34_bitmap")
    {
        asic_34_bitmap = value;
        asic_34_bitmap.value_namespace = name_space;
        asic_34_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_35")
    {
        show_asic_35 = value;
        show_asic_35.value_namespace = name_space;
        show_asic_35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_35_bitmap")
    {
        asic_35_bitmap = value;
        asic_35_bitmap.value_namespace = name_space;
        asic_35_bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client_idx")
    {
        client_idx.yfilter = yfilter;
    }
    if(value_path == "show_asic_0")
    {
        show_asic_0.yfilter = yfilter;
    }
    if(value_path == "asic_0_bitmap")
    {
        asic_0_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_1")
    {
        show_asic_1.yfilter = yfilter;
    }
    if(value_path == "asic_1_bitmap")
    {
        asic_1_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_2")
    {
        show_asic_2.yfilter = yfilter;
    }
    if(value_path == "asic_2_bitmap")
    {
        asic_2_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_3")
    {
        show_asic_3.yfilter = yfilter;
    }
    if(value_path == "asic_3_bitmap")
    {
        asic_3_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_4")
    {
        show_asic_4.yfilter = yfilter;
    }
    if(value_path == "asic_4_bitmap")
    {
        asic_4_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_5")
    {
        show_asic_5.yfilter = yfilter;
    }
    if(value_path == "asic_5_bitmap")
    {
        asic_5_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_6")
    {
        show_asic_6.yfilter = yfilter;
    }
    if(value_path == "asic_6_bitmap")
    {
        asic_6_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_7")
    {
        show_asic_7.yfilter = yfilter;
    }
    if(value_path == "asic_7_bitmap")
    {
        asic_7_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_8")
    {
        show_asic_8.yfilter = yfilter;
    }
    if(value_path == "asic_8_bitmap")
    {
        asic_8_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_9")
    {
        show_asic_9.yfilter = yfilter;
    }
    if(value_path == "asic_9_bitmap")
    {
        asic_9_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_10")
    {
        show_asic_10.yfilter = yfilter;
    }
    if(value_path == "asic_10_bitmap")
    {
        asic_10_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_11")
    {
        show_asic_11.yfilter = yfilter;
    }
    if(value_path == "asic_11_bitmap")
    {
        asic_11_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_12")
    {
        show_asic_12.yfilter = yfilter;
    }
    if(value_path == "asic_12_bitmap")
    {
        asic_12_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_13")
    {
        show_asic_13.yfilter = yfilter;
    }
    if(value_path == "asic_13_bitmap")
    {
        asic_13_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_14")
    {
        show_asic_14.yfilter = yfilter;
    }
    if(value_path == "asic_14_bitmap")
    {
        asic_14_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_15")
    {
        show_asic_15.yfilter = yfilter;
    }
    if(value_path == "asic_15_bitmap")
    {
        asic_15_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_16")
    {
        show_asic_16.yfilter = yfilter;
    }
    if(value_path == "asic_16_bitmap")
    {
        asic_16_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_17")
    {
        show_asic_17.yfilter = yfilter;
    }
    if(value_path == "asic_17_bitmap")
    {
        asic_17_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_18")
    {
        show_asic_18.yfilter = yfilter;
    }
    if(value_path == "asic_18_bitmap")
    {
        asic_18_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_19")
    {
        show_asic_19.yfilter = yfilter;
    }
    if(value_path == "asic_19_bitmap")
    {
        asic_19_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_20")
    {
        show_asic_20.yfilter = yfilter;
    }
    if(value_path == "asic_20_bitmap")
    {
        asic_20_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_21")
    {
        show_asic_21.yfilter = yfilter;
    }
    if(value_path == "asic_21_bitmap")
    {
        asic_21_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_22")
    {
        show_asic_22.yfilter = yfilter;
    }
    if(value_path == "asic_22_bitmap")
    {
        asic_22_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_23")
    {
        show_asic_23.yfilter = yfilter;
    }
    if(value_path == "asic_23_bitmap")
    {
        asic_23_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_24")
    {
        show_asic_24.yfilter = yfilter;
    }
    if(value_path == "asic_24_bitmap")
    {
        asic_24_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_25")
    {
        show_asic_25.yfilter = yfilter;
    }
    if(value_path == "asic_25_bitmap")
    {
        asic_25_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_26")
    {
        show_asic_26.yfilter = yfilter;
    }
    if(value_path == "asic_26_bitmap")
    {
        asic_26_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_27")
    {
        show_asic_27.yfilter = yfilter;
    }
    if(value_path == "asic_27_bitmap")
    {
        asic_27_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_28")
    {
        show_asic_28.yfilter = yfilter;
    }
    if(value_path == "asic_28_bitmap")
    {
        asic_28_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_29")
    {
        show_asic_29.yfilter = yfilter;
    }
    if(value_path == "asic_29_bitmap")
    {
        asic_29_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_30")
    {
        show_asic_30.yfilter = yfilter;
    }
    if(value_path == "asic_30_bitmap")
    {
        asic_30_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_31")
    {
        show_asic_31.yfilter = yfilter;
    }
    if(value_path == "asic_31_bitmap")
    {
        asic_31_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_32")
    {
        show_asic_32.yfilter = yfilter;
    }
    if(value_path == "asic_32_bitmap")
    {
        asic_32_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_33")
    {
        show_asic_33.yfilter = yfilter;
    }
    if(value_path == "asic_33_bitmap")
    {
        asic_33_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_34")
    {
        show_asic_34.yfilter = yfilter;
    }
    if(value_path == "asic_34_bitmap")
    {
        asic_34_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_35")
    {
        show_asic_35.yfilter = yfilter;
    }
    if(value_path == "asic_35_bitmap")
    {
        asic_35_bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client_idx" || name == "show_asic_0" || name == "asic_0_bitmap" || name == "show_asic_1" || name == "asic_1_bitmap" || name == "show_asic_2" || name == "asic_2_bitmap" || name == "show_asic_3" || name == "asic_3_bitmap" || name == "show_asic_4" || name == "asic_4_bitmap" || name == "show_asic_5" || name == "asic_5_bitmap" || name == "show_asic_6" || name == "asic_6_bitmap" || name == "show_asic_7" || name == "asic_7_bitmap" || name == "show_asic_8" || name == "asic_8_bitmap" || name == "show_asic_9" || name == "asic_9_bitmap" || name == "show_asic_10" || name == "asic_10_bitmap" || name == "show_asic_11" || name == "asic_11_bitmap" || name == "show_asic_12" || name == "asic_12_bitmap" || name == "show_asic_13" || name == "asic_13_bitmap" || name == "show_asic_14" || name == "asic_14_bitmap" || name == "show_asic_15" || name == "asic_15_bitmap" || name == "show_asic_16" || name == "asic_16_bitmap" || name == "show_asic_17" || name == "asic_17_bitmap" || name == "show_asic_18" || name == "asic_18_bitmap" || name == "show_asic_19" || name == "asic_19_bitmap" || name == "show_asic_20" || name == "asic_20_bitmap" || name == "show_asic_21" || name == "asic_21_bitmap" || name == "show_asic_22" || name == "asic_22_bitmap" || name == "show_asic_23" || name == "asic_23_bitmap" || name == "show_asic_24" || name == "asic_24_bitmap" || name == "show_asic_25" || name == "asic_25_bitmap" || name == "show_asic_26" || name == "asic_26_bitmap" || name == "show_asic_27" || name == "asic_27_bitmap" || name == "show_asic_28" || name == "asic_28_bitmap" || name == "show_asic_29" || name == "asic_29_bitmap" || name == "show_asic_30" || name == "asic_30_bitmap" || name == "show_asic_31" || name == "asic_31_bitmap" || name == "show_asic_32" || name == "asic_32_bitmap" || name == "show_asic_33" || name == "asic_33_bitmap" || name == "show_asic_34" || name == "asic_34_bitmap" || name == "show_asic_35" || name == "asic_35_bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Resource()
    :
    sdr(this, {"sdr_name"})
{

    yang_name = "resource"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Resource::~Resource()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Resource::has_operation() const
{
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr>();
        ent_->parent = this;
        sdr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sdr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Sdr()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::~Sdr()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/resource/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"}
        ,
    ids_range(this, {"id", "elements"})
{

    yang_name = "application"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ids_range.len(); index++)
    {
        if(ids_range[index]->has_data())
            return true;
    }
    return app_name.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_operation() const
{
    for (std::size_t index=0; index<ids_range.len(); index++)
    {
        if(ids_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ids_range")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange>();
        ent_->parent = this;
        ids_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ids_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ids_range" || name == "app_name" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::IdsRange()
    :
    id{YType::int32, "id"},
    elements{YType::int32, "elements"}
        ,
    fgid_ids(this, {"fgid_id", "line_idx"})
{

    yang_name = "ids_range"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::~IdsRange()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fgid_ids.len(); index++)
    {
        if(fgid_ids[index]->has_data())
            return true;
    }
    return id.is_set
	|| elements.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_operation() const
{
    for (std::size_t index=0; index<fgid_ids.len(); index++)
    {
        if(fgid_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(elements.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ids_range";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(elements, "elements");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (elements.is_set || is_set(elements.yfilter)) leaf_name_data.push_back(elements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fgid_ids")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds>();
        ent_->parent = this;
        fgid_ids.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fgid_ids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elements")
    {
        elements = value;
        elements.value_namespace = name_space;
        elements.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "elements")
    {
        elements.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid_ids" || name == "id" || name == "elements")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::FgidIds()
    :
    fgid_id{YType::str, "fgid_id"},
    line_idx{YType::int32, "line_idx"},
    sdr_name_h{YType::str, "sdr_name_h"},
    app_name_h{YType::str, "app_name_h"}
{

    yang_name = "fgid_ids"; yang_parent_name = "ids_range"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::~FgidIds()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_data() const
{
    if (is_presence_container) return true;
    return fgid_id.is_set
	|| line_idx.is_set
	|| sdr_name_h.is_set
	|| app_name_h.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fgid_id.yfilter)
	|| ydk::is_set(line_idx.yfilter)
	|| ydk::is_set(sdr_name_h.yfilter)
	|| ydk::is_set(app_name_h.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid_ids";
    ADD_KEY_TOKEN(fgid_id, "fgid_id");
    ADD_KEY_TOKEN(line_idx, "line_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid_id.is_set || is_set(fgid_id.yfilter)) leaf_name_data.push_back(fgid_id.get_name_leafdata());
    if (line_idx.is_set || is_set(line_idx.yfilter)) leaf_name_data.push_back(line_idx.get_name_leafdata());
    if (sdr_name_h.is_set || is_set(sdr_name_h.yfilter)) leaf_name_data.push_back(sdr_name_h.get_name_leafdata());
    if (app_name_h.is_set || is_set(app_name_h.yfilter)) leaf_name_data.push_back(app_name_h.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgid_id")
    {
        fgid_id = value;
        fgid_id.value_namespace = name_space;
        fgid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line_idx")
    {
        line_idx = value;
        line_idx.value_namespace = name_space;
        line_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_name_h")
    {
        sdr_name_h = value;
        sdr_name_h.value_namespace = name_space;
        sdr_name_h.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_name_h")
    {
        app_name_h = value;
        app_name_h.value_namespace = name_space;
        app_name_h.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgid_id")
    {
        fgid_id.yfilter = yfilter;
    }
    if(value_path == "line_idx")
    {
        line_idx.yfilter = yfilter;
    }
    if(value_path == "sdr_name_h")
    {
        sdr_name_h.yfilter = yfilter;
    }
    if(value_path == "app_name_h")
    {
        app_name_h.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid_id" || name == "line_idx" || name == "sdr_name_h" || name == "app_name_h")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Statistics()
    :
    all(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All>())
    , sdr(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr>())
    , pool(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool>())
    , system(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System>())
{
    all->parent = this;
    sdr->parent = this;
    pool->parent = this;
    system->parent = this;

    yang_name = "statistics"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (sdr !=  nullptr && sdr->has_data())
	|| (pool !=  nullptr && pool->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (sdr !=  nullptr && sdr->has_operation())
	|| (pool !=  nullptr && pool->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string Controller::Fabric::Oper::Fgid::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All>();
        }
        return all;
    }

    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr>();
        }
        return sdr;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool>();
        }
        return pool;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(sdr != nullptr)
    {
        _children["sdr"] = sdr;
    }

    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    if(system != nullptr)
    {
        _children["system"] = system;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "sdr" || name == "pool" || name == "system")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::All()
    :
    stats_list(this, {"system_stats"})
    , sdr_list(this, {"sdr_name"})
    , pool_list(this, {"pool_id"})
{

    yang_name = "all"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::~All()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sdr_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::SdrList>();
        ent_->parent = this;
        sdr_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pool_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::PoolList>();
        ent_->parent = this;
        pool_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sdr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pool_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats_list" || name == "sdr_list" || name == "pool_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::StatsList()
    :
    system_stats{YType::int32, "system_stats"},
    system_total_fgids{YType::uint32, "system_total_fgids"},
    system_inuse_fgids{YType::uint32, "system_inuse_fgids"},
    system_hwm_fgids{YType::uint32, "system_hwm_fgids"}
{

    yang_name = "stats_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::~StatsList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return system_stats.is_set
	|| system_total_fgids.is_set
	|| system_inuse_fgids.is_set
	|| system_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_stats.yfilter)
	|| ydk::is_set(system_total_fgids.yfilter)
	|| ydk::is_set(system_inuse_fgids.yfilter)
	|| ydk::is_set(system_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats_list";
    ADD_KEY_TOKEN(system_stats, "system_stats");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_stats.is_set || is_set(system_stats.yfilter)) leaf_name_data.push_back(system_stats.get_name_leafdata());
    if (system_total_fgids.is_set || is_set(system_total_fgids.yfilter)) leaf_name_data.push_back(system_total_fgids.get_name_leafdata());
    if (system_inuse_fgids.is_set || is_set(system_inuse_fgids.yfilter)) leaf_name_data.push_back(system_inuse_fgids.get_name_leafdata());
    if (system_hwm_fgids.is_set || is_set(system_hwm_fgids.yfilter)) leaf_name_data.push_back(system_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system_stats")
    {
        system_stats = value;
        system_stats.value_namespace = name_space;
        system_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids = value;
        system_total_fgids.value_namespace = name_space;
        system_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids = value;
        system_inuse_fgids.value_namespace = name_space;
        system_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids = value;
        system_hwm_fgids.value_namespace = name_space;
        system_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system_stats")
    {
        system_stats.yfilter = yfilter;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids.yfilter = yfilter;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system_stats" || name == "system_total_fgids" || name == "system_inuse_fgids" || name == "system_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::SdrList()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"},
    sdr_total_fgids{YType::uint32, "sdr_total_fgids"},
    sdr_inuse_fgids{YType::uint32, "sdr_inuse_fgids"},
    sdr_hwm_fgids{YType::uint32, "sdr_hwm_fgids"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::~SdrList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set
	|| sdr_total_fgids.is_set
	|| sdr_inuse_fgids.is_set
	|| sdr_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sdr_total_fgids.yfilter)
	|| ydk::is_set(sdr_inuse_fgids.yfilter)
	|| ydk::is_set(sdr_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_list";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sdr_total_fgids.is_set || is_set(sdr_total_fgids.yfilter)) leaf_name_data.push_back(sdr_total_fgids.get_name_leafdata());
    if (sdr_inuse_fgids.is_set || is_set(sdr_inuse_fgids.yfilter)) leaf_name_data.push_back(sdr_inuse_fgids.get_name_leafdata());
    if (sdr_hwm_fgids.is_set || is_set(sdr_hwm_fgids.yfilter)) leaf_name_data.push_back(sdr_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids = value;
        sdr_total_fgids.value_namespace = name_space;
        sdr_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids = value;
        sdr_inuse_fgids.value_namespace = name_space;
        sdr_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids = value;
        sdr_hwm_fgids.value_namespace = name_space;
        sdr_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description" || name == "sdr_total_fgids" || name == "sdr_inuse_fgids" || name == "sdr_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"},
    app_id{YType::uint32, "app_id"},
    pool_id{YType::uint32, "pool_id"},
    inuse_fgids{YType::uint32, "inuse_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "application"; yang_parent_name = "sdr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_data() const
{
    if (is_presence_container) return true;
    return app_name.is_set
	|| description.is_set
	|| app_id.is_set
	|| pool_id.is_set
	|| inuse_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(inuse_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (inuse_fgids.is_set || is_set(inuse_fgids.yfilter)) leaf_name_data.push_back(inuse_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids = value;
        inuse_fgids.value_namespace = name_space;
        inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "app_id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app_name" || name == "description" || name == "app_id" || name == "pool_id" || name == "inuse_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::PoolList()
    :
    pool_id{YType::uint32, "pool_id"},
    pool_name{YType::str, "pool_name"},
    pool_type{YType::str, "pool_type"},
    start_fgid{YType::str, "start_fgid"},
    total_fgids{YType::uint32, "total_fgids"},
    current_fgids{YType::uint32, "current_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "pool_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::~PoolList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return pool_id.is_set
	|| pool_name.is_set
	|| pool_type.is_set
	|| start_fgid.is_set
	|| total_fgids.is_set
	|| current_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(start_fgid.yfilter)
	|| ydk::is_set(total_fgids.yfilter)
	|| ydk::is_set(current_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool_list";
    ADD_KEY_TOKEN(pool_id, "pool_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (start_fgid.is_set || is_set(start_fgid.yfilter)) leaf_name_data.push_back(start_fgid.get_name_leafdata());
    if (total_fgids.is_set || is_set(total_fgids.yfilter)) leaf_name_data.push_back(total_fgids.get_name_leafdata());
    if (current_fgids.is_set || is_set(current_fgids.yfilter)) leaf_name_data.push_back(current_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_fgid")
    {
        start_fgid = value;
        start_fgid.value_namespace = name_space;
        start_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_fgids")
    {
        total_fgids = value;
        total_fgids.value_namespace = name_space;
        total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current_fgids")
    {
        current_fgids = value;
        current_fgids.value_namespace = name_space;
        current_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "pool_name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "pool_type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "start_fgid")
    {
        start_fgid.yfilter = yfilter;
    }
    if(value_path == "total_fgids")
    {
        total_fgids.yfilter = yfilter;
    }
    if(value_path == "current_fgids")
    {
        current_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_id" || name == "pool_name" || name == "pool_type" || name == "start_fgid" || name == "total_fgids" || name == "current_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::Sdr()
    :
    sdr_list(this, {"sdr_name"})
{

    yang_name = "sdr"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::~Sdr()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_operation() const
{
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList>();
        ent_->parent = this;
        sdr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sdr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::SdrList()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"},
    sdr_total_fgids{YType::uint32, "sdr_total_fgids"},
    sdr_inuse_fgids{YType::uint32, "sdr_inuse_fgids"},
    sdr_hwm_fgids{YType::uint32, "sdr_hwm_fgids"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr_list"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::~SdrList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set
	|| sdr_total_fgids.is_set
	|| sdr_inuse_fgids.is_set
	|| sdr_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sdr_total_fgids.yfilter)
	|| ydk::is_set(sdr_inuse_fgids.yfilter)
	|| ydk::is_set(sdr_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_list";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sdr_total_fgids.is_set || is_set(sdr_total_fgids.yfilter)) leaf_name_data.push_back(sdr_total_fgids.get_name_leafdata());
    if (sdr_inuse_fgids.is_set || is_set(sdr_inuse_fgids.yfilter)) leaf_name_data.push_back(sdr_inuse_fgids.get_name_leafdata());
    if (sdr_hwm_fgids.is_set || is_set(sdr_hwm_fgids.yfilter)) leaf_name_data.push_back(sdr_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids = value;
        sdr_total_fgids.value_namespace = name_space;
        sdr_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids = value;
        sdr_inuse_fgids.value_namespace = name_space;
        sdr_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids = value;
        sdr_hwm_fgids.value_namespace = name_space;
        sdr_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description" || name == "sdr_total_fgids" || name == "sdr_inuse_fgids" || name == "sdr_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"},
    app_id{YType::uint32, "app_id"},
    pool_id{YType::uint32, "pool_id"},
    inuse_fgids{YType::uint32, "inuse_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "application"; yang_parent_name = "sdr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_data() const
{
    if (is_presence_container) return true;
    return app_name.is_set
	|| description.is_set
	|| app_id.is_set
	|| pool_id.is_set
	|| inuse_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(inuse_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (inuse_fgids.is_set || is_set(inuse_fgids.yfilter)) leaf_name_data.push_back(inuse_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids = value;
        inuse_fgids.value_namespace = name_space;
        inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "app_id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app_name" || name == "description" || name == "app_id" || name == "pool_id" || name == "inuse_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::Pool()
    :
    pool_list(this, {"pool_id"})
{

    yang_name = "pool"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::~Pool()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_operation() const
{
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList>();
        ent_->parent = this;
        pool_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::PoolList()
    :
    pool_id{YType::uint32, "pool_id"},
    pool_name{YType::str, "pool_name"},
    pool_type{YType::str, "pool_type"},
    start_fgid{YType::str, "start_fgid"},
    total_fgids{YType::uint32, "total_fgids"},
    current_fgids{YType::uint32, "current_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "pool_list"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::~PoolList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return pool_id.is_set
	|| pool_name.is_set
	|| pool_type.is_set
	|| start_fgid.is_set
	|| total_fgids.is_set
	|| current_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(start_fgid.yfilter)
	|| ydk::is_set(total_fgids.yfilter)
	|| ydk::is_set(current_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/pool/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool_list";
    ADD_KEY_TOKEN(pool_id, "pool_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (start_fgid.is_set || is_set(start_fgid.yfilter)) leaf_name_data.push_back(start_fgid.get_name_leafdata());
    if (total_fgids.is_set || is_set(total_fgids.yfilter)) leaf_name_data.push_back(total_fgids.get_name_leafdata());
    if (current_fgids.is_set || is_set(current_fgids.yfilter)) leaf_name_data.push_back(current_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_fgid")
    {
        start_fgid = value;
        start_fgid.value_namespace = name_space;
        start_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_fgids")
    {
        total_fgids = value;
        total_fgids.value_namespace = name_space;
        total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current_fgids")
    {
        current_fgids = value;
        current_fgids.value_namespace = name_space;
        current_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "pool_name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "pool_type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "start_fgid")
    {
        start_fgid.yfilter = yfilter;
    }
    if(value_path == "total_fgids")
    {
        total_fgids.yfilter = yfilter;
    }
    if(value_path == "current_fgids")
    {
        current_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_id" || name == "pool_name" || name == "pool_type" || name == "start_fgid" || name == "total_fgids" || name == "current_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::System::System()
    :
    stats_list(this, {"system_stats"})
{

    yang_name = "system"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::System::~System()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::StatsList()
    :
    system_stats{YType::int32, "system_stats"},
    system_total_fgids{YType::uint32, "system_total_fgids"},
    system_inuse_fgids{YType::uint32, "system_inuse_fgids"},
    system_hwm_fgids{YType::uint32, "system_hwm_fgids"}
{

    yang_name = "stats_list"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::~StatsList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return system_stats.is_set
	|| system_total_fgids.is_set
	|| system_inuse_fgids.is_set
	|| system_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_stats.yfilter)
	|| ydk::is_set(system_total_fgids.yfilter)
	|| ydk::is_set(system_inuse_fgids.yfilter)
	|| ydk::is_set(system_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/statistics/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats_list";
    ADD_KEY_TOKEN(system_stats, "system_stats");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_stats.is_set || is_set(system_stats.yfilter)) leaf_name_data.push_back(system_stats.get_name_leafdata());
    if (system_total_fgids.is_set || is_set(system_total_fgids.yfilter)) leaf_name_data.push_back(system_total_fgids.get_name_leafdata());
    if (system_inuse_fgids.is_set || is_set(system_inuse_fgids.yfilter)) leaf_name_data.push_back(system_inuse_fgids.get_name_leafdata());
    if (system_hwm_fgids.is_set || is_set(system_hwm_fgids.yfilter)) leaf_name_data.push_back(system_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system_stats")
    {
        system_stats = value;
        system_stats.value_namespace = name_space;
        system_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids = value;
        system_total_fgids.value_namespace = name_space;
        system_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids = value;
        system_inuse_fgids.value_namespace = name_space;
        system_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids = value;
        system_hwm_fgids.value_namespace = name_space;
        system_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system_stats")
    {
        system_stats.yfilter = yfilter;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids.yfilter = yfilter;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system_stats" || name == "system_total_fgids" || name == "system_inuse_fgids" || name == "system_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::FgidMgr()
    :
    trace(this, {"buffer"})
{

    yang_name = "fgid_mgr"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::~FgidMgr()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::FgidMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "fgid_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::~Trace()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/fgid_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_children() const
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

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::~Location()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::ProgramError::ProgramError()
    :
    start{YType::int32, "start"},
    end{YType::int32, "end"}
        ,
    rack(this, {"rack_id"})
{

    yang_name = "program_error"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::ProgramError::~ProgramError()
{
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return start.is_set
	|| end.is_set;
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "program_error";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::ProgramError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::ProgramError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::ProgramError::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::ProgramError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::ProgramError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::ProgramError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "start" || name == "end")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::ProgramError::Rack::Rack()
    :
    rack_id{YType::int32, "rack_id"},
    rack_id_str{YType::str, "rack_id_str"},
    fgids_in_error{YType::str, "fgids_in_error"},
    found_fgids_in_error{YType::boolean, "found_fgids_in_error"},
    total_error_fgids{YType::int32, "total_error_fgids"},
    incorrect_fgids_range{YType::boolean, "incorrect_fgids_range"},
    cmd_not_supported{YType::boolean, "cmd_not_supported"}
{

    yang_name = "rack"; yang_parent_name = "program_error"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::ProgramError::Rack::~Rack()
{
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack_id.is_set
	|| rack_id_str.is_set
	|| fgids_in_error.is_set
	|| found_fgids_in_error.is_set
	|| total_error_fgids.is_set
	|| incorrect_fgids_range.is_set
	|| cmd_not_supported.is_set;
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(rack_id_str.yfilter)
	|| ydk::is_set(fgids_in_error.yfilter)
	|| ydk::is_set(found_fgids_in_error.yfilter)
	|| ydk::is_set(total_error_fgids.yfilter)
	|| ydk::is_set(incorrect_fgids_range.yfilter)
	|| ydk::is_set(cmd_not_supported.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_id, "rack_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (rack_id_str.is_set || is_set(rack_id_str.yfilter)) leaf_name_data.push_back(rack_id_str.get_name_leafdata());
    if (fgids_in_error.is_set || is_set(fgids_in_error.yfilter)) leaf_name_data.push_back(fgids_in_error.get_name_leafdata());
    if (found_fgids_in_error.is_set || is_set(found_fgids_in_error.yfilter)) leaf_name_data.push_back(found_fgids_in_error.get_name_leafdata());
    if (total_error_fgids.is_set || is_set(total_error_fgids.yfilter)) leaf_name_data.push_back(total_error_fgids.get_name_leafdata());
    if (incorrect_fgids_range.is_set || is_set(incorrect_fgids_range.yfilter)) leaf_name_data.push_back(incorrect_fgids_range.get_name_leafdata());
    if (cmd_not_supported.is_set || is_set(cmd_not_supported.yfilter)) leaf_name_data.push_back(cmd_not_supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::ProgramError::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str = value;
        rack_id_str.value_namespace = name_space;
        rack_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgids_in_error")
    {
        fgids_in_error = value;
        fgids_in_error.value_namespace = name_space;
        fgids_in_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found_fgids_in_error")
    {
        found_fgids_in_error = value;
        found_fgids_in_error.value_namespace = name_space;
        found_fgids_in_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_error_fgids")
    {
        total_error_fgids = value;
        total_error_fgids.value_namespace = name_space;
        total_error_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incorrect_fgids_range")
    {
        incorrect_fgids_range = value;
        incorrect_fgids_range.value_namespace = name_space;
        incorrect_fgids_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmd_not_supported")
    {
        cmd_not_supported = value;
        cmd_not_supported.value_namespace = name_space;
        cmd_not_supported.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::ProgramError::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str.yfilter = yfilter;
    }
    if(value_path == "fgids_in_error")
    {
        fgids_in_error.yfilter = yfilter;
    }
    if(value_path == "found_fgids_in_error")
    {
        found_fgids_in_error.yfilter = yfilter;
    }
    if(value_path == "total_error_fgids")
    {
        total_error_fgids.yfilter = yfilter;
    }
    if(value_path == "incorrect_fgids_range")
    {
        incorrect_fgids_range.yfilter = yfilter;
    }
    if(value_path == "cmd_not_supported")
    {
        cmd_not_supported.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_id" || name == "rack_id_str" || name == "fgids_in_error" || name == "found_fgids_in_error" || name == "total_error_fgids" || name == "incorrect_fgids_range" || name == "cmd_not_supported")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::FsdbaggActive()
    :
    plane(this, {"planeid"})
    , bundle(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle>())
    , statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics>())
{
    bundle->parent = this;
    statistics->parent = this;

    yang_name = "fsdbagg_active"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::~FsdbaggActive()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return (bundle !=  nullptr && bundle->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Plane>();
        ent_->parent = this;
        plane.append(ent_);
        return ent_;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle>();
        }
        return bundle;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::get_children() const
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

    if(bundle != nullptr)
    {
        _children["bundle"] = bundle;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane" || name == "bundle" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
        ,
    asic_internal_error(this, {"asic_number"})
{

    yang_name = "plane"; yang_parent_name = "fsdbagg_active"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(planeid, "planeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError>();
        ent_->parent = this;
        asic_internal_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_internal_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::has_data() const
{
    if (is_presence_container) return true;
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error";
    ADD_KEY_TOKEN(asic_number, "asic_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Bundle()
    :
    summary(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary>())
    , all(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::All>())
    , port(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port>())
    , location(this, {"loc_str"})
{
    summary->parent = this;
    all->parent = this;
    port->parent = this;

    yang_name = "bundle"; yang_parent_name = "fsdbagg_active"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::~Bundle()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (summary !=  nullptr && summary->has_data())
	|| (all !=  nullptr && all->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (all !=  nullptr && all->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::All>();
        }
        return all;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port>();
        }
        return port;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
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

void Controller::Fabric::Oper::FsdbaggActive::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "all" || name == "port" || name == "location")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::Summary()
    :
    bundle_summary_list(this, {"idx"})
{

    yang_name = "summary"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::~Summary()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_summary_list.len(); index++)
    {
        if(bundle_summary_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::has_operation() const
{
    for (std::size_t index=0; index<bundle_summary_list.len(); index++)
    {
        if(bundle_summary_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle_summary_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList>();
        ent_->parent = this;
        bundle_summary_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_summary_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle_summary_list")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::BundleSummaryList()
    :
    idx{YType::int32, "idx"},
    total_bundles{YType::uint32, "total_bundles"},
    down_bundles{YType::uint32, "down_bundles"},
    bundles_not_connected{YType::uint32, "bundles_not_connected"},
    total_bports{YType::uint32, "total_bports"},
    down_bports{YType::uint32, "down_bports"},
    bports_not_connected{YType::uint32, "bports_not_connected"}
{

    yang_name = "bundle_summary_list"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::~BundleSummaryList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| bundles_not_connected.is_set
	|| total_bports.is_set
	|| down_bports.is_set
	|| bports_not_connected.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(bundles_not_connected.yfilter)
	|| ydk::is_set(total_bports.yfilter)
	|| ydk::is_set(down_bports.yfilter)
	|| ydk::is_set(bports_not_connected.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle_summary_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (bundles_not_connected.is_set || is_set(bundles_not_connected.yfilter)) leaf_name_data.push_back(bundles_not_connected.get_name_leafdata());
    if (total_bports.is_set || is_set(total_bports.yfilter)) leaf_name_data.push_back(total_bports.get_name_leafdata());
    if (down_bports.is_set || is_set(down_bports.yfilter)) leaf_name_data.push_back(down_bports.get_name_leafdata());
    if (bports_not_connected.is_set || is_set(bports_not_connected.yfilter)) leaf_name_data.push_back(bports_not_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundles_not_connected")
    {
        bundles_not_connected = value;
        bundles_not_connected.value_namespace = name_space;
        bundles_not_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bports")
    {
        total_bports = value;
        total_bports.value_namespace = name_space;
        total_bports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bports")
    {
        down_bports = value;
        down_bports.value_namespace = name_space;
        down_bports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bports_not_connected")
    {
        bports_not_connected = value;
        bports_not_connected.value_namespace = name_space;
        bports_not_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "bundles_not_connected")
    {
        bundles_not_connected.yfilter = yfilter;
    }
    if(value_path == "total_bports")
    {
        total_bports.yfilter = yfilter;
    }
    if(value_path == "down_bports")
    {
        down_bports.yfilter = yfilter;
    }
    if(value_path == "bports_not_connected")
    {
        bports_not_connected.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Summary::BundleSummaryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "total_bundles" || name == "down_bundles" || name == "bundles_not_connected" || name == "total_bports" || name == "down_bports" || name == "bports_not_connected")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::All()
    :
    bundle_all_list(this, {"idx"})
{

    yang_name = "all"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::~All()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_all_list.len(); index++)
    {
        if(bundle_all_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::has_operation() const
{
    for (std::size_t index=0; index<bundle_all_list.len(); index++)
    {
        if(bundle_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle_all_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList>();
        ent_->parent = this;
        bundle_all_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_all_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle_all_list")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::BundleAllList()
    :
    idx{YType::int64, "idx"},
    bundle_id{YType::str, "bundle_id"},
    oper_state{YType::str, "oper_state"},
    plane_id{YType::uint32, "plane_id"},
    total_links{YType::uint32, "total_links"},
    down_links{YType::uint32, "down_links"},
    bport1{YType::str, "bport1"},
    bport2{YType::str, "bport2"}
{

    yang_name = "bundle_all_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::~BundleAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bundle_id.is_set
	|| oper_state.is_set
	|| plane_id.is_set
	|| total_links.is_set
	|| down_links.is_set
	|| bport1.is_set
	|| bport2.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(total_links.yfilter)
	|| ydk::is_set(down_links.yfilter)
	|| ydk::is_set(bport1.yfilter)
	|| ydk::is_set(bport2.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle_all_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());
    if (down_links.is_set || is_set(down_links.yfilter)) leaf_name_data.push_back(down_links.get_name_leafdata());
    if (bport1.is_set || is_set(bport1.yfilter)) leaf_name_data.push_back(bport1.get_name_leafdata());
    if (bport2.is_set || is_set(bport2.yfilter)) leaf_name_data.push_back(bport2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle_id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_links")
    {
        total_links = value;
        total_links.value_namespace = name_space;
        total_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_links")
    {
        down_links = value;
        down_links.value_namespace = name_space;
        down_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport1")
    {
        bport1 = value;
        bport1.value_namespace = name_space;
        bport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport2")
    {
        bport2 = value;
        bport2.value_namespace = name_space;
        bport2.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bundle_id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "total_links")
    {
        total_links.yfilter = yfilter;
    }
    if(value_path == "down_links")
    {
        down_links.yfilter = yfilter;
    }
    if(value_path == "bport1")
    {
        bport1.yfilter = yfilter;
    }
    if(value_path == "bport2")
    {
        bport2.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::All::BundleAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bundle_id" || name == "oper_state" || name == "plane_id" || name == "total_links" || name == "down_links" || name == "bport1" || name == "bport2")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Port()
    :
    all(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All>())
    , location(this, {"loc_str"})
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::~Port()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All>();
        }
        return all;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
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

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "location")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::All()
    :
    bport_all_list(this, {"idx"})
    , statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics>())
{
    statistics->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::~All()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_all_list.len(); index++)
    {
        if(bport_all_list[index]->has_data())
            return true;
    }
    return (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::has_operation() const
{
    for (std::size_t index=0; index<bport_all_list.len(); index++)
    {
        if(bport_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_all_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList>();
        ent_->parent = this;
        bport_all_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_all_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_all_list" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::BportAllList()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"}
{

    yang_name = "bport_all_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::~BportAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bport_id.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/port/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_all_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::BportAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "admin-state" || name == "oper_state" || name == "down_flags")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::Statistics()
    :
    bport_stats_all_racks(this, {"idx"})
{

    yang_name = "statistics"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_stats_all_racks.len(); index++)
    {
        if(bport_stats_all_racks[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_all_racks.len(); index++)
    {
        if(bport_stats_all_racks[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/port/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_all_racks")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks>();
        ent_->parent = this;
        bport_stats_all_racks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_stats_all_racks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_all_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsAllRacks()
    :
    idx{YType::int32, "idx"},
    total_racks{YType::uint32, "total_racks"}
        ,
    bport_stats_rack(this, {"idx"})
{

    yang_name = "bport_stats_all_racks"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::~BportStatsAllRacks()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_stats_rack.len(); index++)
    {
        if(bport_stats_rack[index]->has_data())
            return true;
    }
    return idx.is_set
	|| total_racks.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_rack.len(); index++)
    {
        if(bport_stats_rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(total_racks.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/port/all/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_all_racks";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (total_racks.is_set || is_set(total_racks.yfilter)) leaf_name_data.push_back(total_racks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_rack")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack>();
        ent_->parent = this;
        bport_stats_rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_stats_rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_racks")
    {
        total_racks = value;
        total_racks.value_namespace = name_space;
        total_racks.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "total_racks")
    {
        total_racks.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_rack" || name == "idx" || name == "total_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStatsRack()
    :
    idx{YType::int32, "idx"},
    rack_num_str{YType::str, "rack_num_str"}
        ,
    bport_stats(this, {"idx"})
{

    yang_name = "bport_stats_rack"; yang_parent_name = "bport_stats_all_racks"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::~BportStatsRack()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_stats.len(); index++)
    {
        if(bport_stats[index]->has_data())
            return true;
    }
    return idx.is_set
	|| rack_num_str.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::has_operation() const
{
    for (std::size_t index=0; index<bport_stats.len(); index++)
    {
        if(bport_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(rack_num_str.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_rack";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (rack_num_str.is_set || is_set(rack_num_str.yfilter)) leaf_name_data.push_back(rack_num_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats>();
        ent_->parent = this;
        bport_stats.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str = value;
        rack_num_str.value_namespace = name_space;
        rack_num_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats" || name == "idx" || name == "rack_num_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::BportStats()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    last_clear_ts{YType::str, "last_clear_ts"}
{

    yang_name = "bport_stats"; yang_parent_name = "bport_stats_rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::~BportStats()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bport_id.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| last_clear_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::All::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "last_clear_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
        ,
    bport_all_list(this, {"idx"})
    , statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics>())
{
    statistics->parent = this;

    yang_name = "location"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::~Location()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_all_list.len(); index++)
    {
        if(bport_all_list[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::has_operation() const
{
    for (std::size_t index=0; index<bport_all_list.len(); index++)
    {
        if(bport_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/port/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_all_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList>();
        ent_->parent = this;
        bport_all_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_all_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_all_list" || name == "statistics" || name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::BportAllList()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"}
{

    yang_name = "bport_all_list"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::~BportAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bport_id.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_all_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::BportAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "admin-state" || name == "oper_state" || name == "down_flags")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::Statistics()
    :
    bport_stats_all_racks(this, {"idx"})
{

    yang_name = "statistics"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_stats_all_racks.len(); index++)
    {
        if(bport_stats_all_racks[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_all_racks.len(); index++)
    {
        if(bport_stats_all_racks[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_all_racks")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks>();
        ent_->parent = this;
        bport_stats_all_racks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_stats_all_racks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_all_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsAllRacks()
    :
    idx{YType::int32, "idx"},
    total_racks{YType::uint32, "total_racks"}
        ,
    bport_stats_rack(this, {"idx"})
{

    yang_name = "bport_stats_all_racks"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::~BportStatsAllRacks()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_stats_rack.len(); index++)
    {
        if(bport_stats_rack[index]->has_data())
            return true;
    }
    return idx.is_set
	|| total_racks.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::has_operation() const
{
    for (std::size_t index=0; index<bport_stats_rack.len(); index++)
    {
        if(bport_stats_rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(total_racks.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_all_racks";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (total_racks.is_set || is_set(total_racks.yfilter)) leaf_name_data.push_back(total_racks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats_rack")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack>();
        ent_->parent = this;
        bport_stats_rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_stats_rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_racks")
    {
        total_racks = value;
        total_racks.value_namespace = name_space;
        total_racks.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "total_racks")
    {
        total_racks.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats_rack" || name == "idx" || name == "total_racks")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStatsRack()
    :
    idx{YType::int32, "idx"},
    rack_num_str{YType::str, "rack_num_str"}
        ,
    bport_stats(this, {"idx"})
{

    yang_name = "bport_stats_rack"; yang_parent_name = "bport_stats_all_racks"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::~BportStatsRack()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bport_stats.len(); index++)
    {
        if(bport_stats[index]->has_data())
            return true;
    }
    return idx.is_set
	|| rack_num_str.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::has_operation() const
{
    for (std::size_t index=0; index<bport_stats.len(); index++)
    {
        if(bport_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(rack_num_str.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats_rack";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (rack_num_str.is_set || is_set(rack_num_str.yfilter)) leaf_name_data.push_back(rack_num_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bport_stats")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats>();
        ent_->parent = this;
        bport_stats.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bport_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str = value;
        rack_num_str.value_namespace = name_space;
        rack_num_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "rack_num_str")
    {
        rack_num_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bport_stats" || name == "idx" || name == "rack_num_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::BportStats()
    :
    idx{YType::int64, "idx"},
    bport_id{YType::str, "bport_id"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    last_clear_ts{YType::str, "last_clear_ts"}
{

    yang_name = "bport_stats"; yang_parent_name = "bport_stats_rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::~BportStats()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bport_id.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| last_clear_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bport_id.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bport_stats";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bport_id.is_set || is_set(bport_id.yfilter)) leaf_name_data.push_back(bport_id.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport_id")
    {
        bport_id = value;
        bport_id.value_namespace = name_space;
        bport_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bport_id")
    {
        bport_id.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Port::Location::Statistics::BportStatsAllRacks::BportStatsRack::BportStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bport_id" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "last_clear_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
        ,
    bundle_all_list(this, {"idx"})
{

    yang_name = "location"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::~Location()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bundle_all_list.len(); index++)
    {
        if(bundle_all_list[index]->has_data())
            return true;
    }
    return loc_str.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::has_operation() const
{
    for (std::size_t index=0; index<bundle_all_list.len(); index++)
    {
        if(bundle_all_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle_all_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList>();
        ent_->parent = this;
        bundle_all_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bundle_all_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle_all_list" || name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::BundleAllList()
    :
    idx{YType::int64, "idx"},
    bundle_id{YType::str, "bundle_id"},
    oper_state{YType::str, "oper_state"},
    plane_id{YType::uint32, "plane_id"},
    total_links{YType::uint32, "total_links"},
    down_links{YType::uint32, "down_links"},
    bport1{YType::str, "bport1"},
    bport2{YType::str, "bport2"}
{

    yang_name = "bundle_all_list"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::~BundleAllList()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| bundle_id.is_set
	|| oper_state.is_set
	|| plane_id.is_set
	|| total_links.is_set
	|| down_links.is_set
	|| bport1.is_set
	|| bport2.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(total_links.yfilter)
	|| ydk::is_set(down_links.yfilter)
	|| ydk::is_set(bport1.yfilter)
	|| ydk::is_set(bport2.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle_all_list";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());
    if (down_links.is_set || is_set(down_links.yfilter)) leaf_name_data.push_back(down_links.get_name_leafdata());
    if (bport1.is_set || is_set(bport1.yfilter)) leaf_name_data.push_back(bport1.get_name_leafdata());
    if (bport2.is_set || is_set(bport2.yfilter)) leaf_name_data.push_back(bport2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle_id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper_state")
    {
        oper_state = value;
        oper_state.value_namespace = name_space;
        oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_links")
    {
        total_links = value;
        total_links.value_namespace = name_space;
        total_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_links")
    {
        down_links = value;
        down_links.value_namespace = name_space;
        down_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport1")
    {
        bport1 = value;
        bport1.value_namespace = name_space;
        bport1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bport2")
    {
        bport2 = value;
        bport2.value_namespace = name_space;
        bport2.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "bundle_id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "total_links")
    {
        total_links.yfilter = yfilter;
    }
    if(value_path == "down_links")
    {
        down_links.yfilter = yfilter;
    }
    if(value_path == "bport1")
    {
        bport1.yfilter = yfilter;
    }
    if(value_path == "bport2")
    {
        bport2.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Bundle::Location::BundleAllList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "bundle_id" || name == "oper_state" || name == "plane_id" || name == "total_links" || name == "down_links" || name == "bport1" || name == "bport2")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Statistics()
    :
    plane(this, {"planeid"})
{

    yang_name = "statistics"; yang_parent_name = "fsdbagg_active"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane>();
        ent_->parent = this;
        plane.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Statistics::get_children() const
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

void Controller::Fabric::Oper::FsdbaggActive::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
        ,
    asic_internal_error(this, {"asic_number"})
{

    yang_name = "plane"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_active/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(planeid, "planeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError>();
        ent_->parent = this;
        asic_internal_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_internal_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::has_data() const
{
    if (is_presence_container) return true;
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error";
    ADD_KEY_TOKEN(asic_number, "asic_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggActive::Statistics::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggLink::FsdbaggLink()
    :
    port(this, {"portname"})
{

    yang_name = "fsdbagg_link"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggLink::~FsdbaggLink()
{
}

bool Controller::Fabric::Oper::FsdbaggLink::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggLink::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggLink::Port>();
        ent_->parent = this;
        port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggLink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggLink::Port::Port()
    :
    portname{YType::str, "portname"},
    description{YType::str, "description"}
{

    yang_name = "port"; yang_parent_name = "fsdbagg_link"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggLink::Port::~Port()
{
}

bool Controller::Fabric::Oper::FsdbaggLink::Port::has_data() const
{
    if (is_presence_container) return true;
    return portname.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::FsdbaggLink::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(portname.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggLink::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_link/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggLink::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(portname, "portname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggLink::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (portname.is_set || is_set(portname.yfilter)) leaf_name_data.push_back(portname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggLink::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggLink::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggLink::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "portname")
    {
        portname = value;
        portname.value_namespace = name_space;
        portname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggLink::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "portname")
    {
        portname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggLink::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "portname" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::FsdbaggSfeAsicType()
    :
    asic_types(this, {"asicname"})
{

    yang_name = "fsdbagg_sfe_asic_type"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::~FsdbaggSfeAsicType()
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_types.len(); index++)
    {
        if(asic_types[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::has_operation() const
{
    for (std::size_t index=0; index<asic_types.len(); index++)
    {
        if(asic_types[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_sfe_asic_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggSfeAsicType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggSfeAsicType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_types")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes>();
        ent_->parent = this;
        asic_types.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggSfeAsicType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_types.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_types")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::AsicTypes()
    :
    asicname{YType::str, "asicname"},
    description{YType::str, "description"}
        ,
    block(this, {"blockname"})
{

    yang_name = "asic_types"; yang_parent_name = "fsdbagg_sfe_asic_type"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::~AsicTypes()
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block.len(); index++)
    {
        if(block[index]->has_data())
            return true;
    }
    return asicname.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::has_operation() const
{
    for (std::size_t index=0; index<block.len(); index++)
    {
        if(block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asicname.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_sfe_asic_type/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_types";
    ADD_KEY_TOKEN(asicname, "asicname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asicname.is_set || is_set(asicname.yfilter)) leaf_name_data.push_back(asicname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block>();
        ent_->parent = this;
        block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asicname")
    {
        asicname = value;
        asicname.value_namespace = name_space;
        asicname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asicname")
    {
        asicname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block" || name == "asicname" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::Block()
    :
    blockname{YType::str, "blockname"},
    description{YType::str, "description"}
{

    yang_name = "block"; yang_parent_name = "asic_types"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::~Block()
{
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::has_data() const
{
    if (is_presence_container) return true;
    return blockname.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(blockname.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    ADD_KEY_TOKEN(blockname, "blockname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blockname.is_set || is_set(blockname.yfilter)) leaf_name_data.push_back(blockname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blockname")
    {
        blockname = value;
        blockname.value_namespace = name_space;
        blockname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blockname")
    {
        blockname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggSfeAsicType::AsicTypes::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blockname" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::FsdbaggStandby()
    :
    plane(this, {"planeid"})
    , statistics(std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics>())
{
    statistics->parent = this;

    yang_name = "fsdbagg_standby"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggStandby::~FsdbaggStandby()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::FsdbaggStandby::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::FsdbaggStandby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdbagg_standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Plane>();
        ent_->parent = this;
        plane.append(ent_);
        return ent_;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggStandby::get_children() const
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

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
        ,
    asic_internal_error(this, {"asic_number"})
{

    yang_name = "plane"; yang_parent_name = "fsdbagg_standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(planeid, "planeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggStandby::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError>();
        ent_->parent = this;
        asic_internal_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggStandby::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_internal_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::has_data() const
{
    if (is_presence_container) return true;
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error";
    ADD_KEY_TOKEN(asic_number, "asic_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Statistics()
    :
    plane(this, {"planeid"})
{

    yang_name = "statistics"; yang_parent_name = "fsdbagg_standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::has_operation() const
{
    for (std::size_t index=0; index<plane.len(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane>();
        ent_->parent = this;
        plane.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggStandby::Statistics::get_children() const
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

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::Plane()
    :
    planeid{YType::str, "planeid"},
    admin_state{YType::str, "admin-state"},
    ucast_oper_state{YType::str, "ucast_oper_state"},
    mcast_oper_state{YType::str, "mcast_oper_state"},
    plane_mode{YType::str, "plane_mode"},
    ucast_cnt_up{YType::int32, "ucast_cnt_up"},
    ucast_cnt_some_up{YType::int32, "ucast_cnt_some_up"},
    ucast_cnt_dn{YType::int32, "ucast_cnt_dn"},
    mcast_cnt_up{YType::int32, "mcast_cnt_up"},
    mcast_cnt_some_up{YType::int32, "mcast_cnt_some_up"},
    mcast_cnt_dn{YType::int32, "mcast_cnt_dn"},
    total_bundles{YType::int32, "total_bundles"},
    down_bundles{YType::int32, "down_bundles"},
    rx_data_cells{YType::uint64, "rx_data_cells"},
    tx_data_cells{YType::uint64, "tx_data_cells"},
    rx_ce_cells_is_overflow{YType::boolean, "rx_ce_cells_is_overflow"},
    rx_ce_cells{YType::uint64, "rx_ce_cells"},
    rx_uce_cells_is_overflow{YType::boolean, "rx_uce_cells_is_overflow"},
    rx_uce_cells{YType::uint64, "rx_uce_cells"},
    rx_pe_cells_is_overflow{YType::boolean, "rx_pe_cells_is_overflow"},
    rx_pe_cells{YType::uint64, "rx_pe_cells"},
    ucast_lost_cells{YType::uint32, "ucast_lost_cells"},
    mcast_lost_cells{YType::uint32, "mcast_lost_cells"},
    last_clear_ts{YType::str, "last_clear_ts"},
    last_clear_reason{YType::str, "last_clear_reason"},
    last_clear_req_ts{YType::str, "last_clear_req_ts"},
    last_clear_status{YType::str, "last_clear_status"},
    is_asic_internal_error{YType::boolean, "is_asic_internal_error"},
    asic_internal_drops{YType::uint64, "asic_internal_drops"},
    asic_location_drops{YType::str, "asic_location_drops"},
    ppu_state{YType::str, "ppu_state"}
        ,
    asic_internal_error(this, {"asic_number"})
{

    yang_name = "plane"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::~Plane()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_data())
            return true;
    }
    return planeid.is_set
	|| admin_state.is_set
	|| ucast_oper_state.is_set
	|| mcast_oper_state.is_set
	|| plane_mode.is_set
	|| ucast_cnt_up.is_set
	|| ucast_cnt_some_up.is_set
	|| ucast_cnt_dn.is_set
	|| mcast_cnt_up.is_set
	|| mcast_cnt_some_up.is_set
	|| mcast_cnt_dn.is_set
	|| total_bundles.is_set
	|| down_bundles.is_set
	|| rx_data_cells.is_set
	|| tx_data_cells.is_set
	|| rx_ce_cells_is_overflow.is_set
	|| rx_ce_cells.is_set
	|| rx_uce_cells_is_overflow.is_set
	|| rx_uce_cells.is_set
	|| rx_pe_cells_is_overflow.is_set
	|| rx_pe_cells.is_set
	|| ucast_lost_cells.is_set
	|| mcast_lost_cells.is_set
	|| last_clear_ts.is_set
	|| last_clear_reason.is_set
	|| last_clear_req_ts.is_set
	|| last_clear_status.is_set
	|| is_asic_internal_error.is_set
	|| asic_internal_drops.is_set
	|| asic_location_drops.is_set
	|| ppu_state.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::has_operation() const
{
    for (std::size_t index=0; index<asic_internal_error.len(); index++)
    {
        if(asic_internal_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(ucast_oper_state.yfilter)
	|| ydk::is_set(mcast_oper_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(ucast_cnt_up.yfilter)
	|| ydk::is_set(ucast_cnt_some_up.yfilter)
	|| ydk::is_set(ucast_cnt_dn.yfilter)
	|| ydk::is_set(mcast_cnt_up.yfilter)
	|| ydk::is_set(mcast_cnt_some_up.yfilter)
	|| ydk::is_set(mcast_cnt_dn.yfilter)
	|| ydk::is_set(total_bundles.yfilter)
	|| ydk::is_set(down_bundles.yfilter)
	|| ydk::is_set(rx_data_cells.yfilter)
	|| ydk::is_set(tx_data_cells.yfilter)
	|| ydk::is_set(rx_ce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_ce_cells.yfilter)
	|| ydk::is_set(rx_uce_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_uce_cells.yfilter)
	|| ydk::is_set(rx_pe_cells_is_overflow.yfilter)
	|| ydk::is_set(rx_pe_cells.yfilter)
	|| ydk::is_set(ucast_lost_cells.yfilter)
	|| ydk::is_set(mcast_lost_cells.yfilter)
	|| ydk::is_set(last_clear_ts.yfilter)
	|| ydk::is_set(last_clear_reason.yfilter)
	|| ydk::is_set(last_clear_req_ts.yfilter)
	|| ydk::is_set(last_clear_status.yfilter)
	|| ydk::is_set(is_asic_internal_error.yfilter)
	|| ydk::is_set(asic_internal_drops.yfilter)
	|| ydk::is_set(asic_location_drops.yfilter)
	|| ydk::is_set(ppu_state.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fsdbagg_standby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane";
    ADD_KEY_TOKEN(planeid, "planeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (ucast_oper_state.is_set || is_set(ucast_oper_state.yfilter)) leaf_name_data.push_back(ucast_oper_state.get_name_leafdata());
    if (mcast_oper_state.is_set || is_set(mcast_oper_state.yfilter)) leaf_name_data.push_back(mcast_oper_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (ucast_cnt_up.is_set || is_set(ucast_cnt_up.yfilter)) leaf_name_data.push_back(ucast_cnt_up.get_name_leafdata());
    if (ucast_cnt_some_up.is_set || is_set(ucast_cnt_some_up.yfilter)) leaf_name_data.push_back(ucast_cnt_some_up.get_name_leafdata());
    if (ucast_cnt_dn.is_set || is_set(ucast_cnt_dn.yfilter)) leaf_name_data.push_back(ucast_cnt_dn.get_name_leafdata());
    if (mcast_cnt_up.is_set || is_set(mcast_cnt_up.yfilter)) leaf_name_data.push_back(mcast_cnt_up.get_name_leafdata());
    if (mcast_cnt_some_up.is_set || is_set(mcast_cnt_some_up.yfilter)) leaf_name_data.push_back(mcast_cnt_some_up.get_name_leafdata());
    if (mcast_cnt_dn.is_set || is_set(mcast_cnt_dn.yfilter)) leaf_name_data.push_back(mcast_cnt_dn.get_name_leafdata());
    if (total_bundles.is_set || is_set(total_bundles.yfilter)) leaf_name_data.push_back(total_bundles.get_name_leafdata());
    if (down_bundles.is_set || is_set(down_bundles.yfilter)) leaf_name_data.push_back(down_bundles.get_name_leafdata());
    if (rx_data_cells.is_set || is_set(rx_data_cells.yfilter)) leaf_name_data.push_back(rx_data_cells.get_name_leafdata());
    if (tx_data_cells.is_set || is_set(tx_data_cells.yfilter)) leaf_name_data.push_back(tx_data_cells.get_name_leafdata());
    if (rx_ce_cells_is_overflow.is_set || is_set(rx_ce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_ce_cells_is_overflow.get_name_leafdata());
    if (rx_ce_cells.is_set || is_set(rx_ce_cells.yfilter)) leaf_name_data.push_back(rx_ce_cells.get_name_leafdata());
    if (rx_uce_cells_is_overflow.is_set || is_set(rx_uce_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_uce_cells_is_overflow.get_name_leafdata());
    if (rx_uce_cells.is_set || is_set(rx_uce_cells.yfilter)) leaf_name_data.push_back(rx_uce_cells.get_name_leafdata());
    if (rx_pe_cells_is_overflow.is_set || is_set(rx_pe_cells_is_overflow.yfilter)) leaf_name_data.push_back(rx_pe_cells_is_overflow.get_name_leafdata());
    if (rx_pe_cells.is_set || is_set(rx_pe_cells.yfilter)) leaf_name_data.push_back(rx_pe_cells.get_name_leafdata());
    if (ucast_lost_cells.is_set || is_set(ucast_lost_cells.yfilter)) leaf_name_data.push_back(ucast_lost_cells.get_name_leafdata());
    if (mcast_lost_cells.is_set || is_set(mcast_lost_cells.yfilter)) leaf_name_data.push_back(mcast_lost_cells.get_name_leafdata());
    if (last_clear_ts.is_set || is_set(last_clear_ts.yfilter)) leaf_name_data.push_back(last_clear_ts.get_name_leafdata());
    if (last_clear_reason.is_set || is_set(last_clear_reason.yfilter)) leaf_name_data.push_back(last_clear_reason.get_name_leafdata());
    if (last_clear_req_ts.is_set || is_set(last_clear_req_ts.yfilter)) leaf_name_data.push_back(last_clear_req_ts.get_name_leafdata());
    if (last_clear_status.is_set || is_set(last_clear_status.yfilter)) leaf_name_data.push_back(last_clear_status.get_name_leafdata());
    if (is_asic_internal_error.is_set || is_set(is_asic_internal_error.yfilter)) leaf_name_data.push_back(is_asic_internal_error.get_name_leafdata());
    if (asic_internal_drops.is_set || is_set(asic_internal_drops.yfilter)) leaf_name_data.push_back(asic_internal_drops.get_name_leafdata());
    if (asic_location_drops.is_set || is_set(asic_location_drops.yfilter)) leaf_name_data.push_back(asic_location_drops.get_name_leafdata());
    if (ppu_state.is_set || is_set(ppu_state.yfilter)) leaf_name_data.push_back(ppu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_internal_error")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError>();
        ent_->parent = this;
        asic_internal_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_internal_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state = value;
        ucast_oper_state.value_namespace = name_space;
        ucast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state = value;
        mcast_oper_state.value_namespace = name_space;
        mcast_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up = value;
        ucast_cnt_up.value_namespace = name_space;
        ucast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up = value;
        ucast_cnt_some_up.value_namespace = name_space;
        ucast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn = value;
        ucast_cnt_dn.value_namespace = name_space;
        ucast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up = value;
        mcast_cnt_up.value_namespace = name_space;
        mcast_cnt_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up = value;
        mcast_cnt_some_up.value_namespace = name_space;
        mcast_cnt_some_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn = value;
        mcast_cnt_dn.value_namespace = name_space;
        mcast_cnt_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_bundles")
    {
        total_bundles = value;
        total_bundles.value_namespace = name_space;
        total_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down_bundles")
    {
        down_bundles = value;
        down_bundles.value_namespace = name_space;
        down_bundles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells = value;
        rx_data_cells.value_namespace = name_space;
        rx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells = value;
        tx_data_cells.value_namespace = name_space;
        tx_data_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow = value;
        rx_ce_cells_is_overflow.value_namespace = name_space;
        rx_ce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells = value;
        rx_ce_cells.value_namespace = name_space;
        rx_ce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow = value;
        rx_uce_cells_is_overflow.value_namespace = name_space;
        rx_uce_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells = value;
        rx_uce_cells.value_namespace = name_space;
        rx_uce_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow = value;
        rx_pe_cells_is_overflow.value_namespace = name_space;
        rx_pe_cells_is_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells = value;
        rx_pe_cells.value_namespace = name_space;
        rx_pe_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells = value;
        ucast_lost_cells.value_namespace = name_space;
        ucast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells = value;
        mcast_lost_cells.value_namespace = name_space;
        mcast_lost_cells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts = value;
        last_clear_ts.value_namespace = name_space;
        last_clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason = value;
        last_clear_reason.value_namespace = name_space;
        last_clear_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts = value;
        last_clear_req_ts.value_namespace = name_space;
        last_clear_req_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status = value;
        last_clear_status.value_namespace = name_space;
        last_clear_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error = value;
        is_asic_internal_error.value_namespace = name_space;
        is_asic_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops = value;
        asic_internal_drops.value_namespace = name_space;
        asic_internal_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops = value;
        asic_location_drops.value_namespace = name_space;
        asic_location_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppu_state")
    {
        ppu_state = value;
        ppu_state.value_namespace = name_space;
        ppu_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "ucast_oper_state")
    {
        ucast_oper_state.yfilter = yfilter;
    }
    if(value_path == "mcast_oper_state")
    {
        mcast_oper_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_up")
    {
        ucast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_some_up")
    {
        ucast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "ucast_cnt_dn")
    {
        ucast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_up")
    {
        mcast_cnt_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_some_up")
    {
        mcast_cnt_some_up.yfilter = yfilter;
    }
    if(value_path == "mcast_cnt_dn")
    {
        mcast_cnt_dn.yfilter = yfilter;
    }
    if(value_path == "total_bundles")
    {
        total_bundles.yfilter = yfilter;
    }
    if(value_path == "down_bundles")
    {
        down_bundles.yfilter = yfilter;
    }
    if(value_path == "rx_data_cells")
    {
        rx_data_cells.yfilter = yfilter;
    }
    if(value_path == "tx_data_cells")
    {
        tx_data_cells.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells_is_overflow")
    {
        rx_ce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_ce_cells")
    {
        rx_ce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells_is_overflow")
    {
        rx_uce_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_uce_cells")
    {
        rx_uce_cells.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells_is_overflow")
    {
        rx_pe_cells_is_overflow.yfilter = yfilter;
    }
    if(value_path == "rx_pe_cells")
    {
        rx_pe_cells.yfilter = yfilter;
    }
    if(value_path == "ucast_lost_cells")
    {
        ucast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "mcast_lost_cells")
    {
        mcast_lost_cells.yfilter = yfilter;
    }
    if(value_path == "last_clear_ts")
    {
        last_clear_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_reason")
    {
        last_clear_reason.yfilter = yfilter;
    }
    if(value_path == "last_clear_req_ts")
    {
        last_clear_req_ts.yfilter = yfilter;
    }
    if(value_path == "last_clear_status")
    {
        last_clear_status.yfilter = yfilter;
    }
    if(value_path == "is_asic_internal_error")
    {
        is_asic_internal_error.yfilter = yfilter;
    }
    if(value_path == "asic_internal_drops")
    {
        asic_internal_drops.yfilter = yfilter;
    }
    if(value_path == "asic_location_drops")
    {
        asic_location_drops.yfilter = yfilter;
    }
    if(value_path == "ppu_state")
    {
        ppu_state.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_internal_error" || name == "planeid" || name == "admin-state" || name == "ucast_oper_state" || name == "mcast_oper_state" || name == "plane_mode" || name == "ucast_cnt_up" || name == "ucast_cnt_some_up" || name == "ucast_cnt_dn" || name == "mcast_cnt_up" || name == "mcast_cnt_some_up" || name == "mcast_cnt_dn" || name == "total_bundles" || name == "down_bundles" || name == "rx_data_cells" || name == "tx_data_cells" || name == "rx_ce_cells_is_overflow" || name == "rx_ce_cells" || name == "rx_uce_cells_is_overflow" || name == "rx_uce_cells" || name == "rx_pe_cells_is_overflow" || name == "rx_pe_cells" || name == "ucast_lost_cells" || name == "mcast_lost_cells" || name == "last_clear_ts" || name == "last_clear_reason" || name == "last_clear_req_ts" || name == "last_clear_status" || name == "is_asic_internal_error" || name == "asic_internal_drops" || name == "asic_location_drops" || name == "ppu_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::AsicInternalError()
    :
    asic_number{YType::int64, "asic_number"},
    asic_location{YType::str, "asic_location"},
    link_crc_error{YType::boolean, "link_crc_error"},
    link_size_error{YType::boolean, "link_size_error"},
    link_mis_align_error{YType::boolean, "link_mis_align_error"},
    link_code_group_error{YType::boolean, "link_code_group_error"},
    link_no_sig_lock_error{YType::boolean, "link_no_sig_lock_error"},
    link_no_sign_accept_error{YType::boolean, "link_no_sign_accept_error"},
    link_token_error{YType::boolean, "link_token_error"},
    error_token_count{YType::boolean, "error_token_count"},
    last_asic_internal_error_ts{YType::str, "last_asic_internal_error_ts"}
{

    yang_name = "asic_internal_error"; yang_parent_name = "plane"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::~AsicInternalError()
{
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::has_data() const
{
    if (is_presence_container) return true;
    return asic_number.is_set
	|| asic_location.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sign_accept_error.is_set
	|| link_token_error.is_set
	|| error_token_count.is_set
	|| last_asic_internal_error_ts.is_set;
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_number.yfilter)
	|| ydk::is_set(asic_location.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sign_accept_error.yfilter)
	|| ydk::is_set(link_token_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter)
	|| ydk::is_set(last_asic_internal_error_ts.yfilter);
}

std::string Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_internal_error";
    ADD_KEY_TOKEN(asic_number, "asic_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_number.is_set || is_set(asic_number.yfilter)) leaf_name_data.push_back(asic_number.get_name_leafdata());
    if (asic_location.is_set || is_set(asic_location.yfilter)) leaf_name_data.push_back(asic_location.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sign_accept_error.is_set || is_set(link_no_sign_accept_error.yfilter)) leaf_name_data.push_back(link_no_sign_accept_error.get_name_leafdata());
    if (link_token_error.is_set || is_set(link_token_error.yfilter)) leaf_name_data.push_back(link_token_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());
    if (last_asic_internal_error_ts.is_set || is_set(last_asic_internal_error_ts.yfilter)) leaf_name_data.push_back(last_asic_internal_error_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_number")
    {
        asic_number = value;
        asic_number.value_namespace = name_space;
        asic_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_location")
    {
        asic_location = value;
        asic_location.value_namespace = name_space;
        asic_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error = value;
        link_no_sign_accept_error.value_namespace = name_space;
        link_no_sign_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_token_error")
    {
        link_token_error = value;
        link_token_error.value_namespace = name_space;
        link_token_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts = value;
        last_asic_internal_error_ts.value_namespace = name_space;
        last_asic_internal_error_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_number")
    {
        asic_number.yfilter = yfilter;
    }
    if(value_path == "asic_location")
    {
        asic_location.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sign_accept_error")
    {
        link_no_sign_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_token_error")
    {
        link_token_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
    if(value_path == "last_asic_internal_error_ts")
    {
        last_asic_internal_error_ts.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbaggStandby::Statistics::Plane::AsicInternalError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_number" || name == "asic_location" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sign_accept_error" || name == "link_token_error" || name == "error_token_count" || name == "last_asic_internal_error_ts")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::FabHealth()
    :
    sys_info_list(this, {"index_key"})
{

    yang_name = "fab_health"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FabHealth::~FabHealth()
{
}

bool Controller::Fabric::Oper::FabHealth::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sys_info_list.len(); index++)
    {
        if(sys_info_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FabHealth::has_operation() const
{
    for (std::size_t index=0; index<sys_info_list.len(); index++)
    {
        if(sys_info_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FabHealth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fab_health";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FabHealth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sys_info_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList>();
        ent_->parent = this;
        sys_info_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FabHealth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sys_info_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FabHealth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FabHealth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FabHealth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys_info_list")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SysInfoList()
    :
    index_key{YType::int32, "index_key"},
    aggr_status{YType::boolean, "aggr_status"},
    available_rack_ids{YType::str, "available_rack_ids"},
    rack_id_separator{YType::str, "rack_id_separator"},
    available_fm_loc{YType::str, "available_fm_loc"},
    fm_loc_separator{YType::str, "fm_loc_separator"},
    rack_total{YType::uint32, "rack_total"},
    rack_lcc{YType::uint32, "rack_lcc"},
    rack_fcc{YType::uint32, "rack_fcc"},
    plane_up{YType::uint32, "plane_up"},
    plane_dn{YType::uint32, "plane_dn"},
    plane_mcast_dn{YType::uint32, "plane_mcast_dn"},
    plane_admin_dn{YType::uint32, "plane_admin_dn"},
    show_sys_plane_detail{YType::boolean, "show_sys_plane_detail"},
    sfe_asics_total{YType::uint32, "sfe_asics_total"},
    sfe_asics_up{YType::uint32, "sfe_asics_up"},
    sfe_asics_dn{YType::uint32, "sfe_asics_dn"},
    fia_asics_total{YType::uint32, "fia_asics_total"},
    fia_asics_up{YType::uint32, "fia_asics_up"},
    fia_asics_dn{YType::uint32, "fia_asics_dn"}
        ,
    sys_plane_info_list(this, {"plane_id"})
    , rack_info_list(this, {"rack_id"})
    , fsdb_status(this, {"rack_id"})
    , sfe_status(this, {"loc_str"})
{

    yang_name = "sys_info_list"; yang_parent_name = "fab_health"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FabHealth::SysInfoList::~SysInfoList()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sys_plane_info_list.len(); index++)
    {
        if(sys_plane_info_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rack_info_list.len(); index++)
    {
        if(rack_info_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fsdb_status.len(); index++)
    {
        if(fsdb_status[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sfe_status.len(); index++)
    {
        if(sfe_status[index]->has_data())
            return true;
    }
    return index_key.is_set
	|| aggr_status.is_set
	|| available_rack_ids.is_set
	|| rack_id_separator.is_set
	|| available_fm_loc.is_set
	|| fm_loc_separator.is_set
	|| rack_total.is_set
	|| rack_lcc.is_set
	|| rack_fcc.is_set
	|| plane_up.is_set
	|| plane_dn.is_set
	|| plane_mcast_dn.is_set
	|| plane_admin_dn.is_set
	|| show_sys_plane_detail.is_set
	|| sfe_asics_total.is_set
	|| sfe_asics_up.is_set
	|| sfe_asics_dn.is_set
	|| fia_asics_total.is_set
	|| fia_asics_up.is_set
	|| fia_asics_dn.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::has_operation() const
{
    for (std::size_t index=0; index<sys_plane_info_list.len(); index++)
    {
        if(sys_plane_info_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rack_info_list.len(); index++)
    {
        if(rack_info_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fsdb_status.len(); index++)
    {
        if(fsdb_status[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sfe_status.len(); index++)
    {
        if(sfe_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_key.yfilter)
	|| ydk::is_set(aggr_status.yfilter)
	|| ydk::is_set(available_rack_ids.yfilter)
	|| ydk::is_set(rack_id_separator.yfilter)
	|| ydk::is_set(available_fm_loc.yfilter)
	|| ydk::is_set(fm_loc_separator.yfilter)
	|| ydk::is_set(rack_total.yfilter)
	|| ydk::is_set(rack_lcc.yfilter)
	|| ydk::is_set(rack_fcc.yfilter)
	|| ydk::is_set(plane_up.yfilter)
	|| ydk::is_set(plane_dn.yfilter)
	|| ydk::is_set(plane_mcast_dn.yfilter)
	|| ydk::is_set(plane_admin_dn.yfilter)
	|| ydk::is_set(show_sys_plane_detail.yfilter)
	|| ydk::is_set(sfe_asics_total.yfilter)
	|| ydk::is_set(sfe_asics_up.yfilter)
	|| ydk::is_set(sfe_asics_dn.yfilter)
	|| ydk::is_set(fia_asics_total.yfilter)
	|| ydk::is_set(fia_asics_up.yfilter)
	|| ydk::is_set(fia_asics_dn.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/fab_health/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys_info_list";
    ADD_KEY_TOKEN(index_key, "index_key");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_key.is_set || is_set(index_key.yfilter)) leaf_name_data.push_back(index_key.get_name_leafdata());
    if (aggr_status.is_set || is_set(aggr_status.yfilter)) leaf_name_data.push_back(aggr_status.get_name_leafdata());
    if (available_rack_ids.is_set || is_set(available_rack_ids.yfilter)) leaf_name_data.push_back(available_rack_ids.get_name_leafdata());
    if (rack_id_separator.is_set || is_set(rack_id_separator.yfilter)) leaf_name_data.push_back(rack_id_separator.get_name_leafdata());
    if (available_fm_loc.is_set || is_set(available_fm_loc.yfilter)) leaf_name_data.push_back(available_fm_loc.get_name_leafdata());
    if (fm_loc_separator.is_set || is_set(fm_loc_separator.yfilter)) leaf_name_data.push_back(fm_loc_separator.get_name_leafdata());
    if (rack_total.is_set || is_set(rack_total.yfilter)) leaf_name_data.push_back(rack_total.get_name_leafdata());
    if (rack_lcc.is_set || is_set(rack_lcc.yfilter)) leaf_name_data.push_back(rack_lcc.get_name_leafdata());
    if (rack_fcc.is_set || is_set(rack_fcc.yfilter)) leaf_name_data.push_back(rack_fcc.get_name_leafdata());
    if (plane_up.is_set || is_set(plane_up.yfilter)) leaf_name_data.push_back(plane_up.get_name_leafdata());
    if (plane_dn.is_set || is_set(plane_dn.yfilter)) leaf_name_data.push_back(plane_dn.get_name_leafdata());
    if (plane_mcast_dn.is_set || is_set(plane_mcast_dn.yfilter)) leaf_name_data.push_back(plane_mcast_dn.get_name_leafdata());
    if (plane_admin_dn.is_set || is_set(plane_admin_dn.yfilter)) leaf_name_data.push_back(plane_admin_dn.get_name_leafdata());
    if (show_sys_plane_detail.is_set || is_set(show_sys_plane_detail.yfilter)) leaf_name_data.push_back(show_sys_plane_detail.get_name_leafdata());
    if (sfe_asics_total.is_set || is_set(sfe_asics_total.yfilter)) leaf_name_data.push_back(sfe_asics_total.get_name_leafdata());
    if (sfe_asics_up.is_set || is_set(sfe_asics_up.yfilter)) leaf_name_data.push_back(sfe_asics_up.get_name_leafdata());
    if (sfe_asics_dn.is_set || is_set(sfe_asics_dn.yfilter)) leaf_name_data.push_back(sfe_asics_dn.get_name_leafdata());
    if (fia_asics_total.is_set || is_set(fia_asics_total.yfilter)) leaf_name_data.push_back(fia_asics_total.get_name_leafdata());
    if (fia_asics_up.is_set || is_set(fia_asics_up.yfilter)) leaf_name_data.push_back(fia_asics_up.get_name_leafdata());
    if (fia_asics_dn.is_set || is_set(fia_asics_dn.yfilter)) leaf_name_data.push_back(fia_asics_dn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sys_plane_info_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList>();
        ent_->parent = this;
        sys_plane_info_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rack_info_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::RackInfoList>();
        ent_->parent = this;
        rack_info_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "fsdb_status")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::FsdbStatus>();
        ent_->parent = this;
        fsdb_status.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sfe_status")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FabHealth::SysInfoList::SfeStatus>();
        ent_->parent = this;
        sfe_status.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sys_plane_info_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rack_info_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : fsdb_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sfe_status.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index_key")
    {
        index_key = value;
        index_key.value_namespace = name_space;
        index_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr_status")
    {
        aggr_status = value;
        aggr_status.value_namespace = name_space;
        aggr_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available_rack_ids")
    {
        available_rack_ids = value;
        available_rack_ids.value_namespace = name_space;
        available_rack_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_id_separator")
    {
        rack_id_separator = value;
        rack_id_separator.value_namespace = name_space;
        rack_id_separator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available_fm_loc")
    {
        available_fm_loc = value;
        available_fm_loc.value_namespace = name_space;
        available_fm_loc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fm_loc_separator")
    {
        fm_loc_separator = value;
        fm_loc_separator.value_namespace = name_space;
        fm_loc_separator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_total")
    {
        rack_total = value;
        rack_total.value_namespace = name_space;
        rack_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_lcc")
    {
        rack_lcc = value;
        rack_lcc.value_namespace = name_space;
        rack_lcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_fcc")
    {
        rack_fcc = value;
        rack_fcc.value_namespace = name_space;
        rack_fcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_up")
    {
        plane_up = value;
        plane_up.value_namespace = name_space;
        plane_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_dn")
    {
        plane_dn = value;
        plane_dn.value_namespace = name_space;
        plane_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mcast_dn")
    {
        plane_mcast_dn = value;
        plane_mcast_dn.value_namespace = name_space;
        plane_mcast_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_admin_dn")
    {
        plane_admin_dn = value;
        plane_admin_dn.value_namespace = name_space;
        plane_admin_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_sys_plane_detail")
    {
        show_sys_plane_detail = value;
        show_sys_plane_detail.value_namespace = name_space;
        show_sys_plane_detail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_total")
    {
        sfe_asics_total = value;
        sfe_asics_total.value_namespace = name_space;
        sfe_asics_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_up")
    {
        sfe_asics_up = value;
        sfe_asics_up.value_namespace = name_space;
        sfe_asics_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_asics_dn")
    {
        sfe_asics_dn = value;
        sfe_asics_dn.value_namespace = name_space;
        sfe_asics_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_total")
    {
        fia_asics_total = value;
        fia_asics_total.value_namespace = name_space;
        fia_asics_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_up")
    {
        fia_asics_up = value;
        fia_asics_up.value_namespace = name_space;
        fia_asics_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fia_asics_dn")
    {
        fia_asics_dn = value;
        fia_asics_dn.value_namespace = name_space;
        fia_asics_dn.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index_key")
    {
        index_key.yfilter = yfilter;
    }
    if(value_path == "aggr_status")
    {
        aggr_status.yfilter = yfilter;
    }
    if(value_path == "available_rack_ids")
    {
        available_rack_ids.yfilter = yfilter;
    }
    if(value_path == "rack_id_separator")
    {
        rack_id_separator.yfilter = yfilter;
    }
    if(value_path == "available_fm_loc")
    {
        available_fm_loc.yfilter = yfilter;
    }
    if(value_path == "fm_loc_separator")
    {
        fm_loc_separator.yfilter = yfilter;
    }
    if(value_path == "rack_total")
    {
        rack_total.yfilter = yfilter;
    }
    if(value_path == "rack_lcc")
    {
        rack_lcc.yfilter = yfilter;
    }
    if(value_path == "rack_fcc")
    {
        rack_fcc.yfilter = yfilter;
    }
    if(value_path == "plane_up")
    {
        plane_up.yfilter = yfilter;
    }
    if(value_path == "plane_dn")
    {
        plane_dn.yfilter = yfilter;
    }
    if(value_path == "plane_mcast_dn")
    {
        plane_mcast_dn.yfilter = yfilter;
    }
    if(value_path == "plane_admin_dn")
    {
        plane_admin_dn.yfilter = yfilter;
    }
    if(value_path == "show_sys_plane_detail")
    {
        show_sys_plane_detail.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_total")
    {
        sfe_asics_total.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_up")
    {
        sfe_asics_up.yfilter = yfilter;
    }
    if(value_path == "sfe_asics_dn")
    {
        sfe_asics_dn.yfilter = yfilter;
    }
    if(value_path == "fia_asics_total")
    {
        fia_asics_total.yfilter = yfilter;
    }
    if(value_path == "fia_asics_up")
    {
        fia_asics_up.yfilter = yfilter;
    }
    if(value_path == "fia_asics_dn")
    {
        fia_asics_dn.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sys_plane_info_list" || name == "rack_info_list" || name == "fsdb_status" || name == "sfe_status" || name == "index_key" || name == "aggr_status" || name == "available_rack_ids" || name == "rack_id_separator" || name == "available_fm_loc" || name == "fm_loc_separator" || name == "rack_total" || name == "rack_lcc" || name == "rack_fcc" || name == "plane_up" || name == "plane_dn" || name == "plane_mcast_dn" || name == "plane_admin_dn" || name == "show_sys_plane_detail" || name == "sfe_asics_total" || name == "sfe_asics_up" || name == "sfe_asics_dn" || name == "fia_asics_total" || name == "fia_asics_up" || name == "fia_asics_dn")
        return true;
    return false;
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::SysPlaneInfoList()
    :
    plane_id{YType::int32, "plane_id"},
    admin_state{YType::str, "admin-state"},
    plane_state{YType::str, "plane_state"},
    plane_mode{YType::str, "plane_mode"},
    racks_w_plane_fault{YType::int32, "racks_w_plane_fault"},
    is_data_drop{YType::boolean, "is_data_drop"}
{

    yang_name = "sys_plane_info_list"; yang_parent_name = "sys_info_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::~SysPlaneInfoList()
{
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::has_data() const
{
    if (is_presence_container) return true;
    return plane_id.is_set
	|| admin_state.is_set
	|| plane_state.is_set
	|| plane_mode.is_set
	|| racks_w_plane_fault.is_set
	|| is_data_drop.is_set;
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plane_id.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(plane_state.yfilter)
	|| ydk::is_set(plane_mode.yfilter)
	|| ydk::is_set(racks_w_plane_fault.yfilter)
	|| ydk::is_set(is_data_drop.yfilter);
}

std::string Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sys_plane_info_list";
    ADD_KEY_TOKEN(plane_id, "plane_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_id.is_set || is_set(plane_id.yfilter)) leaf_name_data.push_back(plane_id.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (plane_state.is_set || is_set(plane_state.yfilter)) leaf_name_data.push_back(plane_state.get_name_leafdata());
    if (plane_mode.is_set || is_set(plane_mode.yfilter)) leaf_name_data.push_back(plane_mode.get_name_leafdata());
    if (racks_w_plane_fault.is_set || is_set(racks_w_plane_fault.yfilter)) leaf_name_data.push_back(racks_w_plane_fault.get_name_leafdata());
    if (is_data_drop.is_set || is_set(is_data_drop.yfilter)) leaf_name_data.push_back(is_data_drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane_id")
    {
        plane_id = value;
        plane_id.value_namespace = name_space;
        plane_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_state")
    {
        plane_state = value;
        plane_state.value_namespace = name_space;
        plane_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_mode")
    {
        plane_mode = value;
        plane_mode.value_namespace = name_space;
        plane_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "racks_w_plane_fault")
    {
        racks_w_plane_fault = value;
        racks_w_plane_fault.value_namespace = name_space;
        racks_w_plane_fault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_data_drop")
    {
        is_data_drop = value;
        is_data_drop.value_namespace = name_space;
        is_data_drop.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane_id")
    {
        plane_id.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "plane_state")
    {
        plane_state.yfilter = yfilter;
    }
    if(value_path == "plane_mode")
    {
        plane_mode.yfilter = yfilter;
    }
    if(value_path == "racks_w_plane_fault")
    {
        racks_w_plane_fault.yfilter = yfilter;
    }
    if(value_path == "is_data_drop")
    {
        is_data_drop.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FabHealth::SysInfoList::SysPlaneInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane_id" || name == "admin-state" || name == "plane_state" || name == "plane_mode" || name == "racks_w_plane_fault" || name == "is_data_drop")
        return true;
    return false;
}


}
}

